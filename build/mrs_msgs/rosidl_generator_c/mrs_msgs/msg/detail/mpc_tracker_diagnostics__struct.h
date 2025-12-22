// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/MpcTrackerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/mpc_tracker_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__STRUCT_H_

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
// Member 'uav_name'
// Member 'avoidance_active_uavs'
#include "rosidl_runtime_c/string.h"
// Member 'setpoint'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/MpcTrackerDiagnostics in the package mrs_msgs.
typedef struct mrs_msgs__msg__MpcTrackerDiagnostics
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String uav_name;
  bool active;
  bool collision_avoidance_active;
  bool avoiding_collision;
  rosidl_runtime_c__String__Sequence avoidance_active_uavs;
  geometry_msgs__msg__Pose setpoint;
} mrs_msgs__msg__MpcTrackerDiagnostics;

// Struct for a sequence of mrs_msgs__msg__MpcTrackerDiagnostics.
typedef struct mrs_msgs__msg__MpcTrackerDiagnostics__Sequence
{
  mrs_msgs__msg__MpcTrackerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__MpcTrackerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__STRUCT_H_
