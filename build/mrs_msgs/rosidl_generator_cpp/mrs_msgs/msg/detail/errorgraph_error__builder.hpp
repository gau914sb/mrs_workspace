// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ErrorgraphError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_error.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ERROR__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/errorgraph_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ErrorgraphError_waited_for_node
{
public:
  explicit Init_ErrorgraphError_waited_for_node(::mrs_msgs::msg::ErrorgraphError & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ErrorgraphError waited_for_node(::mrs_msgs::msg::ErrorgraphError::_waited_for_node_type arg)
  {
    msg_.waited_for_node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphError msg_;
};

class Init_ErrorgraphError_waited_for_topic
{
public:
  explicit Init_ErrorgraphError_waited_for_topic(::mrs_msgs::msg::ErrorgraphError & msg)
  : msg_(msg)
  {}
  Init_ErrorgraphError_waited_for_node waited_for_topic(::mrs_msgs::msg::ErrorgraphError::_waited_for_topic_type arg)
  {
    msg_.waited_for_topic = std::move(arg);
    return Init_ErrorgraphError_waited_for_node(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphError msg_;
};

class Init_ErrorgraphError_type
{
public:
  explicit Init_ErrorgraphError_type(::mrs_msgs::msg::ErrorgraphError & msg)
  : msg_(msg)
  {}
  Init_ErrorgraphError_waited_for_topic type(::mrs_msgs::msg::ErrorgraphError::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ErrorgraphError_waited_for_topic(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphError msg_;
};

class Init_ErrorgraphError_stamp
{
public:
  Init_ErrorgraphError_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorgraphError_type stamp(::mrs_msgs::msg::ErrorgraphError::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ErrorgraphError_type(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ErrorgraphError>()
{
  return mrs_msgs::msg::builder::Init_ErrorgraphError_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ERROR__BUILDER_HPP_
