// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gimbal_state.h"


#ifndef MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_H_

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

/// Struct defined in msg/GimbalState in the package mrs_msgs.
typedef struct mrs_msgs__msg__GimbalState
{
  std_msgs__msg__Header header;
  uint16_t gimbal_tilt;
  uint16_t gimbal_pan;
  bool is_on;
  bool fpv_mode;
} mrs_msgs__msg__GimbalState;

// Struct for a sequence of mrs_msgs__msg__GimbalState.
typedef struct mrs_msgs__msg__GimbalState__Sequence
{
  mrs_msgs__msg__GimbalState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__GimbalState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_H_
