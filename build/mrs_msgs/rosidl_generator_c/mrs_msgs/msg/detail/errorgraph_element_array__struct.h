// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ErrorgraphElementArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_element_array.h"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__STRUCT_H_

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
// Member 'elements'
#include "mrs_msgs/msg/detail/errorgraph_element__struct.h"

/// Struct defined in msg/ErrorgraphElementArray in the package mrs_msgs.
typedef struct mrs_msgs__msg__ErrorgraphElementArray
{
  builtin_interfaces__msg__Time stamp;
  mrs_msgs__msg__ErrorgraphElement__Sequence elements;
} mrs_msgs__msg__ErrorgraphElementArray;

// Struct for a sequence of mrs_msgs__msg__ErrorgraphElementArray.
typedef struct mrs_msgs__msg__ErrorgraphElementArray__Sequence
{
  mrs_msgs__msg__ErrorgraphElementArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ErrorgraphElementArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__STRUCT_H_
