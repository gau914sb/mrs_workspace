// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/histogram__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/histogram__functions.h"
#include "mrs_msgs/msg/detail/histogram__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `bins`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__Histogram__init(message_memory);
}

void mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_fini_function(void * message_memory)
{
  mrs_msgs__msg__Histogram__fini(message_memory);
}

size_t mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__size_function__Histogram__bins(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__get_const_function__Histogram__bins(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__get_function__Histogram__bins(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__fetch_function__Histogram__bins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__get_const_function__Histogram__bins(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__assign_function__Histogram__bins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__get_function__Histogram__bins(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__resize_function__Histogram__bins(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Histogram, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Histogram, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bin_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Histogram, bin_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bin_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Histogram, bin_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bin_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Histogram, bin_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bin_mark",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Histogram, bin_mark),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Histogram, bins),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__size_function__Histogram__bins,  // size() function pointer
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__get_const_function__Histogram__bins,  // get_const(index) function pointer
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__get_function__Histogram__bins,  // get(index) function pointer
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__fetch_function__Histogram__bins,  // fetch(index, &value) function pointer
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__assign_function__Histogram__bins,  // assign(index, value) function pointer
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__resize_function__Histogram__bins  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_members = {
  "mrs_msgs__msg",  // message namespace
  "Histogram",  // message name
  7,  // number of fields
  sizeof(mrs_msgs__msg__Histogram),
  false,  // has_any_key_member_
  mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_member_array,  // message members
  mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_type_support_handle = {
  0,
  &mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__Histogram__get_type_hash,
  &mrs_msgs__msg__Histogram__get_type_description,
  &mrs_msgs__msg__Histogram__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, Histogram)() {
  mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__Histogram__rosidl_typesupport_introspection_c__Histogram_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
