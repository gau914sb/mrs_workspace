// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ControlError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/control_error.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/control_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlError_position_failsafe_threshold
{
public:
  explicit Init_ControlError_position_failsafe_threshold(::mrs_msgs::msg::ControlError & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ControlError position_failsafe_threshold(::mrs_msgs::msg::ControlError::_position_failsafe_threshold_type arg)
  {
    msg_.position_failsafe_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ControlError msg_;
};

class Init_ControlError_position_eland_threshold
{
public:
  explicit Init_ControlError_position_eland_threshold(::mrs_msgs::msg::ControlError & msg)
  : msg_(msg)
  {}
  Init_ControlError_position_failsafe_threshold position_eland_threshold(::mrs_msgs::msg::ControlError::_position_eland_threshold_type arg)
  {
    msg_.position_eland_threshold = std::move(arg);
    return Init_ControlError_position_failsafe_threshold(msg_);
  }

private:
  ::mrs_msgs::msg::ControlError msg_;
};

class Init_ControlError_yaw_error
{
public:
  explicit Init_ControlError_yaw_error(::mrs_msgs::msg::ControlError & msg)
  : msg_(msg)
  {}
  Init_ControlError_position_eland_threshold yaw_error(::mrs_msgs::msg::ControlError::_yaw_error_type arg)
  {
    msg_.yaw_error = std::move(arg);
    return Init_ControlError_position_eland_threshold(msg_);
  }

private:
  ::mrs_msgs::msg::ControlError msg_;
};

class Init_ControlError_total_position_error
{
public:
  explicit Init_ControlError_total_position_error(::mrs_msgs::msg::ControlError & msg)
  : msg_(msg)
  {}
  Init_ControlError_yaw_error total_position_error(::mrs_msgs::msg::ControlError::_total_position_error_type arg)
  {
    msg_.total_position_error = std::move(arg);
    return Init_ControlError_yaw_error(msg_);
  }

private:
  ::mrs_msgs::msg::ControlError msg_;
};

class Init_ControlError_position_errors
{
public:
  explicit Init_ControlError_position_errors(::mrs_msgs::msg::ControlError & msg)
  : msg_(msg)
  {}
  Init_ControlError_total_position_error position_errors(::mrs_msgs::msg::ControlError::_position_errors_type arg)
  {
    msg_.position_errors = std::move(arg);
    return Init_ControlError_total_position_error(msg_);
  }

private:
  ::mrs_msgs::msg::ControlError msg_;
};

class Init_ControlError_header
{
public:
  Init_ControlError_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlError_position_errors header(::mrs_msgs::msg::ControlError::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlError_position_errors(msg_);
  }

private:
  ::mrs_msgs::msg::ControlError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ControlError>()
{
  return mrs_msgs::msg::builder::Init_ControlError_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CONTROL_ERROR__BUILDER_HPP_
