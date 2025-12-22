// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/EstimatorOutput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_output.h"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_OUTPUT__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_OUTPUT__STRUCT_H_

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
// Member 'state'
// Member 'covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/EstimatorOutput in the package mrs_msgs.
typedef struct mrs_msgs__msg__EstimatorOutput
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__double__Sequence state;
  rosidl_runtime_c__double__Sequence covariance;
} mrs_msgs__msg__EstimatorOutput;

// Struct for a sequence of mrs_msgs__msg__EstimatorOutput.
typedef struct mrs_msgs__msg__EstimatorOutput__Sequence
{
  mrs_msgs__msg__EstimatorOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__EstimatorOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_OUTPUT__STRUCT_H_
