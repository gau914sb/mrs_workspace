// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Float64Stamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/float64_stamped.h"


#ifndef MRS_MSGS__MSG__DETAIL__FLOAT64_STAMPED__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__FLOAT64_STAMPED__STRUCT_H_

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

/// Struct defined in msg/Float64Stamped in the package mrs_msgs.
typedef struct mrs_msgs__msg__Float64Stamped
{
  std_msgs__msg__Header header;
  double value;
} mrs_msgs__msg__Float64Stamped;

// Struct for a sequence of mrs_msgs__msg__Float64Stamped.
typedef struct mrs_msgs__msg__Float64Stamped__Sequence
{
  mrs_msgs__msg__Float64Stamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Float64Stamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__FLOAT64_STAMPED__STRUCT_H_
