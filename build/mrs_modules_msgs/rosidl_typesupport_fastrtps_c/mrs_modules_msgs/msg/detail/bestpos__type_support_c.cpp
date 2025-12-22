// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/bestpos__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_modules_msgs/msg/detail/bestpos__struct.h"
#include "mrs_modules_msgs/msg/detail/bestpos__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"  // tersus_msg_header
#include "rosidl_runtime_c/string.h"  // base_station_id, datum_id, position_type, solution_status
#include "rosidl_runtime_c/string_functions.h"  // base_station_id, datum_id, position_type, solution_status
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_mrs_modules_msgs__msg__TersusMessageHeader(
  const mrs_modules_msgs__msg__TersusMessageHeader * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mrs_modules_msgs__msg__TersusMessageHeader(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs__msg__TersusMessageHeader * ros_message);

size_t get_serialized_size_mrs_modules_msgs__msg__TersusMessageHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrs_modules_msgs__msg__TersusMessageHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mrs_modules_msgs__msg__TersusMessageHeader(
  const mrs_modules_msgs__msg__TersusMessageHeader * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mrs_modules_msgs__msg__TersusMessageHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mrs_modules_msgs__msg__TersusMessageHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_modules_msgs, msg, TersusMessageHeader)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Bestpos__ros_msg_type = mrs_modules_msgs__msg__Bestpos;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_mrs_modules_msgs__msg__Bestpos(
  const mrs_modules_msgs__msg__Bestpos * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: tersus_msg_header
  {
    cdr_serialize_mrs_modules_msgs__msg__TersusMessageHeader(
      &ros_message->tersus_msg_header, cdr);
  }

  // Field name: solution_status
  {
    const rosidl_runtime_c__String * str = &ros_message->solution_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: position_type
  {
    const rosidl_runtime_c__String * str = &ros_message->position_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: undulation
  {
    cdr << ros_message->undulation;
  }

  // Field name: datum_id
  {
    const rosidl_runtime_c__String * str = &ros_message->datum_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: latitude_std
  {
    cdr << ros_message->latitude_std;
  }

  // Field name: longitude_std
  {
    cdr << ros_message->longitude_std;
  }

  // Field name: height_std
  {
    cdr << ros_message->height_std;
  }

  // Field name: base_station_id
  {
    const rosidl_runtime_c__String * str = &ros_message->base_station_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: diff_age
  {
    cdr << ros_message->diff_age;
  }

  // Field name: solution_age
  {
    cdr << ros_message->solution_age;
  }

  // Field name: num_satellites_tracked
  {
    cdr << ros_message->num_satellites_tracked;
  }

  // Field name: num_satellites_used_in_solution
  {
    cdr << ros_message->num_satellites_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    cdr << ros_message->num_gps_and_glonass_l1_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    cdr << ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_deserialize_mrs_modules_msgs__msg__Bestpos(
  eprosima::fastcdr::Cdr & cdr,
  mrs_modules_msgs__msg__Bestpos * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: tersus_msg_header
  {
    cdr_deserialize_mrs_modules_msgs__msg__TersusMessageHeader(cdr, &ros_message->tersus_msg_header);
  }

  // Field name: solution_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->solution_status.data) {
      rosidl_runtime_c__String__init(&ros_message->solution_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->solution_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'solution_status'\n");
      return false;
    }
  }

  // Field name: position_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->position_type.data) {
      rosidl_runtime_c__String__init(&ros_message->position_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->position_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'position_type'\n");
      return false;
    }
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: undulation
  {
    cdr >> ros_message->undulation;
  }

  // Field name: datum_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->datum_id.data) {
      rosidl_runtime_c__String__init(&ros_message->datum_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->datum_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'datum_id'\n");
      return false;
    }
  }

  // Field name: latitude_std
  {
    cdr >> ros_message->latitude_std;
  }

  // Field name: longitude_std
  {
    cdr >> ros_message->longitude_std;
  }

  // Field name: height_std
  {
    cdr >> ros_message->height_std;
  }

  // Field name: base_station_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->base_station_id.data) {
      rosidl_runtime_c__String__init(&ros_message->base_station_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->base_station_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'base_station_id'\n");
      return false;
    }
  }

  // Field name: diff_age
  {
    cdr >> ros_message->diff_age;
  }

  // Field name: solution_age
  {
    cdr >> ros_message->solution_age;
  }

  // Field name: num_satellites_tracked
  {
    cdr >> ros_message->num_satellites_tracked;
  }

  // Field name: num_satellites_used_in_solution
  {
    cdr >> ros_message->num_satellites_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    cdr >> ros_message->num_gps_and_glonass_l1_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    cdr >> ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_mrs_modules_msgs__msg__Bestpos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Bestpos__ros_msg_type * ros_message = static_cast<const _Bestpos__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: tersus_msg_header
  current_alignment += get_serialized_size_mrs_modules_msgs__msg__TersusMessageHeader(
    &(ros_message->tersus_msg_header), current_alignment);

  // Field name: solution_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->solution_status.size + 1);

  // Field name: position_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->position_type.size + 1);

  // Field name: latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: undulation
  {
    size_t item_size = sizeof(ros_message->undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: datum_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->datum_id.size + 1);

  // Field name: latitude_std
  {
    size_t item_size = sizeof(ros_message->latitude_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitude_std
  {
    size_t item_size = sizeof(ros_message->longitude_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height_std
  {
    size_t item_size = sizeof(ros_message->height_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: base_station_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->base_station_id.size + 1);

  // Field name: diff_age
  {
    size_t item_size = sizeof(ros_message->diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: solution_age
  {
    size_t item_size = sizeof(ros_message->solution_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_satellites_tracked
  {
    size_t item_size = sizeof(ros_message->num_satellites_tracked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_satellites_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_satellites_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_gps_and_glonass_l1_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_mrs_modules_msgs__msg__Bestpos(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tersus_msg_header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrs_modules_msgs__msg__TersusMessageHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: solution_status
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

  // Field name: position_type
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

  // Field name: latitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: longitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: undulation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: datum_id
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

  // Field name: latitude_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: longitude_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: height_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: base_station_id
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

  // Field name: diff_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: solution_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: num_satellites_tracked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_satellites_used_in_solution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
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
    using DataType = mrs_modules_msgs__msg__Bestpos;
    is_plain =
      (
      offsetof(DataType, num_gps_and_glonass_l1_and_l2_used_in_solution) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_key_mrs_modules_msgs__msg__Bestpos(
  const mrs_modules_msgs__msg__Bestpos * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: tersus_msg_header
  {
    cdr_serialize_key_mrs_modules_msgs__msg__TersusMessageHeader(
      &ros_message->tersus_msg_header, cdr);
  }

  // Field name: solution_status
  {
    const rosidl_runtime_c__String * str = &ros_message->solution_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: position_type
  {
    const rosidl_runtime_c__String * str = &ros_message->position_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: undulation
  {
    cdr << ros_message->undulation;
  }

  // Field name: datum_id
  {
    const rosidl_runtime_c__String * str = &ros_message->datum_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: latitude_std
  {
    cdr << ros_message->latitude_std;
  }

  // Field name: longitude_std
  {
    cdr << ros_message->longitude_std;
  }

  // Field name: height_std
  {
    cdr << ros_message->height_std;
  }

  // Field name: base_station_id
  {
    const rosidl_runtime_c__String * str = &ros_message->base_station_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: diff_age
  {
    cdr << ros_message->diff_age;
  }

  // Field name: solution_age
  {
    cdr << ros_message->solution_age;
  }

  // Field name: num_satellites_tracked
  {
    cdr << ros_message->num_satellites_tracked;
  }

  // Field name: num_satellites_used_in_solution
  {
    cdr << ros_message->num_satellites_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    cdr << ros_message->num_gps_and_glonass_l1_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    cdr << ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_key_mrs_modules_msgs__msg__Bestpos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Bestpos__ros_msg_type * ros_message = static_cast<const _Bestpos__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: tersus_msg_header
  current_alignment += get_serialized_size_key_mrs_modules_msgs__msg__TersusMessageHeader(
    &(ros_message->tersus_msg_header), current_alignment);

  // Field name: solution_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->solution_status.size + 1);

  // Field name: position_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->position_type.size + 1);

  // Field name: latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: undulation
  {
    size_t item_size = sizeof(ros_message->undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: datum_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->datum_id.size + 1);

  // Field name: latitude_std
  {
    size_t item_size = sizeof(ros_message->latitude_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitude_std
  {
    size_t item_size = sizeof(ros_message->longitude_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height_std
  {
    size_t item_size = sizeof(ros_message->height_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: base_station_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->base_station_id.size + 1);

  // Field name: diff_age
  {
    size_t item_size = sizeof(ros_message->diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: solution_age
  {
    size_t item_size = sizeof(ros_message->solution_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_satellites_tracked
  {
    size_t item_size = sizeof(ros_message->num_satellites_tracked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_satellites_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_satellites_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_gps_and_glonass_l1_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_key_mrs_modules_msgs__msg__Bestpos(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tersus_msg_header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mrs_modules_msgs__msg__TersusMessageHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: solution_status
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

  // Field name: position_type
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

  // Field name: latitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: longitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: undulation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: datum_id
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

  // Field name: latitude_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: longitude_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: height_std
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: base_station_id
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

  // Field name: diff_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: solution_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: num_satellites_tracked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_satellites_used_in_solution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
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
    using DataType = mrs_modules_msgs__msg__Bestpos;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrs_modules_msgs__msg__Bestpos * ros_message = static_cast<const mrs_modules_msgs__msg__Bestpos *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrs_modules_msgs__msg__Bestpos(ros_message, cdr);
}

static bool _Bestpos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrs_modules_msgs__msg__Bestpos * ros_message = static_cast<mrs_modules_msgs__msg__Bestpos *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrs_modules_msgs__msg__Bestpos(cdr, ros_message);
}

static uint32_t _Bestpos__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrs_modules_msgs__msg__Bestpos(
      untyped_ros_message, 0));
}

static size_t _Bestpos__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrs_modules_msgs__msg__Bestpos(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Bestpos = {
  "mrs_modules_msgs::msg",
  "Bestpos",
  _Bestpos__cdr_serialize,
  _Bestpos__cdr_deserialize,
  _Bestpos__get_serialized_size,
  _Bestpos__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Bestpos__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Bestpos,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__Bestpos__get_type_hash,
  &mrs_modules_msgs__msg__Bestpos__get_type_description,
  &mrs_modules_msgs__msg__Bestpos__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_modules_msgs, msg, Bestpos)() {
  return &_Bestpos__type_support;
}

#if defined(__cplusplus)
}
#endif
