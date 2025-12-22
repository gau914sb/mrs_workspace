// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/FutureTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/future_trajectory.h"


#ifndef MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__STRUCT_H_

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
// Member 'points'
#include "mrs_msgs/msg/detail/future_point__struct.h"

/// Struct defined in msg/FutureTrajectory in the package mrs_msgs.
typedef struct mrs_msgs__msg__FutureTrajectory
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String uav_name;
  int32_t priority;
  bool collision_avoidance;
  mrs_msgs__msg__FuturePoint__Sequence points;
} mrs_msgs__msg__FutureTrajectory;

// Struct for a sequence of mrs_msgs__msg__FutureTrajectory.
typedef struct mrs_msgs__msg__FutureTrajectory__Sequence
{
  mrs_msgs__msg__FutureTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__FutureTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__STRUCT_H_
