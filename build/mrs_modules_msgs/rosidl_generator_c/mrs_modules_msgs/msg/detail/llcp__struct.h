// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Llcp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/llcp.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__LLCP__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__LLCP__STRUCT_H_

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
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Llcp in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__Llcp
{
  builtin_interfaces__msg__Time stamp;
  bool checksum_matched;
  uint8_t id;
  rosidl_runtime_c__uint8__Sequence payload;
} mrs_modules_msgs__msg__Llcp;

// Struct for a sequence of mrs_modules_msgs__msg__Llcp.
typedef struct mrs_modules_msgs__msg__Llcp__Sequence
{
  mrs_modules_msgs__msg__Llcp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Llcp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__LLCP__STRUCT_H_
