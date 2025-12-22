// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiControlGroupCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_control_group_cmd.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__STRUCT_H_

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

/// Struct defined in msg/HwApiControlGroupCmd in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiControlGroupCmd
{
  builtin_interfaces__msg__Time stamp;
  /// 4DOF control vector, in the Front-Left-Up body frame
  ///
  /// The control group signals are first passed through a mixer matrix,
  /// then desaturated and applied to the motor outputs [0, 1].
  /// [-1, 1]
  float roll;
  /// [-1, 1]
  float pitch;
  /// [-1, 1]
  float yaw;
  /// [0, 1]
  float throttle;
} mrs_msgs__msg__HwApiControlGroupCmd;

// Struct for a sequence of mrs_msgs__msg__HwApiControlGroupCmd.
typedef struct mrs_msgs__msg__HwApiControlGroupCmd__Sequence
{
  mrs_msgs__msg__HwApiControlGroupCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiControlGroupCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__STRUCT_H_
