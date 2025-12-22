// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Float64.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/float64.h"


#ifndef MRS_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Float64 in the package mrs_msgs.
typedef struct mrs_msgs__msg__Float64
{
  double value;
} mrs_msgs__msg__Float64;

// Struct for a sequence of mrs_msgs__msg__Float64.
typedef struct mrs_msgs__msg__Float64__Sequence
{
  mrs_msgs__msg__Float64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Float64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_
