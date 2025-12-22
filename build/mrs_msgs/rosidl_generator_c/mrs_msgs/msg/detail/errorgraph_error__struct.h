// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ErrorgraphError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_error.h"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ERROR__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TYPE_WAITING_FOR_TOPIC'.
static const char * const mrs_msgs__msg__ErrorgraphError__TYPE_WAITING_FOR_TOPIC = "waiting_for_topic";

/// Constant 'TYPE_WAITING_FOR_NODE'.
static const char * const mrs_msgs__msg__ErrorgraphError__TYPE_WAITING_FOR_NODE = "waiting_for_node";

/// Constant 'TYPE_NOT_REPORTING'.
static const char * const mrs_msgs__msg__ErrorgraphError__TYPE_NOT_REPORTING = "not_reporting";

/// Constant 'TYPE_NO_ERROR'.
static const char * const mrs_msgs__msg__ErrorgraphError__TYPE_NO_ERROR = "no_error";

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'type'
// Member 'waited_for_topic'
#include "rosidl_runtime_c/string.h"
// Member 'waited_for_node'
#include "mrs_msgs/msg/detail/errorgraph_node_id__struct.h"

/// Struct defined in msg/ErrorgraphError in the package mrs_msgs.
typedef struct mrs_msgs__msg__ErrorgraphError
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String waited_for_topic;
  mrs_msgs__msg__ErrorgraphNodeID waited_for_node;
} mrs_msgs__msg__ErrorgraphError;

// Struct for a sequence of mrs_msgs__msg__ErrorgraphError.
typedef struct mrs_msgs__msg__ErrorgraphError__Sequence
{
  mrs_msgs__msg__ErrorgraphError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ErrorgraphError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ERROR__STRUCT_H_
