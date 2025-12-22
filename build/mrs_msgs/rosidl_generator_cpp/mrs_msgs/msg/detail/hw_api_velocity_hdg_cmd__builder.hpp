// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiVelocityHdgCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_velocity_hdg_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_VELOCITY_HDG_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_VELOCITY_HDG_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_velocity_hdg_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiVelocityHdgCmd_heading
{
public:
  explicit Init_HwApiVelocityHdgCmd_heading(::mrs_msgs::msg::HwApiVelocityHdgCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiVelocityHdgCmd heading(::mrs_msgs::msg::HwApiVelocityHdgCmd::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiVelocityHdgCmd msg_;
};

class Init_HwApiVelocityHdgCmd_velocity
{
public:
  explicit Init_HwApiVelocityHdgCmd_velocity(::mrs_msgs::msg::HwApiVelocityHdgCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiVelocityHdgCmd_heading velocity(::mrs_msgs::msg::HwApiVelocityHdgCmd::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_HwApiVelocityHdgCmd_heading(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiVelocityHdgCmd msg_;
};

class Init_HwApiVelocityHdgCmd_header
{
public:
  Init_HwApiVelocityHdgCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiVelocityHdgCmd_velocity header(::mrs_msgs::msg::HwApiVelocityHdgCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HwApiVelocityHdgCmd_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiVelocityHdgCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiVelocityHdgCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiVelocityHdgCmd_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_VELOCITY_HDG_CMD__BUILDER_HPP_
