// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:msg/ParachuteDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/parachute_diagnostics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_modules_msgs/msg/detail/parachute_diagnostics__functions.h"
#include "mrs_modules_msgs/msg/detail/parachute_diagnostics__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_key_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace mrs_modules_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize(
  const mrs_modules_msgs::msg::ParachuteDiagnostics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  // Member: alive
  cdr << (ros_message.alive ? true : false);

  // Member: armed
  cdr << (ros_message.armed ? true : false);

  // Member: fired
  cdr << (ros_message.fired ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs::msg::ParachuteDiagnostics & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: alive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.alive = tmp ? true : false;
  }

  // Member: armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.armed = tmp ? true : false;
  }

  // Member: fired
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fired = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size(
  const mrs_modules_msgs::msg::ParachuteDiagnostics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  // Member: alive
  {
    size_t item_size = sizeof(ros_message.alive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: armed
  {
    size_t item_size = sizeof(ros_message.armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fired
  {
    size_t item_size = sizeof(ros_message.fired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_ParachuteDiagnostics(
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

  // Member: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: alive
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: armed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: fired
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
    using DataType = mrs_modules_msgs::msg::ParachuteDiagnostics;
    is_plain =
      (
      offsetof(DataType, fired) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize_key(
  const mrs_modules_msgs::msg::ParachuteDiagnostics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.stamp,
    cdr);

  // Member: alive
  cdr << (ros_message.alive ? true : false);

  // Member: armed
  cdr << (ros_message.armed ? true : false);

  // Member: fired
  cdr << (ros_message.fired ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size_key(
  const mrs_modules_msgs::msg::ParachuteDiagnostics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.stamp, current_alignment);

  // Member: alive
  {
    size_t item_size = sizeof(ros_message.alive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: armed
  {
    size_t item_size = sizeof(ros_message.armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fired
  {
    size_t item_size = sizeof(ros_message.fired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_key_ParachuteDiagnostics(
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

  // Member: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: alive
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: armed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fired
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
    using DataType = mrs_modules_msgs::msg::ParachuteDiagnostics;
    is_plain =
      (
      offsetof(DataType, fired) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ParachuteDiagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::ParachuteDiagnostics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ParachuteDiagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_modules_msgs::msg::ParachuteDiagnostics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ParachuteDiagnostics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::ParachuteDiagnostics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ParachuteDiagnostics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ParachuteDiagnostics(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ParachuteDiagnostics__callbacks = {
  "mrs_modules_msgs::msg",
  "ParachuteDiagnostics",
  _ParachuteDiagnostics__cdr_serialize,
  _ParachuteDiagnostics__cdr_deserialize,
  _ParachuteDiagnostics__get_serialized_size,
  _ParachuteDiagnostics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ParachuteDiagnostics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ParachuteDiagnostics__callbacks,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__ParachuteDiagnostics__get_type_hash,
  &mrs_modules_msgs__msg__ParachuteDiagnostics__get_type_description,
  &mrs_modules_msgs__msg__ParachuteDiagnostics__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::msg::ParachuteDiagnostics>()
{
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_ParachuteDiagnostics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, msg, ParachuteDiagnostics)() {
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_ParachuteDiagnostics__handle;
}

#ifdef __cplusplus
}
#endif
