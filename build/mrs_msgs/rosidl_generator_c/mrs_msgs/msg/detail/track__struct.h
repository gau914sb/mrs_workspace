// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Track.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/track.h"


#ifndef MRS_MSGS__MSG__DETAIL__TRACK__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__TRACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Track in the package mrs_msgs.
/**
  * This message represents an object being tracked in a three-dimensional
  * free space by a multi-target tracking algorithm.
  * Each tracked objects has a unique and persistent track ID,
  * a position, orientation and velocity estimate with uncertainties represented
  * by covariance matrices.
 */
typedef struct mrs_msgs__msg__Track
{
  /// An ID of this track that is unique and persistent for the tracked object.
  uint64_t id;
  /// The rest of this message contains the state estimate of the track,
  /// including its position, orientation, and velocity and their respective
  /// uncertainty covariance matrices. These are all expressed in a coordinate
  /// frame, that is given in the header of the meta-message, containing this message.
  /// Three-dimensional position of the track.
  geometry_msgs__msg__Point position;
  /// Row-major representation of the 3x3 matrix of position covariance.
  /// In order, the parameters are:
  /// (x, y, z)
  double position_covariance[9];
  /// Three-dimensional orientation of the track.
  geometry_msgs__msg__Quaternion orientation;
  /// Row-major representation of the 3x3 matrix of orientation covariance.
  /// The orientation parameters use a fixed-axis representation.
  /// In order, the parameters are:
  /// (rotation about X axis, rotation about Y axis, rotation about Z axis)
  double orientation_covariance[9];
  /// Velocity of the track in free space.
  geometry_msgs__msg__Vector3 velocity;
  /// Row-major representation of the 3x3 matrix of velocity covariance.
  /// In order, the parameters are:
  /// (dx/dt, dy/dt, dz/dt)
  double velocity_covariance[9];
} mrs_msgs__msg__Track;

// Struct for a sequence of mrs_msgs__msg__Track.
typedef struct mrs_msgs__msg__Track__Sequence
{
  mrs_msgs__msg__Track * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Track__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__TRACK__STRUCT_H_
