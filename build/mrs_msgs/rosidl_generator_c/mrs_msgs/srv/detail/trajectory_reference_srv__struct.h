// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:srv/TrajectoryReferenceSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/trajectory_reference_srv.h"


#ifndef MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__STRUCT_H_
#define MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "mrs_msgs/msg/detail/trajectory_reference__struct.h"

/// Struct defined in srv/TrajectoryReferenceSrv in the package mrs_msgs.
typedef struct mrs_msgs__srv__TrajectoryReferenceSrv_Request
{
  mrs_msgs__msg__TrajectoryReference trajectory;
} mrs_msgs__srv__TrajectoryReferenceSrv_Request;

// Struct for a sequence of mrs_msgs__srv__TrajectoryReferenceSrv_Request.
typedef struct mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'tracker_names'
// Member 'tracker_messages'
#include "rosidl_runtime_c/string.h"
// Member 'tracker_successes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/TrajectoryReferenceSrv in the package mrs_msgs.
typedef struct mrs_msgs__srv__TrajectoryReferenceSrv_Response
{
  /// response of the currently active tracker
  bool success;
  rosidl_runtime_c__String message;
  bool modified;
  /// responses of each loaded tracker
  rosidl_runtime_c__String__Sequence tracker_names;
  rosidl_runtime_c__boolean__Sequence tracker_successes;
  rosidl_runtime_c__String__Sequence tracker_messages;
} mrs_msgs__srv__TrajectoryReferenceSrv_Response;

// Struct for a sequence of mrs_msgs__srv__TrajectoryReferenceSrv_Response.
typedef struct mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TrajectoryReferenceSrv in the package mrs_msgs.
typedef struct mrs_msgs__srv__TrajectoryReferenceSrv_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mrs_msgs__srv__TrajectoryReferenceSrv_Request__Sequence request;
  mrs_msgs__srv__TrajectoryReferenceSrv_Response__Sequence response;
} mrs_msgs__srv__TrajectoryReferenceSrv_Event;

// Struct for a sequence of mrs_msgs__srv__TrajectoryReferenceSrv_Event.
typedef struct mrs_msgs__srv__TrajectoryReferenceSrv_Event__Sequence
{
  mrs_msgs__srv__TrajectoryReferenceSrv_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__TrajectoryReferenceSrv_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__STRUCT_H_
