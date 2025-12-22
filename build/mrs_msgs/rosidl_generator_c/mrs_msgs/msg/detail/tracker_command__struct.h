// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/TrackerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/tracker_command.h"


#ifndef MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__STRUCT_H_

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
// Member 'position'
// Member 'attitude_rate'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
// Member 'snap'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'full_state_prediction'
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/TrackerCommand in the package mrs_msgs.
/**
  * This represents the output of the currently active Tracker (mrs_uav_manager::Tracker).
  * This message is returned from a tracker by means of the update() function, called by the mrs_uav_manager::ControlManager.
 */
typedef struct mrs_msgs__msg__TrackerCommand
{
  std_msgs__msg__Header header;
  /// The desired position.
  geometry_msgs__msg__Point position;
  /// The desired velocity.
  geometry_msgs__msg__Vector3 velocity;
  /// The desired acceleration.
  geometry_msgs__msg__Vector3 acceleration;
  /// The desired jerk.
  geometry_msgs__msg__Vector3 jerk;
  /// The desired snap.
  geometry_msgs__msg__Vector3 snap;
  /// all-state future prediction
  mrs_msgs__msg__MpcPredictionFullState full_state_prediction;
  /// The desired orientation and attitude rate.
  /// It is mutually exclusive to heading+heading_rate.
  geometry_msgs__msg__Quaternion orientation;
  geometry_msgs__msg__Point attitude_rate;
  /// when used, it will override the throttle output of the controller
  double throttle;
  /// The desired heading and heading rate.
  /// It is mutually exclusive to orientation+attitude_rate.
  double heading;
  double heading_rate;
  double heading_acceleration;
  double heading_jerk;
  /// Whether the controller should mute its position feedback.
  /// Useful, e.g., during takeoff or in situations where sudden control
  /// error is expected but not immediately required to be fixed.
  bool disable_position_gains;
  /// Whether the controller should disable its antiwindups
  bool disable_antiwindups;
  /// Flags defining whether the XY or Z position reference was filled in.
  /// If not, the controllers should pay no attention to it and to the corresponding control error.
  uint8_t use_position_horizontal;
  uint8_t use_position_vertical;
  /// Flags defining whether the XY or Z velocity reference was filled in.
  /// If not, the controllers should pay no attention to it and to the corresponding control error.
  uint8_t use_velocity_horizontal;
  uint8_t use_velocity_vertical;
  /// Flags defining which references were filled in.
  /// If not, the controllers should pay no attention to them and to the corresponding control errors.
  uint8_t use_acceleration;
  uint8_t use_jerk;
  uint8_t use_snap;
  uint8_t use_attitude_rate;
  uint8_t use_heading;
  uint8_t use_heading_rate;
  uint8_t use_heading_acceleration;
  uint8_t use_heading_jerk;
  uint8_t use_orientation;
  uint8_t use_throttle;
  uint8_t use_full_state_prediction;
} mrs_msgs__msg__TrackerCommand;

// Struct for a sequence of mrs_msgs__msg__TrackerCommand.
typedef struct mrs_msgs__msg__TrackerCommand__Sequence
{
  mrs_msgs__msg__TrackerCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__TrackerCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__STRUCT_H_
