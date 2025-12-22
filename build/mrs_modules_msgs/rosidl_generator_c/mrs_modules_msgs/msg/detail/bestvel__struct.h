// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/Bestvel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/bestvel.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__STRUCT_H_

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
// Member 'tersus_msg_header'
#include "mrs_modules_msgs/msg/detail/tersus_message_header__struct.h"
// Member 'solution_status'
// Member 'velocity_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Bestvel in the package mrs_modules_msgs.
/**
  * See section 3.1.4 BESTVEL in https://www.tersus-gnss.com/assets/upload/file/20180608173259349.pdf
  * --------------------------------------------------------------------------------------
 */
typedef struct mrs_modules_msgs__msg__Bestvel
{
  std_msgs__msg__Header header;
  /// message 99
  mrs_modules_msgs__msg__TersusMessageHeader tersus_msg_header;
  rosidl_runtime_c__String solution_status;
  rosidl_runtime_c__String velocity_type;
  /// A measure of the latency in the velocity time tag in seconds.
  float latency;
  /// Differential age in seconds
  float age;
  /// Horizontal speed over ground, meters/second
  double horizontal_speed;
  /// Direction of motion over ground with respect to true North, degrees
  double track_ground;
  /// Vertical speed, where positive values correspond to increasing altitude, meters/second
  double vertical_speed;
} mrs_modules_msgs__msg__Bestvel;

// Struct for a sequence of mrs_modules_msgs__msg__Bestvel.
typedef struct mrs_modules_msgs__msg__Bestvel__Sequence
{
  mrs_modules_msgs__msg__Bestvel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__Bestvel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__STRUCT_H_
