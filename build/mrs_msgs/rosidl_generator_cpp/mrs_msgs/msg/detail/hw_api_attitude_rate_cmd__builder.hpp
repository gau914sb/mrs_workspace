// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiAttitudeRateCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_attitude_rate_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_attitude_rate_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiAttitudeRateCmd_throttle
{
public:
  explicit Init_HwApiAttitudeRateCmd_throttle(::mrs_msgs::msg::HwApiAttitudeRateCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiAttitudeRateCmd throttle(::mrs_msgs::msg::HwApiAttitudeRateCmd::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAttitudeRateCmd msg_;
};

class Init_HwApiAttitudeRateCmd_body_rate
{
public:
  explicit Init_HwApiAttitudeRateCmd_body_rate(::mrs_msgs::msg::HwApiAttitudeRateCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiAttitudeRateCmd_throttle body_rate(::mrs_msgs::msg::HwApiAttitudeRateCmd::_body_rate_type arg)
  {
    msg_.body_rate = std::move(arg);
    return Init_HwApiAttitudeRateCmd_throttle(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAttitudeRateCmd msg_;
};

class Init_HwApiAttitudeRateCmd_stamp
{
public:
  Init_HwApiAttitudeRateCmd_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiAttitudeRateCmd_body_rate stamp(::mrs_msgs::msg::HwApiAttitudeRateCmd::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HwApiAttitudeRateCmd_body_rate(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAttitudeRateCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiAttitudeRateCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiAttitudeRateCmd_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ATTITUDE_RATE_CMD__BUILDER_HPP_
