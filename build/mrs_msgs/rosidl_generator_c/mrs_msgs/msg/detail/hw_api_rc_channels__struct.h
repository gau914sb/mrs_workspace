// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiRcChannels.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_rc_channels.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__STRUCT_H_

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
// Member 'channels'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/HwApiRcChannels in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiRcChannels
{
  builtin_interfaces__msg__Time stamp;
  /// channels on %/100
  rosidl_runtime_c__double__Sequence channels;
} mrs_msgs__msg__HwApiRcChannels;

// Struct for a sequence of mrs_msgs__msg__HwApiRcChannels.
typedef struct mrs_msgs__msg__HwApiRcChannels__Sequence
{
  mrs_msgs__msg__HwApiRcChannels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiRcChannels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__STRUCT_H_
