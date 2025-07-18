# Use the official ROS2 image as the base image
FROM ros:humble-ros-base
LABEL maintainer="Gabriel Garcia <gabriel.garcia@uni.lu>"


# Install ROS2 packages
RUN apt update && \
    apt install -y \
    ros-dev-tools \
    libpcl-dev \
    ros-${ROS_DISTRO}-pcl-ros \
    ros-${ROS_DISTRO}-rviz2 \
    python3-colcon-common-extensions && \
    rm -rf /var/lib/apt/lists/*
# last line to remove unecessary stuff
# and reduce image size

# Build Livox SDK inside the image
WORKDIR /root
COPY ./dependencies/Livox-SDK2/ /root/Livox-SDK2/
WORKDIR /root/Livox-SDK2/build
RUN cmake .. && make -j && make install

# Build livox ros driver
WORKDIR /root
COPY ./dependencies/driver/ /root/driver/
WORKDIR /root/driver/src/livox_ros_driver2/
RUN /bin/bash -c "source /opt/ros/humble/setup.bash; bash build.sh humble"

# Set up entrypoint to source ROS2 setup files
COPY entrypoint.sh /
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]

RUN mkdir -p /root/ros2_ws/src
RUN mkdir -p /root/driver/src

# Set the default command to run when the container starts
CMD ["bash"]
