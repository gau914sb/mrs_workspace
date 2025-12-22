// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/GpsInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gps_info.h"


#ifndef MRS_MSGS__MSG__DETAIL__GPS_INFO__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__GPS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'GPS_FIX_TYPE_NO_GPS'.
/**
  * GPS_FIX_TYPE enum
  * no gps connected
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_NO_GPS = 0
};

/// Constant 'GPS_FIX_TYPE_NO_FIX'.
/**
  * no position information, gps is connected
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_NO_FIX = 1
};

/// Constant 'GPS_FIX_TYPE_2D_FIX'.
/**
  * 2D position
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_2D_FIX = 2
};

/// Constant 'GPS_FIX_TYPE_3D_FIX'.
/**
  * 3D position
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_3D_FIX = 3
};

/// Constant 'GPS_FIX_TYPE_DGPS'.
/**
  * dgps/sbas aided 3D position
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_DGPS = 4
};

/// Constant 'GPS_FIX_TYPE_RTK_FLOATR'.
/**
  * tk float, 3D position
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_RTK_FLOATR = 5
};

/// Constant 'GPS_FIX_TYPE_RTK_FIXEDR'.
/**
  * tk fixed, 3D position
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_RTK_FIXEDR = 6
};

/// Constant 'GPS_FIX_TYPE_STATIC'.
/**
  * static fixed, typically used for base stations
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_STATIC = 7
};

/// Constant 'GPS_FIX_TYPE_PPP'.
/**
  * ppp, 3D position
 */
enum
{
  mrs_msgs__msg__GpsInfo__GPS_FIX_TYPE_PPP = 8
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/GpsInfo in the package mrs_msgs.
typedef struct mrs_msgs__msg__GpsInfo
{
  builtin_interfaces__msg__Time stamp;
  /// gps fix type
  uint8_t fix_type;
  /// latitude (WGS84, egm96 ellipsoid)
  double lat;
  /// longitude (WGS84, egm96 ellipsoid)
  double lon;
  /// altitude (MSL). positive for up. note that virtually all gps modules provide the msl altitude in addition to the wgs84 altitude.
  float alt;
  /// gps hdop horizontal dilution of position (unitless). if unknown, set to: uint16_max
  uint16_t eph;
  /// gps vdop vertical dilution of position (unitless). if unknown, set to: uint16_max
  uint16_t epv;
  /// gps ground speed. if unknown, set to: uint16_max
  float vel;
  /// course over ground (NOT heading, but direction of movement), 0.0..359.99 degrees. if unknown, set to: uint16_max
  float cog;
  /// number of satellites visible. if unknown, set to 255
  uint8_t satellites_visible;
  /// altitude (above wgs84, egm96 ellipsoid). positive for up.
  float alt_ellipsoid;
  /// position uncertainty. positive for up.
  float h_acc;
  /// altitude uncertainty. positive for up.
  float v_acc;
  /// speed uncertainty. positive for up.
  float vel_acc;
  /// heading / track uncertainty
  float hdg_acc;
  /// yaw in earth frame from north.
  float yaw;
  /// number of dgps satellites
  uint8_t dgps_num_sats;
  /// age of dgps info
  float dgps_age;
  /// distance to the basestation
  float baseline_dist;
} mrs_msgs__msg__GpsInfo;

// Struct for a sequence of mrs_msgs__msg__GpsInfo.
typedef struct mrs_msgs__msg__GpsInfo__Sequence
{
  mrs_msgs__msg__GpsInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__GpsInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__GPS_INFO__STRUCT_H_
