// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/EulerAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/euler_angles.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__EULER_ANGLES__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__EULER_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/euler_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_EulerAngles_roll
{
public:
  explicit Init_EulerAngles_roll(::mrs_msgs::msg::EulerAngles & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::EulerAngles roll(::mrs_msgs::msg::EulerAngles::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::EulerAngles msg_;
};

class Init_EulerAngles_pitch
{
public:
  explicit Init_EulerAngles_pitch(::mrs_msgs::msg::EulerAngles & msg)
  : msg_(msg)
  {}
  Init_EulerAngles_roll pitch(::mrs_msgs::msg::EulerAngles::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EulerAngles_roll(msg_);
  }

private:
  ::mrs_msgs::msg::EulerAngles msg_;
};

class Init_EulerAngles_yaw
{
public:
  Init_EulerAngles_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerAngles_pitch yaw(::mrs_msgs::msg::EulerAngles::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_EulerAngles_pitch(msg_);
  }

private:
  ::mrs_msgs::msg::EulerAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::EulerAngles>()
{
  return mrs_msgs::msg::builder::Init_EulerAngles_yaw();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__EULER_ANGLES__BUILDER_HPP_
