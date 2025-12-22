// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/GainManagerDiagnostics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/gain_manager_diagnostics__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/gain_manager_diagnostics__functions.h"
#include "mrs_msgs/msg/detail/gain_manager_diagnostics__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `loaded`
// Member `available`
// Member `current_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_values`
#include "mrs_msgs/msg/se3_gains.h"
// Member `current_values`
#include "mrs_msgs/msg/detail/se3_gains__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__GainManagerDiagnostics__init(message_memory);
}

void mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_fini_function(void * message_memory)
{
  mrs_msgs__msg__GainManagerDiagnostics__fini(message_memory);
}

size_t mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__GainManagerDiagnostics__loaded(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__GainManagerDiagnostics__loaded(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__GainManagerDiagnostics__loaded(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__GainManagerDiagnostics__loaded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__GainManagerDiagnostics__loaded(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__GainManagerDiagnostics__loaded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__GainManagerDiagnostics__loaded(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__GainManagerDiagnostics__loaded(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__GainManagerDiagnostics__available(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__GainManagerDiagnostics__available(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__GainManagerDiagnostics__available(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__GainManagerDiagnostics__available(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__GainManagerDiagnostics__available(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__GainManagerDiagnostics__available(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__GainManagerDiagnostics__available(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__GainManagerDiagnostics__available(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GainManagerDiagnostics, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loaded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GainManagerDiagnostics, loaded),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__GainManagerDiagnostics__loaded,  // size() function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__GainManagerDiagnostics__loaded,  // get_const(index) function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__GainManagerDiagnostics__loaded,  // get(index) function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__GainManagerDiagnostics__loaded,  // fetch(index, &value) function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__GainManagerDiagnostics__loaded,  // assign(index, value) function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__GainManagerDiagnostics__loaded  // resize(index) function pointer
  },
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GainManagerDiagnostics, available),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__GainManagerDiagnostics__available,  // size() function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__GainManagerDiagnostics__available,  // get_const(index) function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__GainManagerDiagnostics__available,  // get(index) function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__GainManagerDiagnostics__available,  // fetch(index, &value) function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__GainManagerDiagnostics__available,  // assign(index, value) function pointer
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__GainManagerDiagnostics__available  // resize(index) function pointer
  },
  {
    "current_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GainManagerDiagnostics, current_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GainManagerDiagnostics, current_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_members = {
  "mrs_msgs__msg",  // message namespace
  "GainManagerDiagnostics",  // message name
  5,  // number of fields
  sizeof(mrs_msgs__msg__GainManagerDiagnostics),
  false,  // has_any_key_member_
  mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_member_array,  // message members
  mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_type_support_handle = {
  0,
  &mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__GainManagerDiagnostics__get_type_hash,
  &mrs_msgs__msg__GainManagerDiagnostics__get_type_description,
  &mrs_msgs__msg__GainManagerDiagnostics__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, GainManagerDiagnostics)() {
  mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, Se3Gains)();
  if (!mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__GainManagerDiagnostics__rosidl_typesupport_introspection_c__GainManagerDiagnostics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
