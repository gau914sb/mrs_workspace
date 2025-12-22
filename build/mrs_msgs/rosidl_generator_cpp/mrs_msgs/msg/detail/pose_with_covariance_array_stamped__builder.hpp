// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/PoseWithCovarianceArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/pose_with_covariance_array_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_ARRAY_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_ARRAY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/pose_with_covariance_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseWithCovarianceArrayStamped_poses
{
public:
  explicit Init_PoseWithCovarianceArrayStamped_poses(::mrs_msgs::msg::PoseWithCovarianceArrayStamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::PoseWithCovarianceArrayStamped poses(::mrs_msgs::msg::PoseWithCovarianceArrayStamped::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::PoseWithCovarianceArrayStamped msg_;
};

class Init_PoseWithCovarianceArrayStamped_header
{
public:
  Init_PoseWithCovarianceArrayStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithCovarianceArrayStamped_poses header(::mrs_msgs::msg::PoseWithCovarianceArrayStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseWithCovarianceArrayStamped_poses(msg_);
  }

private:
  ::mrs_msgs::msg::PoseWithCovarianceArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::PoseWithCovarianceArrayStamped>()
{
  return mrs_msgs::msg::builder::Init_PoseWithCovarianceArrayStamped_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_ARRAY_STAMPED__BUILDER_HPP_
