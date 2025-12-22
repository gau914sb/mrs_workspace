// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/EstimatorDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__STRUCT_H_

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
// Member 'estimator_type'
// Member 'estimator_sm_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EstimatorDiagnostics in the package mrs_msgs.
typedef struct mrs_msgs__msg__EstimatorDiagnostics
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String estimator_name;
  rosidl_runtime_c__String estimator_type;
  rosidl_runtime_c__String estimator_sm_state;
} mrs_msgs__msg__EstimatorDiagnostics;

// Struct for a sequence of mrs_msgs__msg__EstimatorDiagnostics.
typedef struct mrs_msgs__msg__EstimatorDiagnostics__Sequence
{
  mrs_msgs__msg__EstimatorDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__EstimatorDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__STRUCT_H_
