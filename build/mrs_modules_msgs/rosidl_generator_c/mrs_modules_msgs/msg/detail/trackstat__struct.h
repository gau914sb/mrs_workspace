// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Trackstat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/trackstat.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__STRUCT_H_

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
// Member 'solution_status'
// Member 'position_type'
#include "rosidl_runtime_c/string.h"
// Member 'channels'
#include "mrs_modules_msgs/msg/detail/trackstat_channel__struct.h"

/// Struct defined in msg/Trackstat in the package mrs_modules_msgs.
/**
  * Channel tracking status information for each of the receiver parallel channels
 */
typedef struct mrs_modules_msgs__msg__Trackstat
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String solution_status;
  rosidl_runtime_c__String position_type;
  /// Tracking elevation cutff-off angle
  float cutoff;
  mrs_modules_msgs__msg__TrackstatChannel__Sequence channels;
} mrs_modules_msgs__msg__Trackstat;

// Struct for a sequence of mrs_modules_msgs__msg__Trackstat.
typedef struct mrs_modules_msgs__msg__Trackstat__Sequence
{
  mrs_modules_msgs__msg__Trackstat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Trackstat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__STRUCT_H_
