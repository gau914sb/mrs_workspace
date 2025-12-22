// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/FuturePoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/future_point.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__FUTURE_POINT__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__FUTURE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/future_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_FuturePoint_z
{
public:
  explicit Init_FuturePoint_z(::mrs_msgs::msg::FuturePoint & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::FuturePoint z(::mrs_msgs::msg::FuturePoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::FuturePoint msg_;
};

class Init_FuturePoint_y
{
public:
  explicit Init_FuturePoint_y(::mrs_msgs::msg::FuturePoint & msg)
  : msg_(msg)
  {}
  Init_FuturePoint_z y(::mrs_msgs::msg::FuturePoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_FuturePoint_z(msg_);
  }

private:
  ::mrs_msgs::msg::FuturePoint msg_;
};

class Init_FuturePoint_x
{
public:
  Init_FuturePoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FuturePoint_y x(::mrs_msgs::msg::FuturePoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FuturePoint_y(msg_);
  }

private:
  ::mrs_msgs::msg::FuturePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::FuturePoint>()
{
  return mrs_msgs::msg::builder::Init_FuturePoint_x();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__FUTURE_POINT__BUILDER_HPP_
