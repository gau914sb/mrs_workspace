// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:srv/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/srv/path.h"


#ifndef MRS_MODULES_MSGS__SRV__DETAIL__PATH__STRUCT_H_
#define MRS_MODULES_MSGS__SRV__DETAIL__PATH__STRUCT_H_

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
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/Path in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__srv__Path_Request
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point start;
  geometry_msgs__msg__Point end;
} mrs_modules_msgs__srv__Path_Request;

// Struct for a sequence of mrs_modules_msgs__srv__Path_Request.
typedef struct mrs_modules_msgs__srv__Path_Request__Sequence
{
  mrs_modules_msgs__srv__Path_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__srv__Path_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'header'
// already included above
// #include "std_msgs/msg/detail/header__struct.h"
// Member 'path'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Path in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__srv__Path_Response
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point__Sequence path;
  bool success;
  rosidl_runtime_c__String message;
} mrs_modules_msgs__srv__Path_Response;

// Struct for a sequence of mrs_modules_msgs__srv__Path_Response.
typedef struct mrs_modules_msgs__srv__Path_Response__Sequence
{
  mrs_modules_msgs__srv__Path_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__srv__Path_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mrs_modules_msgs__srv__Path_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mrs_modules_msgs__srv__Path_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Path in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__srv__Path_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mrs_modules_msgs__srv__Path_Request__Sequence request;
  mrs_modules_msgs__srv__Path_Response__Sequence response;
} mrs_modules_msgs__srv__Path_Event;

// Struct for a sequence of mrs_modules_msgs__srv__Path_Event.
typedef struct mrs_modules_msgs__srv__Path_Event__Sequence
{
  mrs_modules_msgs__srv__Path_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__srv__Path_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__SRV__DETAIL__PATH__STRUCT_H_
