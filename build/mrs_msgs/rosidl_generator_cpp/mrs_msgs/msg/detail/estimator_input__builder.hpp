// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/EstimatorInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_input.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/estimator_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorInput_control_hdg_rate
{
public:
  explicit Init_EstimatorInput_control_hdg_rate(::mrs_msgs::msg::EstimatorInput & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::EstimatorInput control_hdg_rate(::mrs_msgs::msg::EstimatorInput::_control_hdg_rate_type arg)
  {
    msg_.control_hdg_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorInput msg_;
};

class Init_EstimatorInput_control_acceleration
{
public:
  explicit Init_EstimatorInput_control_acceleration(::mrs_msgs::msg::EstimatorInput & msg)
  : msg_(msg)
  {}
  Init_EstimatorInput_control_hdg_rate control_acceleration(::mrs_msgs::msg::EstimatorInput::_control_acceleration_type arg)
  {
    msg_.control_acceleration = std::move(arg);
    return Init_EstimatorInput_control_hdg_rate(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorInput msg_;
};

class Init_EstimatorInput_header
{
public:
  Init_EstimatorInput_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorInput_control_acceleration header(::mrs_msgs::msg::EstimatorInput::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstimatorInput_control_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::EstimatorInput>()
{
  return mrs_msgs::msg::builder::Init_EstimatorInput_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_INPUT__BUILDER_HPP_
