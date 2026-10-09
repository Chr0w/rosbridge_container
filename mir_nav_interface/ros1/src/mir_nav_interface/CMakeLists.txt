cmake_minimum_required(VERSION 3.0.2)
project(mir_nav_interface)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  message_generation
  sensor_msgs
  std_msgs
)

add_message_files(DIRECTORY msg FILES
  LaserCloud.msg
  LaserCloudList.msg
)

generate_messages(DEPENDENCIES
  geometry_msgs
  sensor_msgs
  std_msgs
)

catkin_package(CATKIN_DEPENDS
  geometry_msgs
  message_runtime
  sensor_msgs
  std_msgs
)
