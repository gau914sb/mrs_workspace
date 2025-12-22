// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/EstimatorCorrection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_correction.h"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_CORRECTION__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_CORRECTION__STRUCT_H_

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
// Member 'estimator_name'
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'state'
// Member 'covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/EstimatorCorrection in the package mrs_msgs.
typedef struct mrs_msgs__msg__EstimatorCorrection
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String estimator_name;
  rosidl_runtime_c__String name;
  uint8_t state_id;
  rosidl_runtime_c__double__Sequence state;
  rosidl_runtime_c__double__Sequence covariance;
} mrs_msgs__msg__EstimatorCorrection;

// Struct for a sequence of mrs_msgs__msg__EstimatorCorrection.
typedef struct mrs_msgs__msg__EstimatorCorrection__Sequence
{
  mrs_msgs__msg__EstimatorCorrection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__EstimatorCorrection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_CORRECTION__STRUCT_H_
