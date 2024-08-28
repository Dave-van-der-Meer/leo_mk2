#!/bin/bash

set -e

export ROS2_INSTALL_PATH="/opt/ros/humble"
export ROS_NAMESPACE=${ROS_NAMESPACE}
export ROS_DOMAIN_ID=${ROS_DOMAIN_ID}



# Configure DDS
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
export FASTRTPS_DEFAULT_PROFILES_FILE=/home/leo/config/fastrtps-profile.xml


# setup sdk
cd /root/Livox-SDK2/
cd build
cmake .. && make -j
sudo make install


# setup ros2 environment
cd /root/ros2_ws/src/livox_ros_driver2
source "${ROS2_INSTALL_PATH}/setup.bash"
bash build.sh humble
source "/root/ros2_ws/install/setup.bash"
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/usr/local/lib

exec "$@"
