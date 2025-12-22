// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/GimbalPRY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gimbal_pry.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GimbalPRY in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__GimbalPRY
{
  float pitch;
  float roll;
  float yaw;
} mrs_modules_msgs__msg__GimbalPRY;

// Struct for a sequence of mrs_modules_msgs__msg__GimbalPRY.
typedef struct mrs_modules_msgs__msg__GimbalPRY__Sequence
{
  mrs_modules_msgs__msg__GimbalPRY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__GimbalPRY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__STRUCT_H_
