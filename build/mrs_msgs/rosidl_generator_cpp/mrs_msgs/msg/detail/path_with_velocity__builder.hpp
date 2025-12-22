// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/PathWithVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path_with_velocity.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/path_with_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_PathWithVelocity_points
{
public:
  explicit Init_PathWithVelocity_points(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::PathWithVelocity points(::mrs_msgs::msg::PathWithVelocity::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_relax_heading
{
public:
  explicit Init_PathWithVelocity_relax_heading(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_points relax_heading(::mrs_msgs::msg::PathWithVelocity::_relax_heading_type arg)
  {
    msg_.relax_heading = std::move(arg);
    return Init_PathWithVelocity_points(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_override_max_acceleration_vertical
{
public:
  explicit Init_PathWithVelocity_override_max_acceleration_vertical(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_relax_heading override_max_acceleration_vertical(::mrs_msgs::msg::PathWithVelocity::_override_max_acceleration_vertical_type arg)
  {
    msg_.override_max_acceleration_vertical = std::move(arg);
    return Init_PathWithVelocity_relax_heading(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_override_max_velocity_vertical
{
public:
  explicit Init_PathWithVelocity_override_max_velocity_vertical(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_override_max_acceleration_vertical override_max_velocity_vertical(::mrs_msgs::msg::PathWithVelocity::_override_max_velocity_vertical_type arg)
  {
    msg_.override_max_velocity_vertical = std::move(arg);
    return Init_PathWithVelocity_override_max_acceleration_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_override_max_acceleration_horizontal
{
public:
  explicit Init_PathWithVelocity_override_max_acceleration_horizontal(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_override_max_velocity_vertical override_max_acceleration_horizontal(::mrs_msgs::msg::PathWithVelocity::_override_max_acceleration_horizontal_type arg)
  {
    msg_.override_max_acceleration_horizontal = std::move(arg);
    return Init_PathWithVelocity_override_max_velocity_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_override_max_velocity_horizontal
{
public:
  explicit Init_PathWithVelocity_override_max_velocity_horizontal(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_override_max_acceleration_horizontal override_max_velocity_horizontal(::mrs_msgs::msg::PathWithVelocity::_override_max_velocity_horizontal_type arg)
  {
    msg_.override_max_velocity_horizontal = std::move(arg);
    return Init_PathWithVelocity_override_max_acceleration_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_override_constraints
{
public:
  explicit Init_PathWithVelocity_override_constraints(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_override_max_velocity_horizontal override_constraints(::mrs_msgs::msg::PathWithVelocity::_override_constraints_type arg)
  {
    msg_.override_constraints = std::move(arg);
    return Init_PathWithVelocity_override_max_velocity_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_loop
{
public:
  explicit Init_PathWithVelocity_loop(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_override_constraints loop(::mrs_msgs::msg::PathWithVelocity::_loop_type arg)
  {
    msg_.loop = std::move(arg);
    return Init_PathWithVelocity_override_constraints(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_stop_at_waypoints
{
public:
  explicit Init_PathWithVelocity_stop_at_waypoints(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_loop stop_at_waypoints(::mrs_msgs::msg::PathWithVelocity::_stop_at_waypoints_type arg)
  {
    msg_.stop_at_waypoints = std::move(arg);
    return Init_PathWithVelocity_loop(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_fly_now
{
public:
  explicit Init_PathWithVelocity_fly_now(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_stop_at_waypoints fly_now(::mrs_msgs::msg::PathWithVelocity::_fly_now_type arg)
  {
    msg_.fly_now = std::move(arg);
    return Init_PathWithVelocity_stop_at_waypoints(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_use_heading
{
public:
  explicit Init_PathWithVelocity_use_heading(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_fly_now use_heading(::mrs_msgs::msg::PathWithVelocity::_use_heading_type arg)
  {
    msg_.use_heading = std::move(arg);
    return Init_PathWithVelocity_fly_now(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_input_id
{
public:
  explicit Init_PathWithVelocity_input_id(::mrs_msgs::msg::PathWithVelocity & msg)
  : msg_(msg)
  {}
  Init_PathWithVelocity_use_heading input_id(::mrs_msgs::msg::PathWithVelocity::_input_id_type arg)
  {
    msg_.input_id = std::move(arg);
    return Init_PathWithVelocity_use_heading(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

class Init_PathWithVelocity_header
{
public:
  Init_PathWithVelocity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathWithVelocity_input_id header(::mrs_msgs::msg::PathWithVelocity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathWithVelocity_input_id(msg_);
  }

private:
  ::mrs_msgs::msg::PathWithVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::PathWithVelocity>()
{
  return mrs_msgs::msg::builder::Init_PathWithVelocity_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PATH_WITH_VELOCITY__BUILDER_HPP_
