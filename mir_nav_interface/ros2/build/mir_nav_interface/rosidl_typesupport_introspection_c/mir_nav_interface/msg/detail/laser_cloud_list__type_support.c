// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mir_nav_interface:msg/LaserCloudList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mir_nav_interface/msg/detail/laser_cloud_list__rosidl_typesupport_introspection_c.h"
#include "mir_nav_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mir_nav_interface/msg/detail/laser_cloud_list__functions.h"
#include "mir_nav_interface/msg/detail/laser_cloud_list__struct.h"


// Include directives for member types
// Member `clouds`
#include "mir_nav_interface/msg/laser_cloud.h"
// Member `clouds`
#include "mir_nav_interface/msg/detail/laser_cloud__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mir_nav_interface__msg__LaserCloudList__init(message_memory);
}

void mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_fini_function(void * message_memory)
{
  mir_nav_interface__msg__LaserCloudList__fini(message_memory);
}

size_t mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__size_function__LaserCloudList__clouds(
  const void * untyped_member)
{
  const mir_nav_interface__msg__LaserCloud__Sequence * member =
    (const mir_nav_interface__msg__LaserCloud__Sequence *)(untyped_member);
  return member->size;
}

const void * mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__get_const_function__LaserCloudList__clouds(
  const void * untyped_member, size_t index)
{
  const mir_nav_interface__msg__LaserCloud__Sequence * member =
    (const mir_nav_interface__msg__LaserCloud__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__get_function__LaserCloudList__clouds(
  void * untyped_member, size_t index)
{
  mir_nav_interface__msg__LaserCloud__Sequence * member =
    (mir_nav_interface__msg__LaserCloud__Sequence *)(untyped_member);
  return &member->data[index];
}

void mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__fetch_function__LaserCloudList__clouds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mir_nav_interface__msg__LaserCloud * item =
    ((const mir_nav_interface__msg__LaserCloud *)
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__get_const_function__LaserCloudList__clouds(untyped_member, index));
  mir_nav_interface__msg__LaserCloud * value =
    (mir_nav_interface__msg__LaserCloud *)(untyped_value);
  *value = *item;
}

void mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__assign_function__LaserCloudList__clouds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mir_nav_interface__msg__LaserCloud * item =
    ((mir_nav_interface__msg__LaserCloud *)
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__get_function__LaserCloudList__clouds(untyped_member, index));
  const mir_nav_interface__msg__LaserCloud * value =
    (const mir_nav_interface__msg__LaserCloud *)(untyped_value);
  *item = *value;
}

bool mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__resize_function__LaserCloudList__clouds(
  void * untyped_member, size_t size)
{
  mir_nav_interface__msg__LaserCloud__Sequence * member =
    (mir_nav_interface__msg__LaserCloud__Sequence *)(untyped_member);
  mir_nav_interface__msg__LaserCloud__Sequence__fini(member);
  return mir_nav_interface__msg__LaserCloud__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_member_array[1] = {
  {
    "clouds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mir_nav_interface__msg__LaserCloudList, clouds),  // bytes offset in struct
    NULL,  // default value
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__size_function__LaserCloudList__clouds,  // size() function pointer
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__get_const_function__LaserCloudList__clouds,  // get_const(index) function pointer
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__get_function__LaserCloudList__clouds,  // get(index) function pointer
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__fetch_function__LaserCloudList__clouds,  // fetch(index, &value) function pointer
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__assign_function__LaserCloudList__clouds,  // assign(index, value) function pointer
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__resize_function__LaserCloudList__clouds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_members = {
  "mir_nav_interface__msg",  // message namespace
  "LaserCloudList",  // message name
  1,  // number of fields
  sizeof(mir_nav_interface__msg__LaserCloudList),
  mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_member_array,  // message members
  mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_init_function,  // function to initialize message memory (memory has to be allocated)
  mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_type_support_handle = {
  0,
  &mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mir_nav_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_nav_interface, msg, LaserCloudList)() {
  mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mir_nav_interface, msg, LaserCloud)();
  if (!mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_type_support_handle.typesupport_identifier) {
    mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mir_nav_interface__msg__LaserCloudList__rosidl_typesupport_introspection_c__LaserCloudList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
