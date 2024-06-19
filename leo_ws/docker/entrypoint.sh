#!/bin/bash

set -e

export ROS2_INSTALL_PATH="/opt/ros/humble"
export ROS_NAMESPACE=${ROS_NAMESPACE}
export ROS_DOMAIN_ID=${ROS_DOMAIN_ID}



# Configure DDS
export RWM_IMPLEMENTATION=rwm_fastrtps_cpp
export FASTRTPS_DEFAULT_PROFILES_FILE=/home/leo/config/fastrtps-profile.xml


# ROS2 environment
source "${ROS2_INSTALL_PATH}/setup.bash"


exec "$@"
