// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mir_nav_interface:msg/LaserCloudList.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__STRUCT_H_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'clouds'
#include "mir_nav_interface/msg/detail/laser_cloud__struct.h"

/// Struct defined in msg/LaserCloudList in the package mir_nav_interface.
typedef struct mir_nav_interface__msg__LaserCloudList
{
  mir_nav_interface__msg__LaserCloud__Sequence clouds;
} mir_nav_interface__msg__LaserCloudList;

// Struct for a sequence of mir_nav_interface__msg__LaserCloudList.
typedef struct mir_nav_interface__msg__LaserCloudList__Sequence
{
  mir_nav_interface__msg__LaserCloudList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mir_nav_interface__msg__LaserCloudList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__STRUCT_H_
