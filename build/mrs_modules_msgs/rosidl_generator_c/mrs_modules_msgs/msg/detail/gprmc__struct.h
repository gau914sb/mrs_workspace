// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gprmc.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MODE_INDICATIOR_AUTONOMOUS'.
static const char * const mrs_modules_msgs__msg__Gprmc__MODE_INDICATIOR_AUTONOMOUS = "a";

/// Constant 'MODE_INDICATIOR_DIFFERENTIAL'.
static const char * const mrs_modules_msgs__msg__Gprmc__MODE_INDICATIOR_DIFFERENTIAL = "d";

/// Constant 'MODE_INDICATIOR_ESTIMATED'.
static const char * const mrs_modules_msgs__msg__Gprmc__MODE_INDICATIOR_ESTIMATED = "e";

/// Constant 'MODE_INDICATIOR_MANUAL'.
static const char * const mrs_modules_msgs__msg__Gprmc__MODE_INDICATIOR_MANUAL = "m";

/// Constant 'MODE_INDICATIOR_DATA_NOT_VALID'.
static const char * const mrs_modules_msgs__msg__Gprmc__MODE_INDICATIOR_DATA_NOT_VALID = "n";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message_id'
// Member 'latitude_dir'
// Member 'longitude_dir'
// Member 'date'
// Member 'mag_var_direction'
// Member 'mode_indicator'
#include "rosidl_runtime_c/string.h"
// Member 'position_status'
#include "mrs_modules_msgs/msg/detail/gps_status__struct.h"

/// Struct defined in msg/Gprmc in the package mrs_modules_msgs.
/**
  * Message from GPRMC NMEA String
 */
typedef struct mrs_modules_msgs__msg__Gprmc
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  double utc_seconds;
  mrs_modules_msgs__msg__GpsStatus position_status;
  double latitude;
  double longitude;
  rosidl_runtime_c__String latitude_dir;
  rosidl_runtime_c__String longitude_dir;
  /// in metres per second
  float speed;
  float track;
  rosidl_runtime_c__String date;
  float mag_var;
  rosidl_runtime_c__String mag_var_direction;
  rosidl_runtime_c__String mode_indicator;
} mrs_modules_msgs__msg__Gprmc;

// Struct for a sequence of mrs_modules_msgs__msg__Gprmc.
typedef struct mrs_modules_msgs__msg__Gprmc__Sequence
{
  mrs_modules_msgs__msg__Gprmc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Gprmc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__STRUCT_H_
