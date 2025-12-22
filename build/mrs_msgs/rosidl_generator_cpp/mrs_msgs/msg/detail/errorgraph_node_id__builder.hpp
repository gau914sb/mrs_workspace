// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ErrorgraphNodeID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_node_id.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/errorgraph_node_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ErrorgraphNodeID_component
{
public:
  explicit Init_ErrorgraphNodeID_component(::mrs_msgs::msg::ErrorgraphNodeID & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ErrorgraphNodeID component(::mrs_msgs::msg::ErrorgraphNodeID::_component_type arg)
  {
    msg_.component = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphNodeID msg_;
};

class Init_ErrorgraphNodeID_node
{
public:
  Init_ErrorgraphNodeID_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorgraphNodeID_component node(::mrs_msgs::msg::ErrorgraphNodeID::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_ErrorgraphNodeID_component(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphNodeID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ErrorgraphNodeID>()
{
  return mrs_msgs::msg::builder::Init_ErrorgraphNodeID_node();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_NODE_ID__BUILDER_HPP_
