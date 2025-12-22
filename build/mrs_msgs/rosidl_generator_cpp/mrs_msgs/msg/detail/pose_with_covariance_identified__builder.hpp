// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/PoseWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/pose_with_covariance_identified.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/pose_with_covariance_identified__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseWithCovarianceIdentified_covariance
{
public:
  explicit Init_PoseWithCovarianceIdentified_covariance(::mrs_msgs::msg::PoseWithCovarianceIdentified & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::PoseWithCovarianceIdentified covariance(::mrs_msgs::msg::PoseWithCovarianceIdentified::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::PoseWithCovarianceIdentified msg_;
};

class Init_PoseWithCovarianceIdentified_pose
{
public:
  explicit Init_PoseWithCovarianceIdentified_pose(::mrs_msgs::msg::PoseWithCovarianceIdentified & msg)
  : msg_(msg)
  {}
  Init_PoseWithCovarianceIdentified_covariance pose(::mrs_msgs::msg::PoseWithCovarianceIdentified::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseWithCovarianceIdentified_covariance(msg_);
  }

private:
  ::mrs_msgs::msg::PoseWithCovarianceIdentified msg_;
};

class Init_PoseWithCovarianceIdentified_id
{
public:
  Init_PoseWithCovarianceIdentified_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithCovarianceIdentified_pose id(::mrs_msgs::msg::PoseWithCovarianceIdentified::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PoseWithCovarianceIdentified_pose(msg_);
  }

private:
  ::mrs_msgs::msg::PoseWithCovarianceIdentified msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::PoseWithCovarianceIdentified>()
{
  return mrs_msgs::msg::builder::Init_PoseWithCovarianceIdentified_id();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__BUILDER_HPP_
