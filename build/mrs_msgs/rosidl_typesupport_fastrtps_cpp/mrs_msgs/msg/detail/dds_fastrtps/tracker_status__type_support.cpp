// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/TrackerStatus.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/tracker_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_msgs/msg/detail/tracker_status__functions.h"
#include "mrs_msgs/msg/detail/tracker_status__struct.hpp"

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
  const mrs_msgs::msg::ReferenceStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mrs_msgs::msg::ReferenceStamped &);
size_t get_serialized_size(
  const mrs_msgs::msg::ReferenceStamped &,
  size_t current_alignment);
size_t
max_serialized_size_ReferenceStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mrs_msgs::msg::ReferenceStamped &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mrs_msgs::msg::ReferenceStamped &,
  size_t current_alignment);
size_t
max_serialized_size_key_ReferenceStamped(
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
  const mrs_msgs::msg::TrackerStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: active
  cdr << (ros_message.active ? true : false);

  // Member: callbacks_enabled
  cdr << (ros_message.callbacks_enabled ? true : false);

  // Member: state
  cdr << ros_message.state;

  // Member: have_goal
  cdr << (ros_message.have_goal ? true : false);

  // Member: tracking_trajectory
  cdr << (ros_message.tracking_trajectory ? true : false);

  // Member: trajectory_length
  cdr << ros_message.trajectory_length;

  // Member: trajectory_idx
  cdr << ros_message.trajectory_idx;

  // Member: trajectory_reference
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trajectory_reference,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs::msg::TrackerStatus & ros_message)
{
  // Member: active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active = tmp ? true : false;
  }

  // Member: callbacks_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.callbacks_enabled = tmp ? true : false;
  }

  // Member: state
  cdr >> ros_message.state;

  // Member: have_goal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.have_goal = tmp ? true : false;
  }

  // Member: tracking_trajectory
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tracking_trajectory = tmp ? true : false;
  }

  // Member: trajectory_length
  cdr >> ros_message.trajectory_length;

  // Member: trajectory_idx
  cdr >> ros_message.trajectory_idx;

  // Member: trajectory_reference
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trajectory_reference);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size(
  const mrs_msgs::msg::TrackerStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: active
  {
    size_t item_size = sizeof(ros_message.active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: callbacks_enabled
  {
    size_t item_size = sizeof(ros_message.callbacks_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: have_goal
  {
    size_t item_size = sizeof(ros_message.have_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tracking_trajectory
  {
    size_t item_size = sizeof(ros_message.tracking_trajectory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trajectory_length
  {
    size_t item_size = sizeof(ros_message.trajectory_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trajectory_idx
  {
    size_t item_size = sizeof(ros_message.trajectory_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trajectory_reference
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trajectory_reference, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_TrackerStatus(
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

  // Member: active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: callbacks_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: have_goal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: tracking_trajectory
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: trajectory_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: trajectory_idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: trajectory_reference
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ReferenceStamped(
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
    using DataType = mrs_msgs::msg::TrackerStatus;
    is_plain =
      (
      offsetof(DataType, trajectory_reference) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize_key(
  const mrs_msgs::msg::TrackerStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: active
  cdr << (ros_message.active ? true : false);

  // Member: callbacks_enabled
  cdr << (ros_message.callbacks_enabled ? true : false);

  // Member: state
  cdr << ros_message.state;

  // Member: have_goal
  cdr << (ros_message.have_goal ? true : false);

  // Member: tracking_trajectory
  cdr << (ros_message.tracking_trajectory ? true : false);

  // Member: trajectory_length
  cdr << ros_message.trajectory_length;

  // Member: trajectory_idx
  cdr << ros_message.trajectory_idx;

  // Member: trajectory_reference
  mrs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.trajectory_reference,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size_key(
  const mrs_msgs::msg::TrackerStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: active
  {
    size_t item_size = sizeof(ros_message.active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: callbacks_enabled
  {
    size_t item_size = sizeof(ros_message.callbacks_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: have_goal
  {
    size_t item_size = sizeof(ros_message.have_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tracking_trajectory
  {
    size_t item_size = sizeof(ros_message.tracking_trajectory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trajectory_length
  {
    size_t item_size = sizeof(ros_message.trajectory_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trajectory_idx
  {
    size_t item_size = sizeof(ros_message.trajectory_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trajectory_reference
  current_alignment +=
    mrs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.trajectory_reference, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_key_TrackerStatus(
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

  // Member: active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: callbacks_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: have_goal
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tracking_trajectory
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trajectory_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trajectory_idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trajectory_reference
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mrs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ReferenceStamped(
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
    using DataType = mrs_msgs::msg::TrackerStatus;
    is_plain =
      (
      offsetof(DataType, trajectory_reference) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _TrackerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::TrackerStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrackerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_msgs::msg::TrackerStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrackerStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::TrackerStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrackerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrackerStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrackerStatus__callbacks = {
  "mrs_msgs::msg",
  "TrackerStatus",
  _TrackerStatus__cdr_serialize,
  _TrackerStatus__cdr_deserialize,
  _TrackerStatus__get_serialized_size,
  _TrackerStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrackerStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrackerStatus__callbacks,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__TrackerStatus__get_type_hash,
  &mrs_msgs__msg__TrackerStatus__get_type_description,
  &mrs_msgs__msg__TrackerStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::TrackerStatus>()
{
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_TrackerStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, msg, TrackerStatus)() {
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_TrackerStatus__handle;
}

#ifdef __cplusplus
}
#endif
