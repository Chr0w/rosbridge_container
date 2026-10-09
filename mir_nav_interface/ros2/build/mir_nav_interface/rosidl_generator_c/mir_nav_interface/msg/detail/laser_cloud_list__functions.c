// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mir_nav_interface:msg/LaserCloudList.idl
// generated code does not contain a copyright notice
#include "mir_nav_interface/msg/detail/laser_cloud_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `clouds`
#include "mir_nav_interface/msg/detail/laser_cloud__functions.h"

bool
mir_nav_interface__msg__LaserCloudList__init(mir_nav_interface__msg__LaserCloudList * msg)
{
  if (!msg) {
    return false;
  }
  // clouds
  if (!mir_nav_interface__msg__LaserCloud__Sequence__init(&msg->clouds, 0)) {
    mir_nav_interface__msg__LaserCloudList__fini(msg);
    return false;
  }
  return true;
}

void
mir_nav_interface__msg__LaserCloudList__fini(mir_nav_interface__msg__LaserCloudList * msg)
{
  if (!msg) {
    return;
  }
  // clouds
  mir_nav_interface__msg__LaserCloud__Sequence__fini(&msg->clouds);
}

bool
mir_nav_interface__msg__LaserCloudList__are_equal(const mir_nav_interface__msg__LaserCloudList * lhs, const mir_nav_interface__msg__LaserCloudList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // clouds
  if (!mir_nav_interface__msg__LaserCloud__Sequence__are_equal(
      &(lhs->clouds), &(rhs->clouds)))
  {
    return false;
  }
  return true;
}

bool
mir_nav_interface__msg__LaserCloudList__copy(
  const mir_nav_interface__msg__LaserCloudList * input,
  mir_nav_interface__msg__LaserCloudList * output)
{
  if (!input || !output) {
    return false;
  }
  // clouds
  if (!mir_nav_interface__msg__LaserCloud__Sequence__copy(
      &(input->clouds), &(output->clouds)))
  {
    return false;
  }
  return true;
}

mir_nav_interface__msg__LaserCloudList *
mir_nav_interface__msg__LaserCloudList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_nav_interface__msg__LaserCloudList * msg = (mir_nav_interface__msg__LaserCloudList *)allocator.allocate(sizeof(mir_nav_interface__msg__LaserCloudList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mir_nav_interface__msg__LaserCloudList));
  bool success = mir_nav_interface__msg__LaserCloudList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mir_nav_interface__msg__LaserCloudList__destroy(mir_nav_interface__msg__LaserCloudList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mir_nav_interface__msg__LaserCloudList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mir_nav_interface__msg__LaserCloudList__Sequence__init(mir_nav_interface__msg__LaserCloudList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_nav_interface__msg__LaserCloudList * data = NULL;

  if (size) {
    data = (mir_nav_interface__msg__LaserCloudList *)allocator.zero_allocate(size, sizeof(mir_nav_interface__msg__LaserCloudList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mir_nav_interface__msg__LaserCloudList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mir_nav_interface__msg__LaserCloudList__fini(&data[i - 1]);
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
mir_nav_interface__msg__LaserCloudList__Sequence__fini(mir_nav_interface__msg__LaserCloudList__Sequence * array)
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
      mir_nav_interface__msg__LaserCloudList__fini(&array->data[i]);
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

mir_nav_interface__msg__LaserCloudList__Sequence *
mir_nav_interface__msg__LaserCloudList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mir_nav_interface__msg__LaserCloudList__Sequence * array = (mir_nav_interface__msg__LaserCloudList__Sequence *)allocator.allocate(sizeof(mir_nav_interface__msg__LaserCloudList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mir_nav_interface__msg__LaserCloudList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mir_nav_interface__msg__LaserCloudList__Sequence__destroy(mir_nav_interface__msg__LaserCloudList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mir_nav_interface__msg__LaserCloudList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mir_nav_interface__msg__LaserCloudList__Sequence__are_equal(const mir_nav_interface__msg__LaserCloudList__Sequence * lhs, const mir_nav_interface__msg__LaserCloudList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mir_nav_interface__msg__LaserCloudList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mir_nav_interface__msg__LaserCloudList__Sequence__copy(
  const mir_nav_interface__msg__LaserCloudList__Sequence * input,
  mir_nav_interface__msg__LaserCloudList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mir_nav_interface__msg__LaserCloudList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mir_nav_interface__msg__LaserCloudList * data =
      (mir_nav_interface__msg__LaserCloudList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mir_nav_interface__msg__LaserCloudList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mir_nav_interface__msg__LaserCloudList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mir_nav_interface__msg__LaserCloudList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
