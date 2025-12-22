// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/VelocityReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/velocity_reference.h"


#ifndef MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/VelocityReference in the package mrs_msgs.
/**
  * desired velocity
 */
typedef struct mrs_msgs__msg__VelocityReference
{
  geometry_msgs__msg__Vector3 velocity;
  /// altitude
  double altitude;
  /// desired heading and its rate, optional
  /// heading is "the azimuth of the body-x axis of the drone, a.k.a, the aircraft's front"
  double heading;
  double heading_rate;
  /// overrides vertical velocity
  bool use_altitude;
  bool use_heading;
  /// overrides heading
  bool use_heading_rate;
} mrs_msgs__msg__VelocityReference;

// Struct for a sequence of mrs_msgs__msg__VelocityReference.
typedef struct mrs_msgs__msg__VelocityReference__Sequence
{
  mrs_msgs__msg__VelocityReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__VelocityReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__STRUCT_H_
