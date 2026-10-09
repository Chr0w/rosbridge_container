// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_nav_interface:msg/LaserCloud.idl
// generated code does not contain a copyright notice
#include "mir_nav_interface/msg/detail/laser_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cloud_data`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `odom_to_base`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
mir_nav_interface__msg__LaserCloud__init(mir_nav_interface__msg__LaserCloud * msg)
{
  if (!msg) {
    return false;
  }
  // cloud_data
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_data)) {
    mir_nav_interface__msg__LaserCloud__fini(msg);
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    mir_nav_interface__msg__LaserCloud__fini(msg);
    return false;
  }
  // odom_to_base
  if (!geometry_msgs__msg__Transform__init(&msg->odom_to_base)) {
    mir_nav_interface__msg__LaserCloud__fini(msg);
    return false;
  }
  // scanner
  return true;
}

void
mir_nav_interface__msg__LaserCloud__fini(mir_nav_interface__msg__LaserCloud * msg)
{
  if (!msg) {
    return;
  }
  // cloud_data
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_data);
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
  // odom_to_base
  geometry_msgs__msg__Transform__fini(&msg->odom_to_base);
  // scanner
}

bool
mir_nav_interface__msg__LaserCloud__are_equal(const mir_nav_interface__msg__LaserCloud * lhs, const mir_nav_interface__msg__LaserCloud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cloud_data
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_data), &(rhs->cloud_data)))
  {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->origin), &(rhs->origin)))
  {
    return false;
  }
  // odom_to_base
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->odom_to_base), &(rhs->odom_to_base)))
  {
    return false;
  }
  // scanner
  if (lhs->scanner != rhs->scanner) {
    return false;
  }
  return true;
}

bool
mir_nav_interface__msg__LaserCloud__copy(
  const mir_nav_interface__msg__LaserCloud * input,
  mir_nav_interface__msg__LaserCloud * output)
{
  if (!input || !output) {
    return false;
  }
  // cloud_data
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_data), &(output->cloud_data)))
  {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__copy(
      &(input->origin), &(output->origin)))
  {
    return false;
  }
  // odom_to_base
  if (!geometry_msgs__msg__Transform__copy(
      &(input->odom_to_base), &(output->odom_to_base)))
  {
    return false;
  }
  // scanner
  output->scanner = input->scanner;
  return true;
}

mir_nav_interface__msg__LaserCloud *
mir_nav_interface__msg__LaserCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_nav_interface__msg__LaserCloud * msg = (mir_nav_interface__msg__LaserCloud *)allocator.allocate(sizeof(mir_nav_interface__msg__LaserCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_nav_interface__msg__LaserCloud));
  bool success = mir_nav_interface__msg__LaserCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_nav_interface__msg__LaserCloud__destroy(mir_nav_interface__msg__LaserCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_nav_interface__msg__LaserCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_nav_interface__msg__LaserCloud__Sequence__init(mir_nav_interface__msg__LaserCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_nav_interface__msg__LaserCloud * data = NULL;

  if (size) {
    data = (mir_nav_interface__msg__LaserCloud *)allocator.zero_allocate(size, sizeof(mir_nav_interface__msg__LaserCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_nav_interface__msg__LaserCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_nav_interface__msg__LaserCloud__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mir_nav_interface__msg__LaserCloud__Sequence__fini(mir_nav_interface__msg__LaserCloud__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mir_nav_interface__msg__LaserCloud__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mir_nav_interface__msg__LaserCloud__Sequence *
mir_nav_interface__msg__LaserCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_nav_interface__msg__LaserCloud__Sequence * array = (mir_nav_interface__msg__LaserCloud__Sequence *)allocator.allocate(sizeof(mir_nav_interface__msg__LaserCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_nav_interface__msg__LaserCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_nav_interface__msg__LaserCloud__Sequence__destroy(mir_nav_interface__msg__LaserCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_nav_interface__msg__LaserCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_nav_interface__msg__LaserCloud__Sequence__are_equal(const mir_nav_interface__msg__LaserCloud__Sequence * lhs, const mir_nav_interface__msg__LaserCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_nav_interface__msg__LaserCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_nav_interface__msg__LaserCloud__Sequence__copy(
  const mir_nav_interface__msg__LaserCloud__Sequence * input,
  mir_nav_interface__msg__LaserCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_nav_interface__msg__LaserCloud);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_nav_interface__msg__LaserCloud * data =
      (mir_nav_interface__msg__LaserCloud *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_nav_interface__msg__LaserCloud__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_nav_interface__msg__LaserCloud__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_nav_interface__msg__LaserCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
