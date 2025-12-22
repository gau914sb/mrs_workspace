// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Bestvel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/bestvel.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/bestvel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Bestvel_vertical_speed
{
public:
  explicit Init_Bestvel_vertical_speed(::mrs_modules_msgs::msg::Bestvel & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Bestvel vertical_speed(::mrs_modules_msgs::msg::Bestvel::_vertical_speed_type arg)
  {
    msg_.vertical_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

class Init_Bestvel_track_ground
{
public:
  explicit Init_Bestvel_track_ground(::mrs_modules_msgs::msg::Bestvel & msg)
  : msg_(msg)
  {}
  Init_Bestvel_vertical_speed track_ground(::mrs_modules_msgs::msg::Bestvel::_track_ground_type arg)
  {
    msg_.track_ground = std::move(arg);
    return Init_Bestvel_vertical_speed(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

class Init_Bestvel_horizontal_speed
{
public:
  explicit Init_Bestvel_horizontal_speed(::mrs_modules_msgs::msg::Bestvel & msg)
  : msg_(msg)
  {}
  Init_Bestvel_track_ground horizontal_speed(::mrs_modules_msgs::msg::Bestvel::_horizontal_speed_type arg)
  {
    msg_.horizontal_speed = std::move(arg);
    return Init_Bestvel_track_ground(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

class Init_Bestvel_age
{
public:
  explicit Init_Bestvel_age(::mrs_modules_msgs::msg::Bestvel & msg)
  : msg_(msg)
  {}
  Init_Bestvel_horizontal_speed age(::mrs_modules_msgs::msg::Bestvel::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Bestvel_horizontal_speed(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

class Init_Bestvel_latency
{
public:
  explicit Init_Bestvel_latency(::mrs_modules_msgs::msg::Bestvel & msg)
  : msg_(msg)
  {}
  Init_Bestvel_age latency(::mrs_modules_msgs::msg::Bestvel::_latency_type arg)
  {
    msg_.latency = std::move(arg);
    return Init_Bestvel_age(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

class Init_Bestvel_velocity_type
{
public:
  explicit Init_Bestvel_velocity_type(::mrs_modules_msgs::msg::Bestvel & msg)
  : msg_(msg)
  {}
  Init_Bestvel_latency velocity_type(::mrs_modules_msgs::msg::Bestvel::_velocity_type_type arg)
  {
    msg_.velocity_type = std::move(arg);
    return Init_Bestvel_latency(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

class Init_Bestvel_solution_status
{
public:
  explicit Init_Bestvel_solution_status(::mrs_modules_msgs::msg::Bestvel & msg)
  : msg_(msg)
  {}
  Init_Bestvel_velocity_type solution_status(::mrs_modules_msgs::msg::Bestvel::_solution_status_type arg)
  {
    msg_.solution_status = std::move(arg);
    return Init_Bestvel_velocity_type(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

class Init_Bestvel_tersus_msg_header
{
public:
  explicit Init_Bestvel_tersus_msg_header(::mrs_modules_msgs::msg::Bestvel & msg)
  : msg_(msg)
  {}
  Init_Bestvel_solution_status tersus_msg_header(::mrs_modules_msgs::msg::Bestvel::_tersus_msg_header_type arg)
  {
    msg_.tersus_msg_header = std::move(arg);
    return Init_Bestvel_solution_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

class Init_Bestvel_header
{
public:
  Init_Bestvel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bestvel_tersus_msg_header header(::mrs_modules_msgs::msg::Bestvel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Bestvel_tersus_msg_header(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestvel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Bestvel>()
{
  return mrs_modules_msgs::msg::builder::Init_Bestvel_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BESTVEL__BUILDER_HPP_
