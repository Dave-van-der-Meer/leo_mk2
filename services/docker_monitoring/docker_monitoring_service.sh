#!/bin/bash


pip install docker
source /opt/ros/humble/setup.bash
source /home/spacer/leo_ws/install/setup.bash
exec ros2 launch docker_stats docker_stats.launch.py


