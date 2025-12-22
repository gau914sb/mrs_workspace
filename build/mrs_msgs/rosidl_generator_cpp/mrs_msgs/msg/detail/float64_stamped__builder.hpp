// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Float64Stamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/float64_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/float64_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Float64Stamped_value
{
public:
  explicit Init_Float64Stamped_value(::mrs_msgs::msg::Float64Stamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::Float64Stamped value(::mrs_msgs::msg::Float64Stamped::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Float64Stamped msg_;
};

class Init_Float64Stamped_header
{
public:
  Init_Float64Stamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float64Stamped_value header(::mrs_msgs::msg::Float64Stamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Float64Stamped_value(msg_);
  }

private:
  ::mrs_msgs::msg::Float64Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Float64Stamped>()
{
  return mrs_msgs::msg::builder::Init_Float64Stamped_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_
