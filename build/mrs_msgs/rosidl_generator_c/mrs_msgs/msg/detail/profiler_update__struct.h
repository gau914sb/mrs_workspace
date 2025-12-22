// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ProfilerUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/profiler_update.h"


#ifndef MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'START'.
static const char * const mrs_msgs__msg__ProfilerUpdate__START = "start";

/// Constant 'END'.
static const char * const mrs_msgs__msg__ProfilerUpdate__END = "end";

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'node_name'
// Member 'routine_name'
// Member 'event'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ProfilerUpdate in the package mrs_msgs.
typedef struct mrs_msgs__msg__ProfilerUpdate
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String node_name;
  rosidl_runtime_c__String routine_name;
  int64_t iteration;
  double duration;
  rosidl_runtime_c__String event;
} mrs_msgs__msg__ProfilerUpdate;

// Struct for a sequence of mrs_msgs__msg__ProfilerUpdate.
typedef struct mrs_msgs__msg__ProfilerUpdate__Sequence
{
  mrs_msgs__msg__ProfilerUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ProfilerUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__STRUCT_H_
