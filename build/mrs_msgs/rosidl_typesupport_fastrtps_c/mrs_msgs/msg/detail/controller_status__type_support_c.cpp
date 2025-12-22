// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/controller_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_msgs/msg/detail/controller_status__struct.h"
#include "mrs_msgs/msg/detail/controller_status__functions.h"
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


using _ControllerStatus__ros_msg_type = mrs_msgs__msg__ControllerStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_mrs_msgs__msg__ControllerStatus(
  const mrs_msgs__msg__ControllerStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: active
  {
    cdr << (ros_message->active ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_deserialize_mrs_msgs__msg__ControllerStatus(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs__msg__ControllerStatus * ros_message)
{
  // Field name: active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_mrs_msgs__msg__ControllerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerStatus__ros_msg_type * ros_message = static_cast<const _ControllerStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: active
  {
    size_t item_size = sizeof(ros_message->active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_mrs_msgs__msg__ControllerStatus(
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

  // Field name: active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__ControllerStatus;
    is_plain =
      (
      offsetof(DataType, active) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
bool cdr_serialize_key_mrs_msgs__msg__ControllerStatus(
  const mrs_msgs__msg__ControllerStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: active
  {
    cdr << (ros_message->active ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t get_serialized_size_key_mrs_msgs__msg__ControllerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerStatus__ros_msg_type * ros_message = static_cast<const _ControllerStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: active
  {
    size_t item_size = sizeof(ros_message->active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_msgs
size_t max_serialized_size_key_mrs_msgs__msg__ControllerStatus(
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
  // Field name: active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_msgs__msg__ControllerStatus;
    is_plain =
      (
      offsetof(DataType, active) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ControllerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_msgs__msg__ControllerStatus * ros_message = static_cast<const mrs_msgs__msg__ControllerStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_msgs__msg__ControllerStatus(ros_message, cdr);
}

static bool _ControllerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_msgs__msg__ControllerStatus * ros_message = static_cast<mrs_msgs__msg__ControllerStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_msgs__msg__ControllerStatus(cdr, ros_message);
}

static uint32_t _ControllerStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_msgs__msg__ControllerStatus(
      untyped_ros_message, 0));
}

static size_t _ControllerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_msgs__msg__ControllerStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerStatus = {
  "mrs_msgs::msg",
  "ControllerStatus",
  _ControllerStatus__cdr_serialize,
  _ControllerStatus__cdr_deserialize,
  _ControllerStatus__get_serialized_size,
  _ControllerStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControllerStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerStatus,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__ControllerStatus__get_type_hash,
  &mrs_msgs__msg__ControllerStatus__get_type_description,
  &mrs_msgs__msg__ControllerStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_msgs, msg, ControllerStatus)() {
  return &_ControllerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
