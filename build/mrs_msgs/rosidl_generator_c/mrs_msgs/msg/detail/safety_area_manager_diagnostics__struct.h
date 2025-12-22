// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/SafetyAreaManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/safety_area_manager_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__STRUCT_H_

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
// Member 'uav_name'
#include "rosidl_runtime_c/string.h"
// Member 'world_origin'
#include "mrs_msgs/msg/detail/world_origin__struct.h"
// Member 'border'
// Member 'obstacles'
#include "mrs_msgs/msg/detail/prism__struct.h"

/// Struct defined in msg/SafetyAreaManagerDiagnostics in the package mrs_msgs.
typedef struct mrs_msgs__msg__SafetyAreaManagerDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String uav_name;
  mrs_msgs__msg__WorldOrigin world_origin;
  bool safety_area_enabled;
  bool position_valid_2d;
  bool position_valid_3d;
  mrs_msgs__msg__Prism border;
  bool obstacles_present;
  mrs_msgs__msg__Prism__Sequence obstacles;
} mrs_msgs__msg__SafetyAreaManagerDiagnostics;

// Struct for a sequence of mrs_msgs__msg__SafetyAreaManagerDiagnostics.
typedef struct mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence
{
  mrs_msgs__msg__SafetyAreaManagerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__SafetyAreaManagerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__STRUCT_H_
