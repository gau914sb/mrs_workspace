// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/EstimatorDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/estimator_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorDiagnostics_estimator_sm_state
{
public:
  explicit Init_EstimatorDiagnostics_estimator_sm_state(::mrs_msgs::msg::EstimatorDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::EstimatorDiagnostics estimator_sm_state(::mrs_msgs::msg::EstimatorDiagnostics::_estimator_sm_state_type arg)
  {
    msg_.estimator_sm_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorDiagnostics msg_;
};

class Init_EstimatorDiagnostics_estimator_type
{
public:
  explicit Init_EstimatorDiagnostics_estimator_type(::mrs_msgs::msg::EstimatorDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimatorDiagnostics_estimator_sm_state estimator_type(::mrs_msgs::msg::EstimatorDiagnostics::_estimator_type_type arg)
  {
    msg_.estimator_type = std::move(arg);
    return Init_EstimatorDiagnostics_estimator_sm_state(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorDiagnostics msg_;
};

class Init_EstimatorDiagnostics_estimator_name
{
public:
  explicit Init_EstimatorDiagnostics_estimator_name(::mrs_msgs::msg::EstimatorDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimatorDiagnostics_estimator_type estimator_name(::mrs_msgs::msg::EstimatorDiagnostics::_estimator_name_type arg)
  {
    msg_.estimator_name = std::move(arg);
    return Init_EstimatorDiagnostics_estimator_type(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorDiagnostics msg_;
};

class Init_EstimatorDiagnostics_header
{
public:
  Init_EstimatorDiagnostics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorDiagnostics_estimator_name header(::mrs_msgs::msg::EstimatorDiagnostics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstimatorDiagnostics_estimator_name(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::EstimatorDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_EstimatorDiagnostics_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_DIAGNOSTICS__BUILDER_HPP_
