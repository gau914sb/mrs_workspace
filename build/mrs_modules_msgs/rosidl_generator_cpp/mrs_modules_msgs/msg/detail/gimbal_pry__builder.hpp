// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/GimbalPRY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gimbal_pry.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gimbal_pry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalPRY_yaw
{
public:
  explicit Init_GimbalPRY_yaw(::mrs_modules_msgs::msg::GimbalPRY & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::GimbalPRY yaw(::mrs_modules_msgs::msg::GimbalPRY::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GimbalPRY msg_;
};

class Init_GimbalPRY_roll
{
public:
  explicit Init_GimbalPRY_roll(::mrs_modules_msgs::msg::GimbalPRY & msg)
  : msg_(msg)
  {}
  Init_GimbalPRY_yaw roll(::mrs_modules_msgs::msg::GimbalPRY::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_GimbalPRY_yaw(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GimbalPRY msg_;
};

class Init_GimbalPRY_pitch
{
public:
  Init_GimbalPRY_pitch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalPRY_roll pitch(::mrs_modules_msgs::msg::GimbalPRY::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GimbalPRY_roll(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GimbalPRY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::GimbalPRY>()
{
  return mrs_modules_msgs::msg::builder::Init_GimbalPRY_pitch();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GIMBAL_PRY__BUILDER_HPP_
