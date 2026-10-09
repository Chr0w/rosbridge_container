#!/bin/bash
# Run or restart the ROS1–ROS2 bridge container with a given robot IP

# --- Check if an argument was provided ---
if [ -z "$1" ]; then
  echo "Usage: $0 <ROBOT_IP>"
  exit 1
fi

ROBOT_IP=$1
ROS_MASTER_URI="http://$ROBOT_IP:11311"

echo "Starting rosbridge with ROS_MASTER_URI=$ROS_MASTER_URI"

# --- Remove old container (quietly) ---
docker rm -f rosbridge 2>/dev/null

# --- Start new container ---  
docker run -it --rm \
  -e ROS_MASTER_URI=$ROS_MASTER_URI \
  --net=host \
  -v ~/rosbridge_container:/root/ros-humble-ros1-bridge \
  --name rosbridge \
  --entrypoint /bin/bash \
  chrow/rosbridge:latest \
  -ic "source /root/ros-humble-ros1-bridge/mir_nav_interface/ros1/install/setup.bash && source /root/ros-humble-ros1-bridge/mir_nav_interface/ros2/install/setup.bash && source /root/ros-humble-ros1-bridge/install/local_setup.bash && ros2 run ros1_bridge dynamic_bridge --bridge-all-1to2-topics --bridge-all-2to1-topics"

