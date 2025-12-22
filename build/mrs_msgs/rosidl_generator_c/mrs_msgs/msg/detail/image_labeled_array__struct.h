// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ImageLabeledArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/image_labeled_array.h"


#ifndef MRS_MSGS__MSG__DETAIL__IMAGE_LABELED_ARRAY__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__IMAGE_LABELED_ARRAY__STRUCT_H_

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
// Member 'imgs_labeled'
#include "mrs_msgs/msg/detail/image_labeled__struct.h"

/// Struct defined in msg/ImageLabeledArray in the package mrs_msgs.
/**
  * This message represents an Image and corresponding camera label
  * Can be suitable for any multi camera setup as UVDar or stereo pair
  * to synchronise all images on a ROS level (check all timestamps and
  * collect them in one array with one timestamp)
 */
typedef struct mrs_msgs__msg__ImageLabeledArray
{
  std_msgs__msg__Header header;
  mrs_msgs__msg__ImageLabeled__Sequence imgs_labeled;
} mrs_msgs__msg__ImageLabeledArray;

// Struct for a sequence of mrs_msgs__msg__ImageLabeledArray.
typedef struct mrs_msgs__msg__ImageLabeledArray__Sequence
{
  mrs_msgs__msg__ImageLabeledArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ImageLabeledArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__IMAGE_LABELED_ARRAY__STRUCT_H_
