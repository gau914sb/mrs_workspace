// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/UavManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/uav_manager_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_UavManagerDiagnostics_state
{
public:
  explicit Init_UavManagerDiagnostics_state(::mrs_msgs::msg::UavManagerDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::UavManagerDiagnostics state(::mrs_msgs::msg::UavManagerDiagnostics::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::UavManagerDiagnostics msg_;
};

class Init_UavManagerDiagnostics_flight_time
{
public:
  explicit Init_UavManagerDiagnostics_flight_time(::mrs_msgs::msg::UavManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_UavManagerDiagnostics_state flight_time(::mrs_msgs::msg::UavManagerDiagnostics::_flight_time_type arg)
  {
    msg_.flight_time = std::move(arg);
    return Init_UavManagerDiagnostics_state(msg_);
  }

private:
  ::mrs_msgs::msg::UavManagerDiagnostics msg_;
};

class Init_UavManagerDiagnostics_cur_longitude
{
public:
  explicit Init_UavManagerDiagnostics_cur_longitude(::mrs_msgs::msg::UavManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_UavManagerDiagnostics_flight_time cur_longitude(::mrs_msgs::msg::UavManagerDiagnostics::_cur_longitude_type arg)
  {
    msg_.cur_longitude = std::move(arg);
    return Init_UavManagerDiagnostics_flight_time(msg_);
  }

private:
  ::mrs_msgs::msg::UavManagerDiagnostics msg_;
};

class Init_UavManagerDiagnostics_cur_latitude
{
public:
  explicit Init_UavManagerDiagnostics_cur_latitude(::mrs_msgs::msg::UavManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_UavManagerDiagnostics_cur_longitude cur_latitude(::mrs_msgs::msg::UavManagerDiagnostics::_cur_latitude_type arg)
  {
    msg_.cur_latitude = std::move(arg);
    return Init_UavManagerDiagnostics_cur_longitude(msg_);
  }

private:
  ::mrs_msgs::msg::UavManagerDiagnostics msg_;
};

class Init_UavManagerDiagnostics_home_longitude
{
public:
  explicit Init_UavManagerDiagnostics_home_longitude(::mrs_msgs::msg::UavManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_UavManagerDiagnostics_cur_latitude home_longitude(::mrs_msgs::msg::UavManagerDiagnostics::_home_longitude_type arg)
  {
    msg_.home_longitude = std::move(arg);
    return Init_UavManagerDiagnostics_cur_latitude(msg_);
  }

private:
  ::mrs_msgs::msg::UavManagerDiagnostics msg_;
};

class Init_UavManagerDiagnostics_home_latitude
{
public:
  explicit Init_UavManagerDiagnostics_home_latitude(::mrs_msgs::msg::UavManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_UavManagerDiagnostics_home_longitude home_latitude(::mrs_msgs::msg::UavManagerDiagnostics::_home_latitude_type arg)
  {
    msg_.home_latitude = std::move(arg);
    return Init_UavManagerDiagnostics_home_longitude(msg_);
  }

private:
  ::mrs_msgs::msg::UavManagerDiagnostics msg_;
};

class Init_UavManagerDiagnostics_uav_name
{
public:
  explicit Init_UavManagerDiagnostics_uav_name(::mrs_msgs::msg::UavManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_UavManagerDiagnostics_home_latitude uav_name(::mrs_msgs::msg::UavManagerDiagnostics::_uav_name_type arg)
  {
    msg_.uav_name = std::move(arg);
    return Init_UavManagerDiagnostics_home_latitude(msg_);
  }

private:
  ::mrs_msgs::msg::UavManagerDiagnostics msg_;
};

class Init_UavManagerDiagnostics_stamp
{
public:
  Init_UavManagerDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavManagerDiagnostics_uav_name stamp(::mrs_msgs::msg::UavManagerDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_UavManagerDiagnostics_uav_name(msg_);
  }

private:
  ::mrs_msgs::msg::UavManagerDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::UavManagerDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_UavManagerDiagnostics_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_MANAGER_DIAGNOSTICS__BUILDER_HPP_
