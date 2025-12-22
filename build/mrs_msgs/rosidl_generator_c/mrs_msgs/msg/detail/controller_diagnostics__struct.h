// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/controller_diagnostics.h"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__STRUCT_H_

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
// Member 'controller'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ControllerDiagnostics in the package mrs_msgs.
typedef struct mrs_msgs__msg__ControllerDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  /// The name of the controller (implementation-wise).
  /// Beware, multiple instances of the same controller can be running.
  /// The ControlManagerDiagnostics message contains the name given them
  /// by the ControlManager.
  rosidl_runtime_c__String controller;
  /// True if the controller is in the initial rampup phase (just after activation).
  bool ramping_up;
  /// true if the mass estimator is running
  bool mass_estimator;
  /// The estimated mass difference from the nominal mass.
  double mass_difference;
  /// Total estimated UAV mass.
  double total_mass;
  /// true if disturbance estimators are running
  bool disturbance_estimator;
  /// World-frame disturbances expressed in the world frame.
  double disturbance_wx_w;
  double disturbance_wy_w;
  /// Body-frame (fcu_untilted) disturbances expressed in the world frame.
  double disturbance_bx_w;
  double disturbance_by_w;
  /// Body-frame (fcu_untilted) disturbances expressed in the body frame (fcu_untilted).
  double disturbance_bx_b;
  double disturbance_by_b;
  /// The controller can enforce dynamics constraints over the trackers.
  /// This can be used when flying with a controller that is limited to
  /// some maximum speed and acceleration.
  bool controller_enforcing_constraints;
  double horizontal_speed_constraint;
  double horizontal_acc_constraint;
  double vertical_asc_speed_constraint;
  double vertical_asc_acc_constraint;
  double vertical_desc_speed_constraint;
  double vertical_desc_acc_constraint;
} mrs_msgs__msg__ControllerDiagnostics;

// Struct for a sequence of mrs_msgs__msg__ControllerDiagnostics.
typedef struct mrs_msgs__msg__ControllerDiagnostics__Sequence
{
  mrs_msgs__msg__ControllerDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ControllerDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__STRUCT_H_
