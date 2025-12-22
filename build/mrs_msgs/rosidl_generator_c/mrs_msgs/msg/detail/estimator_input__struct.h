// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/EstimatorInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_input.h"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__STRUCT_H_

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
// Member 'control_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/EstimatorInput in the package mrs_msgs.
typedef struct mrs_msgs__msg__EstimatorInput
{
  std_msgs__msg__Header header;
  /// unbiased acceleration caused by controller's action
  geometry_msgs__msg__Vector3 control_acceleration;
  /// heading rate caused by the controller's action
  double control_hdg_rate;
} mrs_msgs__msg__EstimatorInput;

// Struct for a sequence of mrs_msgs__msg__EstimatorInput.
typedef struct mrs_msgs__msg__EstimatorInput__Sequence
{
  mrs_msgs__msg__EstimatorInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__EstimatorInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__STRUCT_H_
