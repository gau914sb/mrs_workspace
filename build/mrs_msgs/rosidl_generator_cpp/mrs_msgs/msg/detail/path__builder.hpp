// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Path_points
{
public:
  explicit Init_Path_points(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::Path points(::mrs_msgs::msg::Path::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_relax_heading
{
public:
  explicit Init_Path_relax_heading(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_points relax_heading(::mrs_msgs::msg::Path::_relax_heading_type arg)
  {
    msg_.relax_heading = std::move(arg);
    return Init_Path_points(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_override_max_jerk_vertical
{
public:
  explicit Init_Path_override_max_jerk_vertical(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_relax_heading override_max_jerk_vertical(::mrs_msgs::msg::Path::_override_max_jerk_vertical_type arg)
  {
    msg_.override_max_jerk_vertical = std::move(arg);
    return Init_Path_relax_heading(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_override_max_acceleration_vertical
{
public:
  explicit Init_Path_override_max_acceleration_vertical(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_override_max_jerk_vertical override_max_acceleration_vertical(::mrs_msgs::msg::Path::_override_max_acceleration_vertical_type arg)
  {
    msg_.override_max_acceleration_vertical = std::move(arg);
    return Init_Path_override_max_jerk_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_override_max_velocity_vertical
{
public:
  explicit Init_Path_override_max_velocity_vertical(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_override_max_acceleration_vertical override_max_velocity_vertical(::mrs_msgs::msg::Path::_override_max_velocity_vertical_type arg)
  {
    msg_.override_max_velocity_vertical = std::move(arg);
    return Init_Path_override_max_acceleration_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_override_max_jerk_horizontal
{
public:
  explicit Init_Path_override_max_jerk_horizontal(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_override_max_velocity_vertical override_max_jerk_horizontal(::mrs_msgs::msg::Path::_override_max_jerk_horizontal_type arg)
  {
    msg_.override_max_jerk_horizontal = std::move(arg);
    return Init_Path_override_max_velocity_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_override_max_acceleration_horizontal
{
public:
  explicit Init_Path_override_max_acceleration_horizontal(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_override_max_jerk_horizontal override_max_acceleration_horizontal(::mrs_msgs::msg::Path::_override_max_acceleration_horizontal_type arg)
  {
    msg_.override_max_acceleration_horizontal = std::move(arg);
    return Init_Path_override_max_jerk_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_override_max_velocity_horizontal
{
public:
  explicit Init_Path_override_max_velocity_horizontal(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_override_max_acceleration_horizontal override_max_velocity_horizontal(::mrs_msgs::msg::Path::_override_max_velocity_horizontal_type arg)
  {
    msg_.override_max_velocity_horizontal = std::move(arg);
    return Init_Path_override_max_acceleration_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_override_constraints
{
public:
  explicit Init_Path_override_constraints(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_override_max_velocity_horizontal override_constraints(::mrs_msgs::msg::Path::_override_constraints_type arg)
  {
    msg_.override_constraints = std::move(arg);
    return Init_Path_override_max_velocity_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_override_heading_atan2
{
public:
  explicit Init_Path_override_heading_atan2(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_override_constraints override_heading_atan2(::mrs_msgs::msg::Path::_override_heading_atan2_type arg)
  {
    msg_.override_heading_atan2 = std::move(arg);
    return Init_Path_override_constraints(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_dont_prepend_current_state
{
public:
  explicit Init_Path_dont_prepend_current_state(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_override_heading_atan2 dont_prepend_current_state(::mrs_msgs::msg::Path::_dont_prepend_current_state_type arg)
  {
    msg_.dont_prepend_current_state = std::move(arg);
    return Init_Path_override_heading_atan2(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_max_deviation_from_path
{
public:
  explicit Init_Path_max_deviation_from_path(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_dont_prepend_current_state max_deviation_from_path(::mrs_msgs::msg::Path::_max_deviation_from_path_type arg)
  {
    msg_.max_deviation_from_path = std::move(arg);
    return Init_Path_dont_prepend_current_state(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_max_execution_time
{
public:
  explicit Init_Path_max_execution_time(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_max_deviation_from_path max_execution_time(::mrs_msgs::msg::Path::_max_execution_time_type arg)
  {
    msg_.max_execution_time = std::move(arg);
    return Init_Path_max_deviation_from_path(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_loop
{
public:
  explicit Init_Path_loop(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_max_execution_time loop(::mrs_msgs::msg::Path::_loop_type arg)
  {
    msg_.loop = std::move(arg);
    return Init_Path_max_execution_time(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_stop_at_waypoints
{
public:
  explicit Init_Path_stop_at_waypoints(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_loop stop_at_waypoints(::mrs_msgs::msg::Path::_stop_at_waypoints_type arg)
  {
    msg_.stop_at_waypoints = std::move(arg);
    return Init_Path_loop(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_fly_now
{
public:
  explicit Init_Path_fly_now(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_stop_at_waypoints fly_now(::mrs_msgs::msg::Path::_fly_now_type arg)
  {
    msg_.fly_now = std::move(arg);
    return Init_Path_stop_at_waypoints(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_use_heading
{
public:
  explicit Init_Path_use_heading(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_fly_now use_heading(::mrs_msgs::msg::Path::_use_heading_type arg)
  {
    msg_.use_heading = std::move(arg);
    return Init_Path_fly_now(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_input_id
{
public:
  explicit Init_Path_input_id(::mrs_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_use_heading input_id(::mrs_msgs::msg::Path::_input_id_type arg)
  {
    msg_.input_id = std::move(arg);
    return Init_Path_use_heading(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

class Init_Path_header
{
public:
  Init_Path_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_input_id header(::mrs_msgs::msg::Path::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path_input_id(msg_);
  }

private:
  ::mrs_msgs::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Path>()
{
  return mrs_msgs::msg::builder::Init_Path_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
