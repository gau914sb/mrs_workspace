// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/controller_diagnostics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_msgs/msg/detail/controller_diagnostics__functions.h"
#include "mrs_msgs/msg/detail/controller_diagnostics__struct.hpp"

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
  const mrs_msgs::msg::ControllerDiagnostics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  // Member: controller
  cdr << ros_message.controller;

  // Member: ramping_up
  cdr << (ros_message.ramping_up ? true : false);

  // Member: mass_estimator
  cdr << (ros_message.mass_estimator ? true : false);

  // Member: mass_difference
  cdr << ros_message.mass_difference;

  // Member: total_mass
  cdr << ros_message.total_mass;

  // Member: disturbance_estimator
  cdr << (ros_message.disturbance_estimator ? true : false);

  // Member: disturbance_wx_w
  cdr << ros_message.disturbance_wx_w;

  // Member: disturbance_wy_w
  cdr << ros_message.disturbance_wy_w;

  // Member: disturbance_bx_w
  cdr << ros_message.disturbance_bx_w;

  // Member: disturbance_by_w
  cdr << ros_message.disturbance_by_w;

  // Member: disturbance_bx_b
  cdr << ros_message.disturbance_bx_b;

  // Member: disturbance_by_b
  cdr << ros_message.disturbance_by_b;

  // Member: controller_enforcing_constraints
  cdr << (ros_message.controller_enforcing_constraints ? true : false);

  // Member: horizontal_speed_constraint
  cdr << ros_message.horizontal_speed_constraint;

  // Member: horizontal_acc_constraint
  cdr << ros_message.horizontal_acc_constraint;

  // Member: vertical_asc_speed_constraint
  cdr << ros_message.vertical_asc_speed_constraint;

  // Member: vertical_asc_acc_constraint
  cdr << ros_message.vertical_asc_acc_constraint;

  // Member: vertical_desc_speed_constraint
  cdr << ros_message.vertical_desc_speed_constraint;

  // Member: vertical_desc_acc_constraint
  cdr << ros_message.vertical_desc_acc_constraint;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_msgs::msg::ControllerDiagnostics & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: controller
  cdr >> ros_message.controller;

  // Member: ramping_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ramping_up = tmp ? true : false;
  }

  // Member: mass_estimator
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mass_estimator = tmp ? true : false;
  }

  // Member: mass_difference
  cdr >> ros_message.mass_difference;

  // Member: total_mass
  cdr >> ros_message.total_mass;

  // Member: disturbance_estimator
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.disturbance_estimator = tmp ? true : false;
  }

  // Member: disturbance_wx_w
  cdr >> ros_message.disturbance_wx_w;

  // Member: disturbance_wy_w
  cdr >> ros_message.disturbance_wy_w;

  // Member: disturbance_bx_w
  cdr >> ros_message.disturbance_bx_w;

  // Member: disturbance_by_w
  cdr >> ros_message.disturbance_by_w;

  // Member: disturbance_bx_b
  cdr >> ros_message.disturbance_bx_b;

  // Member: disturbance_by_b
  cdr >> ros_message.disturbance_by_b;

  // Member: controller_enforcing_constraints
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.controller_enforcing_constraints = tmp ? true : false;
  }

  // Member: horizontal_speed_constraint
  cdr >> ros_message.horizontal_speed_constraint;

  // Member: horizontal_acc_constraint
  cdr >> ros_message.horizontal_acc_constraint;

  // Member: vertical_asc_speed_constraint
  cdr >> ros_message.vertical_asc_speed_constraint;

  // Member: vertical_asc_acc_constraint
  cdr >> ros_message.vertical_asc_acc_constraint;

  // Member: vertical_desc_speed_constraint
  cdr >> ros_message.vertical_desc_speed_constraint;

  // Member: vertical_desc_acc_constraint
  cdr >> ros_message.vertical_desc_acc_constraint;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size(
  const mrs_msgs::msg::ControllerDiagnostics & ros_message,
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

  // Member: controller
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.controller.size() + 1);

  // Member: ramping_up
  {
    size_t item_size = sizeof(ros_message.ramping_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mass_estimator
  {
    size_t item_size = sizeof(ros_message.mass_estimator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mass_difference
  {
    size_t item_size = sizeof(ros_message.mass_difference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: total_mass
  {
    size_t item_size = sizeof(ros_message.total_mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_estimator
  {
    size_t item_size = sizeof(ros_message.disturbance_estimator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_wx_w
  {
    size_t item_size = sizeof(ros_message.disturbance_wx_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_wy_w
  {
    size_t item_size = sizeof(ros_message.disturbance_wy_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_bx_w
  {
    size_t item_size = sizeof(ros_message.disturbance_bx_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_by_w
  {
    size_t item_size = sizeof(ros_message.disturbance_by_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_bx_b
  {
    size_t item_size = sizeof(ros_message.disturbance_bx_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_by_b
  {
    size_t item_size = sizeof(ros_message.disturbance_by_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controller_enforcing_constraints
  {
    size_t item_size = sizeof(ros_message.controller_enforcing_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: horizontal_speed_constraint
  {
    size_t item_size = sizeof(ros_message.horizontal_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: horizontal_acc_constraint
  {
    size_t item_size = sizeof(ros_message.horizontal_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vertical_asc_speed_constraint
  {
    size_t item_size = sizeof(ros_message.vertical_asc_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vertical_asc_acc_constraint
  {
    size_t item_size = sizeof(ros_message.vertical_asc_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vertical_desc_speed_constraint
  {
    size_t item_size = sizeof(ros_message.vertical_desc_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vertical_desc_acc_constraint
  {
    size_t item_size = sizeof(ros_message.vertical_desc_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_ControllerDiagnostics(
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
  // Member: controller
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
  // Member: ramping_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: mass_estimator
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: mass_difference
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: total_mass
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: disturbance_estimator
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: disturbance_wx_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: disturbance_wy_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: disturbance_bx_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: disturbance_by_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: disturbance_bx_b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: disturbance_by_b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: controller_enforcing_constraints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: horizontal_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: horizontal_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: vertical_asc_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: vertical_asc_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: vertical_desc_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: vertical_desc_acc_constraint
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
    using DataType = mrs_msgs::msg::ControllerDiagnostics;
    is_plain =
      (
      offsetof(DataType, vertical_desc_acc_constraint) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
cdr_serialize_key(
  const mrs_msgs::msg::ControllerDiagnostics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.stamp,
    cdr);

  // Member: controller
  cdr << ros_message.controller;

  // Member: ramping_up
  cdr << (ros_message.ramping_up ? true : false);

  // Member: mass_estimator
  cdr << (ros_message.mass_estimator ? true : false);

  // Member: mass_difference
  cdr << ros_message.mass_difference;

  // Member: total_mass
  cdr << ros_message.total_mass;

  // Member: disturbance_estimator
  cdr << (ros_message.disturbance_estimator ? true : false);

  // Member: disturbance_wx_w
  cdr << ros_message.disturbance_wx_w;

  // Member: disturbance_wy_w
  cdr << ros_message.disturbance_wy_w;

  // Member: disturbance_bx_w
  cdr << ros_message.disturbance_bx_w;

  // Member: disturbance_by_w
  cdr << ros_message.disturbance_by_w;

  // Member: disturbance_bx_b
  cdr << ros_message.disturbance_bx_b;

  // Member: disturbance_by_b
  cdr << ros_message.disturbance_by_b;

  // Member: controller_enforcing_constraints
  cdr << (ros_message.controller_enforcing_constraints ? true : false);

  // Member: horizontal_speed_constraint
  cdr << ros_message.horizontal_speed_constraint;

  // Member: horizontal_acc_constraint
  cdr << ros_message.horizontal_acc_constraint;

  // Member: vertical_asc_speed_constraint
  cdr << ros_message.vertical_asc_speed_constraint;

  // Member: vertical_asc_acc_constraint
  cdr << ros_message.vertical_asc_acc_constraint;

  // Member: vertical_desc_speed_constraint
  cdr << ros_message.vertical_desc_speed_constraint;

  // Member: vertical_desc_acc_constraint
  cdr << ros_message.vertical_desc_acc_constraint;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
get_serialized_size_key(
  const mrs_msgs::msg::ControllerDiagnostics & ros_message,
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

  // Member: controller
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.controller.size() + 1);

  // Member: ramping_up
  {
    size_t item_size = sizeof(ros_message.ramping_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mass_estimator
  {
    size_t item_size = sizeof(ros_message.mass_estimator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mass_difference
  {
    size_t item_size = sizeof(ros_message.mass_difference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: total_mass
  {
    size_t item_size = sizeof(ros_message.total_mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_estimator
  {
    size_t item_size = sizeof(ros_message.disturbance_estimator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_wx_w
  {
    size_t item_size = sizeof(ros_message.disturbance_wx_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_wy_w
  {
    size_t item_size = sizeof(ros_message.disturbance_wy_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_bx_w
  {
    size_t item_size = sizeof(ros_message.disturbance_bx_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_by_w
  {
    size_t item_size = sizeof(ros_message.disturbance_by_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_bx_b
  {
    size_t item_size = sizeof(ros_message.disturbance_bx_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: disturbance_by_b
  {
    size_t item_size = sizeof(ros_message.disturbance_by_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controller_enforcing_constraints
  {
    size_t item_size = sizeof(ros_message.controller_enforcing_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: horizontal_speed_constraint
  {
    size_t item_size = sizeof(ros_message.horizontal_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: horizontal_acc_constraint
  {
    size_t item_size = sizeof(ros_message.horizontal_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vertical_asc_speed_constraint
  {
    size_t item_size = sizeof(ros_message.vertical_asc_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vertical_asc_acc_constraint
  {
    size_t item_size = sizeof(ros_message.vertical_asc_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vertical_desc_speed_constraint
  {
    size_t item_size = sizeof(ros_message.vertical_desc_speed_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vertical_desc_acc_constraint
  {
    size_t item_size = sizeof(ros_message.vertical_desc_acc_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_msgs
max_serialized_size_key_ControllerDiagnostics(
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

  // Member: controller
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

  // Member: ramping_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mass_estimator
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mass_difference
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: total_mass
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: disturbance_estimator
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disturbance_wx_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: disturbance_wy_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: disturbance_bx_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: disturbance_by_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: disturbance_bx_b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: disturbance_by_b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: controller_enforcing_constraints
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: horizontal_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: horizontal_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vertical_asc_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vertical_asc_acc_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vertical_desc_speed_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vertical_desc_acc_constraint
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
    using DataType = mrs_msgs::msg::ControllerDiagnostics;
    is_plain =
      (
      offsetof(DataType, vertical_desc_acc_constraint) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ControllerDiagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::ControllerDiagnostics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControllerDiagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_msgs::msg::ControllerDiagnostics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControllerDiagnostics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_msgs::msg::ControllerDiagnostics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControllerDiagnostics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControllerDiagnostics(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControllerDiagnostics__callbacks = {
  "mrs_msgs::msg",
  "ControllerDiagnostics",
  _ControllerDiagnostics__cdr_serialize,
  _ControllerDiagnostics__cdr_deserialize,
  _ControllerDiagnostics__get_serialized_size,
  _ControllerDiagnostics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControllerDiagnostics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControllerDiagnostics__callbacks,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__ControllerDiagnostics__get_type_hash,
  &mrs_msgs__msg__ControllerDiagnostics__get_type_description,
  &mrs_msgs__msg__ControllerDiagnostics__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::ControllerDiagnostics>()
{
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_ControllerDiagnostics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, msg, ControllerDiagnostics)() {
  return &mrs_msgs::msg::typesupport_fastrtps_cpp::_ControllerDiagnostics__handle;
}

#ifdef __cplusplus
}
#endif
