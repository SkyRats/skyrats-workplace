# Skyrats workplace
Skyrats autonomous drone team developmet environment for quadcopters in real life and simulations

## How to install?
To install in a fresh ubuntu follow these steps:
```bash
mkdir -p skyrats_ws/src

cd skyrats_ws/src

sudo apt-get install git
```
At this point you might want to configure your git ssh key before proceeding
```bash
git clone git@github.com:SkyRats/skyrats-workplace.git

cd skyrats-workplace/installers

bash skyrats.sh
```
The skyrats.sh bash script will install everything you need to start your autonomous drone software development adventure, it should take a while though...

When the script finishes feel free to **build your catkin workspace** and source it, be careful about it crashing your pc (run catkin build -j2 instead if you think it will)

## Using this workplace
To run a simulation simply run:
```bash
roslaunch px4 mavros_posix_sitl.launch
```
For real drones, go for:
```bash
roslaunch mavros px4.launch
```
