// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/GripperDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/gripper_diagnostics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_msgs/msg/detail/gripper_diagnostics__functions.h"
#include "mrs_msgs/msg/detail/gripper_diagnostics__struct.hpp"

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


namespace mrs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize(
  const mrs_msgs::msg::GripperDiagnostics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  // Member: gripper_on
  cdr << (ros_message.gripper_on ? true : false);

  // Member: gripping_object
  cdr << (ros_message.gripping_object ? true : false);

  // Member: has_hall
  cdr << (ros_message.has_hall ? true : false);

  // Member: hall1_debug
  cdr << ros_message.hall1_debug;

  // Member: hall2_debug
  cdr << ros_message.hall2_debug;

  // Member: has_ultrasonic
  cdr << (ros_message.has_ultrasonic ? true : false);

  // Member: ultrasonic1_debug
  cdr << ros_message.ultrasonic1_debug;

  // Member: ultrasonic2_debug
  cdr << ros_message.ultrasonic2_debug;

  // Member: has_proximity
  cdr << (ros_message.has_proximity ? true : false);

  // Member: proximity1_debug
  cdr << ros_message.proximity1_debug;

  // Member: proximity2_debug
  cdr << ros_message.proximity2_debug;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs::msg::GripperDiagnostics & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: gripper_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gripper_on = tmp ? true : false;
  }

  // Member: gripping_object
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gripping_object = tmp ? true : false;
  }

  // Member: has_hall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_hall = tmp ? true : false;
  }

  // Member: hall1_debug
  cdr >> ros_message.hall1_debug;

  // Member: hall2_debug
  cdr >> ros_message.hall2_debug;

  // Member: has_ultrasonic
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_ultrasonic = tmp ? true : false;
  }

  // Member: ultrasonic1_debug
  cdr >> ros_message.ultrasonic1_debug;

  // Member: ultrasonic2_debug
  cdr >> ros_message.ultrasonic2_debug;

  // Member: has_proximity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_proximity = tmp ? true : false;
  }

  // Member: proximity1_debug
  cdr >> ros_message.proximity1_debug;

  // Member: proximity2_debug
  cdr >> ros_message.proximity2_debug;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size(
  const mrs_msgs::msg::GripperDiagnostics & ros_message,
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

  // Member: gripper_on
  {
    size_t item_size = sizeof(ros_message.gripper_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gripping_object
  {
    size_t item_size = sizeof(ros_message.gripping_object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_hall
  {
    size_t item_size = sizeof(ros_message.has_hall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hall1_debug
  {
    size_t item_size = sizeof(ros_message.hall1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hall2_debug
  {
    size_t item_size = sizeof(ros_message.hall2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_ultrasonic
  {
    size_t item_size = sizeof(ros_message.has_ultrasonic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ultrasonic1_debug
  {
    size_t item_size = sizeof(ros_message.ultrasonic1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ultrasonic2_debug
  {
    size_t item_size = sizeof(ros_message.ultrasonic2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_proximity
  {
    size_t item_size = sizeof(ros_message.has_proximity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: proximity1_debug
  {
    size_t item_size = sizeof(ros_message.proximity1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: proximity2_debug
  {
    size_t item_size = sizeof(ros_message.proximity2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_GripperDiagnostics(
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
  // Member: gripper_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: gripping_object
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: has_hall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: hall1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: hall2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: has_ultrasonic
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ultrasonic1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: ultrasonic2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: has_proximity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: proximity1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: proximity2_debug
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
    using DataType = mrs_msgs::msg::GripperDiagnostics;
    is_plain =
      (
      offsetof(DataType, proximity2_debug) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize_key(
  const mrs_msgs::msg::GripperDiagnostics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.stamp,
    cdr);

  // Member: gripper_on
  cdr << (ros_message.gripper_on ? true : false);

  // Member: gripping_object
  cdr << (ros_message.gripping_object ? true : false);

  // Member: has_hall
  cdr << (ros_message.has_hall ? true : false);

  // Member: hall1_debug
  cdr << ros_message.hall1_debug;

  // Member: hall2_debug
  cdr << ros_message.hall2_debug;

  // Member: has_ultrasonic
  cdr << (ros_message.has_ultrasonic ? true : false);

  // Member: ultrasonic1_debug
  cdr << ros_message.ultrasonic1_debug;

  // Member: ultrasonic2_debug
  cdr << ros_message.ultrasonic2_debug;

  // Member: has_proximity
  cdr << (ros_message.has_proximity ? true : false);

  // Member: proximity1_debug
  cdr << ros_message.proximity1_debug;

  // Member: proximity2_debug
  cdr << ros_message.proximity2_debug;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size_key(
  const mrs_msgs::msg::GripperDiagnostics & ros_message,
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

  // Member: gripper_on
  {
    size_t item_size = sizeof(ros_message.gripper_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gripping_object
  {
    size_t item_size = sizeof(ros_message.gripping_object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_hall
  {
    size_t item_size = sizeof(ros_message.has_hall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hall1_debug
  {
    size_t item_size = sizeof(ros_message.hall1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hall2_debug
  {
    size_t item_size = sizeof(ros_message.hall2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_ultrasonic
  {
    size_t item_size = sizeof(ros_message.has_ultrasonic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ultrasonic1_debug
  {
    size_t item_size = sizeof(ros_message.ultrasonic1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ultrasonic2_debug
  {
    size_t item_size = sizeof(ros_message.ultrasonic2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_proximity
  {
    size_t item_size = sizeof(ros_message.has_proximity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: proximity1_debug
  {
    size_t item_size = sizeof(ros_message.proximity1_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: proximity2_debug
  {
    size_t item_size = sizeof(ros_message.proximity2_debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_key_GripperDiagnostics(
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

  // Member: gripper_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gripping_object
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_hall
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hall1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hall2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: has_ultrasonic
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ultrasonic1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ultrasonic2_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: has_proximity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: proximity1_debug
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: proximity2_debug
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
    using DataType = mrs_msgs::msg::GripperDiagnostics;
    is_plain =
      (
      offsetof(DataType, proximity2_debug) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _GripperDiagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::GripperDiagnostics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GripperDiagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_msgs::msg::GripperDiagnostics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GripperDiagnostics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::GripperDiagnostics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GripperDiagnostics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GripperDiagnostics(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GripperDiagnostics__callbacks = {
  "mrs_msgs::msg",
  "GripperDiagnostics",
  _GripperDiagnostics__cdr_serialize,
  _GripperDiagnostics__cdr_deserialize,
  _GripperDiagnostics__get_serialized_size,
  _GripperDiagnostics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GripperDiagnostics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GripperDiagnostics__callbacks,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__GripperDiagnostics__get_type_hash,
  &mrs_msgs__msg__GripperDiagnostics__get_type_description,
  &mrs_msgs__msg__GripperDiagnostics__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::GripperDiagnostics>()
{
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_GripperDiagnostics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, msg, GripperDiagnostics)() {
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_GripperDiagnostics__handle;
}

#ifdef __cplusplus
}
#endif
