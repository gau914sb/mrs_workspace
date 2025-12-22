// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/ParachuteDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/parachute_diagnostics.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__STRUCT_H_

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

/// Struct defined in msg/ParachuteDiagnostics in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__ParachuteDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  bool alive;
  bool armed;
  bool fired;
} mrs_modules_msgs__msg__ParachuteDiagnostics;

// Struct for a sequence of mrs_modules_msgs__msg__ParachuteDiagnostics.
typedef struct mrs_modules_msgs__msg__ParachuteDiagnostics__Sequence
{
  mrs_modules_msgs__msg__ParachuteDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__ParachuteDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__STRUCT_H_
