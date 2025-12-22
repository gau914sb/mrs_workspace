// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:srv/GetFloat64.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/get_float64.h"


#ifndef MRS_MSGS__SRV__DETAIL__GET_FLOAT64__STRUCT_H_
#define MRS_MSGS__SRV__DETAIL__GET_FLOAT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetFloat64 in the package mrs_msgs.
typedef struct mrs_msgs__srv__GetFloat64_Request
{
  uint8_t structure_needs_at_least_one_member;
} mrs_msgs__srv__GetFloat64_Request;

// Struct for a sequence of mrs_msgs__srv__GetFloat64_Request.
typedef struct mrs_msgs__srv__GetFloat64_Request__Sequence
{
  mrs_msgs__srv__GetFloat64_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__GetFloat64_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GetFloat64 in the package mrs_msgs.
typedef struct mrs_msgs__srv__GetFloat64_Response
{
  double value;
  bool success;
} mrs_msgs__srv__GetFloat64_Response;

// Struct for a sequence of mrs_msgs__srv__GetFloat64_Response.
typedef struct mrs_msgs__srv__GetFloat64_Response__Sequence
{
  mrs_msgs__srv__GetFloat64_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__GetFloat64_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mrs_msgs__srv__GetFloat64_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mrs_msgs__srv__GetFloat64_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetFloat64 in the package mrs_msgs.
typedef struct mrs_msgs__srv__GetFloat64_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mrs_msgs__srv__GetFloat64_Request__Sequence request;
  mrs_msgs__srv__GetFloat64_Response__Sequence response;
} mrs_msgs__srv__GetFloat64_Event;

// Struct for a sequence of mrs_msgs__srv__GetFloat64_Event.
typedef struct mrs_msgs__srv__GetFloat64_Event__Sequence
{
  mrs_msgs__srv__GetFloat64_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__GetFloat64_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__SRV__DETAIL__GET_FLOAT64__STRUCT_H_
