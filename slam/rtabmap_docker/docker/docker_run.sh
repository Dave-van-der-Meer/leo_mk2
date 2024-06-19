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
    --env UID=$(id -u) \
    --env GID=$(id -g) \
    --env ROS_NAMESPACE=${ROS_NAMESPACE} \
    --env ROS_DOMAIN_ID=${ROS_DOMAIN_ID} \
    --volume="${PWD}/../ros2_ws/src/rtabmap_livox:/root/ros2_ws/src/rtabmap_livox" \
    --name rtabmap \
    local/rtabmap:humble \
    ros2 launch rtabmap_livox rtabmap_livox.launch.py
