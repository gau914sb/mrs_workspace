// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/ErrorgraphElement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/errorgraph_element__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/errorgraph_element__functions.h"
#include "mrs_msgs/msg/detail/errorgraph_element__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `source_node`
#include "mrs_msgs/msg/errorgraph_node_id.h"
// Member `source_node`
#include "mrs_msgs/msg/detail/errorgraph_node_id__rosidl_typesupport_introspection_c.h"
// Member `errors`
#include "mrs_msgs/msg/errorgraph_error.h"
// Member `errors`
#include "mrs_msgs/msg/detail/errorgraph_error__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__ErrorgraphElement__init(message_memory);
}

void mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_fini_function(void * message_memory)
{
  mrs_msgs__msg__ErrorgraphElement__fini(message_memory);
}

size_t mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__size_function__ErrorgraphElement__errors(
  const void * untyped_member)
{
  const mrs_msgs__msg__ErrorgraphError__Sequence * member =
    (const mrs_msgs__msg__ErrorgraphError__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__get_const_function__ErrorgraphElement__errors(
  const void * untyped_member, size_t index)
{
  const mrs_msgs__msg__ErrorgraphError__Sequence * member =
    (const mrs_msgs__msg__ErrorgraphError__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__get_function__ErrorgraphElement__errors(
  void * untyped_member, size_t index)
{
  mrs_msgs__msg__ErrorgraphError__Sequence * member =
    (mrs_msgs__msg__ErrorgraphError__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__fetch_function__ErrorgraphElement__errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrs_msgs__msg__ErrorgraphError * item =
    ((const mrs_msgs__msg__ErrorgraphError *)
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__get_const_function__ErrorgraphElement__errors(untyped_member, index));
  mrs_msgs__msg__ErrorgraphError * value =
    (mrs_msgs__msg__ErrorgraphError *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__assign_function__ErrorgraphElement__errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrs_msgs__msg__ErrorgraphError * item =
    ((mrs_msgs__msg__ErrorgraphError *)
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__get_function__ErrorgraphElement__errors(untyped_member, index));
  const mrs_msgs__msg__ErrorgraphError * value =
    (const mrs_msgs__msg__ErrorgraphError *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__resize_function__ErrorgraphElement__errors(
  void * untyped_member, size_t size)
{
  mrs_msgs__msg__ErrorgraphError__Sequence * member =
    (mrs_msgs__msg__ErrorgraphError__Sequence *)(untyped_member);
  mrs_msgs__msg__ErrorgraphError__Sequence__fini(member);
  return mrs_msgs__msg__ErrorgraphError__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ErrorgraphElement, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ErrorgraphElement, source_node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ErrorgraphElement, errors),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__size_function__ErrorgraphElement__errors,  // size() function pointer
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__get_const_function__ErrorgraphElement__errors,  // get_const(index) function pointer
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__get_function__ErrorgraphElement__errors,  // get(index) function pointer
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__fetch_function__ErrorgraphElement__errors,  // fetch(index, &value) function pointer
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__assign_function__ErrorgraphElement__errors,  // assign(index, value) function pointer
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__resize_function__ErrorgraphElement__errors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_members = {
  "mrs_msgs__msg",  // message namespace
  "ErrorgraphElement",  // message name
  3,  // number of fields
  sizeof(mrs_msgs__msg__ErrorgraphElement),
  false,  // has_any_key_member_
  mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_member_array,  // message members
  mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_type_support_handle = {
  0,
  &mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__ErrorgraphElement__get_type_hash,
  &mrs_msgs__msg__ErrorgraphElement__get_type_description,
  &mrs_msgs__msg__ErrorgraphElement__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, ErrorgraphElement)() {
  mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, ErrorgraphNodeID)();
  mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, ErrorgraphError)();
  if (!mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__ErrorgraphElement__rosidl_typesupport_introspection_c__ErrorgraphElement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
