# Use the official ROS2 image as the base image
FROM koide3/glim_ros2:humble_cuda12.2
LABEL maintainer="Gabriel Garcia <gabriel.garcia@uni.lu>"


# Install ROS2 packages
RUN apt update && \
apt install -y \
ros-dev-tools \
python3-colcon-common-extensions && \
rm -rf /var/lib/apt/lists/*
# last line to remove unecessary stuff
# and reduce image size

# Set up entrypoint to source ROS2 setup files
COPY entrypoint.sh /
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]

# Set the default command to run when the container starts
CMD ["bash"]
