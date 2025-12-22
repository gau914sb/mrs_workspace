// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
// generated code does not contain a copyright notice
#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrs_modules_msgs/msg/detail/range_information__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_mrs_modules_msgs__msg__RangeInformation(
  const mrs_modules_msgs__msg__RangeInformation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_deserialize_mrs_modules_msgs__msg__RangeInformation(
  eprosima::fastcdr::Cdr &,
  mrs_modules_msgs__msg__RangeInformation * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_mrs_modules_msgs__msg__RangeInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_mrs_modules_msgs__msg__RangeInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
bool cdr_serialize_key_mrs_modules_msgs__msg__RangeInformation(
  const mrs_modules_msgs__msg__RangeInformation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t get_serialized_size_key_mrs_modules_msgs__msg__RangeInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
size_t max_serialized_size_key_mrs_modules_msgs__msg__RangeInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrs_modules_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_modules_msgs, msg, RangeInformation)();

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
