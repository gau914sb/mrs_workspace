// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/tersus_message_header__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"
#include "mrs_modules_msgs/msg/detail/tersus_message_header__struct.hpp"

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

namespace mrs_modules_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize(
  const mrs_modules_msgs::msg::TersusMessageHeader & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: message_name
  cdr << ros_message.message_name;

  // Member: port_address
  cdr << ros_message.port_address;

  // Member: sequence
  cdr << ros_message.sequence;

  // Member: idle_time
  cdr << ros_message.idle_time;

  // Member: time_status
  cdr << ros_message.time_status;

  // Member: gps_week
  cdr << ros_message.gps_week;

  // Member: gps_week_seconds
  cdr << ros_message.gps_week_seconds;

  // Member: receiver_status
  cdr << ros_message.receiver_status;

  // Member: software_version
  cdr << ros_message.software_version;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs::msg::TersusMessageHeader & ros_message)
{
  // Member: message_name
  cdr >> ros_message.message_name;

  // Member: port_address
  cdr >> ros_message.port_address;

  // Member: sequence
  cdr >> ros_message.sequence;

  // Member: idle_time
  cdr >> ros_message.idle_time;

  // Member: time_status
  cdr >> ros_message.time_status;

  // Member: gps_week
  cdr >> ros_message.gps_week;

  // Member: gps_week_seconds
  cdr >> ros_message.gps_week_seconds;

  // Member: receiver_status
  cdr >> ros_message.receiver_status;

  // Member: software_version
  cdr >> ros_message.software_version;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size(
  const mrs_modules_msgs::msg::TersusMessageHeader & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: message_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message_name.size() + 1);

  // Member: port_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.port_address.size() + 1);

  // Member: sequence
  {
    size_t item_size = sizeof(ros_message.sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: idle_time
  {
    size_t item_size = sizeof(ros_message.idle_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.time_status.size() + 1);

  // Member: gps_week
  {
    size_t item_size = sizeof(ros_message.gps_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gps_week_seconds
  {
    size_t item_size = sizeof(ros_message.gps_week_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: receiver_status
  {
    size_t item_size = sizeof(ros_message.receiver_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: software_version
  {
    size_t item_size = sizeof(ros_message.software_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_TersusMessageHeader(
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

  // Member: message_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: port_address
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: idle_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: time_status
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: gps_week
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: gps_week_seconds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: receiver_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: software_version
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_modules_msgs::msg::TersusMessageHeader;
    is_plain =
      (
      offsetof(DataType, software_version) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize_key(
  const mrs_modules_msgs::msg::TersusMessageHeader & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: message_name
  cdr << ros_message.message_name;

  // Member: port_address
  cdr << ros_message.port_address;

  // Member: sequence
  cdr << ros_message.sequence;

  // Member: idle_time
  cdr << ros_message.idle_time;

  // Member: time_status
  cdr << ros_message.time_status;

  // Member: gps_week
  cdr << ros_message.gps_week;

  // Member: gps_week_seconds
  cdr << ros_message.gps_week_seconds;

  // Member: receiver_status
  cdr << ros_message.receiver_status;

  // Member: software_version
  cdr << ros_message.software_version;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size_key(
  const mrs_modules_msgs::msg::TersusMessageHeader & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: message_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message_name.size() + 1);

  // Member: port_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.port_address.size() + 1);

  // Member: sequence
  {
    size_t item_size = sizeof(ros_message.sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: idle_time
  {
    size_t item_size = sizeof(ros_message.idle_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.time_status.size() + 1);

  // Member: gps_week
  {
    size_t item_size = sizeof(ros_message.gps_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gps_week_seconds
  {
    size_t item_size = sizeof(ros_message.gps_week_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: receiver_status
  {
    size_t item_size = sizeof(ros_message.receiver_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: software_version
  {
    size_t item_size = sizeof(ros_message.software_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_key_TersusMessageHeader(
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

  // Member: message_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: port_address
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: idle_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_status
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: gps_week
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gps_week_seconds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: receiver_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: software_version
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_modules_msgs::msg::TersusMessageHeader;
    is_plain =
      (
      offsetof(DataType, software_version) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _TersusMessageHeader__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::TersusMessageHeader *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TersusMessageHeader__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_modules_msgs::msg::TersusMessageHeader *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TersusMessageHeader__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::TersusMessageHeader *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TersusMessageHeader__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TersusMessageHeader(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TersusMessageHeader__callbacks = {
  "mrs_modules_msgs::msg",
  "TersusMessageHeader",
  _TersusMessageHeader__cdr_serialize,
  _TersusMessageHeader__cdr_deserialize,
  _TersusMessageHeader__get_serialized_size,
  _TersusMessageHeader__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TersusMessageHeader__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TersusMessageHeader__callbacks,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__TersusMessageHeader__get_type_hash,
  &mrs_modules_msgs__msg__TersusMessageHeader__get_type_description,
  &mrs_modules_msgs__msg__TersusMessageHeader__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::msg::TersusMessageHeader>()
{
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_TersusMessageHeader__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, msg, TersusMessageHeader)() {
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_TersusMessageHeader__handle;
}

#ifdef __cplusplus
}
#endif
