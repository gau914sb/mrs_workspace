// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:srv/SetTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/srv/set_trigger.h"


#ifndef MRS_MODULES_MSGS__SRV__DETAIL__SET_TRIGGER__STRUCT_H_
#define MRS_MODULES_MSGS__SRV__DETAIL__SET_TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetTrigger in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__srv__SetTrigger_Request
{
  bool trigger;
  uint8_t trigger_num;
} mrs_modules_msgs__srv__SetTrigger_Request;

// Struct for a sequence of mrs_modules_msgs__srv__SetTrigger_Request.
typedef struct mrs_modules_msgs__srv__SetTrigger_Request__Sequence
{
  mrs_modules_msgs__srv__SetTrigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__srv__SetTrigger_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetTrigger in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__srv__SetTrigger_Response
{
  bool success;
  rosidl_runtime_c__String message;
} mrs_modules_msgs__srv__SetTrigger_Response;

// Struct for a sequence of mrs_modules_msgs__srv__SetTrigger_Response.
typedef struct mrs_modules_msgs__srv__SetTrigger_Response__Sequence
{
  mrs_modules_msgs__srv__SetTrigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__srv__SetTrigger_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mrs_modules_msgs__srv__SetTrigger_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mrs_modules_msgs__srv__SetTrigger_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetTrigger in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__srv__SetTrigger_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mrs_modules_msgs__srv__SetTrigger_Request__Sequence request;
  mrs_modules_msgs__srv__SetTrigger_Response__Sequence response;
} mrs_modules_msgs__srv__SetTrigger_Event;

// Struct for a sequence of mrs_modules_msgs__srv__SetTrigger_Event.
typedef struct mrs_modules_msgs__srv__SetTrigger_Event__Sequence
{
  mrs_modules_msgs__srv__SetTrigger_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__srv__SetTrigger_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__SRV__DETAIL__SET_TRIGGER__STRUCT_H_
