// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/TrajectoryReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/trajectory_reference.h"


#ifndef MRS_MSGS__MSG__DETAIL__TRAJECTORY_REFERENCE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__TRAJECTORY_REFERENCE__STRUCT_H_

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
// Member 'points'
#include "mrs_msgs/msg/detail/reference__struct.h"

/// Struct defined in msg/TrajectoryReference in the package mrs_msgs.
/**
  * The Trajectory reference that can be supplied to mrs_uav_manager::ControlManager.
 */
typedef struct mrs_msgs__msg__TrajectoryReference
{
  std_msgs__msg__Header header;
  /// uniquely identifies the user input
  int64_t input_id;
  /// True if the heading part should be tracked, otherwise the tracker should maintain the current heading.
  bool use_heading;
  /// True if the trajectory should start being tracked immediately after receiving it.
  /// Beware the header time stamp matters in this case.
  bool fly_now;
  /// True if the trajectory should be looped.
  bool loop;
  /// The time difference between the trajectory samples.
  /// It falls back to 0.2 s if left unset.
  double dt;
  /// The list of points in the trajectory, spaced by the dt.
  mrs_msgs__msg__Reference__Sequence points;
} mrs_msgs__msg__TrajectoryReference;

// Struct for a sequence of mrs_msgs__msg__TrajectoryReference.
typedef struct mrs_msgs__msg__TrajectoryReference__Sequence
{
  mrs_msgs__msg__TrajectoryReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__TrajectoryReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__TRAJECTORY_REFERENCE__STRUCT_H_
