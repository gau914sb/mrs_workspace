// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/RtkGps.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/rtk_gps__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_msgs/msg/detail/rtk_gps__functions.h"
#include "mrs_msgs/msg/detail/rtk_gps__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace mrs_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mrs_msgs::msg::GpsData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mrs_msgs::msg::GpsData &);
size_t get_serialized_size(
  const mrs_msgs::msg::GpsData &,
  size_t current_alignment);
size_t
max_serialized_size_GpsData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mrs_msgs::msg::GpsData &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mrs_msgs::msg::GpsData &,
  size_t current_alignment);
size_t
max_serialized_size_key_GpsData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mrs_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::NavSatStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::NavSatStatus &);
size_t get_serialized_size(
  const sensor_msgs::msg::NavSatStatus &,
  size_t current_alignment);
size_t
max_serialized_size_NavSatStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const sensor_msgs::msg::NavSatStatus &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const sensor_msgs::msg::NavSatStatus &,
  size_t current_alignment);
size_t
max_serialized_size_key_NavSatStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace mrs_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mrs_msgs::msg::RtkFixType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mrs_msgs::msg::RtkFixType &);
size_t get_serialized_size(
  const mrs_msgs::msg::RtkFixType &,
  size_t current_alignment);
size_t
max_serialized_size_RtkFixType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mrs_msgs::msg::RtkFixType &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mrs_msgs::msg::RtkFixType &,
  size_t current_alignment);
size_t
max_serialized_size_key_RtkFixType(
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
  const mrs_msgs::msg::RtkGps & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: gps
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.gps,
    cdr);

  // Member: status
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status,
    cdr);

  // Member: fix_type
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fix_type,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs::msg::RtkGps & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: gps
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.gps);

  // Member: status
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status);

  // Member: fix_type
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fix_type);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size(
  const mrs_msgs::msg::RtkGps & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: gps
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.gps, current_alignment);

  // Member: status
  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status, current_alignment);

  // Member: fix_type
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fix_type, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_RtkGps(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: gps
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GpsData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NavSatStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: fix_type
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RtkFixType(
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
    using DataType = mrs_msgs::msg::RtkGps;
    is_plain =
      (
      offsetof(DataType, fix_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize_key(
  const mrs_msgs::msg::RtkGps & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: gps
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.gps,
    cdr);

  // Member: status
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.status,
    cdr);

  // Member: fix_type
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.fix_type,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size_key(
  const mrs_msgs::msg::RtkGps & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: gps
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.gps, current_alignment);

  // Member: status
  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.status, current_alignment);

  // Member: fix_type
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.fix_type, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_key_RtkGps(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gps
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_GpsData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_NavSatStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: fix_type
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_RtkFixType(
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
    using DataType = mrs_msgs::msg::RtkGps;
    is_plain =
      (
      offsetof(DataType, fix_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _RtkGps__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::RtkGps *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RtkGps__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_msgs::msg::RtkGps *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RtkGps__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::RtkGps *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RtkGps__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RtkGps(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RtkGps__callbacks = {
  "mrs_msgs::msg",
  "RtkGps",
  _RtkGps__cdr_serialize,
  _RtkGps__cdr_deserialize,
  _RtkGps__get_serialized_size,
  _RtkGps__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RtkGps__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RtkGps__callbacks,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__RtkGps__get_type_hash,
  &mrs_msgs__msg__RtkGps__get_type_description,
  &mrs_msgs__msg__RtkGps__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::RtkGps>()
{
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_RtkGps__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, msg, RtkGps)() {
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_RtkGps__handle;
}

#ifdef __cplusplus
}
#endif
