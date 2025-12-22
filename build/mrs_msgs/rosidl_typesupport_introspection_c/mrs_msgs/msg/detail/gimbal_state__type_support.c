// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/gimbal_state__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/gimbal_state__functions.h"
#include "mrs_msgs/msg/detail/gimbal_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__GimbalState__init(message_memory);
}

void mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_fini_function(void * message_memory)
{
  mrs_msgs__msg__GimbalState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GimbalState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gimbal_tilt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GimbalState, gimbal_tilt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gimbal_pan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GimbalState, gimbal_pan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GimbalState, is_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fpv_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GimbalState, fpv_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_members = {
  "mrs_msgs__msg",  // message namespace
  "GimbalState",  // message name
  5,  // number of fields
  sizeof(mrs_msgs__msg__GimbalState),
  false,  // has_any_key_member_
  mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_member_array,  // message members
  mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_type_support_handle = {
  0,
  &mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__GimbalState__get_type_hash,
  &mrs_msgs__msg__GimbalState__get_type_description,
  &mrs_msgs__msg__GimbalState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, GimbalState)() {
  mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__GimbalState__rosidl_typesupport_introspection_c__GimbalState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
