// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/SafetyBorder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/safety_border.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/safety_border__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyBorder_update_world_origin
{
public:
  explicit Init_SafetyBorder_update_world_origin(::mrs_msgs::msg::SafetyBorder & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::SafetyBorder update_world_origin(::mrs_msgs::msg::SafetyBorder::_update_world_origin_type arg)
  {
    msg_.update_world_origin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyBorder msg_;
};

class Init_SafetyBorder_keep_obstacles
{
public:
  explicit Init_SafetyBorder_keep_obstacles(::mrs_msgs::msg::SafetyBorder & msg)
  : msg_(msg)
  {}
  Init_SafetyBorder_update_world_origin keep_obstacles(::mrs_msgs::msg::SafetyBorder::_keep_obstacles_type arg)
  {
    msg_.keep_obstacles = std::move(arg);
    return Init_SafetyBorder_update_world_origin(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyBorder msg_;
};

class Init_SafetyBorder_prism
{
public:
  Init_SafetyBorder_prism()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyBorder_keep_obstacles prism(::mrs_msgs::msg::SafetyBorder::_prism_type arg)
  {
    msg_.prism = std::move(arg);
    return Init_SafetyBorder_keep_obstacles(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyBorder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::SafetyBorder>()
{
  return mrs_msgs::msg::builder::Init_SafetyBorder_prism();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SAFETY_BORDER__BUILDER_HPP_
