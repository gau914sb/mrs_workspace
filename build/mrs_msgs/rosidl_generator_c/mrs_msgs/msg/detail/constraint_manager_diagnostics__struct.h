// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ConstraintManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/constraint_manager_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__CONSTRAINT_MANAGER_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__CONSTRAINT_MANAGER_DIAGNOSTICS__STRUCT_H_

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
#include "mrs_msgs/msg/detail/dynamics_constraints__struct.h"

/// Struct defined in msg/ConstraintManagerDiagnostics in the package mrs_msgs.
/**
  * The diagnostics of the ConstraintManager.
 */
typedef struct mrs_msgs__msg__ConstraintManagerDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  /// The list of all loaded constraints.
  rosidl_runtime_c__String__Sequence loaded;
  /// The list of constraints which are available for the currently active state estimator.
  rosidl_runtime_c__String__Sequence available;
  /// The name of the current constraints.
  rosidl_runtime_c__String current_name;
  /// The particular values of the current constraints.
  /// Beware, those might be overloaded by the current controller.
  /// Subscribe to "control_manager/current_constraints" for the
  /// true values.
  mrs_msgs__msg__DynamicsConstraints current_values;
} mrs_msgs__msg__ConstraintManagerDiagnostics;

// Struct for a sequence of mrs_msgs__msg__ConstraintManagerDiagnostics.
typedef struct mrs_msgs__msg__ConstraintManagerDiagnostics__Sequence
{
  mrs_msgs__msg__ConstraintManagerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ConstraintManagerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__CONSTRAINT_MANAGER_DIAGNOSTICS__STRUCT_H_
