// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/histogram.h"


#ifndef MRS_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_H_

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
// Member 'unit'
#include "rosidl_runtime_c/string.h"
// Member 'bins'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Histogram in the package mrs_msgs.
/**
  * This is a debug message for the mrs_bumper package.
  * It contains a histogram of depth values from a depthmap
  * image, if the depth sensor is used for obstacle detection.
 */
typedef struct mrs_msgs__msg__Histogram
{
  /// Time at which the data in this message was generated, coordinate frame ID.
  std_msgs__msg__Header header;
  /// Unit of distance measurement in the histogram (e.g. "mm" for millimeters").
  rosidl_runtime_c__String unit;
  /// Structure of the histogram.
  double bin_size;
  double bin_min;
  double bin_max;
  /// The mark at which an obstacle was detected (if equal to the number of bins,
  /// no obstacle was detected).
  uint32_t bin_mark;
  /// Bin values of the histogram.
  rosidl_runtime_c__float__Sequence bins;
} mrs_msgs__msg__Histogram;

// Struct for a sequence of mrs_msgs__msg__Histogram.
typedef struct mrs_msgs__msg__Histogram__Sequence
{
  mrs_msgs__msg__Histogram * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__Histogram__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_H_
