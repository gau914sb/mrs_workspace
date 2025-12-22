// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:srv/ConstraintsOverride.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/constraints_override.h"


#ifndef MRS_MSGS__SRV__DETAIL__CONSTRAINTS_OVERRIDE__STRUCT_H_
#define MRS_MSGS__SRV__DETAIL__CONSTRAINTS_OVERRIDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ConstraintsOverride in the package mrs_msgs.
typedef struct mrs_msgs__srv__ConstraintsOverride_Request
{
  double acceleration_horizontal;
  double acceleration_vertical;
} mrs_msgs__srv__ConstraintsOverride_Request;

// Struct for a sequence of mrs_msgs__srv__ConstraintsOverride_Request.
typedef struct mrs_msgs__srv__ConstraintsOverride_Request__Sequence
{
  mrs_msgs__srv__ConstraintsOverride_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__ConstraintsOverride_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ConstraintsOverride in the package mrs_msgs.
typedef struct mrs_msgs__srv__ConstraintsOverride_Response
{
  bool success;
  rosidl_runtime_c__String message;
} mrs_msgs__srv__ConstraintsOverride_Response;

// Struct for a sequence of mrs_msgs__srv__ConstraintsOverride_Response.
typedef struct mrs_msgs__srv__ConstraintsOverride_Response__Sequence
{
  mrs_msgs__srv__ConstraintsOverride_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__ConstraintsOverride_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mrs_msgs__srv__ConstraintsOverride_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mrs_msgs__srv__ConstraintsOverride_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ConstraintsOverride in the package mrs_msgs.
typedef struct mrs_msgs__srv__ConstraintsOverride_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mrs_msgs__srv__ConstraintsOverride_Request__Sequence request;
  mrs_msgs__srv__ConstraintsOverride_Response__Sequence response;
} mrs_msgs__srv__ConstraintsOverride_Event;

// Struct for a sequence of mrs_msgs__srv__ConstraintsOverride_Event.
typedef struct mrs_msgs__srv__ConstraintsOverride_Event__Sequence
{
  mrs_msgs__srv__ConstraintsOverride_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__ConstraintsOverride_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__SRV__DETAIL__CONSTRAINTS_OVERRIDE__STRUCT_H_
