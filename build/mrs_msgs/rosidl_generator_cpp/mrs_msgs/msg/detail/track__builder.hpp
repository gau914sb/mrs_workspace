// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Track.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/track.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Track_velocity_covariance
{
public:
  explicit Init_Track_velocity_covariance(::mrs_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::Track velocity_covariance(::mrs_msgs::msg::Track::_velocity_covariance_type arg)
  {
    msg_.velocity_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Track msg_;
};

class Init_Track_velocity
{
public:
  explicit Init_Track_velocity(::mrs_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_velocity_covariance velocity(::mrs_msgs::msg::Track::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Track_velocity_covariance(msg_);
  }

private:
  ::mrs_msgs::msg::Track msg_;
};

class Init_Track_orientation_covariance
{
public:
  explicit Init_Track_orientation_covariance(::mrs_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_velocity orientation_covariance(::mrs_msgs::msg::Track::_orientation_covariance_type arg)
  {
    msg_.orientation_covariance = std::move(arg);
    return Init_Track_velocity(msg_);
  }

private:
  ::mrs_msgs::msg::Track msg_;
};

class Init_Track_orientation
{
public:
  explicit Init_Track_orientation(::mrs_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_orientation_covariance orientation(::mrs_msgs::msg::Track::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Track_orientation_covariance(msg_);
  }

private:
  ::mrs_msgs::msg::Track msg_;
};

class Init_Track_position_covariance
{
public:
  explicit Init_Track_position_covariance(::mrs_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_orientation position_covariance(::mrs_msgs::msg::Track::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_Track_orientation(msg_);
  }

private:
  ::mrs_msgs::msg::Track msg_;
};

class Init_Track_position
{
public:
  explicit Init_Track_position(::mrs_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_position_covariance position(::mrs_msgs::msg::Track::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Track_position_covariance(msg_);
  }

private:
  ::mrs_msgs::msg::Track msg_;
};

class Init_Track_id
{
public:
  Init_Track_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Track_position id(::mrs_msgs::msg::Track::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Track_position(msg_);
  }

private:
  ::mrs_msgs::msg::Track msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Track>()
{
  return mrs_msgs::msg::builder::Init_Track_id();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_
