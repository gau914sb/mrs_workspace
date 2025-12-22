// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/sphere.h"


#ifndef MRS_MSGS__MSG__DETAIL__SPHERE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__SPHERE__STRUCT_H_

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
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Sphere in the package mrs_msgs.
typedef struct mrs_msgs__msg__Sphere
{
  std_msgs__msg__Header header;
  /// position of the sphere's center in the coordinate frame, specified in the header
  geometry_msgs__msg__Point position;
  /// radius of the sphere
  double radius;
} mrs_msgs__msg__Sphere;

// Struct for a sequence of mrs_msgs__msg__Sphere.
typedef struct mrs_msgs__msg__Sphere__Sequence
{
  mrs_msgs__msg__Sphere * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Sphere__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__SPHERE__STRUCT_H_
