// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/Path.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/path__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/path__struct.h"
#include "mrs_msgs/msg/detail/path__functions.h"
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

#include "mrs_msgs/msg/detail/reference__functions.h"  // points
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_mrs_msgs__msg__Reference(
  const mrs_msgs__msg__Reference * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_msgs__msg__Reference(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__Reference * ros_message);

size_t get_serialized_size_mrs_msgs__msg__Reference(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_msgs__msg__Reference(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_msgs__msg__Reference(
  const mrs_msgs__msg__Reference * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_msgs__msg__Reference(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_msgs__msg__Reference(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, Reference)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Path__ros_msg_type = mrs_msgs__msg__Path;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__Path(
  const mrs_msgs__msg__Path * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: input_id
  {
    cdr << ros_message->input_id;
  }

  // Field name: use_heading
  {
    cdr << (ros_message->use_heading ? true : false);
  }

  // Field name: fly_now
  {
    cdr << (ros_message->fly_now ? true : false);
  }

  // Field name: stop_at_waypoints
  {
    cdr << (ros_message->stop_at_waypoints ? true : false);
  }

  // Field name: loop
  {
    cdr << (ros_message->loop ? true : false);
  }

  // Field name: max_execution_time
  {
    cdr << ros_message->max_execution_time;
  }

  // Field name: max_deviation_from_path
  {
    cdr << ros_message->max_deviation_from_path;
  }

  // Field name: dont_prepend_current_state
  {
    cdr << (ros_message->dont_prepend_current_state ? true : false);
  }

  // Field name: override_heading_atan2
  {
    cdr << (ros_message->override_heading_atan2 ? true : false);
  }

  // Field name: override_constraints
  {
    cdr << (ros_message->override_constraints ? true : false);
  }

  // Field name: override_max_velocity_horizontal
  {
    cdr << ros_message->override_max_velocity_horizontal;
  }

  // Field name: override_max_acceleration_horizontal
  {
    cdr << ros_message->override_max_acceleration_horizontal;
  }

  // Field name: override_max_jerk_horizontal
  {
    cdr << ros_message->override_max_jerk_horizontal;
  }

  // Field name: override_max_velocity_vertical
  {
    cdr << ros_message->override_max_velocity_vertical;
  }

  // Field name: override_max_acceleration_vertical
  {
    cdr << ros_message->override_max_acceleration_vertical;
  }

  // Field name: override_max_jerk_vertical
  {
    cdr << ros_message->override_max_jerk_vertical;
  }

  // Field name: relax_heading
  {
    cdr << (ros_message->relax_heading ? true : false);
  }

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mrs_msgs__msg__Reference(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__Path(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__Path * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: input_id
  {
    cdr >> ros_message->input_id;
  }

  // Field name: use_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_heading = tmp ? true : false;
  }

  // Field name: fly_now
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fly_now = tmp ? true : false;
  }

  // Field name: stop_at_waypoints
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stop_at_waypoints = tmp ? true : false;
  }

  // Field name: loop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->loop = tmp ? true : false;
  }

  // Field name: max_execution_time
  {
    cdr >> ros_message->max_execution_time;
  }

  // Field name: max_deviation_from_path
  {
    cdr >> ros_message->max_deviation_from_path;
  }

  // Field name: dont_prepend_current_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dont_prepend_current_state = tmp ? true : false;
  }

  // Field name: override_heading_atan2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->override_heading_atan2 = tmp ? true : false;
  }

  // Field name: override_constraints
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->override_constraints = tmp ? true : false;
  }

  // Field name: override_max_velocity_horizontal
  {
    cdr >> ros_message->override_max_velocity_horizontal;
  }

  // Field name: override_max_acceleration_horizontal
  {
    cdr >> ros_message->override_max_acceleration_horizontal;
  }

  // Field name: override_max_jerk_horizontal
  {
    cdr >> ros_message->override_max_jerk_horizontal;
  }

  // Field name: override_max_velocity_vertical
  {
    cdr >> ros_message->override_max_velocity_vertical;
  }

  // Field name: override_max_acceleration_vertical
  {
    cdr >> ros_message->override_max_acceleration_vertical;
  }

  // Field name: override_max_jerk_vertical
  {
    cdr >> ros_message->override_max_jerk_vertical;
  }

  // Field name: relax_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->relax_heading = tmp ? true : false;
  }

  // Field name: points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->points.data) {
      mrs_msgs__msg__Reference__Sequence__fini(&ros_message->points);
    }
    if (!mrs_msgs__msg__Reference__Sequence__init(&ros_message->points, size)) {
      fprintf(stderr, "failed to create array for field 'points'");
      return false;
    }
    auto array_ptr = ros_message->points.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mrs_msgs__msg__Reference(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__Path(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Path__ros_msg_type * ros_message = static_cast<const _Path__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: input_id
  {
    size_t item_size = sizeof(ros_message->input_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_heading
  {
    size_t item_size = sizeof(ros_message->use_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fly_now
  {
    size_t item_size = sizeof(ros_message->fly_now);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stop_at_waypoints
  {
    size_t item_size = sizeof(ros_message->stop_at_waypoints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: loop
  {
    size_t item_size = sizeof(ros_message->loop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_execution_time
  {
    size_t item_size = sizeof(ros_message->max_execution_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_deviation_from_path
  {
    size_t item_size = sizeof(ros_message->max_deviation_from_path);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dont_prepend_current_state
  {
    size_t item_size = sizeof(ros_message->dont_prepend_current_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_heading_atan2
  {
    size_t item_size = sizeof(ros_message->override_heading_atan2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_constraints
  {
    size_t item_size = sizeof(ros_message->override_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_velocity_horizontal
  {
    size_t item_size = sizeof(ros_message->override_max_velocity_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_acceleration_horizontal
  {
    size_t item_size = sizeof(ros_message->override_max_acceleration_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_jerk_horizontal
  {
    size_t item_size = sizeof(ros_message->override_max_jerk_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_velocity_vertical
  {
    size_t item_size = sizeof(ros_message->override_max_velocity_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_acceleration_vertical
  {
    size_t item_size = sizeof(ros_message->override_max_acceleration_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_jerk_vertical
  {
    size_t item_size = sizeof(ros_message->override_max_jerk_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: relax_heading
  {
    size_t item_size = sizeof(ros_message->relax_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mrs_msgs__msg__Reference(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__Path(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: input_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: use_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fly_now
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: stop_at_waypoints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: loop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: max_execution_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_deviation_from_path
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: dont_prepend_current_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: override_heading_atan2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: override_constraints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: override_max_velocity_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_acceleration_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_jerk_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_velocity_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_acceleration_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_jerk_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: relax_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrs_msgs__msg__Reference(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__Path;
    is_plain =
      (
      offsetof(DataType, points) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__Path(
  const mrs_msgs__msg__Path * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: input_id
  {
    cdr << ros_message->input_id;
  }

  // Field name: use_heading
  {
    cdr << (ros_message->use_heading ? true : false);
  }

  // Field name: fly_now
  {
    cdr << (ros_message->fly_now ? true : false);
  }

  // Field name: stop_at_waypoints
  {
    cdr << (ros_message->stop_at_waypoints ? true : false);
  }

  // Field name: loop
  {
    cdr << (ros_message->loop ? true : false);
  }

  // Field name: max_execution_time
  {
    cdr << ros_message->max_execution_time;
  }

  // Field name: max_deviation_from_path
  {
    cdr << ros_message->max_deviation_from_path;
  }

  // Field name: dont_prepend_current_state
  {
    cdr << (ros_message->dont_prepend_current_state ? true : false);
  }

  // Field name: override_heading_atan2
  {
    cdr << (ros_message->override_heading_atan2 ? true : false);
  }

  // Field name: override_constraints
  {
    cdr << (ros_message->override_constraints ? true : false);
  }

  // Field name: override_max_velocity_horizontal
  {
    cdr << ros_message->override_max_velocity_horizontal;
  }

  // Field name: override_max_acceleration_horizontal
  {
    cdr << ros_message->override_max_acceleration_horizontal;
  }

  // Field name: override_max_jerk_horizontal
  {
    cdr << ros_message->override_max_jerk_horizontal;
  }

  // Field name: override_max_velocity_vertical
  {
    cdr << ros_message->override_max_velocity_vertical;
  }

  // Field name: override_max_acceleration_vertical
  {
    cdr << ros_message->override_max_acceleration_vertical;
  }

  // Field name: override_max_jerk_vertical
  {
    cdr << ros_message->override_max_jerk_vertical;
  }

  // Field name: relax_heading
  {
    cdr << (ros_message->relax_heading ? true : false);
  }

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mrs_msgs__msg__Reference(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__Path(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Path__ros_msg_type * ros_message = static_cast<const _Path__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: input_id
  {
    size_t item_size = sizeof(ros_message->input_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_heading
  {
    size_t item_size = sizeof(ros_message->use_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fly_now
  {
    size_t item_size = sizeof(ros_message->fly_now);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: stop_at_waypoints
  {
    size_t item_size = sizeof(ros_message->stop_at_waypoints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: loop
  {
    size_t item_size = sizeof(ros_message->loop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_execution_time
  {
    size_t item_size = sizeof(ros_message->max_execution_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_deviation_from_path
  {
    size_t item_size = sizeof(ros_message->max_deviation_from_path);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dont_prepend_current_state
  {
    size_t item_size = sizeof(ros_message->dont_prepend_current_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_heading_atan2
  {
    size_t item_size = sizeof(ros_message->override_heading_atan2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_constraints
  {
    size_t item_size = sizeof(ros_message->override_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_velocity_horizontal
  {
    size_t item_size = sizeof(ros_message->override_max_velocity_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_acceleration_horizontal
  {
    size_t item_size = sizeof(ros_message->override_max_acceleration_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_jerk_horizontal
  {
    size_t item_size = sizeof(ros_message->override_max_jerk_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_velocity_vertical
  {
    size_t item_size = sizeof(ros_message->override_max_velocity_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_acceleration_vertical
  {
    size_t item_size = sizeof(ros_message->override_max_acceleration_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override_max_jerk_vertical
  {
    size_t item_size = sizeof(ros_message->override_max_jerk_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: relax_heading
  {
    size_t item_size = sizeof(ros_message->relax_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mrs_msgs__msg__Reference(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__Path(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: input_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: use_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fly_now
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: stop_at_waypoints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: loop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: max_execution_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_deviation_from_path
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: dont_prepend_current_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: override_heading_atan2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: override_constraints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: override_max_velocity_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_acceleration_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_jerk_horizontal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_velocity_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_acceleration_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: override_max_jerk_vertical
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: relax_heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mrs_msgs__msg__Reference(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__Path;
    is_plain =
      (
      offsetof(DataType, points) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Path__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__Path * ros_message = static_cast<const mrs_msgs__msg__Path *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__Path(ros_message, cdr);
}

static bool _Path__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__Path * ros_message = static_cast<mrs_msgs__msg__Path *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__Path(cdr, ros_message);
}

static uint32_t _Path__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__Path(
      untyped_ros_message, 0));
}

static size_t _Path__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__Path(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Path = {
  "mrs_msgs::msg",
  "Path",
  _Path__cdr_serialize,
  _Path__cdr_deserialize,
  _Path__get_serialized_size,
  _Path__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Path__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Path,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__Path__get_type_hash,
  &mrs_msgs__msg__Path__get_type_description,
  &mrs_msgs__msg__Path__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, Path)() {
  return &_Path__type_support;
}

#if defined(__cplusplus)
}
#endif
