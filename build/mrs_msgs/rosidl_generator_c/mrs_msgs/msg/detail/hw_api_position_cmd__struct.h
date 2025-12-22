// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiPositionCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_position_cmd.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_POSITION_CMD__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_POSITION_CMD__STRUCT_H_

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

/// Struct defined in msg/HwApiPositionCmd in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiPositionCmd
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point position;
  double heading;
} mrs_msgs__msg__HwApiPositionCmd;

// Struct for a sequence of mrs_msgs__msg__HwApiPositionCmd.
typedef struct mrs_msgs__msg__HwApiPositionCmd__Sequence
{
  mrs_msgs__msg__HwApiPositionCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiPositionCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_POSITION_CMD__STRUCT_H_
