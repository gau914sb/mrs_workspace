// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path.h"


#ifndef MRS_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__PATH__STRUCT_H_

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

/// Struct defined in msg/Path in the package mrs_msgs.
typedef struct mrs_msgs__msg__Path
{
  std_msgs__msg__Header header;
  int64_t input_id;
  bool use_heading;
  bool fly_now;
  bool stop_at_waypoints;
  bool loop;
  /// how much time is given to the solver (fallback sampling is triggered after that)
  /// used when > 0, value from the config is used otherwise
  double max_execution_time;
  /// how much can the resulting trajectory deviate from the path
  /// used when > 0, value from the config is used otherwise
  double max_deviation_from_path;
  /// when true, the by-default-ON prepanding of the current state is disabled
  bool dont_prepend_current_state;
  /// when true, the heading in the resulting trajectory will be tangential along the trajectory
  bool override_heading_atan2;
  bool override_constraints;
  double override_max_velocity_horizontal;
  double override_max_acceleration_horizontal;
  double override_max_jerk_horizontal;
  double override_max_velocity_vertical;
  double override_max_acceleration_vertical;
  double override_max_jerk_vertical;
  bool relax_heading;
  mrs_msgs__msg__Reference__Sequence points;
} mrs_msgs__msg__Path;

// Struct for a sequence of mrs_msgs__msg__Path.
typedef struct mrs_msgs__msg__Path__Sequence
{
  mrs_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__PATH__STRUCT_H_
