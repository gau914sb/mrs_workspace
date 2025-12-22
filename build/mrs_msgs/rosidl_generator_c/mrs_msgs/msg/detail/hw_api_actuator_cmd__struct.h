// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiActuatorCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_actuator_cmd.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'motors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/HwApiActuatorCmd in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiActuatorCmd
{
  builtin_interfaces__msg__Time stamp;
  /// motor signals, throttle [0, 1]
  rosidl_runtime_c__float__Sequence motors;
} mrs_msgs__msg__HwApiActuatorCmd;

// Struct for a sequence of mrs_msgs__msg__HwApiActuatorCmd.
typedef struct mrs_msgs__msg__HwApiActuatorCmd__Sequence
{
  mrs_msgs__msg__HwApiActuatorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiActuatorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__STRUCT_H_
