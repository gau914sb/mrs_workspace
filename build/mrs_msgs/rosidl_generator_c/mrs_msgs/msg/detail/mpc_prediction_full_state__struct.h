// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/MpcPredictionFullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/mpc_prediction_full_state.h"


#ifndef MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__STRUCT_H_

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
// Member 'stamps'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'attitude_rate'
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'heading'
// Member 'heading_rate'
// Member 'heading_acceleration'
// Member 'heading_jerk'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MpcPredictionFullState in the package mrs_msgs.
typedef struct mrs_msgs__msg__MpcPredictionFullState
{
  std_msgs__msg__Header header;
  int64_t input_id;
  builtin_interfaces__msg__Time__Sequence stamps;
  geometry_msgs__msg__Point__Sequence position;
  geometry_msgs__msg__Quaternion__Sequence orientation;
  geometry_msgs__msg__Vector3__Sequence attitude_rate;
  geometry_msgs__msg__Vector3__Sequence velocity;
  geometry_msgs__msg__Vector3__Sequence acceleration;
  geometry_msgs__msg__Vector3__Sequence jerk;
  rosidl_runtime_c__double__Sequence heading;
  rosidl_runtime_c__double__Sequence heading_rate;
  rosidl_runtime_c__double__Sequence heading_acceleration;
  rosidl_runtime_c__double__Sequence heading_jerk;
  uint8_t use_orientation;
  uint8_t use_attitude_rate;
} mrs_msgs__msg__MpcPredictionFullState;

// Struct for a sequence of mrs_msgs__msg__MpcPredictionFullState.
typedef struct mrs_msgs__msg__MpcPredictionFullState__Sequence
{
  mrs_msgs__msg__MpcPredictionFullState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__MpcPredictionFullState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__STRUCT_H_
