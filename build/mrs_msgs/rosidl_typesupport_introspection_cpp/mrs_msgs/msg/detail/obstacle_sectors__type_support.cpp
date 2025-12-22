// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/ObstacleSectors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_msgs/msg/detail/obstacle_sectors__functions.h"
#include "mrs_msgs/msg/detail/obstacle_sectors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObstacleSectors_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::msg::ObstacleSectors(_init);
}

void ObstacleSectors_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::msg::ObstacleSectors *>(message_memory);
  typed_message->~ObstacleSectors();
}

size_t size_function__ObstacleSectors__sectors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObstacleSectors__sectors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ObstacleSectors__sectors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObstacleSectors__sectors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ObstacleSectors__sectors(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ObstacleSectors__sectors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ObstacleSectors__sectors(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ObstacleSectors__sectors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ObstacleSectors__sector_sensors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObstacleSectors__sector_sensors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ObstacleSectors__sector_sensors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObstacleSectors__sector_sensors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__ObstacleSectors__sector_sensors(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__ObstacleSectors__sector_sensors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__ObstacleSectors__sector_sensors(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__ObstacleSectors__sector_sensors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObstacleSectors_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::ObstacleSectors, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_horizontal_sectors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::ObstacleSectors, n_horizontal_sectors),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sectors_vertical_fov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::ObstacleSectors, sectors_vertical_fov),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sectors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::ObstacleSectors, sectors),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObstacleSectors__sectors,  // size() function pointer
    get_const_function__ObstacleSectors__sectors,  // get_const(index) function pointer
    get_function__ObstacleSectors__sectors,  // get(index) function pointer
    fetch_function__ObstacleSectors__sectors,  // fetch(index, &value) function pointer
    assign_function__ObstacleSectors__sectors,  // assign(index, value) function pointer
    resize_function__ObstacleSectors__sectors  // resize(index) function pointer
  },
  {
    "sector_sensors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::ObstacleSectors, sector_sensors),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObstacleSectors__sector_sensors,  // size() function pointer
    get_const_function__ObstacleSectors__sector_sensors,  // get_const(index) function pointer
    get_function__ObstacleSectors__sector_sensors,  // get(index) function pointer
    fetch_function__ObstacleSectors__sector_sensors,  // fetch(index, &value) function pointer
    assign_function__ObstacleSectors__sector_sensors,  // assign(index, value) function pointer
    resize_function__ObstacleSectors__sector_sensors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObstacleSectors_message_members = {
  "mrs_msgs::msg",  // message namespace
  "ObstacleSectors",  // message name
  5,  // number of fields
  sizeof(mrs_msgs::msg::ObstacleSectors),
  false,  // has_any_key_member_
  ObstacleSectors_message_member_array,  // message members
  ObstacleSectors_init_function,  // function to initialize message memory (memory has to be allocated)
  ObstacleSectors_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObstacleSectors_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObstacleSectors_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__ObstacleSectors__get_type_hash,
  &mrs_msgs__msg__ObstacleSectors__get_type_description,
  &mrs_msgs__msg__ObstacleSectors__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::ObstacleSectors>()
{
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleSectors_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, msg, ObstacleSectors)() {
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleSectors_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
