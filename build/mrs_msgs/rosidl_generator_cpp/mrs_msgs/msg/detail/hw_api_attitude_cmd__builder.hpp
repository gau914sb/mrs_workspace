// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiAttitudeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_attitude_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_attitude_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiAttitudeCmd_throttle
{
public:
  explicit Init_HwApiAttitudeCmd_throttle(::mrs_msgs::msg::HwApiAttitudeCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiAttitudeCmd throttle(::mrs_msgs::msg::HwApiAttitudeCmd::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAttitudeCmd msg_;
};

class Init_HwApiAttitudeCmd_orientation
{
public:
  explicit Init_HwApiAttitudeCmd_orientation(::mrs_msgs::msg::HwApiAttitudeCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiAttitudeCmd_throttle orientation(::mrs_msgs::msg::HwApiAttitudeCmd::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_HwApiAttitudeCmd_throttle(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAttitudeCmd msg_;
};

class Init_HwApiAttitudeCmd_stamp
{
public:
  Init_HwApiAttitudeCmd_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiAttitudeCmd_orientation stamp(::mrs_msgs::msg::HwApiAttitudeCmd::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HwApiAttitudeCmd_orientation(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAttitudeCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiAttitudeCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiAttitudeCmd_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_CMD__BUILDER_HPP_
