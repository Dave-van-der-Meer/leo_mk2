# Use the official ROS2 image as the base image
FROM ros:humble-ros-base
LABEL maintainer="Gabriel Garcia <gabriel.garcia@uni.lu>"


## Use bash by default
SHELL ["/bin/bash", "-c"]


## Set non interactive installation
ARG DEBIAN_FRONTEND=noninteractive

# Install ROS2 packages
RUN apt update && \
apt install -y \
ros-${ROS_DISTRO}-leo \
python3-colcon-common-extensions \
ros-${ROS_DISTRO}-rmw-cyclonedds-cpp && \
rm -rf /var/lib/apt/lists/*
# last line to remove unecessary stuff
# and reduce image size


## Copy over config file and launch script
## Copy ./config ${WS_DIR}/config
RUN mkdir /home/leo/
COPY ./config /home/leo/config


# Set up entrypoint to source ROS2 setup files
COPY entrypoint.sh /
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]

WORKDIR /home/leo

# Set the default command to run when the container starts
CMD ["bash"]
