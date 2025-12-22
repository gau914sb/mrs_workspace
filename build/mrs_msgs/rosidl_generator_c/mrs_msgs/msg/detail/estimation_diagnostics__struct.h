// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/EstimationDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimation_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__STRUCT_H_

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
// Member 'child_frame_id'
// Member 'sm_state'
// Member 'current_state_estimator'
// Member 'estimator_horizontal'
// Member 'estimator_vertical'
// Member 'estimator_heading'
// Member 'estimator_agl_height'
// Member 'running_state_estimators'
// Member 'switchable_state_estimators'
// Member 'platform_config'
// Member 'custom_config'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.h"

/// Struct defined in msg/EstimationDiagnostics in the package mrs_msgs.
typedef struct mrs_msgs__msg__EstimationDiagnostics
{
  std_msgs__msg__Header header;
  /// frame of velocities and accelerations
  rosidl_runtime_c__String child_frame_id;
  /// current estimated state (corresponds to uav_state msg)
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist velocity;
  geometry_msgs__msg__Accel acceleration;
  /// agl height (above ground level)
  double agl_height;
  /// max allowed flight height (defined by safety area and available sensors)
  double max_flight_z;
  /// current state machine state
  rosidl_runtime_c__String sm_state;
  /// current state estimator used for control
  rosidl_runtime_c__String current_state_estimator;
  /// current subestimators used for control
  rosidl_runtime_c__String estimator_horizontal;
  rosidl_runtime_c__String estimator_vertical;
  rosidl_runtime_c__String estimator_heading;
  /// current agl height estimator
  rosidl_runtime_c__String estimator_agl_height;
  /// rate of estimation prediction and uav_state publishing
  uint32_t estimation_rate;
  /// number of performed estimators switches
  uint32_t estimator_iteration;
  /// estimators that are running
  rosidl_runtime_c__String__Sequence running_state_estimators;
  /// estimators that are healthy and ready to be switch into
  rosidl_runtime_c__String__Sequence switchable_state_estimators;
  /// loaded platform config file
  rosidl_runtime_c__String platform_config;
  /// loaded custom config file
  rosidl_runtime_c__String custom_config;
} mrs_msgs__msg__EstimationDiagnostics;

// Struct for a sequence of mrs_msgs__msg__EstimationDiagnostics.
typedef struct mrs_msgs__msg__EstimationDiagnostics__Sequence
{
  mrs_msgs__msg__EstimationDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__EstimationDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__STRUCT_H_
