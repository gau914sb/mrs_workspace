// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiAccelerationHdgRateCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_acceleration_hdg_rate_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_RATE_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_RATE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_acceleration_hdg_rate_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiAccelerationHdgRateCmd_heading_rate
{
public:
  explicit Init_HwApiAccelerationHdgRateCmd_heading_rate(::mrs_msgs::msg::HwApiAccelerationHdgRateCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiAccelerationHdgRateCmd heading_rate(::mrs_msgs::msg::HwApiAccelerationHdgRateCmd::_heading_rate_type arg)
  {
    msg_.heading_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAccelerationHdgRateCmd msg_;
};

class Init_HwApiAccelerationHdgRateCmd_acceleration
{
public:
  explicit Init_HwApiAccelerationHdgRateCmd_acceleration(::mrs_msgs::msg::HwApiAccelerationHdgRateCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiAccelerationHdgRateCmd_heading_rate acceleration(::mrs_msgs::msg::HwApiAccelerationHdgRateCmd::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_HwApiAccelerationHdgRateCmd_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAccelerationHdgRateCmd msg_;
};

class Init_HwApiAccelerationHdgRateCmd_header
{
public:
  Init_HwApiAccelerationHdgRateCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiAccelerationHdgRateCmd_acceleration header(::mrs_msgs::msg::HwApiAccelerationHdgRateCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HwApiAccelerationHdgRateCmd_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAccelerationHdgRateCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiAccelerationHdgRateCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiAccelerationHdgRateCmd_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_RATE_CMD__BUILDER_HPP_
