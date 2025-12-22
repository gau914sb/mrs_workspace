// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/RtkFixType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/rtk_fix_type.h"


#ifndef MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'RTK_FIX'.
enum
{
  mrs_msgs__msg__RtkFixType__RTK_FIX = 5
};

/// Constant 'RTK_FLOAT'.
enum
{
  mrs_msgs__msg__RtkFixType__RTK_FLOAT = 4
};

/// Constant 'UNKNOWN'.
enum
{
  mrs_msgs__msg__RtkFixType__UNKNOWN = 3
};

/// Constant 'DGPS'.
enum
{
  mrs_msgs__msg__RtkFixType__DGPS = 2
};

/// Constant 'SPS'.
enum
{
  mrs_msgs__msg__RtkFixType__SPS = 1
};

/// Constant 'NO_FIX'.
enum
{
  mrs_msgs__msg__RtkFixType__NO_FIX = 0
};

/// Struct defined in msg/RtkFixType in the package mrs_msgs.
typedef struct mrs_msgs__msg__RtkFixType
{
  uint8_t fix_type;
} mrs_msgs__msg__RtkFixType;

// Struct for a sequence of mrs_msgs__msg__RtkFixType.
typedef struct mrs_msgs__msg__RtkFixType__Sequence
{
  mrs_msgs__msg__RtkFixType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__RtkFixType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__STRUCT_H_
