// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgga.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__STRUCT_H_

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
// Member 'message_id'
// Member 'latitude_dir'
// Member 'longitude_dir'
// Member 'altitude_units'
// Member 'undulation_units'
// Member 'station_id'
#include "rosidl_runtime_c/string.h"
// Member 'gps_quality'
#include "mrs_modules_msgs/msg/detail/gps_status__struct.h"

/// Struct defined in msg/Gpgga in the package mrs_modules_msgs.
/**
  * Message from GPGGA NMEA String
 */
typedef struct mrs_modules_msgs__msg__Gpgga
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  /// UTC seconds from midnight
  double utc_seconds;
  double latitude;
  double longitude;
  rosidl_runtime_c__String latitude_dir;
  rosidl_runtime_c__String longitude_dir;
  mrs_modules_msgs__msg__GpsStatus gps_quality;
  uint32_t num_sats;
  float hdop;
  float altitude;
  rosidl_runtime_c__String altitude_units;
  float undulation;
  rosidl_runtime_c__String undulation_units;
  uint32_t diff_age;
  rosidl_runtime_c__String station_id;
} mrs_modules_msgs__msg__Gpgga;

// Struct for a sequence of mrs_modules_msgs__msg__Gpgga.
typedef struct mrs_modules_msgs__msg__Gpgga__Sequence
{
  mrs_modules_msgs__msg__Gpgga * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Gpgga__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__STRUCT_H_
