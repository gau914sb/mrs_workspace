// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/UavDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__UAV_DIAGNOSTICS__STRUCT_H_

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
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UavDiagnostics in the package mrs_msgs.
typedef struct mrs_msgs__msg__UavDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String state;
} mrs_msgs__msg__UavDiagnostics;

// Struct for a sequence of mrs_msgs__msg__UavDiagnostics.
typedef struct mrs_msgs__msg__UavDiagnostics__Sequence
{
  mrs_msgs__msg__UavDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__UavDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__UAV_DIAGNOSTICS__STRUCT_H_
