// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/LandoffDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/landoff_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/landoff_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_LandoffDiagnostics_elanding
{
public:
  explicit Init_LandoffDiagnostics_elanding(::mrs_msgs::msg::LandoffDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::LandoffDiagnostics elanding(::mrs_msgs::msg::LandoffDiagnostics::_elanding_type arg)
  {
    msg_.elanding = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::LandoffDiagnostics msg_;
};

class Init_LandoffDiagnostics_taking_off
{
public:
  explicit Init_LandoffDiagnostics_taking_off(::mrs_msgs::msg::LandoffDiagnostics & msg)
  : msg_(msg)
  {}
  Init_LandoffDiagnostics_elanding taking_off(::mrs_msgs::msg::LandoffDiagnostics::_taking_off_type arg)
  {
    msg_.taking_off = std::move(arg);
    return Init_LandoffDiagnostics_elanding(msg_);
  }

private:
  ::mrs_msgs::msg::LandoffDiagnostics msg_;
};

class Init_LandoffDiagnostics_landing
{
public:
  explicit Init_LandoffDiagnostics_landing(::mrs_msgs::msg::LandoffDiagnostics & msg)
  : msg_(msg)
  {}
  Init_LandoffDiagnostics_taking_off landing(::mrs_msgs::msg::LandoffDiagnostics::_landing_type arg)
  {
    msg_.landing = std::move(arg);
    return Init_LandoffDiagnostics_taking_off(msg_);
  }

private:
  ::mrs_msgs::msg::LandoffDiagnostics msg_;
};

class Init_LandoffDiagnostics_active
{
public:
  explicit Init_LandoffDiagnostics_active(::mrs_msgs::msg::LandoffDiagnostics & msg)
  : msg_(msg)
  {}
  Init_LandoffDiagnostics_landing active(::mrs_msgs::msg::LandoffDiagnostics::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_LandoffDiagnostics_landing(msg_);
  }

private:
  ::mrs_msgs::msg::LandoffDiagnostics msg_;
};

class Init_LandoffDiagnostics_stamp
{
public:
  Init_LandoffDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandoffDiagnostics_active stamp(::mrs_msgs::msg::LandoffDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LandoffDiagnostics_active(msg_);
  }

private:
  ::mrs_msgs::msg::LandoffDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::LandoffDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_LandoffDiagnostics_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__LANDOFF_DIAGNOSTICS__BUILDER_HPP_
