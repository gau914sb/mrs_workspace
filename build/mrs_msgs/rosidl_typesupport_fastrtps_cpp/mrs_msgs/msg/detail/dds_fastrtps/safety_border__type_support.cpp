// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/SafetyBorder.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/safety_border__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_msgs/msg/detail/safety_border__functions.h"
#include "mrs_msgs/msg/detail/safety_border__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace mrs_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mrs_msgs::msg::Prism &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mrs_msgs::msg::Prism &);
size_t get_serialized_size(
  const mrs_msgs::msg::Prism &,
  size_t current_alignment);
size_t
max_serialized_size_Prism(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mrs_msgs::msg::Prism &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mrs_msgs::msg::Prism &,
  size_t current_alignment);
size_t
max_serialized_size_key_Prism(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize(
  const mrs_msgs::msg::SafetyBorder & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: prism
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.prism,
    cdr);

  // Member: keep_obstacles
  cdr << (ros_message.keep_obstacles ? true : false);

  // Member: update_world_origin
  cdr << (ros_message.update_world_origin ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs::msg::SafetyBorder & ros_message)
{
  // Member: prism
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.prism);

  // Member: keep_obstacles
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.keep_obstacles = tmp ? true : false;
  }

  // Member: update_world_origin
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.update_world_origin = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size(
  const mrs_msgs::msg::SafetyBorder & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: prism
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.prism, current_alignment);

  // Member: keep_obstacles
  {
    size_t item_size = sizeof(ros_message.keep_obstacles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: update_world_origin
  {
    size_t item_size = sizeof(ros_message.update_world_origin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_SafetyBorder(
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

  // Member: prism
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Prism(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: keep_obstacles
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: update_world_origin
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
    using DataType = mrs_msgs::msg::SafetyBorder;
    is_plain =
      (
      offsetof(DataType, update_world_origin) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize_key(
  const mrs_msgs::msg::SafetyBorder & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: prism
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.prism,
    cdr);

  // Member: keep_obstacles
  cdr << (ros_message.keep_obstacles ? true : false);

  // Member: update_world_origin
  cdr << (ros_message.update_world_origin ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size_key(
  const mrs_msgs::msg::SafetyBorder & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: prism
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.prism, current_alignment);

  // Member: keep_obstacles
  {
    size_t item_size = sizeof(ros_message.keep_obstacles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: update_world_origin
  {
    size_t item_size = sizeof(ros_message.update_world_origin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_key_SafetyBorder(
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

  // Member: prism
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Prism(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: keep_obstacles
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: update_world_origin
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
    using DataType = mrs_msgs::msg::SafetyBorder;
    is_plain =
      (
      offsetof(DataType, update_world_origin) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _SafetyBorder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::SafetyBorder *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SafetyBorder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_msgs::msg::SafetyBorder *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SafetyBorder__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::SafetyBorder *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SafetyBorder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SafetyBorder(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SafetyBorder__callbacks = {
  "mrs_msgs::msg",
  "SafetyBorder",
  _SafetyBorder__cdr_serialize,
  _SafetyBorder__cdr_deserialize,
  _SafetyBorder__get_serialized_size,
  _SafetyBorder__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SafetyBorder__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SafetyBorder__callbacks,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__SafetyBorder__get_type_hash,
  &mrs_msgs__msg__SafetyBorder__get_type_description,
  &mrs_msgs__msg__SafetyBorder__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::SafetyBorder>()
{
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_SafetyBorder__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, msg, SafetyBorder)() {
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_SafetyBorder__handle;
}

#ifdef __cplusplus
}
#endif
