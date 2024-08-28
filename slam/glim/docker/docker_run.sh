#!/bin/bash
xhost +
LEOROVER='leo05'

# Note: replace --restart=always to --rm for testing
docker run -it \
    --rm \
    --network=host \
    --ipc=host \
    --pid=host \
    --privileged \
    --env UID=$(id -u) \
    --env GID=$(id -g) \
    --gpus all \
    -e=DISPLAY \
    --env ROS_NAMESPACE=${ROS_NAMESPACE} \
    --env ROS_DOMAIN_ID=${ROS_DOMAIN_ID} \
    --volume="${PWD}/../config:/root/config" \
    --name glim \
    local/glim:humble_cuda \
    ros2 run glim_ros glim_rosnode --ros-args -p config_path:=/root/config
