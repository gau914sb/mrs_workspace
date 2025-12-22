// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/UavStatusShort.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_status_short.h"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/UavStatusShort in the package mrs_msgs.
typedef struct mrs_msgs__msg__UavStatusShort
{
  float odom_hz;
  int16_t odom_color;
  float odom_x;
  float odom_y;
  float odom_z;
  float odom_hdg;
  float cmd_x;
  float cmd_y;
  float cmd_z;
  float cmd_hdg;
} mrs_msgs__msg__UavStatusShort;

// Struct for a sequence of mrs_msgs__msg__UavStatusShort.
typedef struct mrs_msgs__msg__UavStatusShort__Sequence
{
  mrs_msgs__msg__UavStatusShort * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__UavStatusShort__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__STRUCT_H_
