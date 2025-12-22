// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/UavManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_manager_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATE_INVALID'.
enum
{
  mrs_msgs__msg__UavManagerDiagnostics__STATE_INVALID = 0
};

/// Constant 'STATE_IDLING'.
enum
{
  mrs_msgs__msg__UavManagerDiagnostics__STATE_IDLING = 1
};

/// Constant 'STATE_TAKING_OFF'.
enum
{
  mrs_msgs__msg__UavManagerDiagnostics__STATE_TAKING_OFF = 2
};

/// Constant 'STATE_FLYING'.
enum
{
  mrs_msgs__msg__UavManagerDiagnostics__STATE_FLYING = 3
};

/// Constant 'STATE_LANDING'.
enum
{
  mrs_msgs__msg__UavManagerDiagnostics__STATE_LANDING = 4
};

/// Constant 'STATE_EMERGENCY'.
enum
{
  mrs_msgs__msg__UavManagerDiagnostics__STATE_EMERGENCY = 5
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'uav_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UavManagerDiagnostics in the package mrs_msgs.
/**
  * This reports on the state of the UavManager
 */
typedef struct mrs_msgs__msg__UavManagerDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String uav_name;
  /// home position latitude and longitude, if available
  double home_latitude;
  double home_longitude;
  /// current latitude and longitude, if available
  double cur_latitude;
  double cur_longitude;
  double flight_time;
  /// current tracker state
  uint8_t state;
} mrs_msgs__msg__UavManagerDiagnostics;

// Struct for a sequence of mrs_msgs__msg__UavManagerDiagnostics.
typedef struct mrs_msgs__msg__UavManagerDiagnostics__Sequence
{
  mrs_msgs__msg__UavManagerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__UavManagerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__STRUCT_H_
