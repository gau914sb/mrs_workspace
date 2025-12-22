// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiVelocityHdgRateCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_velocity_hdg_rate_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_VELOCITY_HDG_RATE_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_VELOCITY_HDG_RATE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_velocity_hdg_rate_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiVelocityHdgRateCmd_heading_rate
{
public:
  explicit Init_HwApiVelocityHdgRateCmd_heading_rate(::mrs_msgs::msg::HwApiVelocityHdgRateCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiVelocityHdgRateCmd heading_rate(::mrs_msgs::msg::HwApiVelocityHdgRateCmd::_heading_rate_type arg)
  {
    msg_.heading_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiVelocityHdgRateCmd msg_;
};

class Init_HwApiVelocityHdgRateCmd_velocity
{
public:
  explicit Init_HwApiVelocityHdgRateCmd_velocity(::mrs_msgs::msg::HwApiVelocityHdgRateCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiVelocityHdgRateCmd_heading_rate velocity(::mrs_msgs::msg::HwApiVelocityHdgRateCmd::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_HwApiVelocityHdgRateCmd_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiVelocityHdgRateCmd msg_;
};

class Init_HwApiVelocityHdgRateCmd_header
{
public:
  Init_HwApiVelocityHdgRateCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiVelocityHdgRateCmd_velocity header(::mrs_msgs::msg::HwApiVelocityHdgRateCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HwApiVelocityHdgRateCmd_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiVelocityHdgRateCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiVelocityHdgRateCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiVelocityHdgRateCmd_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_VELOCITY_HDG_RATE_CMD__BUILDER_HPP_
