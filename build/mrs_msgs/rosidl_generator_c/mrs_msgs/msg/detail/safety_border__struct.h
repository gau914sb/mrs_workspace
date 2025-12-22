// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/SafetyBorder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/safety_border.h"


#ifndef MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'prism'
#include "mrs_msgs/msg/detail/prism__struct.h"

/// Struct defined in msg/SafetyBorder in the package mrs_msgs.
typedef struct mrs_msgs__msg__SafetyBorder
{
  mrs_msgs__msg__Prism prism;
  /// when true, if there are some obstacles loaded, the new safety zone will keep them, otherwise they will be removed
  bool keep_obstacles;
  /// when true, the safety border centroid will be used to update the world origin
  bool update_world_origin;
} mrs_msgs__msg__SafetyBorder;

// Struct for a sequence of mrs_msgs__msg__SafetyBorder.
typedef struct mrs_msgs__msg__SafetyBorder__Sequence
{
  mrs_msgs__msg__SafetyBorder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__SafetyBorder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__STRUCT_H_
