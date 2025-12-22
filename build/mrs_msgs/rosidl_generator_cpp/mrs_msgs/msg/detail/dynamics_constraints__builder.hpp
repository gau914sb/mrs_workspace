// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/DynamicsConstraints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/dynamics_constraints.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/dynamics_constraints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicsConstraints_tilt
{
public:
  explicit Init_DynamicsConstraints_tilt(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::DynamicsConstraints tilt(::mrs_msgs::msg::DynamicsConstraints::_tilt_type arg)
  {
    msg_.tilt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_yaw_rate
{
public:
  explicit Init_DynamicsConstraints_yaw_rate(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_tilt yaw_rate(::mrs_msgs::msg::DynamicsConstraints::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_DynamicsConstraints_tilt(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_pitch_rate
{
public:
  explicit Init_DynamicsConstraints_pitch_rate(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_yaw_rate pitch_rate(::mrs_msgs::msg::DynamicsConstraints::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_DynamicsConstraints_yaw_rate(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_roll_rate
{
public:
  explicit Init_DynamicsConstraints_roll_rate(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_pitch_rate roll_rate(::mrs_msgs::msg::DynamicsConstraints::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_DynamicsConstraints_pitch_rate(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_heading_snap
{
public:
  explicit Init_DynamicsConstraints_heading_snap(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_roll_rate heading_snap(::mrs_msgs::msg::DynamicsConstraints::_heading_snap_type arg)
  {
    msg_.heading_snap = std::move(arg);
    return Init_DynamicsConstraints_roll_rate(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_heading_jerk
{
public:
  explicit Init_DynamicsConstraints_heading_jerk(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_heading_snap heading_jerk(::mrs_msgs::msg::DynamicsConstraints::_heading_jerk_type arg)
  {
    msg_.heading_jerk = std::move(arg);
    return Init_DynamicsConstraints_heading_snap(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_heading_acceleration
{
public:
  explicit Init_DynamicsConstraints_heading_acceleration(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_heading_jerk heading_acceleration(::mrs_msgs::msg::DynamicsConstraints::_heading_acceleration_type arg)
  {
    msg_.heading_acceleration = std::move(arg);
    return Init_DynamicsConstraints_heading_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_heading_speed
{
public:
  explicit Init_DynamicsConstraints_heading_speed(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_heading_acceleration heading_speed(::mrs_msgs::msg::DynamicsConstraints::_heading_speed_type arg)
  {
    msg_.heading_speed = std::move(arg);
    return Init_DynamicsConstraints_heading_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_vertical_descending_snap
{
public:
  explicit Init_DynamicsConstraints_vertical_descending_snap(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_heading_speed vertical_descending_snap(::mrs_msgs::msg::DynamicsConstraints::_vertical_descending_snap_type arg)
  {
    msg_.vertical_descending_snap = std::move(arg);
    return Init_DynamicsConstraints_heading_speed(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_vertical_descending_jerk
{
public:
  explicit Init_DynamicsConstraints_vertical_descending_jerk(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_vertical_descending_snap vertical_descending_jerk(::mrs_msgs::msg::DynamicsConstraints::_vertical_descending_jerk_type arg)
  {
    msg_.vertical_descending_jerk = std::move(arg);
    return Init_DynamicsConstraints_vertical_descending_snap(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_vertical_descending_acceleration
{
public:
  explicit Init_DynamicsConstraints_vertical_descending_acceleration(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_vertical_descending_jerk vertical_descending_acceleration(::mrs_msgs::msg::DynamicsConstraints::_vertical_descending_acceleration_type arg)
  {
    msg_.vertical_descending_acceleration = std::move(arg);
    return Init_DynamicsConstraints_vertical_descending_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_vertical_descending_speed
{
public:
  explicit Init_DynamicsConstraints_vertical_descending_speed(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_vertical_descending_acceleration vertical_descending_speed(::mrs_msgs::msg::DynamicsConstraints::_vertical_descending_speed_type arg)
  {
    msg_.vertical_descending_speed = std::move(arg);
    return Init_DynamicsConstraints_vertical_descending_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_vertical_ascending_snap
{
public:
  explicit Init_DynamicsConstraints_vertical_ascending_snap(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_vertical_descending_speed vertical_ascending_snap(::mrs_msgs::msg::DynamicsConstraints::_vertical_ascending_snap_type arg)
  {
    msg_.vertical_ascending_snap = std::move(arg);
    return Init_DynamicsConstraints_vertical_descending_speed(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_vertical_ascending_jerk
{
public:
  explicit Init_DynamicsConstraints_vertical_ascending_jerk(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_vertical_ascending_snap vertical_ascending_jerk(::mrs_msgs::msg::DynamicsConstraints::_vertical_ascending_jerk_type arg)
  {
    msg_.vertical_ascending_jerk = std::move(arg);
    return Init_DynamicsConstraints_vertical_ascending_snap(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_vertical_ascending_acceleration
{
public:
  explicit Init_DynamicsConstraints_vertical_ascending_acceleration(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_vertical_ascending_jerk vertical_ascending_acceleration(::mrs_msgs::msg::DynamicsConstraints::_vertical_ascending_acceleration_type arg)
  {
    msg_.vertical_ascending_acceleration = std::move(arg);
    return Init_DynamicsConstraints_vertical_ascending_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_vertical_ascending_speed
{
public:
  explicit Init_DynamicsConstraints_vertical_ascending_speed(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_vertical_ascending_acceleration vertical_ascending_speed(::mrs_msgs::msg::DynamicsConstraints::_vertical_ascending_speed_type arg)
  {
    msg_.vertical_ascending_speed = std::move(arg);
    return Init_DynamicsConstraints_vertical_ascending_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_horizontal_snap
{
public:
  explicit Init_DynamicsConstraints_horizontal_snap(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_vertical_ascending_speed horizontal_snap(::mrs_msgs::msg::DynamicsConstraints::_horizontal_snap_type arg)
  {
    msg_.horizontal_snap = std::move(arg);
    return Init_DynamicsConstraints_vertical_ascending_speed(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_horizontal_jerk
{
public:
  explicit Init_DynamicsConstraints_horizontal_jerk(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_horizontal_snap horizontal_jerk(::mrs_msgs::msg::DynamicsConstraints::_horizontal_jerk_type arg)
  {
    msg_.horizontal_jerk = std::move(arg);
    return Init_DynamicsConstraints_horizontal_snap(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_horizontal_acceleration
{
public:
  explicit Init_DynamicsConstraints_horizontal_acceleration(::mrs_msgs::msg::DynamicsConstraints & msg)
  : msg_(msg)
  {}
  Init_DynamicsConstraints_horizontal_jerk horizontal_acceleration(::mrs_msgs::msg::DynamicsConstraints::_horizontal_acceleration_type arg)
  {
    msg_.horizontal_acceleration = std::move(arg);
    return Init_DynamicsConstraints_horizontal_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

class Init_DynamicsConstraints_horizontal_speed
{
public:
  Init_DynamicsConstraints_horizontal_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicsConstraints_horizontal_acceleration horizontal_speed(::mrs_msgs::msg::DynamicsConstraints::_horizontal_speed_type arg)
  {
    msg_.horizontal_speed = std::move(arg);
    return Init_DynamicsConstraints_horizontal_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::DynamicsConstraints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::DynamicsConstraints>()
{
  return mrs_msgs::msg::builder::Init_DynamicsConstraints_horizontal_speed();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__DYNAMICS_CONSTRAINTS__BUILDER_HPP_
