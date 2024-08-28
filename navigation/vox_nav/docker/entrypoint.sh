#!/bin/bash

set -e

export ROS2_INSTALL_PATH="/opt/ros/humble"
export ROS_NAMESPACE="leo05"
export ROS_DOMAIN_ID=0

# Configure RMW
export RWM_IMPLEMENTATION=rwm_fastrtps_cpp
export FASTRTPS_DEFAULT_PROFILES_FILE=/root/config/fastrtps-profile.xml


# setup ros2 environment
cd /root/ros2_ws
source "${ROS2_INSTALL_PATH}/setup.bash"
rosdep update
rosdep install -y -r -q --from-paths src --ignore-src --rosdistro humble --skip-keys="cartographer-ros cartographer_ros"
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release -DACADOS_WITH_QPOASES=ON -DACADO_CODE_IS_READY=ON -DWITH_IPOPT=true --packages-select ompl casadi

sudo cp install/ompl/lib/libompl.so* /usr/local/lib/
sudo cp install/casadi/lib/libcasadi.so* /usr/local/lib/ 
source "/root/ros2_ws/install/setup.bash"

colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release -DACADOS_WITH_QPOASES=ON -DACADO_CODE_IS_READY=ON -DWITH_IPOPT=true --packages-skip-regex archive --packages-skip vox_nav_control vox_nav_misc
source "${ROS2_INSTALL_PATH}/setup.bash"


cd /root/ros2_ws
source build/ACADO/acado_env.sh
source install/setup.bash 
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release -DACADOS_WITH_QPOASES=ON -DACADO_CODE_IS_READY=ON -DWITH_IPOPT=true --packages-select vox_nav_control


#colcon build --symlink-install
source "/root/ros2_ws/install/setup.bash"

exec "$@"
