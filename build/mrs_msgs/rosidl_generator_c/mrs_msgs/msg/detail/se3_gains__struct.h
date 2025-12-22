// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Se3Gains.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/se3_gains.h"


#ifndef MRS_MSGS__MSG__DETAIL__SE3_GAINS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__SE3_GAINS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Se3Gains in the package mrs_msgs.
/**
  * This a set of gains for the SE(3) controller.
 */
typedef struct mrs_msgs__msg__Se3Gains
{
  /// Horizontal position gain.
  double kpxy;
  /// Horizontal velocity gain.
  double kvxy;
  /// Horizontal acceleration gain.
  double kaxy;
  /// Vertical position gain.
  double kpz;
  /// Vertical velocity gain.
  double kvz;
  /// Vertical acceleration gain.
  double kaz;
  /// Body disturbance gain.
  double kibxy;
  /// Body disturbance estimator limit ().
  double kibxy_lim;
  /// World disturbance gain.
  double kiwxy;
  /// World disturbance estimator limit  ().
  double kiwxy_lim;
  /// Roll+pitch attitude gain.
  double kqrp;
  /// Yaw attitude gain.
  double kqy;
  /// Mass estimator gain.
  double km;
  /// Mass estimator limit ().
  double km_lim;
} mrs_msgs__msg__Se3Gains;

// Struct for a sequence of mrs_msgs__msg__Se3Gains.
typedef struct mrs_msgs__msg__Se3Gains__Sequence
{
  mrs_msgs__msg__Se3Gains * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Se3Gains__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__SE3_GAINS__STRUCT_H_
