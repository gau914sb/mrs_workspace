// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/UInt16Stamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/u_int16_stamped.h"


#ifndef MRS_MSGS__MSG__DETAIL__U_INT16_STAMPED__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__U_INT16_STAMPED__STRUCT_H_

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

/// Struct defined in msg/UInt16Stamped in the package mrs_msgs.
typedef struct mrs_msgs__msg__UInt16Stamped
{
  std_msgs__msg__Header header;
  uint16_t data;
} mrs_msgs__msg__UInt16Stamped;

// Struct for a sequence of mrs_msgs__msg__UInt16Stamped.
typedef struct mrs_msgs__msg__UInt16Stamped__Sequence
{
  mrs_msgs__msg__UInt16Stamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__UInt16Stamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__U_INT16_STAMPED__STRUCT_H_
