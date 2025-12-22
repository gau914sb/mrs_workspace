// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/GainManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gain_manager_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'loaded'
// Member 'available'
// Member 'current_name'
#include "rosidl_runtime_c/string.h"
// Member 'current_values'
#include "mrs_msgs/msg/detail/se3_gains__struct.h"

/// Struct defined in msg/GainManagerDiagnostics in the package mrs_msgs.
/**
  * The diagnostics of the GainManager.
 */
typedef struct mrs_msgs__msg__GainManagerDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  /// The list of all loaded gains.
  rosidl_runtime_c__String__Sequence loaded;
  /// The list of gains which are available for the currently active state estimator.
  rosidl_runtime_c__String__Sequence available;
  /// The name of the current gains.
  rosidl_runtime_c__String current_name;
  /// The particular values of the current gains.
  mrs_msgs__msg__Se3Gains current_values;
} mrs_msgs__msg__GainManagerDiagnostics;

// Struct for a sequence of mrs_msgs__msg__GainManagerDiagnostics.
typedef struct mrs_msgs__msg__GainManagerDiagnostics__Sequence
{
  mrs_msgs__msg__GainManagerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__GainManagerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__STRUCT_H_
