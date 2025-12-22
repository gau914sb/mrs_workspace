// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiActuatorCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_actuator_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_actuator_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiActuatorCmd_motors
{
public:
  explicit Init_HwApiActuatorCmd_motors(::mrs_msgs::msg::HwApiActuatorCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiActuatorCmd motors(::mrs_msgs::msg::HwApiActuatorCmd::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiActuatorCmd msg_;
};

class Init_HwApiActuatorCmd_stamp
{
public:
  Init_HwApiActuatorCmd_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiActuatorCmd_motors stamp(::mrs_msgs::msg::HwApiActuatorCmd::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HwApiActuatorCmd_motors(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiActuatorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiActuatorCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiActuatorCmd_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ACTUATOR_CMD__BUILDER_HPP_
