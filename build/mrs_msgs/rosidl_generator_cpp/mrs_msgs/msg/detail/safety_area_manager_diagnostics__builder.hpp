// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/SafetyAreaManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/safety_area_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/safety_area_manager_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyAreaManagerDiagnostics_obstacles
{
public:
  explicit Init_SafetyAreaManagerDiagnostics_obstacles(::mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics obstacles(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

class Init_SafetyAreaManagerDiagnostics_obstacles_present
{
public:
  explicit Init_SafetyAreaManagerDiagnostics_obstacles_present(::mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_SafetyAreaManagerDiagnostics_obstacles obstacles_present(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_obstacles_present_type arg)
  {
    msg_.obstacles_present = std::move(arg);
    return Init_SafetyAreaManagerDiagnostics_obstacles(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

class Init_SafetyAreaManagerDiagnostics_border
{
public:
  explicit Init_SafetyAreaManagerDiagnostics_border(::mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_SafetyAreaManagerDiagnostics_obstacles_present border(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_border_type arg)
  {
    msg_.border = std::move(arg);
    return Init_SafetyAreaManagerDiagnostics_obstacles_present(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

class Init_SafetyAreaManagerDiagnostics_position_valid_3d
{
public:
  explicit Init_SafetyAreaManagerDiagnostics_position_valid_3d(::mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_SafetyAreaManagerDiagnostics_border position_valid_3d(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_position_valid_3d_type arg)
  {
    msg_.position_valid_3d = std::move(arg);
    return Init_SafetyAreaManagerDiagnostics_border(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

class Init_SafetyAreaManagerDiagnostics_position_valid_2d
{
public:
  explicit Init_SafetyAreaManagerDiagnostics_position_valid_2d(::mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_SafetyAreaManagerDiagnostics_position_valid_3d position_valid_2d(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_position_valid_2d_type arg)
  {
    msg_.position_valid_2d = std::move(arg);
    return Init_SafetyAreaManagerDiagnostics_position_valid_3d(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

class Init_SafetyAreaManagerDiagnostics_safety_area_enabled
{
public:
  explicit Init_SafetyAreaManagerDiagnostics_safety_area_enabled(::mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_SafetyAreaManagerDiagnostics_position_valid_2d safety_area_enabled(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_safety_area_enabled_type arg)
  {
    msg_.safety_area_enabled = std::move(arg);
    return Init_SafetyAreaManagerDiagnostics_position_valid_2d(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

class Init_SafetyAreaManagerDiagnostics_world_origin
{
public:
  explicit Init_SafetyAreaManagerDiagnostics_world_origin(::mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_SafetyAreaManagerDiagnostics_safety_area_enabled world_origin(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_world_origin_type arg)
  {
    msg_.world_origin = std::move(arg);
    return Init_SafetyAreaManagerDiagnostics_safety_area_enabled(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

class Init_SafetyAreaManagerDiagnostics_uav_name
{
public:
  explicit Init_SafetyAreaManagerDiagnostics_uav_name(::mrs_msgs::msg::SafetyAreaManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_SafetyAreaManagerDiagnostics_world_origin uav_name(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_uav_name_type arg)
  {
    msg_.uav_name = std::move(arg);
    return Init_SafetyAreaManagerDiagnostics_world_origin(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

class Init_SafetyAreaManagerDiagnostics_stamp
{
public:
  Init_SafetyAreaManagerDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyAreaManagerDiagnostics_uav_name stamp(::mrs_msgs::msg::SafetyAreaManagerDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SafetyAreaManagerDiagnostics_uav_name(msg_);
  }

private:
  ::mrs_msgs::msg::SafetyAreaManagerDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::SafetyAreaManagerDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_SafetyAreaManagerDiagnostics_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SAFETY_AREA_MANAGER_DIAGNOSTICS__BUILDER_HPP_
