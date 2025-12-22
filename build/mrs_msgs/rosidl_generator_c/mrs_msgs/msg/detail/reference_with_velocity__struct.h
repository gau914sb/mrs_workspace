// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ReferenceWithVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/reference_with_velocity.h"


#ifndef MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__STRUCT_H_

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
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ReferenceWithVelocity in the package mrs_msgs.
/**
  * This message defines a control reference with a Position+Heading.
 */
typedef struct mrs_msgs__msg__ReferenceWithVelocity
{
  geometry_msgs__msg__Point position;
  /// Heading is atan2() of XY-world projection of the UAV's body X-axis.
  double heading;
  bool enforce_velocity;
  geometry_msgs__msg__Vector3 velocity;
} mrs_msgs__msg__ReferenceWithVelocity;

// Struct for a sequence of mrs_msgs__msg__ReferenceWithVelocity.
typedef struct mrs_msgs__msg__ReferenceWithVelocity__Sequence
{
  mrs_msgs__msg__ReferenceWithVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ReferenceWithVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__STRUCT_H_
