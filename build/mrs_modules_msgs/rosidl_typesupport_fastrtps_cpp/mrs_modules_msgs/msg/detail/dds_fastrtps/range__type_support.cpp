// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:msg/Range.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/range__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_modules_msgs/msg/detail/range__functions.h"
#include "mrs_modules_msgs/msg/detail/range__struct.hpp"

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

namespace mrs_modules_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mrs_modules_msgs::msg::TersusMessageHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mrs_modules_msgs::msg::TersusMessageHeader &);
size_t get_serialized_size(
  const mrs_modules_msgs::msg::TersusMessageHeader &,
  size_t current_alignment);
size_t
max_serialized_size_TersusMessageHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mrs_modules_msgs::msg::TersusMessageHeader &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mrs_modules_msgs::msg::TersusMessageHeader &,
  size_t current_alignment);
size_t
max_serialized_size_key_TersusMessageHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mrs_modules_msgs

namespace mrs_modules_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mrs_modules_msgs::msg::RangeInformation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mrs_modules_msgs::msg::RangeInformation &);
size_t get_serialized_size(
  const mrs_modules_msgs::msg::RangeInformation &,
  size_t current_alignment);
size_t
max_serialized_size_RangeInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mrs_modules_msgs::msg::RangeInformation &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mrs_modules_msgs::msg::RangeInformation &,
  size_t current_alignment);
size_t
max_serialized_size_key_RangeInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mrs_modules_msgs


namespace mrs_modules_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize(
  const mrs_modules_msgs::msg::Range & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: tersus_msg_header
  mrs_modules_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tersus_msg_header,
    cdr);

  // Member: numb_of_observ
  cdr << ros_message.numb_of_observ;

  // Member: info
  {
    size_t size = ros_message.info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      mrs_modules_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.info[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs::msg::Range & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: tersus_msg_header
  mrs_modules_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tersus_msg_header);

  // Member: numb_of_observ
  cdr >> ros_message.numb_of_observ;

  // Member: info
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

    ros_message.info.resize(size);
    for (size_t i = 0; i < size; i++) {
      mrs_modules_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.info[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size(
  const mrs_modules_msgs::msg::Range & ros_message,
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

  // Member: tersus_msg_header
  current_alignment +=
    mrs_modules_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tersus_msg_header, current_alignment);

  // Member: numb_of_observ
  {
    size_t item_size = sizeof(ros_message.numb_of_observ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: info
  {
    size_t array_size = ros_message.info.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mrs_modules_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.info[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_Range(
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
  // Member: tersus_msg_header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_modules_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TersusMessageHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: numb_of_observ
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: info
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
      size_t inner_size =
        mrs_modules_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RangeInformation(
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
    using DataType = mrs_modules_msgs::msg::Range;
    is_plain =
      (
      offsetof(DataType, info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize_key(
  const mrs_modules_msgs::msg::Range & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: tersus_msg_header
  mrs_modules_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.tersus_msg_header,
    cdr);

  // Member: numb_of_observ
  cdr << ros_message.numb_of_observ;

  // Member: info
  {
    size_t size = ros_message.info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      mrs_modules_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.info[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size_key(
  const mrs_modules_msgs::msg::Range & ros_message,
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

  // Member: tersus_msg_header
  current_alignment +=
    mrs_modules_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.tersus_msg_header, current_alignment);

  // Member: numb_of_observ
  {
    size_t item_size = sizeof(ros_message.numb_of_observ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: info
  {
    size_t array_size = ros_message.info.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mrs_modules_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.info[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_key_Range(
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

  // Member: tersus_msg_header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_modules_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_TersusMessageHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: numb_of_observ
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: info
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
      size_t inner_size =
        mrs_modules_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_RangeInformation(
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
    using DataType = mrs_modules_msgs::msg::Range;
    is_plain =
      (
      offsetof(DataType, info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Range__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::Range *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Range__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_modules_msgs::msg::Range *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Range__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::Range *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Range__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Range(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Range__callbacks = {
  "mrs_modules_msgs::msg",
  "Range",
  _Range__cdr_serialize,
  _Range__cdr_deserialize,
  _Range__get_serialized_size,
  _Range__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Range__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Range__callbacks,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__Range__get_type_hash,
  &mrs_modules_msgs__msg__Range__get_type_description,
  &mrs_modules_msgs__msg__Range__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::msg::Range>()
{
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_Range__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, msg, Range)() {
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_Range__handle;
}

#ifdef __cplusplus
}
#endif
