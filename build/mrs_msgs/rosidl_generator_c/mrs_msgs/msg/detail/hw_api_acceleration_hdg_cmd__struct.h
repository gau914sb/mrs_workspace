// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiAccelerationHdgCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_acceleration_hdg_cmd.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_CMD__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_CMD__STRUCT_H_

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
// Member 'acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/HwApiAccelerationHdgCmd in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiAccelerationHdgCmd
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 acceleration;
  double heading;
} mrs_msgs__msg__HwApiAccelerationHdgCmd;

// Struct for a sequence of mrs_msgs__msg__HwApiAccelerationHdgCmd.
typedef struct mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence
{
  mrs_msgs__msg__HwApiAccelerationHdgCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiAccelerationHdgCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_CMD__STRUCT_H_
