// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/TrackerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/tracker_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/tracker_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackerStatus_trajectory_reference
{
public:
  explicit Init_TrackerStatus_trajectory_reference(::mrs_msgs::msg::TrackerStatus & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::TrackerStatus trajectory_reference(::mrs_msgs::msg::TrackerStatus::_trajectory_reference_type arg)
  {
    msg_.trajectory_reference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerStatus msg_;
};

class Init_TrackerStatus_trajectory_idx
{
public:
  explicit Init_TrackerStatus_trajectory_idx(::mrs_msgs::msg::TrackerStatus & msg)
  : msg_(msg)
  {}
  Init_TrackerStatus_trajectory_reference trajectory_idx(::mrs_msgs::msg::TrackerStatus::_trajectory_idx_type arg)
  {
    msg_.trajectory_idx = std::move(arg);
    return Init_TrackerStatus_trajectory_reference(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerStatus msg_;
};

class Init_TrackerStatus_trajectory_length
{
public:
  explicit Init_TrackerStatus_trajectory_length(::mrs_msgs::msg::TrackerStatus & msg)
  : msg_(msg)
  {}
  Init_TrackerStatus_trajectory_idx trajectory_length(::mrs_msgs::msg::TrackerStatus::_trajectory_length_type arg)
  {
    msg_.trajectory_length = std::move(arg);
    return Init_TrackerStatus_trajectory_idx(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerStatus msg_;
};

class Init_TrackerStatus_tracking_trajectory
{
public:
  explicit Init_TrackerStatus_tracking_trajectory(::mrs_msgs::msg::TrackerStatus & msg)
  : msg_(msg)
  {}
  Init_TrackerStatus_trajectory_length tracking_trajectory(::mrs_msgs::msg::TrackerStatus::_tracking_trajectory_type arg)
  {
    msg_.tracking_trajectory = std::move(arg);
    return Init_TrackerStatus_trajectory_length(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerStatus msg_;
};

class Init_TrackerStatus_have_goal
{
public:
  explicit Init_TrackerStatus_have_goal(::mrs_msgs::msg::TrackerStatus & msg)
  : msg_(msg)
  {}
  Init_TrackerStatus_tracking_trajectory have_goal(::mrs_msgs::msg::TrackerStatus::_have_goal_type arg)
  {
    msg_.have_goal = std::move(arg);
    return Init_TrackerStatus_tracking_trajectory(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerStatus msg_;
};

class Init_TrackerStatus_state
{
public:
  explicit Init_TrackerStatus_state(::mrs_msgs::msg::TrackerStatus & msg)
  : msg_(msg)
  {}
  Init_TrackerStatus_have_goal state(::mrs_msgs::msg::TrackerStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_TrackerStatus_have_goal(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerStatus msg_;
};

class Init_TrackerStatus_callbacks_enabled
{
public:
  explicit Init_TrackerStatus_callbacks_enabled(::mrs_msgs::msg::TrackerStatus & msg)
  : msg_(msg)
  {}
  Init_TrackerStatus_state callbacks_enabled(::mrs_msgs::msg::TrackerStatus::_callbacks_enabled_type arg)
  {
    msg_.callbacks_enabled = std::move(arg);
    return Init_TrackerStatus_state(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerStatus msg_;
};

class Init_TrackerStatus_active
{
public:
  Init_TrackerStatus_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackerStatus_callbacks_enabled active(::mrs_msgs::msg::TrackerStatus::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_TrackerStatus_callbacks_enabled(msg_);
  }

private:
  ::mrs_msgs::msg::TrackerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::TrackerStatus>()
{
  return mrs_msgs::msg::builder::Init_TrackerStatus_active();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRACKER_STATUS__BUILDER_HPP_
