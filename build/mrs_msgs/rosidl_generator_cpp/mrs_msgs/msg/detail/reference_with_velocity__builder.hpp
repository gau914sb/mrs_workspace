// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ReferenceWithVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/reference_with_velocity.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/reference_with_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ReferenceWithVelocity_velocity
{
public:
  explicit Init_ReferenceWithVelocity_velocity(::mrs_msgs::msg::ReferenceWithVelocity & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ReferenceWithVelocity velocity(::mrs_msgs::msg::ReferenceWithVelocity::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ReferenceWithVelocity msg_;
};

class Init_ReferenceWithVelocity_enforce_velocity
{
public:
  explicit Init_ReferenceWithVelocity_enforce_velocity(::mrs_msgs::msg::ReferenceWithVelocity & msg)
  : msg_(msg)
  {}
  Init_ReferenceWithVelocity_velocity enforce_velocity(::mrs_msgs::msg::ReferenceWithVelocity::_enforce_velocity_type arg)
  {
    msg_.enforce_velocity = std::move(arg);
    return Init_ReferenceWithVelocity_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::ReferenceWithVelocity msg_;
};

class Init_ReferenceWithVelocity_heading
{
public:
  explicit Init_ReferenceWithVelocity_heading(::mrs_msgs::msg::ReferenceWithVelocity & msg)
  : msg_(msg)
  {}
  Init_ReferenceWithVelocity_enforce_velocity heading(::mrs_msgs::msg::ReferenceWithVelocity::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_ReferenceWithVelocity_enforce_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::ReferenceWithVelocity msg_;
};

class Init_ReferenceWithVelocity_position
{
public:
  Init_ReferenceWithVelocity_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceWithVelocity_heading position(::mrs_msgs::msg::ReferenceWithVelocity::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ReferenceWithVelocity_heading(msg_);
  }

private:
  ::mrs_msgs::msg::ReferenceWithVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ReferenceWithVelocity>()
{
  return mrs_msgs::msg::builder::Init_ReferenceWithVelocity_position();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__REFERENCE_WITH_VELOCITY__BUILDER_HPP_
