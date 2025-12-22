// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/MpcTrackerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/mpc_tracker_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/mpc_tracker_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcTrackerDiagnostics_setpoint
{
public:
  explicit Init_MpcTrackerDiagnostics_setpoint(::mrs_msgs::msg::MpcTrackerDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::MpcTrackerDiagnostics setpoint(::mrs_msgs::msg::MpcTrackerDiagnostics::_setpoint_type arg)
  {
    msg_.setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::MpcTrackerDiagnostics msg_;
};

class Init_MpcTrackerDiagnostics_avoidance_active_uavs
{
public:
  explicit Init_MpcTrackerDiagnostics_avoidance_active_uavs(::mrs_msgs::msg::MpcTrackerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_MpcTrackerDiagnostics_setpoint avoidance_active_uavs(::mrs_msgs::msg::MpcTrackerDiagnostics::_avoidance_active_uavs_type arg)
  {
    msg_.avoidance_active_uavs = std::move(arg);
    return Init_MpcTrackerDiagnostics_setpoint(msg_);
  }

private:
  ::mrs_msgs::msg::MpcTrackerDiagnostics msg_;
};

class Init_MpcTrackerDiagnostics_avoiding_collision
{
public:
  explicit Init_MpcTrackerDiagnostics_avoiding_collision(::mrs_msgs::msg::MpcTrackerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_MpcTrackerDiagnostics_avoidance_active_uavs avoiding_collision(::mrs_msgs::msg::MpcTrackerDiagnostics::_avoiding_collision_type arg)
  {
    msg_.avoiding_collision = std::move(arg);
    return Init_MpcTrackerDiagnostics_avoidance_active_uavs(msg_);
  }

private:
  ::mrs_msgs::msg::MpcTrackerDiagnostics msg_;
};

class Init_MpcTrackerDiagnostics_collision_avoidance_active
{
public:
  explicit Init_MpcTrackerDiagnostics_collision_avoidance_active(::mrs_msgs::msg::MpcTrackerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_MpcTrackerDiagnostics_avoiding_collision collision_avoidance_active(::mrs_msgs::msg::MpcTrackerDiagnostics::_collision_avoidance_active_type arg)
  {
    msg_.collision_avoidance_active = std::move(arg);
    return Init_MpcTrackerDiagnostics_avoiding_collision(msg_);
  }

private:
  ::mrs_msgs::msg::MpcTrackerDiagnostics msg_;
};

class Init_MpcTrackerDiagnostics_active
{
public:
  explicit Init_MpcTrackerDiagnostics_active(::mrs_msgs::msg::MpcTrackerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_MpcTrackerDiagnostics_collision_avoidance_active active(::mrs_msgs::msg::MpcTrackerDiagnostics::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_MpcTrackerDiagnostics_collision_avoidance_active(msg_);
  }

private:
  ::mrs_msgs::msg::MpcTrackerDiagnostics msg_;
};

class Init_MpcTrackerDiagnostics_uav_name
{
public:
  explicit Init_MpcTrackerDiagnostics_uav_name(::mrs_msgs::msg::MpcTrackerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_MpcTrackerDiagnostics_active uav_name(::mrs_msgs::msg::MpcTrackerDiagnostics::_uav_name_type arg)
  {
    msg_.uav_name = std::move(arg);
    return Init_MpcTrackerDiagnostics_active(msg_);
  }

private:
  ::mrs_msgs::msg::MpcTrackerDiagnostics msg_;
};

class Init_MpcTrackerDiagnostics_header
{
public:
  Init_MpcTrackerDiagnostics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MpcTrackerDiagnostics_uav_name header(::mrs_msgs::msg::MpcTrackerDiagnostics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MpcTrackerDiagnostics_uav_name(msg_);
  }

private:
  ::mrs_msgs::msg::MpcTrackerDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::MpcTrackerDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_MpcTrackerDiagnostics_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__MPC_TRACKER_DIAGNOSTICS__BUILDER_HPP_
