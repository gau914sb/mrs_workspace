// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/MpcPredictionFullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/mpc_prediction_full_state.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/mpc_prediction_full_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcPredictionFullState_use_attitude_rate
{
public:
  explicit Init_MpcPredictionFullState_use_attitude_rate(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::MpcPredictionFullState use_attitude_rate(::mrs_msgs::msg::MpcPredictionFullState::_use_attitude_rate_type arg)
  {
    msg_.use_attitude_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_use_orientation
{
public:
  explicit Init_MpcPredictionFullState_use_orientation(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_use_attitude_rate use_orientation(::mrs_msgs::msg::MpcPredictionFullState::_use_orientation_type arg)
  {
    msg_.use_orientation = std::move(arg);
    return Init_MpcPredictionFullState_use_attitude_rate(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_heading_jerk
{
public:
  explicit Init_MpcPredictionFullState_heading_jerk(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_use_orientation heading_jerk(::mrs_msgs::msg::MpcPredictionFullState::_heading_jerk_type arg)
  {
    msg_.heading_jerk = std::move(arg);
    return Init_MpcPredictionFullState_use_orientation(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_heading_acceleration
{
public:
  explicit Init_MpcPredictionFullState_heading_acceleration(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_heading_jerk heading_acceleration(::mrs_msgs::msg::MpcPredictionFullState::_heading_acceleration_type arg)
  {
    msg_.heading_acceleration = std::move(arg);
    return Init_MpcPredictionFullState_heading_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_heading_rate
{
public:
  explicit Init_MpcPredictionFullState_heading_rate(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_heading_acceleration heading_rate(::mrs_msgs::msg::MpcPredictionFullState::_heading_rate_type arg)
  {
    msg_.heading_rate = std::move(arg);
    return Init_MpcPredictionFullState_heading_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_heading
{
public:
  explicit Init_MpcPredictionFullState_heading(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_heading_rate heading(::mrs_msgs::msg::MpcPredictionFullState::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_MpcPredictionFullState_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_jerk
{
public:
  explicit Init_MpcPredictionFullState_jerk(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_heading jerk(::mrs_msgs::msg::MpcPredictionFullState::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return Init_MpcPredictionFullState_heading(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_acceleration
{
public:
  explicit Init_MpcPredictionFullState_acceleration(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_jerk acceleration(::mrs_msgs::msg::MpcPredictionFullState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_MpcPredictionFullState_jerk(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_velocity
{
public:
  explicit Init_MpcPredictionFullState_velocity(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_acceleration velocity(::mrs_msgs::msg::MpcPredictionFullState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MpcPredictionFullState_acceleration(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_attitude_rate
{
public:
  explicit Init_MpcPredictionFullState_attitude_rate(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_velocity attitude_rate(::mrs_msgs::msg::MpcPredictionFullState::_attitude_rate_type arg)
  {
    msg_.attitude_rate = std::move(arg);
    return Init_MpcPredictionFullState_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_orientation
{
public:
  explicit Init_MpcPredictionFullState_orientation(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_attitude_rate orientation(::mrs_msgs::msg::MpcPredictionFullState::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_MpcPredictionFullState_attitude_rate(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_position
{
public:
  explicit Init_MpcPredictionFullState_position(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_orientation position(::mrs_msgs::msg::MpcPredictionFullState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MpcPredictionFullState_orientation(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_stamps
{
public:
  explicit Init_MpcPredictionFullState_stamps(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_position stamps(::mrs_msgs::msg::MpcPredictionFullState::_stamps_type arg)
  {
    msg_.stamps = std::move(arg);
    return Init_MpcPredictionFullState_position(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_input_id
{
public:
  explicit Init_MpcPredictionFullState_input_id(::mrs_msgs::msg::MpcPredictionFullState & msg)
  : msg_(msg)
  {}
  Init_MpcPredictionFullState_stamps input_id(::mrs_msgs::msg::MpcPredictionFullState::_input_id_type arg)
  {
    msg_.input_id = std::move(arg);
    return Init_MpcPredictionFullState_stamps(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

class Init_MpcPredictionFullState_header
{
public:
  Init_MpcPredictionFullState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MpcPredictionFullState_input_id header(::mrs_msgs::msg::MpcPredictionFullState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MpcPredictionFullState_input_id(msg_);
  }

private:
  ::mrs_msgs::msg::MpcPredictionFullState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::MpcPredictionFullState>()
{
  return mrs_msgs::msg::builder::Init_MpcPredictionFullState_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__MPC_PREDICTION_FULL_STATE__BUILDER_HPP_
