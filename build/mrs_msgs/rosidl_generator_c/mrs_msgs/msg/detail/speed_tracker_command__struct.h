// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/SpeedTrackerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/speed_tracker_command.h"


#ifndef MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__STRUCT_H_

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
// Member 'velocity'
// Member 'acceleration'
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SpeedTrackerCommand in the package mrs_msgs.
/**
  * contains the frame_id = your reference frame of choice
 */
typedef struct mrs_msgs__msg__SpeedTrackerCommand
{
  std_msgs__msg__Header header;
  /// desired velocity, optional
  geometry_msgs__msg__Vector3 velocity;
  /// desired acceleration, optional
  geometry_msgs__msg__Vector3 acceleration;
  /// desired force, optional
  geometry_msgs__msg__Vector3 force;
  /// z coordinate
  double z;
  /// desired heading and its rate, optional
  /// heading is "the azimuth of the body-x axis of the drone, a.k.a, the aircraft's front"
  double heading;
  double heading_rate;
  /// set to "true" if you want to control the state
  bool use_velocity;
  bool use_acceleration;
  bool use_force;
  bool use_z;
  bool use_heading;
  bool use_heading_rate;
} mrs_msgs__msg__SpeedTrackerCommand;

// Struct for a sequence of mrs_msgs__msg__SpeedTrackerCommand.
typedef struct mrs_msgs__msg__SpeedTrackerCommand__Sequence
{
  mrs_msgs__msg__SpeedTrackerCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__SpeedTrackerCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__STRUCT_H_
