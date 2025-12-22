// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/RangeWithCovarianceIdentified.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/range_with_covariance_identified__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/range_with_covariance_identified__struct.h"
#include "mrs_msgs/msg/detail/range_with_covariance_identified__functions.h"
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

#include "sensor_msgs/msg/detail/range__functions.h"  // range

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_sensor_msgs__msg__Range(
  const sensor_msgs__msg__Range * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_deserialize_sensor_msgs__msg__Range(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__Range * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_sensor_msgs__msg__Range(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_sensor_msgs__msg__Range(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
bool cdr_serialize_key_sensor_msgs__msg__Range(
  const sensor_msgs__msg__Range * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t get_serialized_size_key_sensor_msgs__msg__Range(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
size_t max_serialized_size_key_sensor_msgs__msg__Range(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Range)();


using _RangeWithCovarianceIdentified__ros_msg_type = mrs_msgs__msg__RangeWithCovarianceIdentified;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__RangeWithCovarianceIdentified(
  const mrs_msgs__msg__RangeWithCovarianceIdentified * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: range
  {
    cdr_serialize_sensor_msgs__msg__Range(
      &ros_message->range, cdr);
  }

  // Field name: variance
  {
    cdr << ros_message->variance;
  }

  // Field name: power_a
  {
    cdr << ros_message->power_a;
  }

  // Field name: power_b
  {
    cdr << ros_message->power_b;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__RangeWithCovarianceIdentified(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__RangeWithCovarianceIdentified * ros_message)
{
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: range
  {
    cdr_deserialize_sensor_msgs__msg__Range(cdr, &ros_message->range);
  }

  // Field name: variance
  {
    cdr >> ros_message->variance;
  }

  // Field name: power_a
  {
    cdr >> ros_message->power_a;
  }

  // Field name: power_b
  {
    cdr >> ros_message->power_b;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__RangeWithCovarianceIdentified(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RangeWithCovarianceIdentified__ros_msg_type * ros_message = static_cast<const _RangeWithCovarianceIdentified__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range
  current_alignment += get_serialized_size_sensor_msgs__msg__Range(
    &(ros_message->range), current_alignment);

  // Field name: variance
  {
    size_t item_size = sizeof(ros_message->variance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: power_a
  {
    size_t item_size = sizeof(ros_message->power_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: power_b
  {
    size_t item_size = sizeof(ros_message->power_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__RangeWithCovarianceIdentified(
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

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: range
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Range(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: variance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: power_a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: power_b
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
    using DataType = mrs_msgs__msg__RangeWithCovarianceIdentified;
    is_plain =
      (
      offsetof(DataType, power_b) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__RangeWithCovarianceIdentified(
  const mrs_msgs__msg__RangeWithCovarianceIdentified * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: range
  {
    cdr_serialize_key_sensor_msgs__msg__Range(
      &ros_message->range, cdr);
  }

  // Field name: variance
  {
    cdr << ros_message->variance;
  }

  // Field name: power_a
  {
    cdr << ros_message->power_a;
  }

  // Field name: power_b
  {
    cdr << ros_message->power_b;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__RangeWithCovarianceIdentified(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RangeWithCovarianceIdentified__ros_msg_type * ros_message = static_cast<const _RangeWithCovarianceIdentified__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range
  current_alignment += get_serialized_size_key_sensor_msgs__msg__Range(
    &(ros_message->range), current_alignment);

  // Field name: variance
  {
    size_t item_size = sizeof(ros_message->variance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: power_a
  {
    size_t item_size = sizeof(ros_message->power_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: power_b
  {
    size_t item_size = sizeof(ros_message->power_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__RangeWithCovarianceIdentified(
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
  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: range
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Range(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: variance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: power_a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: power_b
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
    using DataType = mrs_msgs__msg__RangeWithCovarianceIdentified;
    is_plain =
      (
      offsetof(DataType, power_b) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RangeWithCovarianceIdentified__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__RangeWithCovarianceIdentified * ros_message = static_cast<const mrs_msgs__msg__RangeWithCovarianceIdentified *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__RangeWithCovarianceIdentified(ros_message, cdr);
}

static bool _RangeWithCovarianceIdentified__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__RangeWithCovarianceIdentified * ros_message = static_cast<mrs_msgs__msg__RangeWithCovarianceIdentified *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__RangeWithCovarianceIdentified(cdr, ros_message);
}

static uint32_t _RangeWithCovarianceIdentified__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__RangeWithCovarianceIdentified(
      untyped_ros_message, 0));
}

static size_t _RangeWithCovarianceIdentified__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__RangeWithCovarianceIdentified(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RangeWithCovarianceIdentified = {
  "mrs_msgs::msg",
  "RangeWithCovarianceIdentified",
  _RangeWithCovarianceIdentified__cdr_serialize,
  _RangeWithCovarianceIdentified__cdr_deserialize,
  _RangeWithCovarianceIdentified__get_serialized_size,
  _RangeWithCovarianceIdentified__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RangeWithCovarianceIdentified__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RangeWithCovarianceIdentified,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__RangeWithCovarianceIdentified__get_type_hash,
  &mrs_msgs__msg__RangeWithCovarianceIdentified__get_type_description,
  &mrs_msgs__msg__RangeWithCovarianceIdentified__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, RangeWithCovarianceIdentified)() {
  return &_RangeWithCovarianceIdentified__type_support;
}

#if defined(__cplusplus)
}
#endif
