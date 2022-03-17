# Skyrats workplace
Skyrats autonomous drone team developmet environment for quadcopters in real life and simulations using ros noetic (the final ros1 distro)

## How to install?
To install in a fresh ubuntu follow these steps:
```bash
mkdir -p skyrats_ws/src

cd skyrats_ws/src

sudo apt-get install git
```
At this point you might want to configure your git ssh key before proceeding
```bash
git clone git@github.com:SkyRats/skyrats-workplace.git -b ros1

cd skyrats-workplace/installers

bash skyrats.sh
```
The skyrats.sh bash script will install everything you need to start your autonomous drone software development adventure, it should take a while though...

Congrats! At this point you should have ros noetic, mavlink, mavros, the px4 firmware and QGroundControl sucessfully installed!

We will now run your first quadcopter simulation, for that we must compile the px4 firmware and make it work with gazebo, so type the following:

```bash
cd ~/skyrats_ws/src/skyrats-workplace/ros_packages

sudo chmod 777 px4_firmware -R

cd px4_firmware

make px4_sitl gazebo
```
If everything went right, you should be seeing and IRIS drone in an empty simulation enviroment, to see it flying type the following **in the same terminal you ran the make command**:

```bash
commander takeoff
```

Now, we need to make this simulation work with ROS (so that we can send complex commands to the drone, not just takeoff) and we will do that with the **mavros** package, for it to work we need to finally setup your ros workspace and build it.

To do so, try the following: (if your pc isn't great put a -j2 flag in the build command or it might crash)
```bash
cd ~/skyrats_ws
catkin init
catkin config
catkin build
source devel/setup.bash
```
And that should be it! if something went wrong be sure to source and build once again (just to be sure, it is weird sometimes), if the problem persists, be sure to check the **issues** tab for insight

## Using this workplace
To run a simulation simply run:
```bash
roslaunch px4 mavros_posix_sitl.launch
```
For real drones open QGroundControl.AppImage (with double click) to check the mavlink connection, and then go for this command when you want ROS to start working:
```bash
roslaunch mavros px4.launch
```
