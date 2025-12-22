// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:msg/SerialRaw.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_modules_msgs/msg/detail/serial_raw__functions.h"
#include "mrs_modules_msgs/msg/detail/serial_raw__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_modules_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SerialRaw_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_modules_msgs::msg::SerialRaw(_init);
}

void SerialRaw_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_modules_msgs::msg::SerialRaw *>(message_memory);
  typed_message->~SerialRaw();
}

size_t size_function__SerialRaw__payload(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SerialRaw__payload(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SerialRaw__payload(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SerialRaw__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SerialRaw__payload(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SerialRaw__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SerialRaw__payload(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SerialRaw__payload(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SerialRaw_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs::msg::SerialRaw, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "payload",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs::msg::SerialRaw, payload),  // bytes offset in struct
    nullptr,  // default value
    size_function__SerialRaw__payload,  // size() function pointer
    get_const_function__SerialRaw__payload,  // get_const(index) function pointer
    get_function__SerialRaw__payload,  // get(index) function pointer
    fetch_function__SerialRaw__payload,  // fetch(index, &value) function pointer
    assign_function__SerialRaw__payload,  // assign(index, value) function pointer
    resize_function__SerialRaw__payload  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SerialRaw_message_members = {
  "mrs_modules_msgs::msg",  // message namespace
  "SerialRaw",  // message name
  2,  // number of fields
  sizeof(mrs_modules_msgs::msg::SerialRaw),
  false,  // has_any_key_member_
  SerialRaw_message_member_array,  // message members
  SerialRaw_init_function,  // function to initialize message memory (memory has to be allocated)
  SerialRaw_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SerialRaw_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SerialRaw_message_members,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__SerialRaw__get_type_hash,
  &mrs_modules_msgs__msg__SerialRaw__get_type_description,
  &mrs_modules_msgs__msg__SerialRaw__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrs_modules_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::msg::SerialRaw>()
{
  return &::mrs_modules_msgs::msg::rosidl_typesupport_introspection_cpp::SerialRaw_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_modules_msgs, msg, SerialRaw)() {
  return &::mrs_modules_msgs::msg::rosidl_typesupport_introspection_cpp::SerialRaw_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
