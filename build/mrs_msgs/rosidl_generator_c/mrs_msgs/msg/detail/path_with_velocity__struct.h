// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/PathWithVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path_with_velocity.h"


#ifndef MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__STRUCT_H_

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
#include "mrs_msgs/msg/detail/reference_with_velocity__struct.h"

/// Struct defined in msg/PathWithVelocity in the package mrs_msgs.
typedef struct mrs_msgs__msg__PathWithVelocity
{
  std_msgs__msg__Header header;
  int64_t input_id;
  bool use_heading;
  bool fly_now;
  bool stop_at_waypoints;
  bool loop;
  /// if this is enabled, the slower velocity between the points and these overrides will be chosen
  bool override_constraints;
  double override_max_velocity_horizontal;
  double override_max_acceleration_horizontal;
  double override_max_velocity_vertical;
  double override_max_acceleration_vertical;
  bool relax_heading;
  mrs_msgs__msg__ReferenceWithVelocity__Sequence points;
} mrs_msgs__msg__PathWithVelocity;

// Struct for a sequence of mrs_msgs__msg__PathWithVelocity.
typedef struct mrs_msgs__msg__PathWithVelocity__Sequence
{
  mrs_msgs__msg__PathWithVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__PathWithVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__STRUCT_H_
