// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/GripperDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gripper_diagnostics.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__STRUCT_H_

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

/// Struct defined in msg/GripperDiagnostics in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__GripperDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  bool gripper_on;
  bool gripping_object;
  bool has_hall;
  int32_t hall1_debug;
  int32_t hall2_debug;
  bool has_ultrasonic;
  int32_t ultrasonic1_debug;
  int32_t ultrasonic2_debug;
  bool has_proximity;
  int32_t proximity1_debug;
  int32_t proximity2_debug;
} mrs_modules_msgs__msg__GripperDiagnostics;

// Struct for a sequence of mrs_modules_msgs__msg__GripperDiagnostics.
typedef struct mrs_modules_msgs__msg__GripperDiagnostics__Sequence
{
  mrs_modules_msgs__msg__GripperDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__GripperDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__STRUCT_H_
