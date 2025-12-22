// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/OctomapPlannerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/octomap_planner_diagnostics.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__STRUCT_H_

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
// Member 'desired_reference'
// Member 'best_goal'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/OctomapPlannerDiagnostics in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__OctomapPlannerDiagnostics
{
  std_msgs__msg__Header header;
  bool idle;
  geometry_msgs__msg__Point desired_reference;
  geometry_msgs__msg__Point best_goal;
} mrs_modules_msgs__msg__OctomapPlannerDiagnostics;

// Struct for a sequence of mrs_modules_msgs__msg__OctomapPlannerDiagnostics.
typedef struct mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence
{
  mrs_modules_msgs__msg__OctomapPlannerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__OctomapPlannerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__STRUCT_H_
