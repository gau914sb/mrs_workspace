// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/GpsStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gps_status.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'GPS_QUALITY_NO_FIX'.
enum
{
  mrs_modules_msgs__msg__GpsStatus__GPS_QUALITY_NO_FIX = 0ul
};

/// Constant 'GPS_QUALITY_SIGLE_POINT'.
enum
{
  mrs_modules_msgs__msg__GpsStatus__GPS_QUALITY_SIGLE_POINT = 1ul
};

/// Constant 'GPS_QUALITY_PSEUDORANGE_DIFFERENTIAL'.
enum
{
  mrs_modules_msgs__msg__GpsStatus__GPS_QUALITY_PSEUDORANGE_DIFFERENTIAL = 2ul
};

/// Constant 'GPS_QUALITY_RTK_FIX'.
enum
{
  mrs_modules_msgs__msg__GpsStatus__GPS_QUALITY_RTK_FIX = 4ul
};

/// Constant 'GPS_QUALITY_RTK_FLOAT'.
enum
{
  mrs_modules_msgs__msg__GpsStatus__GPS_QUALITY_RTK_FLOAT = 5ul
};

/// Struct defined in msg/GpsStatus in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__GpsStatus
{
  uint32_t quality;
} mrs_modules_msgs__msg__GpsStatus;

// Struct for a sequence of mrs_modules_msgs__msg__GpsStatus.
typedef struct mrs_modules_msgs__msg__GpsStatus__Sequence
{
  mrs_modules_msgs__msg__GpsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__GpsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_H_
