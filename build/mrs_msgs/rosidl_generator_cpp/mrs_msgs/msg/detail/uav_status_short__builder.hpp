// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/UavStatusShort.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_status_short.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/uav_status_short__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_UavStatusShort_cmd_hdg
{
public:
  explicit Init_UavStatusShort_cmd_hdg(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::UavStatusShort cmd_hdg(::mrs_msgs::msg::UavStatusShort::_cmd_hdg_type arg)
  {
    msg_.cmd_hdg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_cmd_z
{
public:
  explicit Init_UavStatusShort_cmd_z(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  Init_UavStatusShort_cmd_hdg cmd_z(::mrs_msgs::msg::UavStatusShort::_cmd_z_type arg)
  {
    msg_.cmd_z = std::move(arg);
    return Init_UavStatusShort_cmd_hdg(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_cmd_y
{
public:
  explicit Init_UavStatusShort_cmd_y(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  Init_UavStatusShort_cmd_z cmd_y(::mrs_msgs::msg::UavStatusShort::_cmd_y_type arg)
  {
    msg_.cmd_y = std::move(arg);
    return Init_UavStatusShort_cmd_z(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_cmd_x
{
public:
  explicit Init_UavStatusShort_cmd_x(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  Init_UavStatusShort_cmd_y cmd_x(::mrs_msgs::msg::UavStatusShort::_cmd_x_type arg)
  {
    msg_.cmd_x = std::move(arg);
    return Init_UavStatusShort_cmd_y(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_odom_hdg
{
public:
  explicit Init_UavStatusShort_odom_hdg(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  Init_UavStatusShort_cmd_x odom_hdg(::mrs_msgs::msg::UavStatusShort::_odom_hdg_type arg)
  {
    msg_.odom_hdg = std::move(arg);
    return Init_UavStatusShort_cmd_x(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_odom_z
{
public:
  explicit Init_UavStatusShort_odom_z(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  Init_UavStatusShort_odom_hdg odom_z(::mrs_msgs::msg::UavStatusShort::_odom_z_type arg)
  {
    msg_.odom_z = std::move(arg);
    return Init_UavStatusShort_odom_hdg(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_odom_y
{
public:
  explicit Init_UavStatusShort_odom_y(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  Init_UavStatusShort_odom_z odom_y(::mrs_msgs::msg::UavStatusShort::_odom_y_type arg)
  {
    msg_.odom_y = std::move(arg);
    return Init_UavStatusShort_odom_z(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_odom_x
{
public:
  explicit Init_UavStatusShort_odom_x(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  Init_UavStatusShort_odom_y odom_x(::mrs_msgs::msg::UavStatusShort::_odom_x_type arg)
  {
    msg_.odom_x = std::move(arg);
    return Init_UavStatusShort_odom_y(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_odom_color
{
public:
  explicit Init_UavStatusShort_odom_color(::mrs_msgs::msg::UavStatusShort & msg)
  : msg_(msg)
  {}
  Init_UavStatusShort_odom_x odom_color(::mrs_msgs::msg::UavStatusShort::_odom_color_type arg)
  {
    msg_.odom_color = std::move(arg);
    return Init_UavStatusShort_odom_x(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

class Init_UavStatusShort_odom_hz
{
public:
  Init_UavStatusShort_odom_hz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavStatusShort_odom_color odom_hz(::mrs_msgs::msg::UavStatusShort::_odom_hz_type arg)
  {
    msg_.odom_hz = std::move(arg);
    return Init_UavStatusShort_odom_color(msg_);
  }

private:
  ::mrs_msgs::msg::UavStatusShort msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::UavStatusShort>()
{
  return mrs_msgs::msg::builder::Init_UavStatusShort_odom_hz();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_STATUS_SHORT__BUILDER_HPP_
