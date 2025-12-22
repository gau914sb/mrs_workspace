// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/EstimatorCorrection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimator_correction.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATOR_CORRECTION__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATOR_CORRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/estimator_correction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorCorrection_covariance
{
public:
  explicit Init_EstimatorCorrection_covariance(::mrs_msgs::msg::EstimatorCorrection & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::EstimatorCorrection covariance(::mrs_msgs::msg::EstimatorCorrection::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorCorrection msg_;
};

class Init_EstimatorCorrection_state
{
public:
  explicit Init_EstimatorCorrection_state(::mrs_msgs::msg::EstimatorCorrection & msg)
  : msg_(msg)
  {}
  Init_EstimatorCorrection_covariance state(::mrs_msgs::msg::EstimatorCorrection::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_EstimatorCorrection_covariance(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorCorrection msg_;
};

class Init_EstimatorCorrection_state_id
{
public:
  explicit Init_EstimatorCorrection_state_id(::mrs_msgs::msg::EstimatorCorrection & msg)
  : msg_(msg)
  {}
  Init_EstimatorCorrection_state state_id(::mrs_msgs::msg::EstimatorCorrection::_state_id_type arg)
  {
    msg_.state_id = std::move(arg);
    return Init_EstimatorCorrection_state(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorCorrection msg_;
};

class Init_EstimatorCorrection_name
{
public:
  explicit Init_EstimatorCorrection_name(::mrs_msgs::msg::EstimatorCorrection & msg)
  : msg_(msg)
  {}
  Init_EstimatorCorrection_state_id name(::mrs_msgs::msg::EstimatorCorrection::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_EstimatorCorrection_state_id(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorCorrection msg_;
};

class Init_EstimatorCorrection_estimator_name
{
public:
  explicit Init_EstimatorCorrection_estimator_name(::mrs_msgs::msg::EstimatorCorrection & msg)
  : msg_(msg)
  {}
  Init_EstimatorCorrection_name estimator_name(::mrs_msgs::msg::EstimatorCorrection::_estimator_name_type arg)
  {
    msg_.estimator_name = std::move(arg);
    return Init_EstimatorCorrection_name(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorCorrection msg_;
};

class Init_EstimatorCorrection_header
{
public:
  Init_EstimatorCorrection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorCorrection_estimator_name header(::mrs_msgs::msg::EstimatorCorrection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstimatorCorrection_estimator_name(msg_);
  }

private:
  ::mrs_msgs::msg::EstimatorCorrection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::EstimatorCorrection>()
{
  return mrs_msgs::msg::builder::Init_EstimatorCorrection_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATOR_CORRECTION__BUILDER_HPP_
