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
    --name vox_nav \
    local/vox_nav:humble \
    ros2 launch vox_nav_bringup vox_nav_core_nodes.launch.py
