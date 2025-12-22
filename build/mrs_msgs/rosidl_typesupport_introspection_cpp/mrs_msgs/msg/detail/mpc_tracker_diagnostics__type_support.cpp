// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/MpcTrackerDiagnostics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_msgs/msg/detail/mpc_tracker_diagnostics__functions.h"
#include "mrs_msgs/msg/detail/mpc_tracker_diagnostics__struct.hpp"
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

void MpcTrackerDiagnostics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::msg::MpcTrackerDiagnostics(_init);
}

void MpcTrackerDiagnostics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::msg::MpcTrackerDiagnostics *>(message_memory);
  typed_message->~MpcTrackerDiagnostics();
}

size_t size_function__MpcTrackerDiagnostics__avoidance_active_uavs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcTrackerDiagnostics__avoidance_active_uavs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcTrackerDiagnostics__avoidance_active_uavs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcTrackerDiagnostics__avoidance_active_uavs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__MpcTrackerDiagnostics__avoidance_active_uavs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__MpcTrackerDiagnostics__avoidance_active_uavs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__MpcTrackerDiagnostics__avoidance_active_uavs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__MpcTrackerDiagnostics__avoidance_active_uavs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MpcTrackerDiagnostics_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcTrackerDiagnostics, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uav_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcTrackerDiagnostics, uav_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcTrackerDiagnostics, active),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "collision_avoidance_active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcTrackerDiagnostics, collision_avoidance_active),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "avoiding_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcTrackerDiagnostics, avoiding_collision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "avoidance_active_uavs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcTrackerDiagnostics, avoidance_active_uavs),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcTrackerDiagnostics__avoidance_active_uavs,  // size() function pointer
    get_const_function__MpcTrackerDiagnostics__avoidance_active_uavs,  // get_const(index) function pointer
    get_function__MpcTrackerDiagnostics__avoidance_active_uavs,  // get(index) function pointer
    fetch_function__MpcTrackerDiagnostics__avoidance_active_uavs,  // fetch(index, &value) function pointer
    assign_function__MpcTrackerDiagnostics__avoidance_active_uavs,  // assign(index, value) function pointer
    resize_function__MpcTrackerDiagnostics__avoidance_active_uavs  // resize(index) function pointer
  },
  {
    "setpoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::MpcTrackerDiagnostics, setpoint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MpcTrackerDiagnostics_message_members = {
  "mrs_msgs::msg",  // message namespace
  "MpcTrackerDiagnostics",  // message name
  7,  // number of fields
  sizeof(mrs_msgs::msg::MpcTrackerDiagnostics),
  false,  // has_any_key_member_
  MpcTrackerDiagnostics_message_member_array,  // message members
  MpcTrackerDiagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  MpcTrackerDiagnostics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MpcTrackerDiagnostics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MpcTrackerDiagnostics_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__MpcTrackerDiagnostics__get_type_hash,
  &mrs_msgs__msg__MpcTrackerDiagnostics__get_type_description,
  &mrs_msgs__msg__MpcTrackerDiagnostics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::MpcTrackerDiagnostics>()
{
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::MpcTrackerDiagnostics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, msg, MpcTrackerDiagnostics)() {
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::MpcTrackerDiagnostics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
