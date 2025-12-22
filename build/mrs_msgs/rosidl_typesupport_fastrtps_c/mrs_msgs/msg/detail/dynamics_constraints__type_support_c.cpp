// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/DynamicsConstraints.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/dynamics_constraints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/dynamics_constraints__struct.h"
#include "mrs_msgs/msg/detail/dynamics_constraints__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DynamicsConstraints__ros_msg_type = mrs_msgs__msg__DynamicsConstraints;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__DynamicsConstraints(
  const mrs_msgs__msg__DynamicsConstraints * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: horizontal_speed
  {
    cdr << ros_message->horizontal_speed;
  }

  // Field name: horizontal_acceleration
  {
    cdr << ros_message->horizontal_acceleration;
  }

  // Field name: horizontal_jerk
  {
    cdr << ros_message->horizontal_jerk;
  }

  // Field name: horizontal_snap
  {
    cdr << ros_message->horizontal_snap;
  }

  // Field name: vertical_ascending_speed
  {
    cdr << ros_message->vertical_ascending_speed;
  }

  // Field name: vertical_ascending_acceleration
  {
    cdr << ros_message->vertical_ascending_acceleration;
  }

  // Field name: vertical_ascending_jerk
  {
    cdr << ros_message->vertical_ascending_jerk;
  }

  // Field name: vertical_ascending_snap
  {
    cdr << ros_message->vertical_ascending_snap;
  }

  // Field name: vertical_descending_speed
  {
    cdr << ros_message->vertical_descending_speed;
  }

  // Field name: vertical_descending_acceleration
  {
    cdr << ros_message->vertical_descending_acceleration;
  }

  // Field name: vertical_descending_jerk
  {
    cdr << ros_message->vertical_descending_jerk;
  }

  // Field name: vertical_descending_snap
  {
    cdr << ros_message->vertical_descending_snap;
  }

  // Field name: heading_speed
  {
    cdr << ros_message->heading_speed;
  }

  // Field name: heading_acceleration
  {
    cdr << ros_message->heading_acceleration;
  }

  // Field name: heading_jerk
  {
    cdr << ros_message->heading_jerk;
  }

  // Field name: heading_snap
  {
    cdr << ros_message->heading_snap;
  }

  // Field name: roll_rate
  {
    cdr << ros_message->roll_rate;
  }

  // Field name: pitch_rate
  {
    cdr << ros_message->pitch_rate;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: tilt
  {
    cdr << ros_message->tilt;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__DynamicsConstraints(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__DynamicsConstraints * ros_message)
{
  // Field name: horizontal_speed
  {
    cdr >> ros_message->horizontal_speed;
  }

  // Field name: horizontal_acceleration
  {
    cdr >> ros_message->horizontal_acceleration;
  }

  // Field name: horizontal_jerk
  {
    cdr >> ros_message->horizontal_jerk;
  }

  // Field name: horizontal_snap
  {
    cdr >> ros_message->horizontal_snap;
  }

  // Field name: vertical_ascending_speed
  {
    cdr >> ros_message->vertical_ascending_speed;
  }

  // Field name: vertical_ascending_acceleration
  {
    cdr >> ros_message->vertical_ascending_acceleration;
  }

  // Field name: vertical_ascending_jerk
  {
    cdr >> ros_message->vertical_ascending_jerk;
  }

  // Field name: vertical_ascending_snap
  {
    cdr >> ros_message->vertical_ascending_snap;
  }

  // Field name: vertical_descending_speed
  {
    cdr >> ros_message->vertical_descending_speed;
  }

  // Field name: vertical_descending_acceleration
  {
    cdr >> ros_message->vertical_descending_acceleration;
  }

  // Field name: vertical_descending_jerk
  {
    cdr >> ros_message->vertical_descending_jerk;
  }

  // Field name: vertical_descending_snap
  {
    cdr >> ros_message->vertical_descending_snap;
  }

  // Field name: heading_speed
  {
    cdr >> ros_message->heading_speed;
  }

  // Field name: heading_acceleration
  {
    cdr >> ros_message->heading_acceleration;
  }

  // Field name: heading_jerk
  {
    cdr >> ros_message->heading_jerk;
  }

  // Field name: heading_snap
  {
    cdr >> ros_message->heading_snap;
  }

  // Field name: roll_rate
  {
    cdr >> ros_message->roll_rate;
  }

  // Field name: pitch_rate
  {
    cdr >> ros_message->pitch_rate;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: tilt
  {
    cdr >> ros_message->tilt;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__DynamicsConstraints(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DynamicsConstraints__ros_msg_type * ros_message = static_cast<const _DynamicsConstraints__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: horizontal_speed
  {
    size_t item_size = sizeof(ros_message->horizontal_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_acceleration
  {
    size_t item_size = sizeof(ros_message->horizontal_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_jerk
  {
    size_t item_size = sizeof(ros_message->horizontal_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_snap
  {
    size_t item_size = sizeof(ros_message->horizontal_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_ascending_speed
  {
    size_t item_size = sizeof(ros_message->vertical_ascending_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_ascending_acceleration
  {
    size_t item_size = sizeof(ros_message->vertical_ascending_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_ascending_jerk
  {
    size_t item_size = sizeof(ros_message->vertical_ascending_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_ascending_snap
  {
    size_t item_size = sizeof(ros_message->vertical_ascending_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_descending_speed
  {
    size_t item_size = sizeof(ros_message->vertical_descending_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_descending_acceleration
  {
    size_t item_size = sizeof(ros_message->vertical_descending_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_descending_jerk
  {
    size_t item_size = sizeof(ros_message->vertical_descending_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_descending_snap
  {
    size_t item_size = sizeof(ros_message->vertical_descending_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_speed
  {
    size_t item_size = sizeof(ros_message->heading_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_acceleration
  {
    size_t item_size = sizeof(ros_message->heading_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_jerk
  {
    size_t item_size = sizeof(ros_message->heading_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_snap
  {
    size_t item_size = sizeof(ros_message->heading_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: roll_rate
  {
    size_t item_size = sizeof(ros_message->roll_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch_rate
  {
    size_t item_size = sizeof(ros_message->pitch_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt
  {
    size_t item_size = sizeof(ros_message->tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__DynamicsConstraints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: horizontal_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: horizontal_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: horizontal_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: horizontal_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_ascending_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_ascending_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_ascending_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_ascending_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_descending_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_descending_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_descending_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_descending_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: roll_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pitch_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: yaw_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: tilt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__DynamicsConstraints;
    is_plain =
      (
      offsetof(DataType, tilt) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__DynamicsConstraints(
  const mrs_msgs__msg__DynamicsConstraints * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: horizontal_speed
  {
    cdr << ros_message->horizontal_speed;
  }

  // Field name: horizontal_acceleration
  {
    cdr << ros_message->horizontal_acceleration;
  }

  // Field name: horizontal_jerk
  {
    cdr << ros_message->horizontal_jerk;
  }

  // Field name: horizontal_snap
  {
    cdr << ros_message->horizontal_snap;
  }

  // Field name: vertical_ascending_speed
  {
    cdr << ros_message->vertical_ascending_speed;
  }

  // Field name: vertical_ascending_acceleration
  {
    cdr << ros_message->vertical_ascending_acceleration;
  }

  // Field name: vertical_ascending_jerk
  {
    cdr << ros_message->vertical_ascending_jerk;
  }

  // Field name: vertical_ascending_snap
  {
    cdr << ros_message->vertical_ascending_snap;
  }

  // Field name: vertical_descending_speed
  {
    cdr << ros_message->vertical_descending_speed;
  }

  // Field name: vertical_descending_acceleration
  {
    cdr << ros_message->vertical_descending_acceleration;
  }

  // Field name: vertical_descending_jerk
  {
    cdr << ros_message->vertical_descending_jerk;
  }

  // Field name: vertical_descending_snap
  {
    cdr << ros_message->vertical_descending_snap;
  }

  // Field name: heading_speed
  {
    cdr << ros_message->heading_speed;
  }

  // Field name: heading_acceleration
  {
    cdr << ros_message->heading_acceleration;
  }

  // Field name: heading_jerk
  {
    cdr << ros_message->heading_jerk;
  }

  // Field name: heading_snap
  {
    cdr << ros_message->heading_snap;
  }

  // Field name: roll_rate
  {
    cdr << ros_message->roll_rate;
  }

  // Field name: pitch_rate
  {
    cdr << ros_message->pitch_rate;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: tilt
  {
    cdr << ros_message->tilt;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__DynamicsConstraints(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DynamicsConstraints__ros_msg_type * ros_message = static_cast<const _DynamicsConstraints__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: horizontal_speed
  {
    size_t item_size = sizeof(ros_message->horizontal_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_acceleration
  {
    size_t item_size = sizeof(ros_message->horizontal_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_jerk
  {
    size_t item_size = sizeof(ros_message->horizontal_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_snap
  {
    size_t item_size = sizeof(ros_message->horizontal_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_ascending_speed
  {
    size_t item_size = sizeof(ros_message->vertical_ascending_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_ascending_acceleration
  {
    size_t item_size = sizeof(ros_message->vertical_ascending_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_ascending_jerk
  {
    size_t item_size = sizeof(ros_message->vertical_ascending_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_ascending_snap
  {
    size_t item_size = sizeof(ros_message->vertical_ascending_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_descending_speed
  {
    size_t item_size = sizeof(ros_message->vertical_descending_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_descending_acceleration
  {
    size_t item_size = sizeof(ros_message->vertical_descending_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_descending_jerk
  {
    size_t item_size = sizeof(ros_message->vertical_descending_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_descending_snap
  {
    size_t item_size = sizeof(ros_message->vertical_descending_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_speed
  {
    size_t item_size = sizeof(ros_message->heading_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_acceleration
  {
    size_t item_size = sizeof(ros_message->heading_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_jerk
  {
    size_t item_size = sizeof(ros_message->heading_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_snap
  {
    size_t item_size = sizeof(ros_message->heading_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: roll_rate
  {
    size_t item_size = sizeof(ros_message->roll_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch_rate
  {
    size_t item_size = sizeof(ros_message->pitch_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tilt
  {
    size_t item_size = sizeof(ros_message->tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__DynamicsConstraints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: horizontal_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: horizontal_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: horizontal_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: horizontal_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_ascending_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_ascending_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_ascending_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_ascending_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_descending_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_descending_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_descending_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertical_descending_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_snap
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: roll_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pitch_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: yaw_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: tilt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__DynamicsConstraints;
    is_plain =
      (
      offsetof(DataType, tilt) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DynamicsConstraints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__DynamicsConstraints * ros_message = static_cast<const mrs_msgs__msg__DynamicsConstraints *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__DynamicsConstraints(ros_message, cdr);
}

static bool _DynamicsConstraints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__DynamicsConstraints * ros_message = static_cast<mrs_msgs__msg__DynamicsConstraints *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__DynamicsConstraints(cdr, ros_message);
}

static uint32_t _DynamicsConstraints__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__DynamicsConstraints(
      untyped_ros_message, 0));
}

static size_t _DynamicsConstraints__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__DynamicsConstraints(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DynamicsConstraints = {
  "mrs_msgs::msg",
  "DynamicsConstraints",
  _DynamicsConstraints__cdr_serialize,
  _DynamicsConstraints__cdr_deserialize,
  _DynamicsConstraints__get_serialized_size,
  _DynamicsConstraints__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DynamicsConstraints__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DynamicsConstraints,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__DynamicsConstraints__get_type_hash,
  &mrs_msgs__msg__DynamicsConstraints__get_type_description,
  &mrs_msgs__msg__DynamicsConstraints__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, DynamicsConstraints)() {
  return &_DynamicsConstraints__type_support;
}

#if defined(__cplusplus)
}
#endif
