// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/EulerAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/euler_angles.h"


#ifndef MRS_MSGS__MSG__DETAIL__EULER_ANGLES__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__EULER_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/EulerAngles in the package mrs_msgs.
typedef struct mrs_msgs__msg__EulerAngles
{
  double yaw;
  double pitch;
  double roll;
} mrs_msgs__msg__EulerAngles;

// Struct for a sequence of mrs_msgs__msg__EulerAngles.
typedef struct mrs_msgs__msg__EulerAngles__Sequence
{
  mrs_msgs__msg__EulerAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__EulerAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__EULER_ANGLES__STRUCT_H_
