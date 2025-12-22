// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Time.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/time.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TIME__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__TIME__STRUCT_H_

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
// Member 'clock_status'
// Member 'utc_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Time in the package mrs_modules_msgs.
/**
  * Parsed Best Position or HP pos data from Tersus receiver
 */
typedef struct mrs_modules_msgs__msg__Time
{
  std_msgs__msg__Header header;
  /// Clock model status
  rosidl_runtime_c__String clock_status;
  /// Receiver clock offset, in seconds, from GPS reference time. A positive offset
  /// implies that the receiver clock is ahead of GPS reference time. To derive
  /// GPS reference time, use the following formula:
  /// GPS reference time = receiver time - offset
  double offset;
  /// Standard deviation of the offset
  double offset_std;
  /// The offset of the GPS reference time from UTC time, computed using almanac
  /// parameters. UTC time is GPS reference time plus the current UTC offset plus
  /// the receiver clock offset:
  /// UTC time = GPS reference time + offset + UTC offset
  double utc_offset;
  uint32_t utc_year;
  uint8_t utc_month;
  uint8_t utc_day;
  uint8_t utc_hour;
  uint8_t utc_minute;
  uint32_t utc_millisecond;
  rosidl_runtime_c__String utc_status;
} mrs_modules_msgs__msg__Time;

// Struct for a sequence of mrs_modules_msgs__msg__Time.
typedef struct mrs_modules_msgs__msg__Time__Sequence
{
  mrs_modules_msgs__msg__Time * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Time__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TIME__STRUCT_H_
