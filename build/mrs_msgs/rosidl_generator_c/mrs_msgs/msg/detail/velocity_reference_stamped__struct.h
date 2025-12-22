// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/VelocityReferenceStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/velocity_reference_stamped.h"


#ifndef MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__STRUCT_H_

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
// Member 'reference'
#include "mrs_msgs/msg/detail/velocity_reference__struct.h"

/// Struct defined in msg/VelocityReferenceStamped in the package mrs_msgs.
/**
  * contains the frame_id = your reference frame of choice
 */
typedef struct mrs_msgs__msg__VelocityReferenceStamped
{
  std_msgs__msg__Header header;
  mrs_msgs__msg__VelocityReference reference;
} mrs_msgs__msg__VelocityReferenceStamped;

// Struct for a sequence of mrs_msgs__msg__VelocityReferenceStamped.
typedef struct mrs_msgs__msg__VelocityReferenceStamped__Sequence
{
  mrs_msgs__msg__VelocityReferenceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__VelocityReferenceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__STRUCT_H_
