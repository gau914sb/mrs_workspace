// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ReferenceArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/reference_array.h"


#ifndef MRS_MSGS__MSG__DETAIL__REFERENCE_ARRAY__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__REFERENCE_ARRAY__STRUCT_H_

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
// Member 'array'
#include "mrs_msgs/msg/detail/reference__struct.h"

/// Struct defined in msg/ReferenceArray in the package mrs_msgs.
/**
  * A list of references.
 */
typedef struct mrs_msgs__msg__ReferenceArray
{
  std_msgs__msg__Header header;
  mrs_msgs__msg__Reference__Sequence array;
} mrs_msgs__msg__ReferenceArray;

// Struct for a sequence of mrs_msgs__msg__ReferenceArray.
typedef struct mrs_msgs__msg__ReferenceArray__Sequence
{
  mrs_msgs__msg__ReferenceArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ReferenceArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__REFERENCE_ARRAY__STRUCT_H_
