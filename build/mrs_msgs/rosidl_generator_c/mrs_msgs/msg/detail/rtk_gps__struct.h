// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/RtkGps.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/rtk_gps.h"


#ifndef MRS_MSGS__MSG__DETAIL__RTK_GPS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__RTK_GPS__STRUCT_H_

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
// Member 'gps'
#include "mrs_msgs/msg/detail/gps_data__struct.h"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_status__struct.h"
// Member 'fix_type'
#include "mrs_msgs/msg/detail/rtk_fix_type__struct.h"

/// Struct defined in msg/RtkGps in the package mrs_msgs.
typedef struct mrs_msgs__msg__RtkGps
{
  std_msgs__msg__Header header;
  mrs_msgs__msg__GpsData gps;
  sensor_msgs__msg__NavSatStatus status;
  mrs_msgs__msg__RtkFixType fix_type;
} mrs_msgs__msg__RtkGps;

// Struct for a sequence of mrs_msgs__msg__RtkGps.
typedef struct mrs_msgs__msg__RtkGps__Sequence
{
  mrs_msgs__msg__RtkGps * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__RtkGps__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__RTK_GPS__STRUCT_H_
