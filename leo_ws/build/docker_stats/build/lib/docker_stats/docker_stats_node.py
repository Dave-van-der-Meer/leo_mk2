# ROS lib imports
import rclpy
from rclpy.node import Node

# Python imports
import docker

# ROS Interface imports
from docker_messages.msg import DockerStatistics
from docker_messages.msg import DockerStatisticsArray
from std_msgs.msg import Header

# Class that accesses Docker statistics (cpu,ram,...) and publishes into ROS2 topics
class DockerStatisticsHandler(Node):
    
    # Constructor
    def __init__(self, docker_stats_topic):
        super().__init__('Docker_Statistics_Handler')
        
        self.client = docker.DockerClient(base_url='unix:///var/run/docker.sock')

        self.timer = self.create_timer(1, self.timer_callback) # Publisher timer (frequency)
        
        # Publisher
        self.publisher = self.create_publisher(
            DockerStatisticsArray,
            docker_stats_topic,
            10
        )
    
    # Calculate CPU percentage for a docker container
    def calculate_cpu_percent(self,d):
        cpu_count = 1 # 1 if 1 cpu, but if multiple, then use: len(d["cpu_stats"]["cpu_usage"]["percpu_usage"])
        cpu_percent = 0
        cpu_delta = float(d["cpu_stats"]["cpu_usage"]["total_usage"]) - \
            float(d["precpu_stats"]["cpu_usage"]["total_usage"])
        system_delta = float(d["cpu_stats"]["system_cpu_usage"]) - \
            float(d["precpu_stats"]["system_cpu_usage"])
        
        if system_delta > 0.0:
            cpu_percent = cpu_delta / system_delta * 100.0 * cpu_count
        
        return cpu_percent
    
    # Calculate Memory percentage for a docker container
    def calculate_memory_percent(self,d):
        
        mem_usage = float(d["memory_stats"]["usage"])
        mem_limit = float(d["memory_stats"]["limit"])
        memory_percent = (mem_usage / mem_limit) * 100

        return memory_percent
    
    # Calculate the data read/write of the Docker container
    # Values are converted to KB
    def calculate_block_input_output(self,d):
        
        read_bytes = float() 
        write_bytes = float()
        
        block_io_stats = d["blkio_stats"]["io_service_bytes_recursive"]
        
        if (block_io_stats is not None):
            try:
                read_bytes = next(item["value"] for item in block_io_stats if item["op"] == "Read" or item["op"] == "read") 
                write_bytes = next(item["value"] for item in block_io_stats if item["op"] == "Write" or item["op"] == "write") 

            except StopIteration:
                print("Can't read Block I/O from docker container")
                pass

        return read_bytes / 1000000.0, write_bytes / 1000000.0
    
    # Calculate network I/O of a docker container
    # Values are converted to KB
    def calculate_network_input_output(self,d):
        
        net_i = float()
        net_o = float()
        

        try:
            net_io_stats = d["networks"]["eth0"] # Change second index value to the network of your choice

            if (net_io_stats is not None):
                net_i = float(net_io_stats["rx_bytes"]) / 1000.0 # Convert to KB
                net_o = float(net_io_stats["tx_bytes"]) / 1000.0 # Convert to KB
        except KeyError:    
            print("Unablet to find Network I/O from docker container")

        return net_i, net_o

    # Publishes statistics for each docker running on the system
    def timer_callback(self):
        msg = DockerStatisticsArray() # Define Docker Statistics Array
        
        # Iterate over all available and running dockers on the system
        for docker_container in self.client.containers.list():
            
            curr_container_stats = docker_container.stats(decode=None, stream=False)

            #print(docker_container.stats(decode=None, stream=False))

            # Save docker statistics in a separate docker message
            docker_stat_msg = DockerStatistics()
            docker_stat_msg.header = Header() # TO DO: add Header information
            docker_stat_msg.id = docker_container.id # str(docker_container.stats(decode=None, stream=False)["pids_stats"]["current"])
            docker_stat_msg.name = self.client.containers.get(docker_container.id).name
            docker_stat_msg.cpu = self.calculate_cpu_percent(curr_container_stats)
            docker_stat_msg.ram = self.calculate_memory_percent(curr_container_stats)
            docker_stat_msg.block_i, docker_stat_msg.block_o = self.calculate_block_input_output(curr_container_stats)
            docker_stat_msg.net_i, docker_stat_msg.net_o = self.calculate_network_input_output(curr_container_stats)

            # Add docker statistics message in Array containing all statistics for each docker container 
            msg.docker_statistics.append(docker_stat_msg)

        # Publish the docker statistics array
        self.publisher.publish(msg)

# Main entry point
def main(args=None):
    rclpy.init(args=args)

    docker_statistics_handler = DockerStatisticsHandler('resources/docker_statistics')

    rclpy.spin(docker_statistics_handler)

    docker_statistics_handler.destroy_node()
    
    rclpy.shutdown()