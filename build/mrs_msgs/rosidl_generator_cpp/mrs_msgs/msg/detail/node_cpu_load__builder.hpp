// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/NodeCpuLoad.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/node_cpu_load.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/node_cpu_load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeCpuLoad_cpu_loads
{
public:
  explicit Init_NodeCpuLoad_cpu_loads(::mrs_msgs::msg::NodeCpuLoad & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::NodeCpuLoad cpu_loads(::mrs_msgs::msg::NodeCpuLoad::_cpu_loads_type arg)
  {
    msg_.cpu_loads = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::NodeCpuLoad msg_;
};

class Init_NodeCpuLoad_node_names
{
public:
  Init_NodeCpuLoad_node_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeCpuLoad_cpu_loads node_names(::mrs_msgs::msg::NodeCpuLoad::_node_names_type arg)
  {
    msg_.node_names = std::move(arg);
    return Init_NodeCpuLoad_cpu_loads(msg_);
  }

private:
  ::mrs_msgs::msg::NodeCpuLoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::NodeCpuLoad>()
{
  return mrs_msgs::msg::builder::Init_NodeCpuLoad_node_names();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__NODE_CPU_LOAD__BUILDER_HPP_
