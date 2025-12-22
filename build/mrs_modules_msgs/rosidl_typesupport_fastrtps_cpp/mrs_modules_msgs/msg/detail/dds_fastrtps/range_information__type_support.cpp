// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/range_information__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_modules_msgs/msg/detail/range_information__functions.h"
#include "mrs_modules_msgs/msg/detail/range_information__struct.hpp"

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
  const mrs_modules_msgs::msg::RangeInformation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: prn_number
  cdr << ros_message.prn_number;

  // Member: glofreq
  cdr << ros_message.glofreq;

  // Member: psr
  cdr << ros_message.psr;

  // Member: psr_std
  cdr << ros_message.psr_std;

  // Member: adr
  cdr << ros_message.adr;

  // Member: adr_std
  cdr << ros_message.adr_std;

  // Member: dopp
  cdr << ros_message.dopp;

  // Member: noise_density_ratio
  cdr << ros_message.noise_density_ratio;

  // Member: locktime
  cdr << ros_message.locktime;

  // Member: tracking_status
  cdr << ros_message.tracking_status;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs::msg::RangeInformation & ros_message)
{
  // Member: prn_number
  cdr >> ros_message.prn_number;

  // Member: glofreq
  cdr >> ros_message.glofreq;

  // Member: psr
  cdr >> ros_message.psr;

  // Member: psr_std
  cdr >> ros_message.psr_std;

  // Member: adr
  cdr >> ros_message.adr;

  // Member: adr_std
  cdr >> ros_message.adr_std;

  // Member: dopp
  cdr >> ros_message.dopp;

  // Member: noise_density_ratio
  cdr >> ros_message.noise_density_ratio;

  // Member: locktime
  cdr >> ros_message.locktime;

  // Member: tracking_status
  cdr >> ros_message.tracking_status;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size(
  const mrs_modules_msgs::msg::RangeInformation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: prn_number
  {
    size_t item_size = sizeof(ros_message.prn_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: glofreq
  {
    size_t item_size = sizeof(ros_message.glofreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: psr
  {
    size_t item_size = sizeof(ros_message.psr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: psr_std
  {
    size_t item_size = sizeof(ros_message.psr_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: adr
  {
    size_t item_size = sizeof(ros_message.adr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: adr_std
  {
    size_t item_size = sizeof(ros_message.adr_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dopp
  {
    size_t item_size = sizeof(ros_message.dopp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: noise_density_ratio
  {
    size_t item_size = sizeof(ros_message.noise_density_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: locktime
  {
    size_t item_size = sizeof(ros_message.locktime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tracking_status
  {
    size_t item_size = sizeof(ros_message.tracking_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_RangeInformation(
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

  // Member: prn_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: glofreq
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: psr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: psr_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: adr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: adr_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: dopp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: noise_density_ratio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: locktime
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: tracking_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_modules_msgs::msg::RangeInformation;
    is_plain =
      (
      offsetof(DataType, tracking_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize_key(
  const mrs_modules_msgs::msg::RangeInformation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: prn_number
  cdr << ros_message.prn_number;

  // Member: glofreq
  cdr << ros_message.glofreq;

  // Member: psr
  cdr << ros_message.psr;

  // Member: psr_std
  cdr << ros_message.psr_std;

  // Member: adr
  cdr << ros_message.adr;

  // Member: adr_std
  cdr << ros_message.adr_std;

  // Member: dopp
  cdr << ros_message.dopp;

  // Member: noise_density_ratio
  cdr << ros_message.noise_density_ratio;

  // Member: locktime
  cdr << ros_message.locktime;

  // Member: tracking_status
  cdr << ros_message.tracking_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size_key(
  const mrs_modules_msgs::msg::RangeInformation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: prn_number
  {
    size_t item_size = sizeof(ros_message.prn_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: glofreq
  {
    size_t item_size = sizeof(ros_message.glofreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: psr
  {
    size_t item_size = sizeof(ros_message.psr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: psr_std
  {
    size_t item_size = sizeof(ros_message.psr_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: adr
  {
    size_t item_size = sizeof(ros_message.adr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: adr_std
  {
    size_t item_size = sizeof(ros_message.adr_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dopp
  {
    size_t item_size = sizeof(ros_message.dopp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: noise_density_ratio
  {
    size_t item_size = sizeof(ros_message.noise_density_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: locktime
  {
    size_t item_size = sizeof(ros_message.locktime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tracking_status
  {
    size_t item_size = sizeof(ros_message.tracking_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_key_RangeInformation(
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

  // Member: prn_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: glofreq
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: psr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: psr_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: adr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: adr_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dopp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: noise_density_ratio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: locktime
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tracking_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrs_modules_msgs::msg::RangeInformation;
    is_plain =
      (
      offsetof(DataType, tracking_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _RangeInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::RangeInformation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RangeInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_modules_msgs::msg::RangeInformation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RangeInformation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::RangeInformation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RangeInformation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RangeInformation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RangeInformation__callbacks = {
  "mrs_modules_msgs::msg",
  "RangeInformation",
  _RangeInformation__cdr_serialize,
  _RangeInformation__cdr_deserialize,
  _RangeInformation__get_serialized_size,
  _RangeInformation__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RangeInformation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RangeInformation__callbacks,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__RangeInformation__get_type_hash,
  &mrs_modules_msgs__msg__RangeInformation__get_type_description,
  &mrs_modules_msgs__msg__RangeInformation__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::msg::RangeInformation>()
{
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_RangeInformation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, msg, RangeInformation)() {
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_RangeInformation__handle;
}

#ifdef __cplusplus
}
#endif
