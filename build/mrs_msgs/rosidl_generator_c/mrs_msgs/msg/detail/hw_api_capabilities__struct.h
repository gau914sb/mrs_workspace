// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/HwApiCapabilities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_capabilities.h"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'api_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HwApiCapabilities in the package mrs_msgs.
typedef struct mrs_msgs__msg__HwApiCapabilities
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String api_name;
  bool accepts_actuator_cmd;
  bool accepts_attitude_cmd;
  bool accepts_attitude_rate_cmd;
  bool accepts_control_group_cmd;
  bool accepts_acceleration_hdg_rate_cmd;
  bool accepts_acceleration_hdg_cmd;
  bool accepts_velocity_hdg_rate_cmd;
  bool accepts_velocity_hdg_cmd;
  bool accepts_position_cmd;
  bool produces_ground_truth;
  bool produces_gnss;
  bool produces_gnss_status;
  bool produces_rtk;
  bool produces_imu;
  bool produces_distance_sensor;
  bool produces_altitude;
  bool produces_magnetometer_heading;
  bool produces_rc_channels;
  bool produces_battery_state;
  bool produces_position;
  bool produces_orientation;
  bool produces_velocity;
  bool produces_angular_velocity;
  bool produces_odometry;
  bool produces_magnetic_field;
} mrs_msgs__msg__HwApiCapabilities;

// Struct for a sequence of mrs_msgs__msg__HwApiCapabilities.
typedef struct mrs_msgs__msg__HwApiCapabilities__Sequence
{
  mrs_msgs__msg__HwApiCapabilities * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__HwApiCapabilities__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_CAPABILITIES__STRUCT_H_
