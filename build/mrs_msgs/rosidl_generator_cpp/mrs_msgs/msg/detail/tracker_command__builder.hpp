// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/TrackerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/tracker_command.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/tracker_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackerCommand_use_full_state_prediction
{
public:
  explicit Init_TrackerCommand_use_full_state_prediction(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::TrackerCommand use_full_state_prediction(::mrs_msgs::msg::TrackerCommand::_use_full_state_prediction_type arg)
  {
    msg_.use_full_state_prediction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_throttle
{
public:
  explicit Init_TrackerCommand_use_throttle(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_full_state_prediction use_throttle(::mrs_msgs::msg::TrackerCommand::_use_throttle_type arg)
  {
    msg_.use_throttle = std::move(arg);
    return Init_TrackerCommand_use_full_state_prediction(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_orientation
{
public:
  explicit Init_TrackerCommand_use_orientation(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_throttle use_orientation(::mrs_msgs::msg::TrackerCommand::_use_orientation_type arg)
  {
    msg_.use_orientation = std::move(arg);
    return Init_TrackerCommand_use_throttle(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_heading_jerk
{
public:
  explicit Init_TrackerCommand_use_heading_jerk(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_orientation use_heading_jerk(::mrs_msgs::msg::TrackerCommand::_use_heading_jerk_type arg)
  {
    msg_.use_heading_jerk = std::move(arg);
    return Init_TrackerCommand_use_orientation(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_heading_acceleration
{
public:
  explicit Init_TrackerCommand_use_heading_acceleration(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_heading_jerk use_heading_acceleration(::mrs_msgs::msg::TrackerCommand::_use_heading_acceleration_type arg)
  {
    msg_.use_heading_acceleration = std::move(arg);
    return Init_TrackerCommand_use_heading_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_heading_rate
{
public:
  explicit Init_TrackerCommand_use_heading_rate(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_heading_acceleration use_heading_rate(::mrs_msgs::msg::TrackerCommand::_use_heading_rate_type arg)
  {
    msg_.use_heading_rate = std::move(arg);
    return Init_TrackerCommand_use_heading_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_heading
{
public:
  explicit Init_TrackerCommand_use_heading(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_heading_rate use_heading(::mrs_msgs::msg::TrackerCommand::_use_heading_type arg)
  {
    msg_.use_heading = std::move(arg);
    return Init_TrackerCommand_use_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_attitude_rate
{
public:
  explicit Init_TrackerCommand_use_attitude_rate(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_heading use_attitude_rate(::mrs_msgs::msg::TrackerCommand::_use_attitude_rate_type arg)
  {
    msg_.use_attitude_rate = std::move(arg);
    return Init_TrackerCommand_use_heading(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_snap
{
public:
  explicit Init_TrackerCommand_use_snap(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_attitude_rate use_snap(::mrs_msgs::msg::TrackerCommand::_use_snap_type arg)
  {
    msg_.use_snap = std::move(arg);
    return Init_TrackerCommand_use_attitude_rate(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_jerk
{
public:
  explicit Init_TrackerCommand_use_jerk(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_snap use_jerk(::mrs_msgs::msg::TrackerCommand::_use_jerk_type arg)
  {
    msg_.use_jerk = std::move(arg);
    return Init_TrackerCommand_use_snap(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_acceleration
{
public:
  explicit Init_TrackerCommand_use_acceleration(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_jerk use_acceleration(::mrs_msgs::msg::TrackerCommand::_use_acceleration_type arg)
  {
    msg_.use_acceleration = std::move(arg);
    return Init_TrackerCommand_use_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_velocity_vertical
{
public:
  explicit Init_TrackerCommand_use_velocity_vertical(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_acceleration use_velocity_vertical(::mrs_msgs::msg::TrackerCommand::_use_velocity_vertical_type arg)
  {
    msg_.use_velocity_vertical = std::move(arg);
    return Init_TrackerCommand_use_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_velocity_horizontal
{
public:
  explicit Init_TrackerCommand_use_velocity_horizontal(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_velocity_vertical use_velocity_horizontal(::mrs_msgs::msg::TrackerCommand::_use_velocity_horizontal_type arg)
  {
    msg_.use_velocity_horizontal = std::move(arg);
    return Init_TrackerCommand_use_velocity_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_position_vertical
{
public:
  explicit Init_TrackerCommand_use_position_vertical(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_velocity_horizontal use_position_vertical(::mrs_msgs::msg::TrackerCommand::_use_position_vertical_type arg)
  {
    msg_.use_position_vertical = std::move(arg);
    return Init_TrackerCommand_use_velocity_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_use_position_horizontal
{
public:
  explicit Init_TrackerCommand_use_position_horizontal(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_position_vertical use_position_horizontal(::mrs_msgs::msg::TrackerCommand::_use_position_horizontal_type arg)
  {
    msg_.use_position_horizontal = std::move(arg);
    return Init_TrackerCommand_use_position_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_disable_antiwindups
{
public:
  explicit Init_TrackerCommand_disable_antiwindups(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_use_position_horizontal disable_antiwindups(::mrs_msgs::msg::TrackerCommand::_disable_antiwindups_type arg)
  {
    msg_.disable_antiwindups = std::move(arg);
    return Init_TrackerCommand_use_position_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_disable_position_gains
{
public:
  explicit Init_TrackerCommand_disable_position_gains(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_disable_antiwindups disable_position_gains(::mrs_msgs::msg::TrackerCommand::_disable_position_gains_type arg)
  {
    msg_.disable_position_gains = std::move(arg);
    return Init_TrackerCommand_disable_antiwindups(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_heading_jerk
{
public:
  explicit Init_TrackerCommand_heading_jerk(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_disable_position_gains heading_jerk(::mrs_msgs::msg::TrackerCommand::_heading_jerk_type arg)
  {
    msg_.heading_jerk = std::move(arg);
    return Init_TrackerCommand_disable_position_gains(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_heading_acceleration
{
public:
  explicit Init_TrackerCommand_heading_acceleration(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_heading_jerk heading_acceleration(::mrs_msgs::msg::TrackerCommand::_heading_acceleration_type arg)
  {
    msg_.heading_acceleration = std::move(arg);
    return Init_TrackerCommand_heading_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_heading_rate
{
public:
  explicit Init_TrackerCommand_heading_rate(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_heading_acceleration heading_rate(::mrs_msgs::msg::TrackerCommand::_heading_rate_type arg)
  {
    msg_.heading_rate = std::move(arg);
    return Init_TrackerCommand_heading_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_heading
{
public:
  explicit Init_TrackerCommand_heading(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_heading_rate heading(::mrs_msgs::msg::TrackerCommand::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_TrackerCommand_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_throttle
{
public:
  explicit Init_TrackerCommand_throttle(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_heading throttle(::mrs_msgs::msg::TrackerCommand::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_TrackerCommand_heading(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_attitude_rate
{
public:
  explicit Init_TrackerCommand_attitude_rate(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_throttle attitude_rate(::mrs_msgs::msg::TrackerCommand::_attitude_rate_type arg)
  {
    msg_.attitude_rate = std::move(arg);
    return Init_TrackerCommand_throttle(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_orientation
{
public:
  explicit Init_TrackerCommand_orientation(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_attitude_rate orientation(::mrs_msgs::msg::TrackerCommand::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_TrackerCommand_attitude_rate(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_full_state_prediction
{
public:
  explicit Init_TrackerCommand_full_state_prediction(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_orientation full_state_prediction(::mrs_msgs::msg::TrackerCommand::_full_state_prediction_type arg)
  {
    msg_.full_state_prediction = std::move(arg);
    return Init_TrackerCommand_orientation(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_snap
{
public:
  explicit Init_TrackerCommand_snap(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_full_state_prediction snap(::mrs_msgs::msg::TrackerCommand::_snap_type arg)
  {
    msg_.snap = std::move(arg);
    return Init_TrackerCommand_full_state_prediction(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_jerk
{
public:
  explicit Init_TrackerCommand_jerk(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_snap jerk(::mrs_msgs::msg::TrackerCommand::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return Init_TrackerCommand_snap(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_acceleration
{
public:
  explicit Init_TrackerCommand_acceleration(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_jerk acceleration(::mrs_msgs::msg::TrackerCommand::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrackerCommand_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_velocity
{
public:
  explicit Init_TrackerCommand_velocity(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_acceleration velocity(::mrs_msgs::msg::TrackerCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrackerCommand_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_position
{
public:
  explicit Init_TrackerCommand_position(::mrs_msgs::msg::TrackerCommand & msg)
  : msg_(msg)
  {}
  Init_TrackerCommand_velocity position(::mrs_msgs::msg::TrackerCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrackerCommand_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

class Init_TrackerCommand_header
{
public:
  Init_TrackerCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackerCommand_position header(::mrs_msgs::msg::TrackerCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackerCommand_position(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::TrackerCommand>()
{
  return mrs_msgs::msg::builder::Init_TrackerCommand_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRACKER_COMMAND__BUILDER_HPP_
