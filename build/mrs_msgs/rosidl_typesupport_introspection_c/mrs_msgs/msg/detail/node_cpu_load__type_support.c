// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/NodeCpuLoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/node_cpu_load__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/node_cpu_load__functions.h"
#include "mrs_msgs/msg/detail/node_cpu_load__struct.h"


// Include directives for member types
// Member `node_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `cpu_loads`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__NodeCpuLoad__init(message_memory);
}

void mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_fini_function(void * message_memory)
{
  mrs_msgs__msg__NodeCpuLoad__fini(message_memory);
}

size_t mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__size_function__NodeCpuLoad__node_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_const_function__NodeCpuLoad__node_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_function__NodeCpuLoad__node_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__fetch_function__NodeCpuLoad__node_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_const_function__NodeCpuLoad__node_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__assign_function__NodeCpuLoad__node_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_function__NodeCpuLoad__node_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__resize_function__NodeCpuLoad__node_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__size_function__NodeCpuLoad__cpu_loads(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_const_function__NodeCpuLoad__cpu_loads(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_function__NodeCpuLoad__cpu_loads(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__fetch_function__NodeCpuLoad__cpu_loads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_const_function__NodeCpuLoad__cpu_loads(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__assign_function__NodeCpuLoad__cpu_loads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_function__NodeCpuLoad__cpu_loads(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__resize_function__NodeCpuLoad__cpu_loads(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_message_member_array[2] = {
  {
    "node_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__NodeCpuLoad, node_names),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__size_function__NodeCpuLoad__node_names,  // size() function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_const_function__NodeCpuLoad__node_names,  // get_const(index) function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_function__NodeCpuLoad__node_names,  // get(index) function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__fetch_function__NodeCpuLoad__node_names,  // fetch(index, &value) function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__assign_function__NodeCpuLoad__node_names,  // assign(index, value) function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__resize_function__NodeCpuLoad__node_names  // resize(index) function pointer
  },
  {
    "cpu_loads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__NodeCpuLoad, cpu_loads),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__size_function__NodeCpuLoad__cpu_loads,  // size() function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_const_function__NodeCpuLoad__cpu_loads,  // get_const(index) function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__get_function__NodeCpuLoad__cpu_loads,  // get(index) function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__fetch_function__NodeCpuLoad__cpu_loads,  // fetch(index, &value) function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__assign_function__NodeCpuLoad__cpu_loads,  // assign(index, value) function pointer
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__resize_function__NodeCpuLoad__cpu_loads  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_message_members = {
  "mrs_msgs__msg",  // message namespace
  "NodeCpuLoad",  // message name
  2,  // number of fields
  sizeof(mrs_msgs__msg__NodeCpuLoad),
  false,  // has_any_key_member_
  mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_message_member_array,  // message members
  mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_message_type_support_handle = {
  0,
  &mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__NodeCpuLoad__get_type_hash,
  &mrs_msgs__msg__NodeCpuLoad__get_type_description,
  &mrs_msgs__msg__NodeCpuLoad__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, NodeCpuLoad)() {
  if (!mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__NodeCpuLoad__rosidl_typesupport_introspection_c__NodeCpuLoad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
