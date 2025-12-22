// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/PathReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path_reference.h"


#ifndef MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__STRUCT_H_

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

/// Struct defined in msg/PathReference in the package mrs_msgs.
/**
  * The Path reference
 */
typedef struct mrs_msgs__msg__PathReference
{
  std_msgs__msg__Header header;
  /// True if the heading part should be tracked, otherwise the tracker should maintain the current heading.
  bool use_heading;
  /// True if a planner should start being tracked immediately after receiving it.
  /// Beware the header time stamp matters in this case.
  bool fly_now;
  /// True if the path should be looped.
  bool loop;
  /// The list of points in the path.
  mrs_msgs__msg__Reference__Sequence points;
} mrs_msgs__msg__PathReference;

// Struct for a sequence of mrs_msgs__msg__PathReference.
typedef struct mrs_msgs__msg__PathReference__Sequence
{
  mrs_msgs__msg__PathReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__PathReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__STRUCT_H_
