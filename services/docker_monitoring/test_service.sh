DATE=`date '+%Y-%m-%d %H:%M:%S'`
echo "Example service started at ${DATE}" | systemd-cat -p info

docker run hello-world

while :
do
echo "Looping...";
sleep 30;
done
