// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiAttitudeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_attitude_cmd.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_CMD__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_CMD__STRUCT_H_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/HwApiAttitudeCmd in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiAttitudeCmd
{
  builtin_interfaces__msg__Time stamp;
  geometry_msgs__msg__Quaternion orientation;
  double throttle;
} mrs_msgs__msg__HwApiAttitudeCmd;

// Struct for a sequence of mrs_msgs__msg__HwApiAttitudeCmd.
typedef struct mrs_msgs__msg__HwApiAttitudeCmd__Sequence
{
  mrs_msgs__msg__HwApiAttitudeCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiAttitudeCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_CMD__STRUCT_H_
