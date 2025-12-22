// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/PoseWithSize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/pose_with_size.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/pose_with_size__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseWithSize_height
{
public:
  explicit Init_PoseWithSize_height(::mrs_modules_msgs::msg::PoseWithSize & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::PoseWithSize height(::mrs_modules_msgs::msg::PoseWithSize::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PoseWithSize msg_;
};

class Init_PoseWithSize_width
{
public:
  explicit Init_PoseWithSize_width(::mrs_modules_msgs::msg::PoseWithSize & msg)
  : msg_(msg)
  {}
  Init_PoseWithSize_height width(::mrs_modules_msgs::msg::PoseWithSize::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_PoseWithSize_height(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PoseWithSize msg_;
};

class Init_PoseWithSize_pose
{
public:
  explicit Init_PoseWithSize_pose(::mrs_modules_msgs::msg::PoseWithSize & msg)
  : msg_(msg)
  {}
  Init_PoseWithSize_width pose(::mrs_modules_msgs::msg::PoseWithSize::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseWithSize_width(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PoseWithSize msg_;
};

class Init_PoseWithSize_header
{
public:
  Init_PoseWithSize_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithSize_pose header(::mrs_modules_msgs::msg::PoseWithSize::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseWithSize_pose(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PoseWithSize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::PoseWithSize>()
{
  return mrs_modules_msgs::msg::builder::Init_PoseWithSize_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__POSE_WITH_SIZE__BUILDER_HPP_
