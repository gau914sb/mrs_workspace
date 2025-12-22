// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gps_fix.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'COVARIANCE_TYPE_UNKNOWN'.
enum
{
  mrs_modules_msgs__msg__GPSFix__COVARIANCE_TYPE_UNKNOWN = 0
};

/// Constant 'COVARIANCE_TYPE_APPROXIMATED'.
enum
{
  mrs_modules_msgs__msg__GPSFix__COVARIANCE_TYPE_APPROXIMATED = 1
};

/// Constant 'COVARIANCE_TYPE_DIAGONAL_KNOWN'.
enum
{
  mrs_modules_msgs__msg__GPSFix__COVARIANCE_TYPE_DIAGONAL_KNOWN = 2
};

/// Constant 'COVARIANCE_TYPE_KNOWN'.
enum
{
  mrs_modules_msgs__msg__GPSFix__COVARIANCE_TYPE_KNOWN = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "mrs_modules_msgs/msg/detail/gps_status__struct.h"

/// Struct defined in msg/GPSFix in the package mrs_modules_msgs.
/**
  * A more complete GPS fix to supplement sensor_msgs/NavSatFix.
  * modified version of http://docs.ros.org/kinetic/api/gps_common/html/msg/GPSFix.html
 */
typedef struct mrs_modules_msgs__msg__GPSFix
{
  std_msgs__msg__Header header;
  /// Satellites used in solution
  /// number of satellites
  uint8_t num_satellites_used_in_solution;
  /// Satellites visible
  uint8_t num_satellites_tracked;
  /// Measurement status
  mrs_modules_msgs__msg__GpsStatus status;
  /// Latitude (degrees). Positive is north of equator; negative is south.
  double latitude;
  /// Longitude (degrees). Positive is east of prime meridian, negative west.
  float longitude;
  /// Altitude (meters). Positive is above reference (e.g., sea level).
  double altitude;
  /// Direction (degrees from north)
  double track;
  /// Ground speed (meters/second)
  double speed;
  /// GPS time
  double time;
  /// Dilution of precision; Xdop<=0 means the value is unknown
  /// Horizontal dilution of precision
  float hdop;
  /// Uncertainty of measurement, 95% confidence
  /// Position covariance defined relative to a tangential plane
  /// through the reported position. The components are East, North, and
  /// Up (ENU), in row-major order.
  double position_covariance[9];
  uint8_t position_covariance_type;
} mrs_modules_msgs__msg__GPSFix;

// Struct for a sequence of mrs_modules_msgs__msg__GPSFix.
typedef struct mrs_modules_msgs__msg__GPSFix__Sequence
{
  mrs_modules_msgs__msg__GPSFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__GPSFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_
