// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_modules_msgs:msg/Llcp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_modules_msgs/msg/detail/llcp__rosidl_typesupport_introspection_c.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_modules_msgs/msg/detail/llcp__functions.h"
#include "mrs_modules_msgs/msg/detail/llcp__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_modules_msgs__msg__Llcp__init(message_memory);
}

void mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_fini_function(void * message_memory)
{
  mrs_modules_msgs__msg__Llcp__fini(message_memory);
}

size_t mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__size_function__Llcp__payload(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__get_const_function__Llcp__payload(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__get_function__Llcp__payload(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__fetch_function__Llcp__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__get_const_function__Llcp__payload(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__assign_function__Llcp__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__get_function__Llcp__payload(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__resize_function__Llcp__payload(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Llcp, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "checksum_matched",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Llcp, checksum_matched),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Llcp, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__Llcp, payload),  // bytes offset in struct
    NULL,  // default value
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__size_function__Llcp__payload,  // size() function pointer
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__get_const_function__Llcp__payload,  // get_const(index) function pointer
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__get_function__Llcp__payload,  // get(index) function pointer
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__fetch_function__Llcp__payload,  // fetch(index, &value) function pointer
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__assign_function__Llcp__payload,  // assign(index, value) function pointer
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__resize_function__Llcp__payload  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_members = {
  "mrs_modules_msgs__msg",  // message namespace
  "Llcp",  // message name
  4,  // number of fields
  sizeof(mrs_modules_msgs__msg__Llcp),
  false,  // has_any_key_member_
  mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_member_array,  // message members
  mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_type_support_handle = {
  0,
  &mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_members,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__Llcp__get_type_hash,
  &mrs_modules_msgs__msg__Llcp__get_type_description,
  &mrs_modules_msgs__msg__Llcp__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_modules_msgs, msg, Llcp)() {
  mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_type_support_handle.typesupport_identifier) {
    mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_modules_msgs__msg__Llcp__rosidl_typesupport_introspection_c__Llcp_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
