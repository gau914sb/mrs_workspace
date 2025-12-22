// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/Se3Gains.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/se3_gains__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/se3_gains__struct.h"
#include "mrs_msgs/msg/detail/se3_gains__functions.h"
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


using _Se3Gains__ros_msg_type = mrs_msgs__msg__Se3Gains;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__Se3Gains(
  const mrs_msgs__msg__Se3Gains * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: kpxy
  {
    cdr << ros_message->kpxy;
  }

  // Field name: kvxy
  {
    cdr << ros_message->kvxy;
  }

  // Field name: kaxy
  {
    cdr << ros_message->kaxy;
  }

  // Field name: kpz
  {
    cdr << ros_message->kpz;
  }

  // Field name: kvz
  {
    cdr << ros_message->kvz;
  }

  // Field name: kaz
  {
    cdr << ros_message->kaz;
  }

  // Field name: kibxy
  {
    cdr << ros_message->kibxy;
  }

  // Field name: kibxy_lim
  {
    cdr << ros_message->kibxy_lim;
  }

  // Field name: kiwxy
  {
    cdr << ros_message->kiwxy;
  }

  // Field name: kiwxy_lim
  {
    cdr << ros_message->kiwxy_lim;
  }

  // Field name: kqrp
  {
    cdr << ros_message->kqrp;
  }

  // Field name: kqy
  {
    cdr << ros_message->kqy;
  }

  // Field name: km
  {
    cdr << ros_message->km;
  }

  // Field name: km_lim
  {
    cdr << ros_message->km_lim;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__Se3Gains(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__Se3Gains * ros_message)
{
  // Field name: kpxy
  {
    cdr >> ros_message->kpxy;
  }

  // Field name: kvxy
  {
    cdr >> ros_message->kvxy;
  }

  // Field name: kaxy
  {
    cdr >> ros_message->kaxy;
  }

  // Field name: kpz
  {
    cdr >> ros_message->kpz;
  }

  // Field name: kvz
  {
    cdr >> ros_message->kvz;
  }

  // Field name: kaz
  {
    cdr >> ros_message->kaz;
  }

  // Field name: kibxy
  {
    cdr >> ros_message->kibxy;
  }

  // Field name: kibxy_lim
  {
    cdr >> ros_message->kibxy_lim;
  }

  // Field name: kiwxy
  {
    cdr >> ros_message->kiwxy;
  }

  // Field name: kiwxy_lim
  {
    cdr >> ros_message->kiwxy_lim;
  }

  // Field name: kqrp
  {
    cdr >> ros_message->kqrp;
  }

  // Field name: kqy
  {
    cdr >> ros_message->kqy;
  }

  // Field name: km
  {
    cdr >> ros_message->km;
  }

  // Field name: km_lim
  {
    cdr >> ros_message->km_lim;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__Se3Gains(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Se3Gains__ros_msg_type * ros_message = static_cast<const _Se3Gains__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: kpxy
  {
    size_t item_size = sizeof(ros_message->kpxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kvxy
  {
    size_t item_size = sizeof(ros_message->kvxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kaxy
  {
    size_t item_size = sizeof(ros_message->kaxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kpz
  {
    size_t item_size = sizeof(ros_message->kpz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kvz
  {
    size_t item_size = sizeof(ros_message->kvz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kaz
  {
    size_t item_size = sizeof(ros_message->kaz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kibxy
  {
    size_t item_size = sizeof(ros_message->kibxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kibxy_lim
  {
    size_t item_size = sizeof(ros_message->kibxy_lim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kiwxy
  {
    size_t item_size = sizeof(ros_message->kiwxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kiwxy_lim
  {
    size_t item_size = sizeof(ros_message->kiwxy_lim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kqrp
  {
    size_t item_size = sizeof(ros_message->kqrp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kqy
  {
    size_t item_size = sizeof(ros_message->kqy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: km
  {
    size_t item_size = sizeof(ros_message->km);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: km_lim
  {
    size_t item_size = sizeof(ros_message->km_lim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__Se3Gains(
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

  // Field name: kpxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kvxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kaxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kpz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kvz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kaz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kibxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kibxy_lim
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kiwxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kiwxy_lim
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kqrp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kqy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: km
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: km_lim
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
    using DataType = mrs_msgs__msg__Se3Gains;
    is_plain =
      (
      offsetof(DataType, km_lim) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__Se3Gains(
  const mrs_msgs__msg__Se3Gains * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: kpxy
  {
    cdr << ros_message->kpxy;
  }

  // Field name: kvxy
  {
    cdr << ros_message->kvxy;
  }

  // Field name: kaxy
  {
    cdr << ros_message->kaxy;
  }

  // Field name: kpz
  {
    cdr << ros_message->kpz;
  }

  // Field name: kvz
  {
    cdr << ros_message->kvz;
  }

  // Field name: kaz
  {
    cdr << ros_message->kaz;
  }

  // Field name: kibxy
  {
    cdr << ros_message->kibxy;
  }

  // Field name: kibxy_lim
  {
    cdr << ros_message->kibxy_lim;
  }

  // Field name: kiwxy
  {
    cdr << ros_message->kiwxy;
  }

  // Field name: kiwxy_lim
  {
    cdr << ros_message->kiwxy_lim;
  }

  // Field name: kqrp
  {
    cdr << ros_message->kqrp;
  }

  // Field name: kqy
  {
    cdr << ros_message->kqy;
  }

  // Field name: km
  {
    cdr << ros_message->km;
  }

  // Field name: km_lim
  {
    cdr << ros_message->km_lim;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__Se3Gains(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Se3Gains__ros_msg_type * ros_message = static_cast<const _Se3Gains__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: kpxy
  {
    size_t item_size = sizeof(ros_message->kpxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kvxy
  {
    size_t item_size = sizeof(ros_message->kvxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kaxy
  {
    size_t item_size = sizeof(ros_message->kaxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kpz
  {
    size_t item_size = sizeof(ros_message->kpz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kvz
  {
    size_t item_size = sizeof(ros_message->kvz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kaz
  {
    size_t item_size = sizeof(ros_message->kaz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kibxy
  {
    size_t item_size = sizeof(ros_message->kibxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kibxy_lim
  {
    size_t item_size = sizeof(ros_message->kibxy_lim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kiwxy
  {
    size_t item_size = sizeof(ros_message->kiwxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kiwxy_lim
  {
    size_t item_size = sizeof(ros_message->kiwxy_lim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kqrp
  {
    size_t item_size = sizeof(ros_message->kqrp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kqy
  {
    size_t item_size = sizeof(ros_message->kqy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: km
  {
    size_t item_size = sizeof(ros_message->km);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: km_lim
  {
    size_t item_size = sizeof(ros_message->km_lim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__Se3Gains(
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
  // Field name: kpxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kvxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kaxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kpz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kvz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kaz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kibxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kibxy_lim
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kiwxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kiwxy_lim
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kqrp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: kqy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: km
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: km_lim
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
    using DataType = mrs_msgs__msg__Se3Gains;
    is_plain =
      (
      offsetof(DataType, km_lim) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Se3Gains__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__Se3Gains * ros_message = static_cast<const mrs_msgs__msg__Se3Gains *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__Se3Gains(ros_message, cdr);
}

static bool _Se3Gains__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__Se3Gains * ros_message = static_cast<mrs_msgs__msg__Se3Gains *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__Se3Gains(cdr, ros_message);
}

static uint32_t _Se3Gains__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__Se3Gains(
      untyped_ros_message, 0));
}

static size_t _Se3Gains__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__Se3Gains(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Se3Gains = {
  "mrs_msgs::msg",
  "Se3Gains",
  _Se3Gains__cdr_serialize,
  _Se3Gains__cdr_deserialize,
  _Se3Gains__get_serialized_size,
  _Se3Gains__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Se3Gains__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Se3Gains,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__Se3Gains__get_type_hash,
  &mrs_msgs__msg__Se3Gains__get_type_description,
  &mrs_msgs__msg__Se3Gains__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, Se3Gains)() {
  return &_Se3Gains__type_support;
}

#if defined(__cplusplus)
}
#endif
