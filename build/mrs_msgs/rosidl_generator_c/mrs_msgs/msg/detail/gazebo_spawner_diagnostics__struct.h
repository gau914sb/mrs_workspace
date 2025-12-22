// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gazebo_spawner_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'active_vehicles'
// Member 'queued_vehicles'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GazeboSpawnerDiagnostics in the package mrs_msgs.
typedef struct mrs_msgs__msg__GazeboSpawnerDiagnostics
{
  bool spawn_called;
  bool processing;
  rosidl_runtime_c__String__Sequence active_vehicles;
  rosidl_runtime_c__String__Sequence queued_vehicles;
  uint8_t queued_processes;
} mrs_msgs__msg__GazeboSpawnerDiagnostics;

// Struct for a sequence of mrs_msgs__msg__GazeboSpawnerDiagnostics.
typedef struct mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence
{
  mrs_msgs__msg__GazeboSpawnerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__GazeboSpawnerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__STRUCT_H_
