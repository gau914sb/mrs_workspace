// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Satellite.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/satellite.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Satellite in the package mrs_modules_msgs.
/**
  * Satellite data structure used in GPGSV messages
 */
typedef struct mrs_modules_msgs__msg__Satellite
{
  /// PRN number of the satellite
  /// GPS = 1..32
  /// SBAS = 33..64
  /// GLO = 65..96
  uint8_t prn;
  /// Elevation, degrees. Maximum 90
  uint8_t elevation;
  /// Azimuth, True North degrees. [0, 359]
  uint16_t azimuth;
  /// Signal to noise ratio, 0-99 dB. -1 when null in NMEA sentence (not tracking)
  int8_t snr;
} mrs_modules_msgs__msg__Satellite;

// Struct for a sequence of mrs_modules_msgs__msg__Satellite.
typedef struct mrs_modules_msgs__msg__Satellite__Sequence
{
  mrs_modules_msgs__msg__Satellite * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Satellite__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__STRUCT_H_
