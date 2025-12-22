// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/FuturePoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/future_point.h"


#ifndef MRS_MSGS__MSG__DETAIL__FUTURE_POINT__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__FUTURE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/FuturePoint in the package mrs_msgs.
typedef struct mrs_msgs__msg__FuturePoint
{
  float x;
  float y;
  float z;
} mrs_msgs__msg__FuturePoint;

// Struct for a sequence of mrs_msgs__msg__FuturePoint.
typedef struct mrs_msgs__msg__FuturePoint__Sequence
{
  mrs_msgs__msg__FuturePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__FuturePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__FUTURE_POINT__STRUCT_H_
