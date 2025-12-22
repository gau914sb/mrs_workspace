// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiAltitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_altitude.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/HwApiAltitude in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiAltitude
{
  builtin_interfaces__msg__Time stamp;
  /// Above Mean Sea Level
  double amsl;
} mrs_msgs__msg__HwApiAltitude;

// Struct for a sequence of mrs_msgs__msg__HwApiAltitude.
typedef struct mrs_msgs__msg__HwApiAltitude__Sequence
{
  mrs_msgs__msg__HwApiAltitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiAltitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__STRUCT_H_
