// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Prism.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/prism.h"


#ifndef MRS_MSGS__MSG__DETAIL__PRISM__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__PRISM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'horizontal_frame'
// Member 'vertical_frame'
#include "rosidl_runtime_c/string.h"
// Member 'points'
#include "mrs_msgs/msg/detail/point2_d__struct.h"

/// Struct defined in msg/Prism in the package mrs_msgs.
typedef struct mrs_msgs__msg__Prism
{
  rosidl_runtime_c__String horizontal_frame;
  rosidl_runtime_c__String vertical_frame;
  mrs_msgs__msg__Point2D__Sequence points;
  double max_z;
  double min_z;
} mrs_msgs__msg__Prism;

// Struct for a sequence of mrs_msgs__msg__Prism.
typedef struct mrs_msgs__msg__Prism__Sequence
{
  mrs_msgs__msg__Prism * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Prism__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__PRISM__STRUCT_H_
