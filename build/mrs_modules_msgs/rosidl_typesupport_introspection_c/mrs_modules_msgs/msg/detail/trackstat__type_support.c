// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_modules_msgs:msg/Trackstat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_modules_msgs/msg/detail/trackstat__rosidl_typesupport_introspection_c.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_modules_msgs/msg/detail/trackstat__functions.h"
#include "mrs_modules_msgs/msg/detail/trackstat__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `solution_status`
// Member `position_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `channels`
#include "mrs_modules_msgs/msg/trackstat_channel.h"
// Member `channels`
#include "mrs_modules_msgs/msg/detail/trackstat_channel__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_modules_msgs__msg__Trackstat__init(message_memory);
}

void mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_fini_function(void * message_memory)
{
  mrs_modules_msgs__msg__Trackstat__fini(message_memory);
}

size_t mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__size_function__Trackstat__channels(
  const void * untyped_member)
{
  const mrs_modules_msgs__msg__TrackstatChannel__Sequence * member =
    (const mrs_modules_msgs__msg__TrackstatChannel__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__get_const_function__Trackstat__channels(
  const void * untyped_member, size_t index)
{
  const mrs_modules_msgs__msg__TrackstatChannel__Sequence * member =
    (const mrs_modules_msgs__msg__TrackstatChannel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__get_function__Trackstat__channels(
  void * untyped_member, size_t index)
{
  mrs_modules_msgs__msg__TrackstatChannel__Sequence * member =
    (mrs_modules_msgs__msg__TrackstatChannel__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__fetch_function__Trackstat__channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrs_modules_msgs__msg__TrackstatChannel * item =
    ((const mrs_modules_msgs__msg__TrackstatChannel *)
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__get_const_function__Trackstat__channels(untyped_member, index));
  mrs_modules_msgs__msg__TrackstatChannel * value =
    (mrs_modules_msgs__msg__TrackstatChannel *)(untyped_value);
  *value = *item;
}

void mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__assign_function__Trackstat__channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrs_modules_msgs__msg__TrackstatChannel * item =
    ((mrs_modules_msgs__msg__TrackstatChannel *)
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__get_function__Trackstat__channels(untyped_member, index));
  const mrs_modules_msgs__msg__TrackstatChannel * value =
    (const mrs_modules_msgs__msg__TrackstatChannel *)(untyped_value);
  *item = *value;
}

bool mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__resize_function__Trackstat__channels(
  void * untyped_member, size_t size)
{
  mrs_modules_msgs__msg__TrackstatChannel__Sequence * member =
    (mrs_modules_msgs__msg__TrackstatChannel__Sequence *)(untyped_member);
  mrs_modules_msgs__msg__TrackstatChannel__Sequence__fini(member);
  return mrs_modules_msgs__msg__TrackstatChannel__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Trackstat, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solution_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Trackstat, solution_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Trackstat, position_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cutoff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Trackstat, cutoff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Trackstat, channels),  // bytes offset in struct
    NULL,  // default value
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__size_function__Trackstat__channels,  // size() function pointer
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__get_const_function__Trackstat__channels,  // get_const(index) function pointer
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__get_function__Trackstat__channels,  // get(index) function pointer
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__fetch_function__Trackstat__channels,  // fetch(index, &value) function pointer
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__assign_function__Trackstat__channels,  // assign(index, value) function pointer
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__resize_function__Trackstat__channels  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_members = {
  "mrs_modules_msgs__msg",  // message namespace
  "Trackstat",  // message name
  5,  // number of fields
  sizeof(mrs_modules_msgs__msg__Trackstat),
  false,  // has_any_key_member_
  mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_member_array,  // message members
  mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_type_support_handle = {
  0,
  &mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_members,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__Trackstat__get_type_hash,
  &mrs_modules_msgs__msg__Trackstat__get_type_description,
  &mrs_modules_msgs__msg__Trackstat__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_modules_msgs, msg, Trackstat)() {
  mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_modules_msgs, msg, TrackstatChannel)();
  if (!mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_type_support_handle.typesupport_identifier) {
    mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_modules_msgs__msg__Trackstat__rosidl_typesupport_introspection_c__Trackstat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
