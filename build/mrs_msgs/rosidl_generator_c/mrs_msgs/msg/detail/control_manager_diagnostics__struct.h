// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/control_manager_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__STRUCT_H_

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
// Member 'uav_name'
// Member 'active_tracker'
// Member 'active_controller'
// Member 'available_controllers'
// Member 'available_trackers'
#include "rosidl_runtime_c/string.h"
// Member 'tracker_status'
#include "mrs_msgs/msg/detail/tracker_status__struct.h"
// Member 'controller_status'
#include "mrs_msgs/msg/detail/controller_status__struct.h"
// Member 'human_switchable_controllers'
// Member 'human_switchable_trackers'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ControlManagerDiagnostics in the package mrs_msgs.
/**
  * This reports on the state of the Control Manager and the currently active tracker and controller.
 */
typedef struct mrs_msgs__msg__ControlManagerDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String uav_name;
  /// If the motors are enabled, in other words, if the output of the Control Manager can pass out.
  bool output_enabled;
  /// True if the UAV is flying and no special case occurred (emergency land, failsafe, bumper, joystick override).
  bool flying_normally;
  /// True if the joystick is overriding control
  bool joystick_active;
  /// True if the obstacle bumper is overriding control
  bool bumper_active;
  /// The minimum recommended desired rate of incoming UAV State
  double desired_uav_state_rate;
  /// The name of the currently active tracker
  rosidl_runtime_c__String active_tracker;
  /// The status of the currently active tracker.
  mrs_msgs__msg__TrackerStatus tracker_status;
  /// The name of the currently active controller
  rosidl_runtime_c__String active_controller;
  /// The status of the currently active controller.
  mrs_msgs__msg__ControllerStatus controller_status;
  /// list of controllers and trackers that are loaded and can be switched to
  rosidl_runtime_c__String__Sequence available_controllers;
  rosidl_runtime_c__String__Sequence available_trackers;
  /// flags reporting on whether the trackers and controller should be "human switchable", meaning,
  /// whether people should be "just" able to switch to them, e.g., using a GUI or TUI interface
  rosidl_runtime_c__boolean__Sequence human_switchable_controllers;
  rosidl_runtime_c__boolean__Sequence human_switchable_trackers;
} mrs_msgs__msg__ControlManagerDiagnostics;

// Struct for a sequence of mrs_msgs__msg__ControlManagerDiagnostics.
typedef struct mrs_msgs__msg__ControlManagerDiagnostics__Sequence
{
  mrs_msgs__msg__ControlManagerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ControlManagerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__STRUCT_H_
