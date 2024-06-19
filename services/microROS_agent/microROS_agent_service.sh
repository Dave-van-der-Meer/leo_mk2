DATE=`date '+%Y-%m-%d %H:%M:%S'`
echo "Service started at ${DATE}" | systemd-cat -p info

docker run -it --privileged -v /dev:/dev --net=host microros/micro-ros-agent:humble serial -D /dev/ttyTHS0 -b 460800
