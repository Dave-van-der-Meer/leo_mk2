#!/bin/bash
#xhost +local:docker

#-e ROS_NAMESPACE=${ROS_NAMESPACE} \
#-e ROS_DOMAIN_ID=${ROS_DOMAIN_ID} \
#--network host \
# Note: replace --restart=always to --rm for testing
docker run -it \
    --restart=always \
    --ipc=host \
    --privileged \
    --network=host \
    --env ROS_NAMESPACE=${ROS_NAMESPACE} \
    --env ROS_DOMAIN_ID=${ROS_DOMAIN_ID} \
    --security-opt "seccomp=unconfined" \
    --volume="/etc/ros/urdf:/etc/ros/urdf" \
    --volume="/etc/localtime:/etc/localtime:ro" \
    --name leorover_descriptor \
    --volume="/dev/shm:/dev/shm" \
    local/leorover_descriptor:humble \
    ros2 launch leo_description state_publisher.launch.xml model:=/etc/ros/urdf/leo.urdf.xacro
