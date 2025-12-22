// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/control_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/control_manager_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlManagerDiagnostics_human_switchable_trackers
{
public:
  explicit Init_ControlManagerDiagnostics_human_switchable_trackers(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ControlManagerDiagnostics human_switchable_trackers(::mrs_msgs::msg::ControlManagerDiagnostics::_human_switchable_trackers_type arg)
  {
    msg_.human_switchable_trackers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_human_switchable_controllers
{
public:
  explicit Init_ControlManagerDiagnostics_human_switchable_controllers(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_human_switchable_trackers human_switchable_controllers(::mrs_msgs::msg::ControlManagerDiagnostics::_human_switchable_controllers_type arg)
  {
    msg_.human_switchable_controllers = std::move(arg);
    return Init_ControlManagerDiagnostics_human_switchable_trackers(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_available_trackers
{
public:
  explicit Init_ControlManagerDiagnostics_available_trackers(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_human_switchable_controllers available_trackers(::mrs_msgs::msg::ControlManagerDiagnostics::_available_trackers_type arg)
  {
    msg_.available_trackers = std::move(arg);
    return Init_ControlManagerDiagnostics_human_switchable_controllers(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_available_controllers
{
public:
  explicit Init_ControlManagerDiagnostics_available_controllers(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_available_trackers available_controllers(::mrs_msgs::msg::ControlManagerDiagnostics::_available_controllers_type arg)
  {
    msg_.available_controllers = std::move(arg);
    return Init_ControlManagerDiagnostics_available_trackers(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_controller_status
{
public:
  explicit Init_ControlManagerDiagnostics_controller_status(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_available_controllers controller_status(::mrs_msgs::msg::ControlManagerDiagnostics::_controller_status_type arg)
  {
    msg_.controller_status = std::move(arg);
    return Init_ControlManagerDiagnostics_available_controllers(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_active_controller
{
public:
  explicit Init_ControlManagerDiagnostics_active_controller(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_controller_status active_controller(::mrs_msgs::msg::ControlManagerDiagnostics::_active_controller_type arg)
  {
    msg_.active_controller = std::move(arg);
    return Init_ControlManagerDiagnostics_controller_status(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_tracker_status
{
public:
  explicit Init_ControlManagerDiagnostics_tracker_status(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_active_controller tracker_status(::mrs_msgs::msg::ControlManagerDiagnostics::_tracker_status_type arg)
  {
    msg_.tracker_status = std::move(arg);
    return Init_ControlManagerDiagnostics_active_controller(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_active_tracker
{
public:
  explicit Init_ControlManagerDiagnostics_active_tracker(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_tracker_status active_tracker(::mrs_msgs::msg::ControlManagerDiagnostics::_active_tracker_type arg)
  {
    msg_.active_tracker = std::move(arg);
    return Init_ControlManagerDiagnostics_tracker_status(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_desired_uav_state_rate
{
public:
  explicit Init_ControlManagerDiagnostics_desired_uav_state_rate(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_active_tracker desired_uav_state_rate(::mrs_msgs::msg::ControlManagerDiagnostics::_desired_uav_state_rate_type arg)
  {
    msg_.desired_uav_state_rate = std::move(arg);
    return Init_ControlManagerDiagnostics_active_tracker(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_bumper_active
{
public:
  explicit Init_ControlManagerDiagnostics_bumper_active(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_desired_uav_state_rate bumper_active(::mrs_msgs::msg::ControlManagerDiagnostics::_bumper_active_type arg)
  {
    msg_.bumper_active = std::move(arg);
    return Init_ControlManagerDiagnostics_desired_uav_state_rate(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_joystick_active
{
public:
  explicit Init_ControlManagerDiagnostics_joystick_active(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_bumper_active joystick_active(::mrs_msgs::msg::ControlManagerDiagnostics::_joystick_active_type arg)
  {
    msg_.joystick_active = std::move(arg);
    return Init_ControlManagerDiagnostics_bumper_active(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_flying_normally
{
public:
  explicit Init_ControlManagerDiagnostics_flying_normally(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_joystick_active flying_normally(::mrs_msgs::msg::ControlManagerDiagnostics::_flying_normally_type arg)
  {
    msg_.flying_normally = std::move(arg);
    return Init_ControlManagerDiagnostics_joystick_active(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_output_enabled
{
public:
  explicit Init_ControlManagerDiagnostics_output_enabled(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_flying_normally output_enabled(::mrs_msgs::msg::ControlManagerDiagnostics::_output_enabled_type arg)
  {
    msg_.output_enabled = std::move(arg);
    return Init_ControlManagerDiagnostics_flying_normally(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_uav_name
{
public:
  explicit Init_ControlManagerDiagnostics_uav_name(::mrs_msgs::msg::ControlManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControlManagerDiagnostics_output_enabled uav_name(::mrs_msgs::msg::ControlManagerDiagnostics::_uav_name_type arg)
  {
    msg_.uav_name = std::move(arg);
    return Init_ControlManagerDiagnostics_output_enabled(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

class Init_ControlManagerDiagnostics_stamp
{
public:
  Init_ControlManagerDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlManagerDiagnostics_uav_name stamp(::mrs_msgs::msg::ControlManagerDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControlManagerDiagnostics_uav_name(msg_);
  }

private:
  ::mrs_msgs::msg::ControlManagerDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ControlManagerDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_ControlManagerDiagnostics_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CONTROL_MANAGER_DIAGNOSTICS__BUILDER_HPP_
