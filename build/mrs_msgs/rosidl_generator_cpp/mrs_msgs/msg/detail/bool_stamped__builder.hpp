// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/bool_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/bool_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_BoolStamped_data
{
public:
  explicit Init_BoolStamped_data(::mrs_msgs::msg::BoolStamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::BoolStamped data(::mrs_msgs::msg::BoolStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::BoolStamped msg_;
};

class Init_BoolStamped_stamp
{
public:
  Init_BoolStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoolStamped_data stamp(::mrs_msgs::msg::BoolStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BoolStamped_data(msg_);
  }

private:
  ::mrs_msgs::msg::BoolStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::BoolStamped>()
{
  return mrs_msgs::msg::builder::Init_BoolStamped_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_
