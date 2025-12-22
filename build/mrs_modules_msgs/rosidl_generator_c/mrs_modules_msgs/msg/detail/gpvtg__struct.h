// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpvtg.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__STRUCT_H_

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
// Member 'message_id'
// Member 'track_true_indicator'
// Member 'track_mag_indicator'
// Member 'speed_knots_indicator'
// Member 'speed_kmh_indicator'
// Member 'mode_indicator'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Gpvtg in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__Gpvtg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  double track_true;
  rosidl_runtime_c__String track_true_indicator;
  double track_mag;
  rosidl_runtime_c__String track_mag_indicator;
  double speed_knots;
  rosidl_runtime_c__String speed_knots_indicator;
  double speed_kmh;
  rosidl_runtime_c__String speed_kmh_indicator;
  rosidl_runtime_c__String mode_indicator;
} mrs_modules_msgs__msg__Gpvtg;

// Struct for a sequence of mrs_modules_msgs__msg__Gpvtg.
typedef struct mrs_modules_msgs__msg__Gpvtg__Sequence
{
  mrs_modules_msgs__msg__Gpvtg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Gpvtg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__STRUCT_H_
