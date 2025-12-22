// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/EstimatorOutput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_output.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_OUTPUT__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/estimator_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorOutput_covariance
{
public:
  explicit Init_EstimatorOutput_covariance(::mrs_msgs::msg::EstimatorOutput & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::EstimatorOutput covariance(::mrs_msgs::msg::EstimatorOutput::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorOutput msg_;
};

class Init_EstimatorOutput_state
{
public:
  explicit Init_EstimatorOutput_state(::mrs_msgs::msg::EstimatorOutput & msg)
  : msg_(msg)
  {}
  Init_EstimatorOutput_covariance state(::mrs_msgs::msg::EstimatorOutput::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_EstimatorOutput_covariance(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorOutput msg_;
};

class Init_EstimatorOutput_header
{
public:
  Init_EstimatorOutput_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorOutput_state header(::mrs_msgs::msg::EstimatorOutput::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstimatorOutput_state(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::EstimatorOutput>()
{
  return mrs_msgs::msg::builder::Init_EstimatorOutput_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_OUTPUT__BUILDER_HPP_
