// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ControlError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/control_error.h"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'position_errors'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ControlError in the package mrs_msgs.
typedef struct mrs_msgs__msg__ControlError
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 position_errors;
  double total_position_error;
  double yaw_error;
  double position_eland_threshold;
  double position_failsafe_threshold;
} mrs_msgs__msg__ControlError;

// Struct for a sequence of mrs_msgs__msg__ControlError.
typedef struct mrs_msgs__msg__ControlError__Sequence
{
  mrs_msgs__msg__ControlError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ControlError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__STRUCT_H_
