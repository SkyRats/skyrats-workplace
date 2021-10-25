echo "$0: Installing mavros"
MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`

sudo apt-get -y install python3-future python3-lxml
sudo apt-get -y install ros-noetic-mavros ros-noetic-mavlink ros-noetic-libmavconn ros-noetic-mavros-extras
sudo bash $MY_PATH/../ros_packages/mavros/mavros/scripts/install_geographiclib_datasets.sh
sudo bash $MY_PATH/../ros_packages/mavros/mavros/scripts/install_geographiclib_datasets.sh
sudo bash $MY_PATH/../ros_packages/mavros/mavros/scripts/install_geographiclib_datasets.sh