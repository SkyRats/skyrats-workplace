# Skyrats workplace
Skyrats autonomous drone team developmet environment for quadcopters in real life (no simulation support on this branch) using ros noetic (the final ros1 distro)

## How to install?
First of all, this branch is supposed to be cloned and installed **in the Single Board Computer (SBC)** that the drone is carrying, not your laptop.

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

Congrats! At this point the SBC should have ros noetic, mavlink and mavros sucessfully installed!

Now, we need to make mavlink work with ROS (so that we can send complex commands to the drone) and we will do that with the **mavros** package, for it to work we need to finally setup your ros workspace and build it. 

To do so, try the following: (a -j2 flag is highly recommended in the build command or it might crash the SBC entirely)
```bash
cd ~/skyrats_ws
catkin init
catkin config
catkin build
source devel/setup.bash
```
And that should be it! if something went wrong be sure to source and build again (just to be sure, it is weird sometimes), if the problem persists, be sure to check the **issues** tab for insight

## Using this workplace

For real drones, connect groundcontrol (usually a laptop via ssh) to the SBC and open QGroundControl.AppImage (you should install it on your laptop) to check the mavlink connection, and then go for this command when you want ROS to start working:
```bash
roslaunch mavros px4.launch
```
