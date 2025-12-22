// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/ParachuteDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/parachute_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/parachute_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_ParachuteDiagnostics_fired
{
public:
  explicit Init_ParachuteDiagnostics_fired(::mrs_modules_msgs::msg::ParachuteDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::ParachuteDiagnostics fired(::mrs_modules_msgs::msg::ParachuteDiagnostics::_fired_type arg)
  {
    msg_.fired = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::ParachuteDiagnostics msg_;
};

class Init_ParachuteDiagnostics_armed
{
public:
  explicit Init_ParachuteDiagnostics_armed(::mrs_modules_msgs::msg::ParachuteDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ParachuteDiagnostics_fired armed(::mrs_modules_msgs::msg::ParachuteDiagnostics::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_ParachuteDiagnostics_fired(msg_);
  }

private:
  ::mrs_modules_msgs::msg::ParachuteDiagnostics msg_;
};

class Init_ParachuteDiagnostics_alive
{
public:
  explicit Init_ParachuteDiagnostics_alive(::mrs_modules_msgs::msg::ParachuteDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ParachuteDiagnostics_armed alive(::mrs_modules_msgs::msg::ParachuteDiagnostics::_alive_type arg)
  {
    msg_.alive = std::move(arg);
    return Init_ParachuteDiagnostics_armed(msg_);
  }

private:
  ::mrs_modules_msgs::msg::ParachuteDiagnostics msg_;
};

class Init_ParachuteDiagnostics_stamp
{
public:
  Init_ParachuteDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParachuteDiagnostics_alive stamp(::mrs_modules_msgs::msg::ParachuteDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ParachuteDiagnostics_alive(msg_);
  }

private:
  ::mrs_modules_msgs::msg::ParachuteDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::ParachuteDiagnostics>()
{
  return mrs_modules_msgs::msg::builder::Init_ParachuteDiagnostics_stamp();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__PARACHUTE_DIAGNOSTICS__BUILDER_HPP_
