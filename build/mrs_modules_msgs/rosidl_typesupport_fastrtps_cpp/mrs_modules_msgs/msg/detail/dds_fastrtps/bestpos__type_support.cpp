// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/bestpos__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrs_modules_msgs/msg/detail/bestpos__functions.h"
#include "mrs_modules_msgs/msg/detail/bestpos__struct.hpp"

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


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize(
  const mrs_modules_msgs::msg::Bestpos & ros_message,
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

  // Member: solution_status
  cdr << ros_message.solution_status;

  // Member: position_type
  cdr << ros_message.position_type;

  // Member: latitude
  cdr << ros_message.latitude;

  // Member: longitude
  cdr << ros_message.longitude;

  // Member: height
  cdr << ros_message.height;

  // Member: undulation
  cdr << ros_message.undulation;

  // Member: datum_id
  cdr << ros_message.datum_id;

  // Member: latitude_std
  cdr << ros_message.latitude_std;

  // Member: longitude_std
  cdr << ros_message.longitude_std;

  // Member: height_std
  cdr << ros_message.height_std;

  // Member: base_station_id
  cdr << ros_message.base_station_id;

  // Member: diff_age
  cdr << ros_message.diff_age;

  // Member: solution_age
  cdr << ros_message.solution_age;

  // Member: num_satellites_tracked
  cdr << ros_message.num_satellites_tracked;

  // Member: num_satellites_used_in_solution
  cdr << ros_message.num_satellites_used_in_solution;

  // Member: num_gps_and_glonass_l1_used_in_solution
  cdr << ros_message.num_gps_and_glonass_l1_used_in_solution;

  // Member: num_gps_and_glonass_l1_and_l2_used_in_solution
  cdr << ros_message.num_gps_and_glonass_l1_and_l2_used_in_solution;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs::msg::Bestpos & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: tersus_msg_header
  mrs_modules_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tersus_msg_header);

  // Member: solution_status
  cdr >> ros_message.solution_status;

  // Member: position_type
  cdr >> ros_message.position_type;

  // Member: latitude
  cdr >> ros_message.latitude;

  // Member: longitude
  cdr >> ros_message.longitude;

  // Member: height
  cdr >> ros_message.height;

  // Member: undulation
  cdr >> ros_message.undulation;

  // Member: datum_id
  cdr >> ros_message.datum_id;

  // Member: latitude_std
  cdr >> ros_message.latitude_std;

  // Member: longitude_std
  cdr >> ros_message.longitude_std;

  // Member: height_std
  cdr >> ros_message.height_std;

  // Member: base_station_id
  cdr >> ros_message.base_station_id;

  // Member: diff_age
  cdr >> ros_message.diff_age;

  // Member: solution_age
  cdr >> ros_message.solution_age;

  // Member: num_satellites_tracked
  cdr >> ros_message.num_satellites_tracked;

  // Member: num_satellites_used_in_solution
  cdr >> ros_message.num_satellites_used_in_solution;

  // Member: num_gps_and_glonass_l1_used_in_solution
  cdr >> ros_message.num_gps_and_glonass_l1_used_in_solution;

  // Member: num_gps_and_glonass_l1_and_l2_used_in_solution
  cdr >> ros_message.num_gps_and_glonass_l1_and_l2_used_in_solution;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size(
  const mrs_modules_msgs::msg::Bestpos & ros_message,
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

  // Member: solution_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.solution_status.size() + 1);

  // Member: position_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.position_type.size() + 1);

  // Member: latitude
  {
    size_t item_size = sizeof(ros_message.latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: longitude
  {
    size_t item_size = sizeof(ros_message.longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: height
  {
    size_t item_size = sizeof(ros_message.height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: undulation
  {
    size_t item_size = sizeof(ros_message.undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: datum_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.datum_id.size() + 1);

  // Member: latitude_std
  {
    size_t item_size = sizeof(ros_message.latitude_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: longitude_std
  {
    size_t item_size = sizeof(ros_message.longitude_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: height_std
  {
    size_t item_size = sizeof(ros_message.height_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: base_station_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.base_station_id.size() + 1);

  // Member: diff_age
  {
    size_t item_size = sizeof(ros_message.diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: solution_age
  {
    size_t item_size = sizeof(ros_message.solution_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_satellites_tracked
  {
    size_t item_size = sizeof(ros_message.num_satellites_tracked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_satellites_used_in_solution
  {
    size_t item_size = sizeof(ros_message.num_satellites_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_gps_and_glonass_l1_used_in_solution
  {
    size_t item_size = sizeof(ros_message.num_gps_and_glonass_l1_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    size_t item_size = sizeof(ros_message.num_gps_and_glonass_l1_and_l2_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_Bestpos(
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
  // Member: solution_status
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
  // Member: position_type
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
  // Member: latitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: longitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: undulation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: datum_id
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
  // Member: latitude_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: longitude_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: height_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: base_station_id
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
  // Member: diff_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: solution_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: num_satellites_tracked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: num_satellites_used_in_solution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: num_gps_and_glonass_l1_used_in_solution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: num_gps_and_glonass_l1_and_l2_used_in_solution
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
    using DataType = mrs_modules_msgs::msg::Bestpos;
    is_plain =
      (
      offsetof(DataType, num_gps_and_glonass_l1_and_l2_used_in_solution) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
cdr_serialize_key(
  const mrs_modules_msgs::msg::Bestpos & ros_message,
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

  // Member: solution_status
  cdr << ros_message.solution_status;

  // Member: position_type
  cdr << ros_message.position_type;

  // Member: latitude
  cdr << ros_message.latitude;

  // Member: longitude
  cdr << ros_message.longitude;

  // Member: height
  cdr << ros_message.height;

  // Member: undulation
  cdr << ros_message.undulation;

  // Member: datum_id
  cdr << ros_message.datum_id;

  // Member: latitude_std
  cdr << ros_message.latitude_std;

  // Member: longitude_std
  cdr << ros_message.longitude_std;

  // Member: height_std
  cdr << ros_message.height_std;

  // Member: base_station_id
  cdr << ros_message.base_station_id;

  // Member: diff_age
  cdr << ros_message.diff_age;

  // Member: solution_age
  cdr << ros_message.solution_age;

  // Member: num_satellites_tracked
  cdr << ros_message.num_satellites_tracked;

  // Member: num_satellites_used_in_solution
  cdr << ros_message.num_satellites_used_in_solution;

  // Member: num_gps_and_glonass_l1_used_in_solution
  cdr << ros_message.num_gps_and_glonass_l1_used_in_solution;

  // Member: num_gps_and_glonass_l1_and_l2_used_in_solution
  cdr << ros_message.num_gps_and_glonass_l1_and_l2_used_in_solution;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
get_serialized_size_key(
  const mrs_modules_msgs::msg::Bestpos & ros_message,
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

  // Member: solution_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.solution_status.size() + 1);

  // Member: position_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.position_type.size() + 1);

  // Member: latitude
  {
    size_t item_size = sizeof(ros_message.latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: longitude
  {
    size_t item_size = sizeof(ros_message.longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: height
  {
    size_t item_size = sizeof(ros_message.height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: undulation
  {
    size_t item_size = sizeof(ros_message.undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: datum_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.datum_id.size() + 1);

  // Member: latitude_std
  {
    size_t item_size = sizeof(ros_message.latitude_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: longitude_std
  {
    size_t item_size = sizeof(ros_message.longitude_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: height_std
  {
    size_t item_size = sizeof(ros_message.height_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: base_station_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.base_station_id.size() + 1);

  // Member: diff_age
  {
    size_t item_size = sizeof(ros_message.diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: solution_age
  {
    size_t item_size = sizeof(ros_message.solution_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_satellites_tracked
  {
    size_t item_size = sizeof(ros_message.num_satellites_tracked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_satellites_used_in_solution
  {
    size_t item_size = sizeof(ros_message.num_satellites_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_gps_and_glonass_l1_used_in_solution
  {
    size_t item_size = sizeof(ros_message.num_gps_and_glonass_l1_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    size_t item_size = sizeof(ros_message.num_gps_and_glonass_l1_and_l2_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrs_modules_msgs
max_serialized_size_key_Bestpos(
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

  // Member: solution_status
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

  // Member: position_type
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

  // Member: latitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: undulation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: datum_id
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

  // Member: latitude_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: longitude_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: height_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: base_station_id
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

  // Member: diff_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: solution_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_satellites_tracked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_satellites_used_in_solution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_gps_and_glonass_l1_used_in_solution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_gps_and_glonass_l1_and_l2_used_in_solution
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
    using DataType = mrs_modules_msgs::msg::Bestpos;
    is_plain =
      (
      offsetof(DataType, num_gps_and_glonass_l1_and_l2_used_in_solution) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Bestpos__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::Bestpos *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Bestpos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrs_modules_msgs::msg::Bestpos *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Bestpos__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrs_modules_msgs::msg::Bestpos *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Bestpos__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Bestpos(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Bestpos__callbacks = {
  "mrs_modules_msgs::msg",
  "Bestpos",
  _Bestpos__cdr_serialize,
  _Bestpos__cdr_deserialize,
  _Bestpos__get_serialized_size,
  _Bestpos__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Bestpos__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Bestpos__callbacks,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__Bestpos__get_type_hash,
  &mrs_modules_msgs__msg__Bestpos__get_type_description,
  &mrs_modules_msgs__msg__Bestpos__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::msg::Bestpos>()
{
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_Bestpos__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, msg, Bestpos)() {
  return &mrs_modules_msgs::msg::typesupport_fastrtps_cpp::_Bestpos__handle;
}

#ifdef __cplusplus
}
#endif
