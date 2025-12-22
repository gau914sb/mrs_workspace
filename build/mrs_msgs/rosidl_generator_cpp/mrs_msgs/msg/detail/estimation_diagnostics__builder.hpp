// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/EstimationDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/estimation_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/estimation_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimationDiagnostics_custom_config
{
public:
  explicit Init_EstimationDiagnostics_custom_config(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::EstimationDiagnostics custom_config(::mrs_msgs::msg::EstimationDiagnostics::_custom_config_type arg)
  {
    msg_.custom_config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_platform_config
{
public:
  explicit Init_EstimationDiagnostics_platform_config(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_custom_config platform_config(::mrs_msgs::msg::EstimationDiagnostics::_platform_config_type arg)
  {
    msg_.platform_config = std::move(arg);
    return Init_EstimationDiagnostics_custom_config(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_switchable_state_estimators
{
public:
  explicit Init_EstimationDiagnostics_switchable_state_estimators(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_platform_config switchable_state_estimators(::mrs_msgs::msg::EstimationDiagnostics::_switchable_state_estimators_type arg)
  {
    msg_.switchable_state_estimators = std::move(arg);
    return Init_EstimationDiagnostics_platform_config(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_running_state_estimators
{
public:
  explicit Init_EstimationDiagnostics_running_state_estimators(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_switchable_state_estimators running_state_estimators(::mrs_msgs::msg::EstimationDiagnostics::_running_state_estimators_type arg)
  {
    msg_.running_state_estimators = std::move(arg);
    return Init_EstimationDiagnostics_switchable_state_estimators(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_estimator_iteration
{
public:
  explicit Init_EstimationDiagnostics_estimator_iteration(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_running_state_estimators estimator_iteration(::mrs_msgs::msg::EstimationDiagnostics::_estimator_iteration_type arg)
  {
    msg_.estimator_iteration = std::move(arg);
    return Init_EstimationDiagnostics_running_state_estimators(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_estimation_rate
{
public:
  explicit Init_EstimationDiagnostics_estimation_rate(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_estimator_iteration estimation_rate(::mrs_msgs::msg::EstimationDiagnostics::_estimation_rate_type arg)
  {
    msg_.estimation_rate = std::move(arg);
    return Init_EstimationDiagnostics_estimator_iteration(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_estimator_agl_height
{
public:
  explicit Init_EstimationDiagnostics_estimator_agl_height(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_estimation_rate estimator_agl_height(::mrs_msgs::msg::EstimationDiagnostics::_estimator_agl_height_type arg)
  {
    msg_.estimator_agl_height = std::move(arg);
    return Init_EstimationDiagnostics_estimation_rate(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_estimator_heading
{
public:
  explicit Init_EstimationDiagnostics_estimator_heading(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_estimator_agl_height estimator_heading(::mrs_msgs::msg::EstimationDiagnostics::_estimator_heading_type arg)
  {
    msg_.estimator_heading = std::move(arg);
    return Init_EstimationDiagnostics_estimator_agl_height(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_estimator_vertical
{
public:
  explicit Init_EstimationDiagnostics_estimator_vertical(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_estimator_heading estimator_vertical(::mrs_msgs::msg::EstimationDiagnostics::_estimator_vertical_type arg)
  {
    msg_.estimator_vertical = std::move(arg);
    return Init_EstimationDiagnostics_estimator_heading(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_estimator_horizontal
{
public:
  explicit Init_EstimationDiagnostics_estimator_horizontal(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_estimator_vertical estimator_horizontal(::mrs_msgs::msg::EstimationDiagnostics::_estimator_horizontal_type arg)
  {
    msg_.estimator_horizontal = std::move(arg);
    return Init_EstimationDiagnostics_estimator_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_current_state_estimator
{
public:
  explicit Init_EstimationDiagnostics_current_state_estimator(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_estimator_horizontal current_state_estimator(::mrs_msgs::msg::EstimationDiagnostics::_current_state_estimator_type arg)
  {
    msg_.current_state_estimator = std::move(arg);
    return Init_EstimationDiagnostics_estimator_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_sm_state
{
public:
  explicit Init_EstimationDiagnostics_sm_state(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_current_state_estimator sm_state(::mrs_msgs::msg::EstimationDiagnostics::_sm_state_type arg)
  {
    msg_.sm_state = std::move(arg);
    return Init_EstimationDiagnostics_current_state_estimator(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_max_flight_z
{
public:
  explicit Init_EstimationDiagnostics_max_flight_z(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_sm_state max_flight_z(::mrs_msgs::msg::EstimationDiagnostics::_max_flight_z_type arg)
  {
    msg_.max_flight_z = std::move(arg);
    return Init_EstimationDiagnostics_sm_state(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_agl_height
{
public:
  explicit Init_EstimationDiagnostics_agl_height(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_max_flight_z agl_height(::mrs_msgs::msg::EstimationDiagnostics::_agl_height_type arg)
  {
    msg_.agl_height = std::move(arg);
    return Init_EstimationDiagnostics_max_flight_z(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_acceleration
{
public:
  explicit Init_EstimationDiagnostics_acceleration(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_agl_height acceleration(::mrs_msgs::msg::EstimationDiagnostics::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_EstimationDiagnostics_agl_height(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_velocity
{
public:
  explicit Init_EstimationDiagnostics_velocity(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_acceleration velocity(::mrs_msgs::msg::EstimationDiagnostics::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_EstimationDiagnostics_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_pose
{
public:
  explicit Init_EstimationDiagnostics_pose(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_velocity pose(::mrs_msgs::msg::EstimationDiagnostics::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_EstimationDiagnostics_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_child_frame_id
{
public:
  explicit Init_EstimationDiagnostics_child_frame_id(::mrs_msgs::msg::EstimationDiagnostics & msg)
  : msg_(msg)
  {}
  Init_EstimationDiagnostics_pose child_frame_id(::mrs_msgs::msg::EstimationDiagnostics::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_EstimationDiagnostics_pose(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

class Init_EstimationDiagnostics_header
{
public:
  Init_EstimationDiagnostics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimationDiagnostics_child_frame_id header(::mrs_msgs::msg::EstimationDiagnostics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstimationDiagnostics_child_frame_id(msg_);
  }

private:
  ::mrs_msgs::msg::EstimationDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::EstimationDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_EstimationDiagnostics_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ESTIMATION_DIAGNOSTICS__BUILDER_HPP_
