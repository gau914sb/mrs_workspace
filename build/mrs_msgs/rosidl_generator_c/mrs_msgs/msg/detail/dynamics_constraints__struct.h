// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/DynamicsConstraints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/dynamics_constraints.h"


#ifndef MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DynamicsConstraints in the package mrs_msgs.
/**
  * UAV dynamics constraints
 */
typedef struct mrs_msgs__msg__DynamicsConstraints
{
  /// speed: m/s
  /// acceleration: m/s^2
  /// jerk: m/s^3
  /// snap: m/s^4
  /// translational dynamics
  double horizontal_speed;
  double horizontal_acceleration;
  double horizontal_jerk;
  double horizontal_snap;
  double vertical_ascending_speed;
  double vertical_ascending_acceleration;
  double vertical_ascending_jerk;
  double vertical_ascending_snap;
  double vertical_descending_speed;
  double vertical_descending_acceleration;
  double vertical_descending_jerk;
  double vertical_descending_snap;
  /// heading
  double heading_speed;
  double heading_acceleration;
  double heading_jerk;
  double heading_snap;
  /// angular rates: rad/s
  double roll_rate;
  double pitch_rate;
  double yaw_rate;
  /// maximum tilt, rad
  /// max angle between body-3 and world-3 axes
  double tilt;
} mrs_msgs__msg__DynamicsConstraints;

// Struct for a sequence of mrs_msgs__msg__DynamicsConstraints.
typedef struct mrs_msgs__msg__DynamicsConstraints__Sequence
{
  mrs_msgs__msg__DynamicsConstraints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__DynamicsConstraints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__STRUCT_H_
