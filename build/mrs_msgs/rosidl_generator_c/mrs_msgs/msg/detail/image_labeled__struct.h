// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ImageLabeled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/image_labeled.h"


#ifndef MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/ImageLabeled in the package mrs_msgs.
typedef struct mrs_msgs__msg__ImageLabeled
{
  rosidl_runtime_c__String label;
  sensor_msgs__msg__Image img;
} mrs_msgs__msg__ImageLabeled;

// Struct for a sequence of mrs_msgs__msg__ImageLabeled.
typedef struct mrs_msgs__msg__ImageLabeled__Sequence
{
  mrs_msgs__msg__ImageLabeled * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ImageLabeled__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__STRUCT_H_
