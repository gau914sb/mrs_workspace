// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiAttitudeRateCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_attitude_rate_cmd.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'body_rate'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/HwApiAttitudeRateCmd in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiAttitudeRateCmd
{
  builtin_interfaces__msg__Time stamp;
  /// angular rates in the Front-Left-Up body frame
  geometry_msgs__msg__Vector3 body_rate;
  double throttle;
} mrs_msgs__msg__HwApiAttitudeRateCmd;

// Struct for a sequence of mrs_msgs__msg__HwApiAttitudeRateCmd.
typedef struct mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence
{
  mrs_msgs__msg__HwApiAttitudeRateCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiAttitudeRateCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__STRUCT_H_
