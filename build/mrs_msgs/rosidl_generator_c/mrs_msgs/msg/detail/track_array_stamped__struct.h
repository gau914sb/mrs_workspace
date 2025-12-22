// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/TrackArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/track_array_stamped.h"


#ifndef MRS_MSGS__MSG__DETAIL__TRACK_ARRAY_STAMPED__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__TRACK_ARRAY_STAMPED__STRUCT_H_

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
// Member 'tracks'
#include "mrs_msgs/msg/detail/track__struct.h"

/// Struct defined in msg/TrackArrayStamped in the package mrs_msgs.
typedef struct mrs_msgs__msg__TrackArrayStamped
{
  std_msgs__msg__Header header;
  mrs_msgs__msg__Track__Sequence tracks;
} mrs_msgs__msg__TrackArrayStamped;

// Struct for a sequence of mrs_msgs__msg__TrackArrayStamped.
typedef struct mrs_msgs__msg__TrackArrayStamped__Sequence
{
  mrs_msgs__msg__TrackArrayStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__TrackArrayStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__TRACK_ARRAY_STAMPED__STRUCT_H_
