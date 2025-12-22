// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/SpeedTrackerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/speed_tracker_command.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/speed_tracker_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedTrackerCommand_use_heading_rate
{
public:
  explicit Init_SpeedTrackerCommand_use_heading_rate(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::SpeedTrackerCommand use_heading_rate(::mrs_msgs::msg::SpeedTrackerCommand::_use_heading_rate_type arg)
  {
    msg_.use_heading_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_use_heading
{
public:
  explicit Init_SpeedTrackerCommand_use_heading(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_use_heading_rate use_heading(::mrs_msgs::msg::SpeedTrackerCommand::_use_heading_type arg)
  {
    msg_.use_heading = std::move(arg);
    return Init_SpeedTrackerCommand_use_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_use_z
{
public:
  explicit Init_SpeedTrackerCommand_use_z(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_use_heading use_z(::mrs_msgs::msg::SpeedTrackerCommand::_use_z_type arg)
  {
    msg_.use_z = std::move(arg);
    return Init_SpeedTrackerCommand_use_heading(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_use_force
{
public:
  explicit Init_SpeedTrackerCommand_use_force(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_use_z use_force(::mrs_msgs::msg::SpeedTrackerCommand::_use_force_type arg)
  {
    msg_.use_force = std::move(arg);
    return Init_SpeedTrackerCommand_use_z(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_use_acceleration
{
public:
  explicit Init_SpeedTrackerCommand_use_acceleration(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_use_force use_acceleration(::mrs_msgs::msg::SpeedTrackerCommand::_use_acceleration_type arg)
  {
    msg_.use_acceleration = std::move(arg);
    return Init_SpeedTrackerCommand_use_force(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_use_velocity
{
public:
  explicit Init_SpeedTrackerCommand_use_velocity(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_use_acceleration use_velocity(::mrs_msgs::msg::SpeedTrackerCommand::_use_velocity_type arg)
  {
    msg_.use_velocity = std::move(arg);
    return Init_SpeedTrackerCommand_use_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_heading_rate
{
public:
  explicit Init_SpeedTrackerCommand_heading_rate(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_use_velocity heading_rate(::mrs_msgs::msg::SpeedTrackerCommand::_heading_rate_type arg)
  {
    msg_.heading_rate = std::move(arg);
    return Init_SpeedTrackerCommand_use_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_heading
{
public:
  explicit Init_SpeedTrackerCommand_heading(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_heading_rate heading(::mrs_msgs::msg::SpeedTrackerCommand::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_SpeedTrackerCommand_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_z
{
public:
  explicit Init_SpeedTrackerCommand_z(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_heading z(::mrs_msgs::msg::SpeedTrackerCommand::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SpeedTrackerCommand_heading(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_force
{
public:
  explicit Init_SpeedTrackerCommand_force(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_z force(::mrs_msgs::msg::SpeedTrackerCommand::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_SpeedTrackerCommand_z(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_acceleration
{
public:
  explicit Init_SpeedTrackerCommand_acceleration(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_force acceleration(::mrs_msgs::msg::SpeedTrackerCommand::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_SpeedTrackerCommand_force(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_velocity
{
public:
  explicit Init_SpeedTrackerCommand_velocity(::mrs_msgs::msg::SpeedTrackerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeedTrackerCommand_acceleration velocity(::mrs_msgs::msg::SpeedTrackerCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SpeedTrackerCommand_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

class Init_SpeedTrackerCommand_header
{
public:
  Init_SpeedTrackerCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedTrackerCommand_velocity header(::mrs_msgs::msg::SpeedTrackerCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpeedTrackerCommand_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::SpeedTrackerCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::SpeedTrackerCommand>()
{
  return mrs_msgs::msg::builder::Init_SpeedTrackerCommand_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SPEED_TRACKER_COMMAND__BUILDER_HPP_
