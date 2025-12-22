// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/EstimationDiagnostics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/estimation_diagnostics__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/estimation_diagnostics__functions.h"
#include "mrs_msgs/msg/detail/estimation_diagnostics__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `child_frame_id`
// Member `sm_state`
// Member `current_state_estimator`
// Member `estimator_horizontal`
// Member `estimator_vertical`
// Member `estimator_heading`
// Member `estimator_agl_height`
// Member `running_state_estimators`
// Member `switchable_state_estimators`
// Member `platform_config`
// Member `custom_config`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "geometry_msgs/msg/twist.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `acceleration`
#include "geometry_msgs/msg/accel.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__EstimationDiagnostics__init(message_memory);
}

void mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_fini_function(void * message_memory)
{
  mrs_msgs__msg__EstimationDiagnostics__fini(message_memory);
}

size_t mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__size_function__EstimationDiagnostics__running_state_estimators(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_const_function__EstimationDiagnostics__running_state_estimators(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_function__EstimationDiagnostics__running_state_estimators(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__fetch_function__EstimationDiagnostics__running_state_estimators(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_const_function__EstimationDiagnostics__running_state_estimators(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__assign_function__EstimationDiagnostics__running_state_estimators(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_function__EstimationDiagnostics__running_state_estimators(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__resize_function__EstimationDiagnostics__running_state_estimators(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__size_function__EstimationDiagnostics__switchable_state_estimators(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_const_function__EstimationDiagnostics__switchable_state_estimators(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_function__EstimationDiagnostics__switchable_state_estimators(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__fetch_function__EstimationDiagnostics__switchable_state_estimators(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_const_function__EstimationDiagnostics__switchable_state_estimators(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__assign_function__EstimationDiagnostics__switchable_state_estimators(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_function__EstimationDiagnostics__switchable_state_estimators(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__resize_function__EstimationDiagnostics__switchable_state_estimators(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_member_array[19] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, child_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "agl_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, agl_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_flight_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, max_flight_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sm_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, sm_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_state_estimator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, current_state_estimator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimator_horizontal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, estimator_horizontal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimator_vertical",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, estimator_vertical),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimator_heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, estimator_heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimator_agl_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, estimator_agl_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimation_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, estimation_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimator_iteration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, estimator_iteration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "running_state_estimators",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, running_state_estimators),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__size_function__EstimationDiagnostics__running_state_estimators,  // size() function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_const_function__EstimationDiagnostics__running_state_estimators,  // get_const(index) function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_function__EstimationDiagnostics__running_state_estimators,  // get(index) function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__fetch_function__EstimationDiagnostics__running_state_estimators,  // fetch(index, &value) function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__assign_function__EstimationDiagnostics__running_state_estimators,  // assign(index, value) function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__resize_function__EstimationDiagnostics__running_state_estimators  // resize(index) function pointer
  },
  {
    "switchable_state_estimators",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, switchable_state_estimators),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__size_function__EstimationDiagnostics__switchable_state_estimators,  // size() function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_const_function__EstimationDiagnostics__switchable_state_estimators,  // get_const(index) function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__get_function__EstimationDiagnostics__switchable_state_estimators,  // get(index) function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__fetch_function__EstimationDiagnostics__switchable_state_estimators,  // fetch(index, &value) function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__assign_function__EstimationDiagnostics__switchable_state_estimators,  // assign(index, value) function pointer
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__resize_function__EstimationDiagnostics__switchable_state_estimators  // resize(index) function pointer
  },
  {
    "platform_config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, platform_config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "custom_config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__EstimationDiagnostics, custom_config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_members = {
  "mrs_msgs__msg",  // message namespace
  "EstimationDiagnostics",  // message name
  19,  // number of fields
  sizeof(mrs_msgs__msg__EstimationDiagnostics),
  false,  // has_any_key_member_
  mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_member_array,  // message members
  mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_type_support_handle = {
  0,
  &mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__EstimationDiagnostics__get_type_hash,
  &mrs_msgs__msg__EstimationDiagnostics__get_type_description,
  &mrs_msgs__msg__EstimationDiagnostics__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, EstimationDiagnostics)() {
  mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  if (!mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__EstimationDiagnostics__rosidl_typesupport_introspection_c__EstimationDiagnostics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
