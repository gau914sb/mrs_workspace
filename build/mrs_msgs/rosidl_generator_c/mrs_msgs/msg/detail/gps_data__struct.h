// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gps_data.h"


#ifndef MRS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GpsData in the package mrs_msgs.
typedef struct mrs_msgs__msg__GpsData
{
  double latitude;
  double longitude;
  double altitude;
  double covariance[9];
} mrs_msgs__msg__GpsData;

// Struct for a sequence of mrs_msgs__msg__GpsData.
typedef struct mrs_msgs__msg__GpsData__Sequence
{
  mrs_msgs__msg__GpsData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__GpsData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_H_
