// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:msg/NodeCpuLoad.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_msgs/msg/detail/node_cpu_load__functions.h"
#include "mrs_msgs/msg/detail/node_cpu_load__struct.hpp"
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

void NodeCpuLoad_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::msg::NodeCpuLoad(_init);
}

void NodeCpuLoad_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::msg::NodeCpuLoad *>(message_memory);
  typed_message->~NodeCpuLoad();
}

size_t size_function__NodeCpuLoad__node_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeCpuLoad__node_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeCpuLoad__node_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeCpuLoad__node_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__NodeCpuLoad__node_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__NodeCpuLoad__node_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__NodeCpuLoad__node_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__NodeCpuLoad__node_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeCpuLoad__cpu_loads(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeCpuLoad__cpu_loads(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeCpuLoad__cpu_loads(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeCpuLoad__cpu_loads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__NodeCpuLoad__cpu_loads(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__NodeCpuLoad__cpu_loads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__NodeCpuLoad__cpu_loads(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__NodeCpuLoad__cpu_loads(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeCpuLoad_message_member_array[2] = {
  {
    "node_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::NodeCpuLoad, node_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeCpuLoad__node_names,  // size() function pointer
    get_const_function__NodeCpuLoad__node_names,  // get_const(index) function pointer
    get_function__NodeCpuLoad__node_names,  // get(index) function pointer
    fetch_function__NodeCpuLoad__node_names,  // fetch(index, &value) function pointer
    assign_function__NodeCpuLoad__node_names,  // assign(index, value) function pointer
    resize_function__NodeCpuLoad__node_names  // resize(index) function pointer
  },
  {
    "cpu_loads",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::msg::NodeCpuLoad, cpu_loads),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeCpuLoad__cpu_loads,  // size() function pointer
    get_const_function__NodeCpuLoad__cpu_loads,  // get_const(index) function pointer
    get_function__NodeCpuLoad__cpu_loads,  // get(index) function pointer
    fetch_function__NodeCpuLoad__cpu_loads,  // fetch(index, &value) function pointer
    assign_function__NodeCpuLoad__cpu_loads,  // assign(index, value) function pointer
    resize_function__NodeCpuLoad__cpu_loads  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeCpuLoad_message_members = {
  "mrs_msgs::msg",  // message namespace
  "NodeCpuLoad",  // message name
  2,  // number of fields
  sizeof(mrs_msgs::msg::NodeCpuLoad),
  false,  // has_any_key_member_
  NodeCpuLoad_message_member_array,  // message members
  NodeCpuLoad_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeCpuLoad_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeCpuLoad_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeCpuLoad_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__NodeCpuLoad__get_type_hash,
  &mrs_msgs__msg__NodeCpuLoad__get_type_description,
  &mrs_msgs__msg__NodeCpuLoad__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::msg::NodeCpuLoad>()
{
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::NodeCpuLoad_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, msg, NodeCpuLoad)() {
  return &::mrs_msgs::msg::rosidl_typesupport_introspection_cpp::NodeCpuLoad_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
