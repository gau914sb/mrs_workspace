// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Float64MultiArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/float64_multi_array_stamped.h"


#ifndef MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_H_

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
// Member 'matrix'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in msg/Float64MultiArrayStamped in the package mrs_msgs.
/**
  * Float64MultiArrayStamped
 */
typedef struct mrs_msgs__msg__Float64MultiArrayStamped
{
  std_msgs__msg__Header header;
  std_msgs__msg__Float64MultiArray matrix;
} mrs_msgs__msg__Float64MultiArrayStamped;

// Struct for a sequence of mrs_msgs__msg__Float64MultiArrayStamped.
typedef struct mrs_msgs__msg__Float64MultiArrayStamped__Sequence
{
  mrs_msgs__msg__Float64MultiArrayStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Float64MultiArrayStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_H_
