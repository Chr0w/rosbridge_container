// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_nav_interface:msg/LaserCloud.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__STRUCT_H_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BACK_SCANNER'.
enum
{
  mir_nav_interface__msg__LaserCloud__BACK_SCANNER = 1
};

/// Constant 'FRONT_SCANNER'.
enum
{
  mir_nav_interface__msg__LaserCloud__FRONT_SCANNER = 2
};

/// Constant 'RIGHT_SCANNER'.
enum
{
  mir_nav_interface__msg__LaserCloud__RIGHT_SCANNER = 3
};

// Include directives for member types
// Member 'cloud_data'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'odom_to_base'
#include "geometry_msgs/msg/detail/transform__struct.h"

/// Struct defined in msg/LaserCloud in the package mir_nav_interface.
/**
  * scanner
 */
typedef struct mir_nav_interface__msg__LaserCloud
{
  sensor_msgs__msg__PointCloud2 cloud_data;
  geometry_msgs__msg__Pose origin;
  geometry_msgs__msg__Transform odom_to_base;
  uint8_t scanner;
} mir_nav_interface__msg__LaserCloud;

// Struct for a sequence of mir_nav_interface__msg__LaserCloud.
typedef struct mir_nav_interface__msg__LaserCloud__Sequence
{
  mir_nav_interface__msg__LaserCloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_nav_interface__msg__LaserCloud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__STRUCT_H_
