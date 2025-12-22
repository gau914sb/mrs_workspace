// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/CustomTopic.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/custom_topic.h"


#ifndef MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CustomTopic in the package mrs_msgs.
typedef struct mrs_msgs__msg__CustomTopic
{
  rosidl_runtime_c__String topic_name;
  float topic_hz;
  int16_t topic_color;
} mrs_msgs__msg__CustomTopic;

// Struct for a sequence of mrs_msgs__msg__CustomTopic.
typedef struct mrs_msgs__msg__CustomTopic__Sequence
{
  mrs_msgs__msg__CustomTopic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__CustomTopic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__STRUCT_H_
