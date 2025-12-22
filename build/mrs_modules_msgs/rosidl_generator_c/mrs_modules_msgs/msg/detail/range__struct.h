// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Range.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/range.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE__STRUCT_H_

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
// Member 'tersus_msg_header'
#include "mrs_modules_msgs/msg/detail/tersus_message_header__struct.h"
// Member 'info'
#include "mrs_modules_msgs/msg/detail/range_information__struct.h"

/// Struct defined in msg/Range in the package mrs_modules_msgs.
/**
  * Satellite Range information from Tersus receiver
 */
typedef struct mrs_modules_msgs__msg__Range
{
  std_msgs__msg__Header header;
  mrs_modules_msgs__msg__TersusMessageHeader tersus_msg_header;
  /// number of observations
  int32_t numb_of_observ;
  /// range information for the observed
  mrs_modules_msgs__msg__RangeInformation__Sequence info;
} mrs_modules_msgs__msg__Range;

// Struct for a sequence of mrs_modules_msgs__msg__Range.
typedef struct mrs_modules_msgs__msg__Range__Sequence
{
  mrs_modules_msgs__msg__Range * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Range__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE__STRUCT_H_
