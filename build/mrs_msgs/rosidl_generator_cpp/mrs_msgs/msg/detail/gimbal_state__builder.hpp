// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gimbal_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/gimbal_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalState_fpv_mode
{
public:
  explicit Init_GimbalState_fpv_mode(::mrs_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::GimbalState fpv_mode(::mrs_msgs::msg::GimbalState::_fpv_mode_type arg)
  {
    msg_.fpv_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_is_on
{
public:
  explicit Init_GimbalState_is_on(::mrs_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  Init_GimbalState_fpv_mode is_on(::mrs_msgs::msg::GimbalState::_is_on_type arg)
  {
    msg_.is_on = std::move(arg);
    return Init_GimbalState_fpv_mode(msg_);
  }

private:
  ::mrs_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_gimbal_pan
{
public:
  explicit Init_GimbalState_gimbal_pan(::mrs_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  Init_GimbalState_is_on gimbal_pan(::mrs_msgs::msg::GimbalState::_gimbal_pan_type arg)
  {
    msg_.gimbal_pan = std::move(arg);
    return Init_GimbalState_is_on(msg_);
  }

private:
  ::mrs_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_gimbal_tilt
{
public:
  explicit Init_GimbalState_gimbal_tilt(::mrs_msgs::msg::GimbalState & msg)
  : msg_(msg)
  {}
  Init_GimbalState_gimbal_pan gimbal_tilt(::mrs_msgs::msg::GimbalState::_gimbal_tilt_type arg)
  {
    msg_.gimbal_tilt = std::move(arg);
    return Init_GimbalState_gimbal_pan(msg_);
  }

private:
  ::mrs_msgs::msg::GimbalState msg_;
};

class Init_GimbalState_header
{
public:
  Init_GimbalState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalState_gimbal_tilt header(::mrs_msgs::msg::GimbalState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GimbalState_gimbal_tilt(msg_);
  }

private:
  ::mrs_msgs::msg::GimbalState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::GimbalState>()
{
  return mrs_msgs::msg::builder::Init_GimbalState_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GIMBAL_STATE__BUILDER_HPP_
