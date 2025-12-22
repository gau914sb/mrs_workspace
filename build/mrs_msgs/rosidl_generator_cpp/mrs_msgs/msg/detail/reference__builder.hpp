// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Reference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/reference.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__REFERENCE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Reference_heading
{
public:
  explicit Init_Reference_heading(::mrs_msgs::msg::Reference & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::Reference heading(::mrs_msgs::msg::Reference::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Reference msg_;
};

class Init_Reference_position
{
public:
  Init_Reference_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reference_heading position(::mrs_msgs::msg::Reference::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Reference_heading(msg_);
  }

private:
  ::mrs_msgs::msg::Reference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Reference>()
{
  return mrs_msgs::msg::builder::Init_Reference_position();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__REFERENCE__BUILDER_HPP_
