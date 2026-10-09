// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mir_nav_interface:msg/LaserCloudList.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__FUNCTIONS_H_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mir_nav_interface/msg/rosidl_generator_c__visibility_control.h"

#include "mir_nav_interface/msg/detail/laser_cloud_list__struct.h"

/// Initialize msg/LaserCloudList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mir_nav_interface__msg__LaserCloudList
 * )) before or use
 * mir_nav_interface__msg__LaserCloudList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
bool
mir_nav_interface__msg__LaserCloudList__init(mir_nav_interface__msg__LaserCloudList * msg);

/// Finalize msg/LaserCloudList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
void
mir_nav_interface__msg__LaserCloudList__fini(mir_nav_interface__msg__LaserCloudList * msg);

/// Create msg/LaserCloudList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mir_nav_interface__msg__LaserCloudList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
mir_nav_interface__msg__LaserCloudList *
mir_nav_interface__msg__LaserCloudList__create();

/// Destroy msg/LaserCloudList message.
/**
 * It calls
 * mir_nav_interface__msg__LaserCloudList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
void
mir_nav_interface__msg__LaserCloudList__destroy(mir_nav_interface__msg__LaserCloudList * msg);

/// Check for msg/LaserCloudList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
bool
mir_nav_interface__msg__LaserCloudList__are_equal(const mir_nav_interface__msg__LaserCloudList * lhs, const mir_nav_interface__msg__LaserCloudList * rhs);

/// Copy a msg/LaserCloudList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
bool
mir_nav_interface__msg__LaserCloudList__copy(
  const mir_nav_interface__msg__LaserCloudList * input,
  mir_nav_interface__msg__LaserCloudList * output);

/// Initialize array of msg/LaserCloudList messages.
/**
 * It allocates the memory for the number of elements and calls
 * mir_nav_interface__msg__LaserCloudList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
bool
mir_nav_interface__msg__LaserCloudList__Sequence__init(mir_nav_interface__msg__LaserCloudList__Sequence * array, size_t size);

/// Finalize array of msg/LaserCloudList messages.
/**
 * It calls
 * mir_nav_interface__msg__LaserCloudList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
void
mir_nav_interface__msg__LaserCloudList__Sequence__fini(mir_nav_interface__msg__LaserCloudList__Sequence * array);

/// Create array of msg/LaserCloudList messages.
/**
 * It allocates the memory for the array and calls
 * mir_nav_interface__msg__LaserCloudList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
mir_nav_interface__msg__LaserCloudList__Sequence *
mir_nav_interface__msg__LaserCloudList__Sequence__create(size_t size);

/// Destroy array of msg/LaserCloudList messages.
/**
 * It calls
 * mir_nav_interface__msg__LaserCloudList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
void
mir_nav_interface__msg__LaserCloudList__Sequence__destroy(mir_nav_interface__msg__LaserCloudList__Sequence * array);

/// Check for msg/LaserCloudList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
bool
mir_nav_interface__msg__LaserCloudList__Sequence__are_equal(const mir_nav_interface__msg__LaserCloudList__Sequence * lhs, const mir_nav_interface__msg__LaserCloudList__Sequence * rhs);

/// Copy an array of msg/LaserCloudList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mir_nav_interface
bool
mir_nav_interface__msg__LaserCloudList__Sequence__copy(
  const mir_nav_interface__msg__LaserCloudList__Sequence * input,
  mir_nav_interface__msg__LaserCloudList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__FUNCTIONS_H_
