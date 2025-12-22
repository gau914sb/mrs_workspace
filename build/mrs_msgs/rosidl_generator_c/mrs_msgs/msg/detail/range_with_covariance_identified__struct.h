// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/RangeWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/range_with_covariance_identified.h"


#ifndef MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'range'
#include "sensor_msgs/msg/detail/range__struct.h"

/// Struct defined in msg/RangeWithCovarianceIdentified in the package mrs_msgs.
typedef struct mrs_msgs__msg__RangeWithCovarianceIdentified
{
  uint64_t id;
  sensor_msgs__msg__Range range;
  double variance;
  double power_a;
  double power_b;
} mrs_msgs__msg__RangeWithCovarianceIdentified;

// Struct for a sequence of mrs_msgs__msg__RangeWithCovarianceIdentified.
typedef struct mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence
{
  mrs_msgs__msg__RangeWithCovarianceIdentified * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__RangeWithCovarianceIdentified__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__STRUCT_H_
