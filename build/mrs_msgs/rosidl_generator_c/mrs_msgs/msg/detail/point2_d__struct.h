// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/point2_d.h"


#ifndef MRS_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Point2D in the package mrs_msgs.
typedef struct mrs_msgs__msg__Point2D
{
  double x;
  double y;
} mrs_msgs__msg__Point2D;

// Struct for a sequence of mrs_msgs__msg__Point2D.
typedef struct mrs_msgs__msg__Point2D__Sequence
{
  mrs_msgs__msg__Point2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Point2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
