// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/bestpos.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__STRUCT_H_

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
// Member 'solution_status'
// Member 'position_type'
// Member 'datum_id'
// Member 'base_station_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Bestpos in the package mrs_modules_msgs.
/**
  * This is modified version from Novatel
  * For original Novatel see: http://docs.ros.org/jade/api/novatel_msgs/html/msg/BESTPOS.html
  * For Tersus see section 3.1.3 BESTPOS in https://www.tersus-gnss.com/assets/upload/file/20180608173259349.pdf
  * --------------------------------------------------------------------------------------
 */
typedef struct mrs_modules_msgs__msg__Bestpos
{
  std_msgs__msg__Header header;
  /// message 42
  mrs_modules_msgs__msg__TersusMessageHeader tersus_msg_header;
  rosidl_runtime_c__String solution_status;
  rosidl_runtime_c__String position_type;
  /// (degrees)
  double latitude;
  /// (degrees)
  double longitude;
  /// height above mean sea level (meters)
  double height;
  /// undulation - the relationship between the geoid and the ellipsoid (m) of the chosen datum
  float undulation;
  rosidl_runtime_c__String datum_id;
  /// latitude standard deviation (m)
  float latitude_std;
  /// longitude standard deviation (m)
  float longitude_std;
  /// height standard deviation (m)
  float height_std;
  /// base station id
  rosidl_runtime_c__String base_station_id;
  /// differential age in seconds
  float diff_age;
  /// solution age in seconds
  float solution_age;
  /// number of satellites tracked
  uint8_t num_satellites_tracked;
  /// number of satellites used in solution
  uint8_t num_satellites_used_in_solution;
  /// number of satellites with l1/e1/b1 signals used in solution
  uint8_t num_gps_and_glonass_l1_used_in_solution;
  /// number of satellites with multi-frequency signals used in solution
  uint8_t num_gps_and_glonass_l1_and_l2_used_in_solution;
} mrs_modules_msgs__msg__Bestpos;

// Struct for a sequence of mrs_modules_msgs__msg__Bestpos.
typedef struct mrs_modules_msgs__msg__Bestpos__Sequence
{
  mrs_modules_msgs__msg__Bestpos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Bestpos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__STRUCT_H_
