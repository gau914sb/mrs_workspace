// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/tersus_message_header.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'message_name'
// Member 'port_address'
// Member 'time_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TersusMessageHeader in the package mrs_modules_msgs.
/**
  * This is modified version from Novatel
  * For original Novatel see: http://docs.ros.org/jade/api/novatel_msgs/html/msg/CommonHeader.html
  * For Tersus see: https://www.tersus-gnss.com/assets/upload/file/20180608173259349.pdf
  * See section 1.5 in the Tersus manual.
  * --------------------------------------------------------------------------------------
 */
typedef struct mrs_modules_msgs__msg__TersusMessageHeader
{
  /// On the wire, this header is preceeded by three sync bytes,
  /// which are 0xAA 0x44 0x12, and a uint8 which is the header length.
  /// Measurement source, format, response bit.
  rosidl_runtime_c__String message_name;
  rosidl_runtime_c__String port_address;
  uint16_t sequence;
  float idle_time;
  /// Table 1 in the Tersus manual.
  rosidl_runtime_c__String time_status;
  uint16_t gps_week;
  float gps_week_seconds;
  uint32_t receiver_status;
  uint16_t software_version;
} mrs_modules_msgs__msg__TersusMessageHeader;

// Struct for a sequence of mrs_modules_msgs__msg__TersusMessageHeader.
typedef struct mrs_modules_msgs__msg__TersusMessageHeader__Sequence
{
  mrs_modules_msgs__msg__TersusMessageHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__TersusMessageHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__STRUCT_H_
