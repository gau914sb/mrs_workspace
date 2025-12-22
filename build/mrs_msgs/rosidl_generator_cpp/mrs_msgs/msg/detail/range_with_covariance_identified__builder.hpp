// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/RangeWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/range_with_covariance_identified.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/range_with_covariance_identified__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_RangeWithCovarianceIdentified_power_b
{
public:
  explicit Init_RangeWithCovarianceIdentified_power_b(::mrs_msgs::msg::RangeWithCovarianceIdentified & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::RangeWithCovarianceIdentified power_b(::mrs_msgs::msg::RangeWithCovarianceIdentified::_power_b_type arg)
  {
    msg_.power_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::RangeWithCovarianceIdentified msg_;
};

class Init_RangeWithCovarianceIdentified_power_a
{
public:
  explicit Init_RangeWithCovarianceIdentified_power_a(::mrs_msgs::msg::RangeWithCovarianceIdentified & msg)
  : msg_(msg)
  {}
  Init_RangeWithCovarianceIdentified_power_b power_a(::mrs_msgs::msg::RangeWithCovarianceIdentified::_power_a_type arg)
  {
    msg_.power_a = std::move(arg);
    return Init_RangeWithCovarianceIdentified_power_b(msg_);
  }

private:
  ::mrs_msgs::msg::RangeWithCovarianceIdentified msg_;
};

class Init_RangeWithCovarianceIdentified_variance
{
public:
  explicit Init_RangeWithCovarianceIdentified_variance(::mrs_msgs::msg::RangeWithCovarianceIdentified & msg)
  : msg_(msg)
  {}
  Init_RangeWithCovarianceIdentified_power_a variance(::mrs_msgs::msg::RangeWithCovarianceIdentified::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return Init_RangeWithCovarianceIdentified_power_a(msg_);
  }

private:
  ::mrs_msgs::msg::RangeWithCovarianceIdentified msg_;
};

class Init_RangeWithCovarianceIdentified_range
{
public:
  explicit Init_RangeWithCovarianceIdentified_range(::mrs_msgs::msg::RangeWithCovarianceIdentified & msg)
  : msg_(msg)
  {}
  Init_RangeWithCovarianceIdentified_variance range(::mrs_msgs::msg::RangeWithCovarianceIdentified::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RangeWithCovarianceIdentified_variance(msg_);
  }

private:
  ::mrs_msgs::msg::RangeWithCovarianceIdentified msg_;
};

class Init_RangeWithCovarianceIdentified_id
{
public:
  Init_RangeWithCovarianceIdentified_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeWithCovarianceIdentified_range id(::mrs_msgs::msg::RangeWithCovarianceIdentified::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RangeWithCovarianceIdentified_range(msg_);
  }

private:
  ::mrs_msgs::msg::RangeWithCovarianceIdentified msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::RangeWithCovarianceIdentified>()
{
  return mrs_msgs::msg::builder::Init_RangeWithCovarianceIdentified_id();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_IDENTIFIED__BUILDER_HPP_
