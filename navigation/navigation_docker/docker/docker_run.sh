#!/bin/bash
#xhost +local:docker
LEOROVER='leo05'

# Note: replace --restart=always to --rm for testing
docker run -it \
    --restart=always \
    --network=host \
    --ipc=host \
    --pid=host \
    --privileged \
    --memory="1024m"\
    --env UID=$(id -u) \
    --env GID=$(id -g) \
    --env ROS_NAMESPACE=${ROS_NAMESPACE} \
    --env ROS_DOMAIN_ID=${ROS_DOMAIN_ID} \
    --volume="${PWD}/../ros2_ws/src/:/root/ros2_ws/src" \
    --volume="${PWD}/../config:/root/config" \
    --name nav2 \
    local/nav2:iron \
    ros2 launch nav2_bringup navigation_launch.py use_sim_time:=true params_file:=/root/config/nav2_config.yaml
#     ros2 launch nav2_launcher nav2_launcher_launch.py use_sim_time:=false params_file:=/root/config/nav2_config.yaml

