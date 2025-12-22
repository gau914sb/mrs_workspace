// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/MpcPredictionFullState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__functions.h"
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__struct.hpp"
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

void MpcPredictionFullState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::msg::MpcPredictionFullState(_init);
}

void MpcPredictionFullState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::msg::MpcPredictionFullState *>(message_memory);
  typed_message->~MpcPredictionFullState();
}

size_t size_function__MpcPredictionFullState__stamps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__stamps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__stamps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__stamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const builtin_interfaces::msg::Time *>(
    get_const_function__MpcPredictionFullState__stamps(untyped_member, index));
  auto & value = *reinterpret_cast<builtin_interfaces::msg::Time *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__stamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<builtin_interfaces::msg::Time *>(
    get_function__MpcPredictionFullState__stamps(untyped_member, index));
  const auto & value = *reinterpret_cast<const builtin_interfaces::msg::Time *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__stamps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__MpcPredictionFullState__position(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__MpcPredictionFullState__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__orientation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__orientation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__orientation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Quaternion *>(
    get_const_function__MpcPredictionFullState__orientation(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Quaternion *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Quaternion *>(
    get_function__MpcPredictionFullState__orientation(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Quaternion *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__orientation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Quaternion> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__attitude_rate(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__attitude_rate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__attitude_rate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__attitude_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__MpcPredictionFullState__attitude_rate(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__attitude_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__MpcPredictionFullState__attitude_rate(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__attitude_rate(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__MpcPredictionFullState__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__MpcPredictionFullState__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__acceleration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__MpcPredictionFullState__acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__MpcPredictionFullState__acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__acceleration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__jerk(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__jerk(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__jerk(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__MpcPredictionFullState__jerk(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__MpcPredictionFullState__jerk(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__jerk(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__heading(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__heading(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__heading(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__heading(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MpcPredictionFullState__heading(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__heading(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MpcPredictionFullState__heading(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__heading(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__heading_rate(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__heading_rate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__heading_rate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__heading_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MpcPredictionFullState__heading_rate(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__heading_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MpcPredictionFullState__heading_rate(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__heading_rate(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__heading_acceleration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__heading_acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__heading_acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__heading_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MpcPredictionFullState__heading_acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__heading_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MpcPredictionFullState__heading_acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__heading_acceleration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcPredictionFullState__heading_jerk(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcPredictionFullState__heading_jerk(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcPredictionFullState__heading_jerk(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcPredictionFullState__heading_jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MpcPredictionFullState__heading_jerk(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MpcPredictionFullState__heading_jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MpcPredictionFullState__heading_jerk(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MpcPredictionFullState__heading_jerk(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MpcPredictionFullState_message_member_array[15] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "input_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, input_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, stamps),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__stamps,  // size() function pointer
    get_const_function__MpcPredictionFullState__stamps,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__stamps,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__stamps,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__stamps,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__stamps  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__position,  // size() function pointer
    get_const_function__MpcPredictionFullState__position,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__position,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__position,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__position,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__position  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, orientation),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__orientation,  // size() function pointer
    get_const_function__MpcPredictionFullState__orientation,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__orientation,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__orientation,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__orientation,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__orientation  // resize(index) function pointer
  },
  {
    "attitude_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, attitude_rate),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__attitude_rate,  // size() function pointer
    get_const_function__MpcPredictionFullState__attitude_rate,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__attitude_rate,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__attitude_rate,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__attitude_rate,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__attitude_rate  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__velocity,  // size() function pointer
    get_const_function__MpcPredictionFullState__velocity,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__velocity,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__velocity,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__velocity,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__acceleration,  // size() function pointer
    get_const_function__MpcPredictionFullState__acceleration,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__acceleration,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__acceleration,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__acceleration,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__acceleration  // resize(index) function pointer
  },
  {
    "jerk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, jerk),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__jerk,  // size() function pointer
    get_const_function__MpcPredictionFullState__jerk,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__jerk,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__jerk,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__jerk,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__jerk  // resize(index) function pointer
  },
  {
    "heading",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, heading),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__heading,  // size() function pointer
    get_const_function__MpcPredictionFullState__heading,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__heading,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__heading,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__heading,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__heading  // resize(index) function pointer
  },
  {
    "heading_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, heading_rate),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__heading_rate,  // size() function pointer
    get_const_function__MpcPredictionFullState__heading_rate,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__heading_rate,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__heading_rate,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__heading_rate,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__heading_rate  // resize(index) function pointer
  },
  {
    "heading_acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, heading_acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__heading_acceleration,  // size() function pointer
    get_const_function__MpcPredictionFullState__heading_acceleration,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__heading_acceleration,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__heading_acceleration,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__heading_acceleration,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__heading_acceleration  // resize(index) function pointer
  },
  {
    "heading_jerk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, heading_jerk),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcPredictionFullState__heading_jerk,  // size() function pointer
    get_const_function__MpcPredictionFullState__heading_jerk,  // get_const(index) function pointer
    get_function__MpcPredictionFullState__heading_jerk,  // get(index) function pointer
    fetch_function__MpcPredictionFullState__heading_jerk,  // fetch(index, &value) function pointer
    assign_function__MpcPredictionFullState__heading_jerk,  // assign(index, value) function pointer
    resize_function__MpcPredictionFullState__heading_jerk  // resize(index) function pointer
  },
  {
    "use_orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, use_orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "use_attitude_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcPredictionFullState, use_attitude_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MpcPredictionFullState_message_members = {
  "mrs_msgs::msg",  // message namespace
  "MpcPredictionFullState",  // message name
  15,  // number of fields
  sizeof(mrs_msgs::msg::MpcPredictionFullState),
  false,  // has_any_key_member_
  MpcPredictionFullState_message_member_array,  // message members
  MpcPredictionFullState_init_function,  // function to initialize message memory (memory has to be allocated)
  MpcPredictionFullState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MpcPredictionFullState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MpcPredictionFullState_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__MpcPredictionFullState__get_type_hash,
  &mrs_msgs__msg__MpcPredictionFullState__get_type_description,
  &mrs_msgs__msg__MpcPredictionFullState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::MpcPredictionFullState>()
{
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::MpcPredictionFullState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, msg, MpcPredictionFullState)() {
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::MpcPredictionFullState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
