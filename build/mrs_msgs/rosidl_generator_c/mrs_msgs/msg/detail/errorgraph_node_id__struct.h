// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ErrorgraphNodeID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_node_id.h"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'node'
// Member 'component'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ErrorgraphNodeID in the package mrs_msgs.
/**
  * unique identifier of a node that can be a source of an error
 */
typedef struct mrs_msgs__msg__ErrorgraphNodeID
{
  rosidl_runtime_c__String node;
  /// optional identifier of a component within the node
  rosidl_runtime_c__String component;
} mrs_msgs__msg__ErrorgraphNodeID;

// Struct for a sequence of mrs_msgs__msg__ErrorgraphNodeID.
typedef struct mrs_msgs__msg__ErrorgraphNodeID__Sequence
{
  mrs_msgs__msg__ErrorgraphNodeID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ErrorgraphNodeID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__STRUCT_H_
