#!/bin/bash
xhost +local:
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
    --gpus all \
    --env="QT_X11_NO_MITSHM=1" \
    --volume="/etc/localtime:/etc/localtime:ro" \
    -v /dev/bus/usb:/dev/bus/usb \
    --device=/dev/dri \
    --group-add video \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    --env="DISPLAY=$DISPLAY" \
    --env ROS_NAMESPACE=${ROS_NAMESPACE} \
    --env ROS_DOMAIN_ID=${ROS_DOMAIN_ID} \
    --env LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/usr/local/lib \
    --volume="${PWD}/../config:/root/config" \
    --volume="${PWD}/../ros_ws/src/:/root/ros_ws/src/" \
    --volume="${PWD}/../driver/src/:/root/driver/src/" \
    --name fastlio2 \
    local/fastlio2:humble \
    ros2 launch fast_lio mapping.launch.py config_file:=/root/config/mid360.yaml
