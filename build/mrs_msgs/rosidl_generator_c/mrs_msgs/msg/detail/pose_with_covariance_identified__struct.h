// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/PoseWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/pose_with_covariance_identified.h"


#ifndef MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseWithCovarianceIdentified in the package mrs_msgs.
typedef struct mrs_msgs__msg__PoseWithCovarianceIdentified
{
  uint64_t id;
  geometry_msgs__msg__Pose pose;
  double covariance[36];
} mrs_msgs__msg__PoseWithCovarianceIdentified;

// Struct for a sequence of mrs_msgs__msg__PoseWithCovarianceIdentified.
typedef struct mrs_msgs__msg__PoseWithCovarianceIdentified__Sequence
{
  mrs_msgs__msg__PoseWithCovarianceIdentified * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__PoseWithCovarianceIdentified__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__STRUCT_H_
