// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/TrackerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/tracker_status.h"


#ifndef MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__STRUCT_H_

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
  mrs_msgs__msg__TrackerStatus__STATE_INVALID = 0
};

/// Constant 'STATE_IDLE'.
enum
{
  mrs_msgs__msg__TrackerStatus__STATE_IDLE = 1
};

/// Constant 'STATE_TAKEOFF'.
enum
{
  mrs_msgs__msg__TrackerStatus__STATE_TAKEOFF = 2
};

/// Constant 'STATE_HOVER'.
enum
{
  mrs_msgs__msg__TrackerStatus__STATE_HOVER = 3
};

/// Constant 'STATE_REFERENCE'.
enum
{
  mrs_msgs__msg__TrackerStatus__STATE_REFERENCE = 4
};

/// Constant 'STATE_TRAJECTORY'.
enum
{
  mrs_msgs__msg__TrackerStatus__STATE_TRAJECTORY = 5
};

/// Constant 'STATE_LAND'.
enum
{
  mrs_msgs__msg__TrackerStatus__STATE_LAND = 6
};

// Include directives for member types
// Member 'trajectory_reference'
#include "mrs_msgs/msg/detail/reference_stamped__struct.h"

/// Struct defined in msg/TrackerStatus in the package mrs_msgs.
typedef struct mrs_msgs__msg__TrackerStatus
{
  bool active;
  bool callbacks_enabled;
  /// current tracker state
  uint8_t state;
  /// is true whenever the tracker is doing something
  /// in other words, not idling
  bool have_goal;
  /// is true only then a trajectory is being tracked
  bool tracking_trajectory;
  int32_t trajectory_length;
  int32_t trajectory_idx;
  /// only when following trajectory
  /// the current reference in the trajectory UNINTERPOLATED
  mrs_msgs__msg__ReferenceStamped trajectory_reference;
} mrs_msgs__msg__TrackerStatus;

// Struct for a sequence of mrs_msgs__msg__TrackerStatus.
typedef struct mrs_msgs__msg__TrackerStatus__Sequence
{
  mrs_msgs__msg__TrackerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__TrackerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__STRUCT_H_
