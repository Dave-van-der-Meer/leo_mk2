# Use the official ROS2 image as the base image
FROM ros:humble-ros-base
LABEL maintainer="Gabriel Garcia <gabriel.garcia@uni.lu>"


# Install ROS2 packages
RUN apt update && \
apt install -y \
ros-dev-tools \
python3-colcon-common-extensions \
ros-humble-desktop \
python3-vcstool \
xdotool \
coinor-libipopt-dev \
libfcl0.7 \
pkg-config \
libmosquitto* && \
rm -rf /var/lib/apt/lists/*
# last line to remove unecessary stuff
# and reduce image size

# Set up entrypoint to source ROS2 setup files
COPY entrypoint.sh /
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]

RUN mkdir -p /root/ros2_ws/src/

# Set the default command to run when the container starts
CMD ["bash"]
