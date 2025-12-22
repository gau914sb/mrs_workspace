// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/control_manager_diagnostics__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/control_manager_diagnostics__functions.h"
#include "mrs_msgs/msg/detail/control_manager_diagnostics__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `uav_name`
// Member `active_tracker`
// Member `active_controller`
// Member `available_controllers`
// Member `available_trackers`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracker_status`
#include "mrs_msgs/msg/tracker_status.h"
// Member `tracker_status`
#include "mrs_msgs/msg/detail/tracker_status__rosidl_typesupport_introspection_c.h"
// Member `controller_status`
#include "mrs_msgs/msg/controller_status.h"
// Member `controller_status`
#include "mrs_msgs/msg/detail/controller_status__rosidl_typesupport_introspection_c.h"
// Member `human_switchable_controllers`
// Member `human_switchable_trackers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__ControlManagerDiagnostics__init(message_memory);
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_fini_function(void * message_memory)
{
  mrs_msgs__msg__ControlManagerDiagnostics__fini(message_memory);
}

size_t mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__ControlManagerDiagnostics__available_controllers(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__available_controllers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__available_controllers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ControlManagerDiagnostics__available_controllers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__available_controllers(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__ControlManagerDiagnostics__available_controllers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__available_controllers(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__ControlManagerDiagnostics__available_controllers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__ControlManagerDiagnostics__available_trackers(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__available_trackers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__available_trackers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ControlManagerDiagnostics__available_trackers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__available_trackers(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__ControlManagerDiagnostics__available_trackers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__available_trackers(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__ControlManagerDiagnostics__available_trackers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__ControlManagerDiagnostics__human_switchable_controllers(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__human_switchable_controllers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__human_switchable_controllers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ControlManagerDiagnostics__human_switchable_controllers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__human_switchable_controllers(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__ControlManagerDiagnostics__human_switchable_controllers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__human_switchable_controllers(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__ControlManagerDiagnostics__human_switchable_controllers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__ControlManagerDiagnostics__human_switchable_trackers(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__human_switchable_trackers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__human_switchable_trackers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ControlManagerDiagnostics__human_switchable_trackers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__human_switchable_trackers(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__ControlManagerDiagnostics__human_switchable_trackers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__human_switchable_trackers(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__ControlManagerDiagnostics__human_switchable_trackers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_member_array[15] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uav_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, uav_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, output_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flying_normally",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, flying_normally),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joystick_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, joystick_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bumper_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, bumper_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_uav_state_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, desired_uav_state_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_tracker",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, active_tracker),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracker_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, tracker_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_controller",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, active_controller),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "controller_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, controller_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available_controllers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, available_controllers),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__ControlManagerDiagnostics__available_controllers,  // size() function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__available_controllers,  // get_const(index) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__available_controllers,  // get(index) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ControlManagerDiagnostics__available_controllers,  // fetch(index, &value) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__ControlManagerDiagnostics__available_controllers,  // assign(index, value) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__ControlManagerDiagnostics__available_controllers  // resize(index) function pointer
  },
  {
    "available_trackers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, available_trackers),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__ControlManagerDiagnostics__available_trackers,  // size() function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__available_trackers,  // get_const(index) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__available_trackers,  // get(index) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ControlManagerDiagnostics__available_trackers,  // fetch(index, &value) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__ControlManagerDiagnostics__available_trackers,  // assign(index, value) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__ControlManagerDiagnostics__available_trackers  // resize(index) function pointer
  },
  {
    "human_switchable_controllers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, human_switchable_controllers),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__ControlManagerDiagnostics__human_switchable_controllers,  // size() function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__human_switchable_controllers,  // get_const(index) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__human_switchable_controllers,  // get(index) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ControlManagerDiagnostics__human_switchable_controllers,  // fetch(index, &value) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__ControlManagerDiagnostics__human_switchable_controllers,  // assign(index, value) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__ControlManagerDiagnostics__human_switchable_controllers  // resize(index) function pointer
  },
  {
    "human_switchable_trackers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__ControlManagerDiagnostics, human_switchable_trackers),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__size_function__ControlManagerDiagnostics__human_switchable_trackers,  // size() function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ControlManagerDiagnostics__human_switchable_trackers,  // get_const(index) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__get_function__ControlManagerDiagnostics__human_switchable_trackers,  // get(index) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ControlManagerDiagnostics__human_switchable_trackers,  // fetch(index, &value) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__assign_function__ControlManagerDiagnostics__human_switchable_trackers,  // assign(index, value) function pointer
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__resize_function__ControlManagerDiagnostics__human_switchable_trackers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_members = {
  "mrs_msgs__msg",  // message namespace
  "ControlManagerDiagnostics",  // message name
  15,  // number of fields
  sizeof(mrs_msgs__msg__ControlManagerDiagnostics),
  false,  // has_any_key_member_
  mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_member_array,  // message members
  mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_type_support_handle = {
  0,
  &mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__ControlManagerDiagnostics__get_type_hash,
  &mrs_msgs__msg__ControlManagerDiagnostics__get_type_description,
  &mrs_msgs__msg__ControlManagerDiagnostics__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, ControlManagerDiagnostics)() {
  mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, TrackerStatus)();
  mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, ControllerStatus)();
  if (!mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__ControlManagerDiagnostics__rosidl_typesupport_introspection_c__ControlManagerDiagnostics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
