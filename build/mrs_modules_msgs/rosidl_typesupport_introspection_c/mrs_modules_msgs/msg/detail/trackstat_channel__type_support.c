// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_modules_msgs/msg/detail/trackstat_channel__rosidl_typesupport_introspection_c.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_modules_msgs/msg/detail/trackstat_channel__functions.h"
#include "mrs_modules_msgs/msg/detail/trackstat_channel__struct.h"


// Include directives for member types
// Member `reject`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_modules_msgs__msg__TrackstatChannel__init(message_memory);
}

void mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_fini_function(void * message_memory)
{
  mrs_modules_msgs__msg__TrackstatChannel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_message_member_array[10] = {
  {
    "prn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, prn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "glofreq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, glofreq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ch_tr_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, ch_tr_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "psr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, psr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "doppler",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, doppler),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c_no",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, c_no),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "locktime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, locktime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "psr_res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, psr_res),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reject",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, reject),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "psr_weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__TrackstatChannel, psr_weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_message_members = {
  "mrs_modules_msgs__msg",  // message namespace
  "TrackstatChannel",  // message name
  10,  // number of fields
  sizeof(mrs_modules_msgs__msg__TrackstatChannel),
  false,  // has_any_key_member_
  mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_message_member_array,  // message members
  mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_message_type_support_handle = {
  0,
  &mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_message_members,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__TrackstatChannel__get_type_hash,
  &mrs_modules_msgs__msg__TrackstatChannel__get_type_description,
  &mrs_modules_msgs__msg__TrackstatChannel__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_modules_msgs, msg, TrackstatChannel)() {
  if (!mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_message_type_support_handle.typesupport_identifier) {
    mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_modules_msgs__msg__TrackstatChannel__rosidl_typesupport_introspection_c__TrackstatChannel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
