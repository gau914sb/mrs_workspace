// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:srv/VelocityReferenceStampedSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/velocity_reference_stamped_srv.h"


#ifndef MRS_MSGS__SRV__DETAIL__VELOCITY_REFERENCE_STAMPED_SRV__STRUCT_H_
#define MRS_MSGS__SRV__DETAIL__VELOCITY_REFERENCE_STAMPED_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reference'
#include "mrs_msgs/msg/detail/velocity_reference_stamped__struct.h"

/// Struct defined in srv/VelocityReferenceStampedSrv in the package mrs_msgs.
typedef struct mrs_msgs__srv__VelocityReferenceStampedSrv_Request
{
  mrs_msgs__msg__VelocityReferenceStamped reference;
} mrs_msgs__srv__VelocityReferenceStampedSrv_Request;

// Struct for a sequence of mrs_msgs__srv__VelocityReferenceStampedSrv_Request.
typedef struct mrs_msgs__srv__VelocityReferenceStampedSrv_Request__Sequence
{
  mrs_msgs__srv__VelocityReferenceStampedSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__VelocityReferenceStampedSrv_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/VelocityReferenceStampedSrv in the package mrs_msgs.
typedef struct mrs_msgs__srv__VelocityReferenceStampedSrv_Response
{
  bool success;
  rosidl_runtime_c__String message;
} mrs_msgs__srv__VelocityReferenceStampedSrv_Response;

// Struct for a sequence of mrs_msgs__srv__VelocityReferenceStampedSrv_Response.
typedef struct mrs_msgs__srv__VelocityReferenceStampedSrv_Response__Sequence
{
  mrs_msgs__srv__VelocityReferenceStampedSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__VelocityReferenceStampedSrv_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mrs_msgs__srv__VelocityReferenceStampedSrv_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mrs_msgs__srv__VelocityReferenceStampedSrv_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/VelocityReferenceStampedSrv in the package mrs_msgs.
typedef struct mrs_msgs__srv__VelocityReferenceStampedSrv_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mrs_msgs__srv__VelocityReferenceStampedSrv_Request__Sequence request;
  mrs_msgs__srv__VelocityReferenceStampedSrv_Response__Sequence response;
} mrs_msgs__srv__VelocityReferenceStampedSrv_Event;

// Struct for a sequence of mrs_msgs__srv__VelocityReferenceStampedSrv_Event.
typedef struct mrs_msgs__srv__VelocityReferenceStampedSrv_Event__Sequence
{
  mrs_msgs__srv__VelocityReferenceStampedSrv_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__srv__VelocityReferenceStampedSrv_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__SRV__DETAIL__VELOCITY_REFERENCE_STAMPED_SRV__STRUCT_H_
