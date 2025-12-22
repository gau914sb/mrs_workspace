// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/TrajectoryReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/trajectory_reference.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRAJECTORY_REFERENCE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__TRAJECTORY_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/trajectory_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryReference_points
{
public:
  explicit Init_TrajectoryReference_points(::mrs_msgs::msg::TrajectoryReference & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::TrajectoryReference points(::mrs_msgs::msg::TrajectoryReference::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::TrajectoryReference msg_;
};

class Init_TrajectoryReference_dt
{
public:
  explicit Init_TrajectoryReference_dt(::mrs_msgs::msg::TrajectoryReference & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReference_points dt(::mrs_msgs::msg::TrajectoryReference::_dt_type arg)
  {
    msg_.dt = std::move(arg);
    return Init_TrajectoryReference_points(msg_);
  }

private:
  ::mrs_msgs::msg::TrajectoryReference msg_;
};

class Init_TrajectoryReference_loop
{
public:
  explicit Init_TrajectoryReference_loop(::mrs_msgs::msg::TrajectoryReference & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReference_dt loop(::mrs_msgs::msg::TrajectoryReference::_loop_type arg)
  {
    msg_.loop = std::move(arg);
    return Init_TrajectoryReference_dt(msg_);
  }

private:
  ::mrs_msgs::msg::TrajectoryReference msg_;
};

class Init_TrajectoryReference_fly_now
{
public:
  explicit Init_TrajectoryReference_fly_now(::mrs_msgs::msg::TrajectoryReference & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReference_loop fly_now(::mrs_msgs::msg::TrajectoryReference::_fly_now_type arg)
  {
    msg_.fly_now = std::move(arg);
    return Init_TrajectoryReference_loop(msg_);
  }

private:
  ::mrs_msgs::msg::TrajectoryReference msg_;
};

class Init_TrajectoryReference_use_heading
{
public:
  explicit Init_TrajectoryReference_use_heading(::mrs_msgs::msg::TrajectoryReference & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReference_fly_now use_heading(::mrs_msgs::msg::TrajectoryReference::_use_heading_type arg)
  {
    msg_.use_heading = std::move(arg);
    return Init_TrajectoryReference_fly_now(msg_);
  }

private:
  ::mrs_msgs::msg::TrajectoryReference msg_;
};

class Init_TrajectoryReference_input_id
{
public:
  explicit Init_TrajectoryReference_input_id(::mrs_msgs::msg::TrajectoryReference & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReference_use_heading input_id(::mrs_msgs::msg::TrajectoryReference::_input_id_type arg)
  {
    msg_.input_id = std::move(arg);
    return Init_TrajectoryReference_use_heading(msg_);
  }

private:
  ::mrs_msgs::msg::TrajectoryReference msg_;
};

class Init_TrajectoryReference_header
{
public:
  Init_TrajectoryReference_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryReference_input_id header(::mrs_msgs::msg::TrajectoryReference::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryReference_input_id(msg_);
  }

private:
  ::mrs_msgs::msg::TrajectoryReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::TrajectoryReference>()
{
  return mrs_msgs::msg::builder::Init_TrajectoryReference_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRAJECTORY_REFERENCE__BUILDER_HPP_
