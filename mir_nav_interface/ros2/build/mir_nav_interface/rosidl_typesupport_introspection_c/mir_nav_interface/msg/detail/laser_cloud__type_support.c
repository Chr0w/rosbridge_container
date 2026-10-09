// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_nav_interface:msg/LaserCloud.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_nav_interface/msg/detail/laser_cloud__rosidl_typesupport_introspection_c.h"
#include "mir_nav_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_nav_interface/msg/detail/laser_cloud__functions.h"
#include "mir_nav_interface/msg/detail/laser_cloud__struct.h"


// Include directives for member types
// Member `cloud_data`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `cloud_data`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `origin`
#include "geometry_msgs/msg/pose.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `odom_to_base`
#include "geometry_msgs/msg/transform.h"
// Member `odom_to_base`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_nav_interface__msg__LaserCloud__init(message_memory);
}

void mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_fini_function(void * message_memory)
{
  mir_nav_interface__msg__LaserCloud__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_member_array[4] = {
  {
    "cloud_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_nav_interface__msg__LaserCloud, cloud_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_nav_interface__msg__LaserCloud, origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom_to_base",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_nav_interface__msg__LaserCloud, odom_to_base),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_nav_interface__msg__LaserCloud, scanner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_members = {
  "mir_nav_interface__msg",  // message namespace
  "LaserCloud",  // message name
  4,  // number of fields
  sizeof(mir_nav_interface__msg__LaserCloud),
  mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_member_array,  // message members
  mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_type_support_handle = {
  0,
  &mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_nav_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_nav_interface, msg, LaserCloud)() {
  mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_type_support_handle.typesupport_identifier) {
    mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_nav_interface__msg__LaserCloud__rosidl_typesupport_introspection_c__LaserCloud_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
