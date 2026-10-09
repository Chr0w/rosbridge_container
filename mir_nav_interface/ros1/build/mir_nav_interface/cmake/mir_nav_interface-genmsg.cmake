# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "mir_nav_interface: 2 messages, 0 services")

set(MSG_I_FLAGS "-Imir_nav_interface:/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg;-Igeometry_msgs:/usr/share/geometry_msgs/cmake/../msg;-Isensor_msgs:/usr/share/sensor_msgs/cmake/../msg;-Istd_msgs:/usr/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(mir_nav_interface_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg" NAME_WE)
add_custom_target(_mir_nav_interface_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mir_nav_interface" "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg" "geometry_msgs/Pose:geometry_msgs/Point:sensor_msgs/PointField:sensor_msgs/PointCloud2:std_msgs/Header:geometry_msgs/Vector3:geometry_msgs/Quaternion:geometry_msgs/Transform"
)

get_filename_component(_filename "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloudList.msg" NAME_WE)
add_custom_target(_mir_nav_interface_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mir_nav_interface" "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloudList.msg" "geometry_msgs/Pose:geometry_msgs/Point:sensor_msgs/PointField:sensor_msgs/PointCloud2:mir_nav_interface/LaserCloud:std_msgs/Header:geometry_msgs/Vector3:geometry_msgs/Quaternion:geometry_msgs/Transform"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(mir_nav_interface
  "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg"
  "${MSG_I_FLAGS}"
  "/usr/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/share/geometry_msgs/cmake/../msg/Point.msg;/usr/share/sensor_msgs/cmake/../msg/PointField.msg;/usr/share/sensor_msgs/cmake/../msg/PointCloud2.msg;/usr/share/std_msgs/cmake/../msg/Header.msg;/usr/share/geometry_msgs/cmake/../msg/Vector3.msg;/usr/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/share/geometry_msgs/cmake/../msg/Transform.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mir_nav_interface
)
_generate_msg_cpp(mir_nav_interface
  "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloudList.msg"
  "${MSG_I_FLAGS}"
  "/usr/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/share/geometry_msgs/cmake/../msg/Point.msg;/usr/share/sensor_msgs/cmake/../msg/PointField.msg;/usr/share/sensor_msgs/cmake/../msg/PointCloud2.msg;/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg;/usr/share/std_msgs/cmake/../msg/Header.msg;/usr/share/geometry_msgs/cmake/../msg/Vector3.msg;/usr/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/share/geometry_msgs/cmake/../msg/Transform.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mir_nav_interface
)

### Generating Services

### Generating Module File
_generate_module_cpp(mir_nav_interface
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mir_nav_interface
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(mir_nav_interface_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(mir_nav_interface_generate_messages mir_nav_interface_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg" NAME_WE)
add_dependencies(mir_nav_interface_generate_messages_cpp _mir_nav_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloudList.msg" NAME_WE)
add_dependencies(mir_nav_interface_generate_messages_cpp _mir_nav_interface_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mir_nav_interface_gencpp)
add_dependencies(mir_nav_interface_gencpp mir_nav_interface_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mir_nav_interface_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(mir_nav_interface
  "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg"
  "${MSG_I_FLAGS}"
  "/usr/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/share/geometry_msgs/cmake/../msg/Point.msg;/usr/share/sensor_msgs/cmake/../msg/PointField.msg;/usr/share/sensor_msgs/cmake/../msg/PointCloud2.msg;/usr/share/std_msgs/cmake/../msg/Header.msg;/usr/share/geometry_msgs/cmake/../msg/Vector3.msg;/usr/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/share/geometry_msgs/cmake/../msg/Transform.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mir_nav_interface
)
_generate_msg_lisp(mir_nav_interface
  "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloudList.msg"
  "${MSG_I_FLAGS}"
  "/usr/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/share/geometry_msgs/cmake/../msg/Point.msg;/usr/share/sensor_msgs/cmake/../msg/PointField.msg;/usr/share/sensor_msgs/cmake/../msg/PointCloud2.msg;/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg;/usr/share/std_msgs/cmake/../msg/Header.msg;/usr/share/geometry_msgs/cmake/../msg/Vector3.msg;/usr/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/share/geometry_msgs/cmake/../msg/Transform.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mir_nav_interface
)

### Generating Services

### Generating Module File
_generate_module_lisp(mir_nav_interface
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mir_nav_interface
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(mir_nav_interface_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(mir_nav_interface_generate_messages mir_nav_interface_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg" NAME_WE)
add_dependencies(mir_nav_interface_generate_messages_lisp _mir_nav_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloudList.msg" NAME_WE)
add_dependencies(mir_nav_interface_generate_messages_lisp _mir_nav_interface_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mir_nav_interface_genlisp)
add_dependencies(mir_nav_interface_genlisp mir_nav_interface_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mir_nav_interface_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(mir_nav_interface
  "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg"
  "${MSG_I_FLAGS}"
  "/usr/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/share/geometry_msgs/cmake/../msg/Point.msg;/usr/share/sensor_msgs/cmake/../msg/PointField.msg;/usr/share/sensor_msgs/cmake/../msg/PointCloud2.msg;/usr/share/std_msgs/cmake/../msg/Header.msg;/usr/share/geometry_msgs/cmake/../msg/Vector3.msg;/usr/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/share/geometry_msgs/cmake/../msg/Transform.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mir_nav_interface
)
_generate_msg_py(mir_nav_interface
  "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloudList.msg"
  "${MSG_I_FLAGS}"
  "/usr/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/share/geometry_msgs/cmake/../msg/Point.msg;/usr/share/sensor_msgs/cmake/../msg/PointField.msg;/usr/share/sensor_msgs/cmake/../msg/PointCloud2.msg;/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg;/usr/share/std_msgs/cmake/../msg/Header.msg;/usr/share/geometry_msgs/cmake/../msg/Vector3.msg;/usr/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/share/geometry_msgs/cmake/../msg/Transform.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mir_nav_interface
)

### Generating Services

### Generating Module File
_generate_module_py(mir_nav_interface
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mir_nav_interface
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(mir_nav_interface_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(mir_nav_interface_generate_messages mir_nav_interface_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloud.msg" NAME_WE)
add_dependencies(mir_nav_interface_generate_messages_py _mir_nav_interface_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/root/ros-humble-ros1-bridge/mir_nav_interface/ros1/src/mir_nav_interface/msg/LaserCloudList.msg" NAME_WE)
add_dependencies(mir_nav_interface_generate_messages_py _mir_nav_interface_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mir_nav_interface_genpy)
add_dependencies(mir_nav_interface_genpy mir_nav_interface_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mir_nav_interface_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mir_nav_interface)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mir_nav_interface
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(mir_nav_interface_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(mir_nav_interface_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(mir_nav_interface_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mir_nav_interface)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mir_nav_interface
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(mir_nav_interface_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(mir_nav_interface_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(mir_nav_interface_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mir_nav_interface)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mir_nav_interface\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mir_nav_interface
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(mir_nav_interface_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(mir_nav_interface_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(mir_nav_interface_generate_messages_py std_msgs_generate_messages_py)
endif()
