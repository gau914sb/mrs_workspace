// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/RangeWithCovarianceArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/range_with_covariance_array_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_ARRAY_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_ARRAY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/range_with_covariance_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_RangeWithCovarianceArrayStamped_ranges
{
public:
  explicit Init_RangeWithCovarianceArrayStamped_ranges(::mrs_msgs::msg::RangeWithCovarianceArrayStamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::RangeWithCovarianceArrayStamped ranges(::mrs_msgs::msg::RangeWithCovarianceArrayStamped::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::RangeWithCovarianceArrayStamped msg_;
};

class Init_RangeWithCovarianceArrayStamped_header
{
public:
  Init_RangeWithCovarianceArrayStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeWithCovarianceArrayStamped_ranges header(::mrs_msgs::msg::RangeWithCovarianceArrayStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RangeWithCovarianceArrayStamped_ranges(msg_);
  }

private:
  ::mrs_msgs::msg::RangeWithCovarianceArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::RangeWithCovarianceArrayStamped>()
{
  return mrs_msgs::msg::builder::Init_RangeWithCovarianceArrayStamped_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__RANGE_WITH_COVARIANCE_ARRAY_STAMPED__BUILDER_HPP_
