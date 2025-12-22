// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ErrorgraphElement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_element.h"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__STRUCT_H_

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
// Member 'source_node'
#include "mrs_msgs/msg/detail/errorgraph_node_id__struct.h"
// Member 'errors'
#include "mrs_msgs/msg/detail/errorgraph_error__struct.h"

/// Struct defined in msg/ErrorgraphElement in the package mrs_msgs.
typedef struct mrs_msgs__msg__ErrorgraphElement
{
  builtin_interfaces__msg__Time stamp;
  mrs_msgs__msg__ErrorgraphNodeID source_node;
  mrs_msgs__msg__ErrorgraphError__Sequence errors;
} mrs_msgs__msg__ErrorgraphElement;

// Struct for a sequence of mrs_msgs__msg__ErrorgraphElement.
typedef struct mrs_msgs__msg__ErrorgraphElement__Sequence
{
  mrs_msgs__msg__ErrorgraphElement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ErrorgraphElement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__STRUCT_H_
