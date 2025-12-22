// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiAccelerationHdgCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_acceleration_hdg_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_acceleration_hdg_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiAccelerationHdgCmd_heading
{
public:
  explicit Init_HwApiAccelerationHdgCmd_heading(::mrs_msgs::msg::HwApiAccelerationHdgCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiAccelerationHdgCmd heading(::mrs_msgs::msg::HwApiAccelerationHdgCmd::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAccelerationHdgCmd msg_;
};

class Init_HwApiAccelerationHdgCmd_acceleration
{
public:
  explicit Init_HwApiAccelerationHdgCmd_acceleration(::mrs_msgs::msg::HwApiAccelerationHdgCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiAccelerationHdgCmd_heading acceleration(::mrs_msgs::msg::HwApiAccelerationHdgCmd::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_HwApiAccelerationHdgCmd_heading(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAccelerationHdgCmd msg_;
};

class Init_HwApiAccelerationHdgCmd_header
{
public:
  Init_HwApiAccelerationHdgCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiAccelerationHdgCmd_acceleration header(::mrs_msgs::msg::HwApiAccelerationHdgCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HwApiAccelerationHdgCmd_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAccelerationHdgCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiAccelerationHdgCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiAccelerationHdgCmd_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ACCELERATION_HDG_CMD__BUILDER_HPP_
