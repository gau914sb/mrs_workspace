// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/PoseWithSize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/pose_with_size.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseWithSize in the package mrs_modules_msgs.
/**
  * pose with width and height, used for deleting obstacles in a specific bounding box
 */
typedef struct mrs_modules_msgs__msg__PoseWithSize
{
  std_msgs__msg__Header header;
  /// center of the bounding box
  geometry_msgs__msg__Pose pose;
  double width;
  double height;
} mrs_modules_msgs__msg__PoseWithSize;

// Struct for a sequence of mrs_modules_msgs__msg__PoseWithSize.
typedef struct mrs_modules_msgs__msg__PoseWithSize__Sequence
{
  mrs_modules_msgs__msg__PoseWithSize * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__PoseWithSize__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__STRUCT_H_
