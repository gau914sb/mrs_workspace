// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/BacaProtocol.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/baca_protocol.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__STRUCT_H_

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

/// Struct defined in msg/BacaProtocol in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__BacaProtocol
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__uint8__Sequence payload;
  /// useful for debugging
  uint8_t checksum_calculated;
  /// useful for debugging
  uint8_t checksum_received;
  bool checksum_correct;
} mrs_modules_msgs__msg__BacaProtocol;

// Struct for a sequence of mrs_modules_msgs__msg__BacaProtocol.
typedef struct mrs_modules_msgs__msg__BacaProtocol__Sequence
{
  mrs_modules_msgs__msg__BacaProtocol * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__BacaProtocol__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__STRUCT_H_
