// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Float64.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/float64.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__FLOAT64__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__FLOAT64__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/float64__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Float64_value
{
public:
  Init_Float64_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrs_msgs::msg::Float64 value(::mrs_msgs::msg::Float64::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Float64 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Float64>()
{
  return mrs_msgs::msg::builder::Init_Float64_value();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__FLOAT64__BUILDER_HPP_
