// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiControlGroupCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_control_group_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_control_group_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiControlGroupCmd_throttle
{
public:
  explicit Init_HwApiControlGroupCmd_throttle(::mrs_msgs::msg::HwApiControlGroupCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiControlGroupCmd throttle(::mrs_msgs::msg::HwApiControlGroupCmd::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiControlGroupCmd msg_;
};

class Init_HwApiControlGroupCmd_yaw
{
public:
  explicit Init_HwApiControlGroupCmd_yaw(::mrs_msgs::msg::HwApiControlGroupCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiControlGroupCmd_throttle yaw(::mrs_msgs::msg::HwApiControlGroupCmd::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_HwApiControlGroupCmd_throttle(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiControlGroupCmd msg_;
};

class Init_HwApiControlGroupCmd_pitch
{
public:
  explicit Init_HwApiControlGroupCmd_pitch(::mrs_msgs::msg::HwApiControlGroupCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiControlGroupCmd_yaw pitch(::mrs_msgs::msg::HwApiControlGroupCmd::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_HwApiControlGroupCmd_yaw(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiControlGroupCmd msg_;
};

class Init_HwApiControlGroupCmd_roll
{
public:
  explicit Init_HwApiControlGroupCmd_roll(::mrs_msgs::msg::HwApiControlGroupCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiControlGroupCmd_pitch roll(::mrs_msgs::msg::HwApiControlGroupCmd::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_HwApiControlGroupCmd_pitch(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiControlGroupCmd msg_;
};

class Init_HwApiControlGroupCmd_stamp
{
public:
  Init_HwApiControlGroupCmd_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiControlGroupCmd_roll stamp(::mrs_msgs::msg::HwApiControlGroupCmd::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HwApiControlGroupCmd_roll(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiControlGroupCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiControlGroupCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiControlGroupCmd_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_CONTROL_GROUP_CMD__BUILDER_HPP_
