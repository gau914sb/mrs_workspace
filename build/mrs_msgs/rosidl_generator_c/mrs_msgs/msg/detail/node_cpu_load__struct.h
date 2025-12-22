// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/NodeCpuLoad.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/node_cpu_load.h"


#ifndef MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'node_names'
#include "rosidl_runtime_c/string.h"
// Member 'cpu_loads'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NodeCpuLoad in the package mrs_msgs.
/**
  * A list of names of all ROS nodes running on this UAV
 */
typedef struct mrs_msgs__msg__NodeCpuLoad
{
  rosidl_runtime_c__String__Sequence node_names;
  /// A list of the corresponding CPU loads of these nodes relative to a single CPU core (i.e. a maximal load of a 2-core CPU is 200.0)
  rosidl_runtime_c__float__Sequence cpu_loads;
} mrs_msgs__msg__NodeCpuLoad;

// Struct for a sequence of mrs_msgs__msg__NodeCpuLoad.
typedef struct mrs_msgs__msg__NodeCpuLoad__Sequence
{
  mrs_msgs__msg__NodeCpuLoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__NodeCpuLoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__STRUCT_H_
