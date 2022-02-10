echo "$0: installing general dependencies"

## Generic tools
sudo apt-get -y install \
  #libeigen3-dev\ (deve estar em ros-galactic-eigen3-cmake-module)
  libopencv-dev\
  #libgeographic-dev\ (mavros)
  #geographiclib-tools\ (mavros)
  cmake\

## Phyton3 packages
sudo apt-get -y install \
  python3-setuptools\
  #python3-catkin-tools\
  python3-pip\
  #python3-future\ (mavlink)
  #python3-crcmod\ 
  #python3-lxml\ (mavlink)

## Perguntar para a gabs:
sudo apt install ros-galactic-eigen3-cmake-module
sudo pip3 install -U empy pyros-genmsg setuptools



