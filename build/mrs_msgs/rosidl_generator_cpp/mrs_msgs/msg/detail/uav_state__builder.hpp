// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/UavState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/uav_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_UavState_acceleration_disturbance
{
public:
  explicit Init_UavState_acceleration_disturbance(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::UavState acceleration_disturbance(::mrs_msgs::msg::UavState::_acceleration_disturbance_type arg)
  {
    msg_.acceleration_disturbance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_acceleration
{
public:
  explicit Init_UavState_acceleration(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  Init_UavState_acceleration_disturbance acceleration(::mrs_msgs::msg::UavState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_UavState_acceleration_disturbance(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_velocity
{
public:
  explicit Init_UavState_velocity(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  Init_UavState_acceleration velocity(::mrs_msgs::msg::UavState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_UavState_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_pose
{
public:
  explicit Init_UavState_pose(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  Init_UavState_velocity pose(::mrs_msgs::msg::UavState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_UavState_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_estimator_iteration
{
public:
  explicit Init_UavState_estimator_iteration(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  Init_UavState_pose estimator_iteration(::mrs_msgs::msg::UavState::_estimator_iteration_type arg)
  {
    msg_.estimator_iteration = std::move(arg);
    return Init_UavState_pose(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_estimator_heading
{
public:
  explicit Init_UavState_estimator_heading(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  Init_UavState_estimator_iteration estimator_heading(::mrs_msgs::msg::UavState::_estimator_heading_type arg)
  {
    msg_.estimator_heading = std::move(arg);
    return Init_UavState_estimator_iteration(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_estimator_vertical
{
public:
  explicit Init_UavState_estimator_vertical(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  Init_UavState_estimator_heading estimator_vertical(::mrs_msgs::msg::UavState::_estimator_vertical_type arg)
  {
    msg_.estimator_vertical = std::move(arg);
    return Init_UavState_estimator_heading(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_estimator_horizontal
{
public:
  explicit Init_UavState_estimator_horizontal(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  Init_UavState_estimator_vertical estimator_horizontal(::mrs_msgs::msg::UavState::_estimator_horizontal_type arg)
  {
    msg_.estimator_horizontal = std::move(arg);
    return Init_UavState_estimator_vertical(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_child_frame_id
{
public:
  explicit Init_UavState_child_frame_id(::mrs_msgs::msg::UavState & msg)
  : msg_(msg)
  {}
  Init_UavState_estimator_horizontal child_frame_id(::mrs_msgs::msg::UavState::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_UavState_estimator_horizontal(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

class Init_UavState_header
{
public:
  Init_UavState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavState_child_frame_id header(::mrs_msgs::msg::UavState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UavState_child_frame_id(msg_);
  }

private:
  ::mrs_msgs::msg::UavState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::UavState>()
{
  return mrs_msgs::msg::builder::Init_UavState_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATE__BUILDER_HPP_
