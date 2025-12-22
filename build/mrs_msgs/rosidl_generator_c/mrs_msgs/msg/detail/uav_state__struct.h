// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/UavState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_state.h"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__UAV_STATE__STRUCT_H_

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
// Member 'child_frame_id'
// Member 'estimator_horizontal'
// Member 'estimator_vertical'
// Member 'estimator_heading'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
// Member 'acceleration_disturbance'
#include "geometry_msgs/msg/detail/accel__struct.h"

/// Struct defined in msg/UavState in the package mrs_msgs.
typedef struct mrs_msgs__msg__UavState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String child_frame_id;
  /// text names of the used estimators
  rosidl_runtime_c__String estimator_horizontal;
  rosidl_runtime_c__String estimator_vertical;
  rosidl_runtime_c__String estimator_heading;
  /// initiated with 0
  /// increases if any estimator changes frame of reference
  /// or if any estimator is reset
  uint32_t estimator_iteration;
  /// current estimated state
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist velocity;
  geometry_msgs__msg__Accel acceleration;
  geometry_msgs__msg__Accel acceleration_disturbance;
} mrs_msgs__msg__UavState;

// Struct for a sequence of mrs_msgs__msg__UavState.
typedef struct mrs_msgs__msg__UavState__Sequence
{
  mrs_msgs__msg__UavState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__UavState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATE__STRUCT_H_
