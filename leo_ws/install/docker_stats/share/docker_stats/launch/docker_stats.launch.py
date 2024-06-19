from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='docker_stats',
            namespace='leo05',
            executable='docker_stats_node',
            name='docker_stats_node',
            output='screen'
        )
    ])
