// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgst.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGST__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGST__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Gpgst in the package mrs_modules_msgs.
/**
  * Message from GPGST NMEA String
 */
typedef struct mrs_modules_msgs__msg__Gpgst
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  double utc;
  double rms;
  double smjr_std;
  double smnr_std;
  double orient;
  double lat_std;
  double lon_std;
  double alt_std;
} mrs_modules_msgs__msg__Gpgst;

// Struct for a sequence of mrs_modules_msgs__msg__Gpgst.
typedef struct mrs_modules_msgs__msg__Gpgst__Sequence
{
  mrs_modules_msgs__msg__Gpgst * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Gpgst__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGST__STRUCT_H_
