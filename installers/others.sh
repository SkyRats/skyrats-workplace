echo "$0: installing general dependencies"

### Generic tools
#sudo apt-get -y install \
#  #libeigen3-dev\ (deve estar em ros-galactic-eigen3-cmake-module)
#  libopencv-dev\
#  #libgeographic-dev\ (mavros)
#  #geographiclib-tools\ (mavros)
#  cmake\
#
### Phyton3 packages
#sudo apt-get -y install \
#  python3-setuptools\
#  #python3-catkin-tools\
#  python3-pip\
#  #python3-future\ (mavlink)
#  #python3-crcmod\ 
#  #python3-lxml\ (mavlink)

## TODO:Perguntar para a gabs:
#sudo apt install ros-galactic-eigen3-cmake-module
#sudo pip3 install -U empy pyros-genmsg setuptools

## TODO: Open-cv?
sudo apt-get -y install libopencv-dev

## TODO: VS-code?
sudo add-apt-repository "deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main"
wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -
sudo apt-get update
sudo apt -y install code

## TODO: Chrome?
wget -q -O - https://dl.google.com/linux/linux_signing_key.pub | sudo apt-key add -
sudo sh -c 'echo "deb [arch=amd64] http://dl.google.com/linux/chrome/deb/ stable main" >> /etc/apt/sources.list.d/google-chrome.list'
sudo apt-get update
sudo apt install -y google-chrome-stable