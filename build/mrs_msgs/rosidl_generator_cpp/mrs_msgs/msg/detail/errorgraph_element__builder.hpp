// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ErrorgraphElement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_element.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/errorgraph_element__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ErrorgraphElement_errors
{
public:
  explicit Init_ErrorgraphElement_errors(::mrs_msgs::msg::ErrorgraphElement & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ErrorgraphElement errors(::mrs_msgs::msg::ErrorgraphElement::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphElement msg_;
};

class Init_ErrorgraphElement_source_node
{
public:
  explicit Init_ErrorgraphElement_source_node(::mrs_msgs::msg::ErrorgraphElement & msg)
  : msg_(msg)
  {}
  Init_ErrorgraphElement_errors source_node(::mrs_msgs::msg::ErrorgraphElement::_source_node_type arg)
  {
    msg_.source_node = std::move(arg);
    return Init_ErrorgraphElement_errors(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphElement msg_;
};

class Init_ErrorgraphElement_stamp
{
public:
  Init_ErrorgraphElement_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorgraphElement_source_node stamp(::mrs_msgs::msg::ErrorgraphElement::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ErrorgraphElement_source_node(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphElement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ErrorgraphElement>()
{
  return mrs_msgs::msg::builder::Init_ErrorgraphElement_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT__BUILDER_HPP_
