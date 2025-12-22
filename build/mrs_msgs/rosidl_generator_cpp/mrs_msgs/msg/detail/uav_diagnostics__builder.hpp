// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/UavDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/uav_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__UAV_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__UAV_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/uav_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_UavDiagnostics_state
{
public:
  explicit Init_UavDiagnostics_state(::mrs_msgs::msg::UavDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::UavDiagnostics state(::mrs_msgs::msg::UavDiagnostics::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::UavDiagnostics msg_;
};

class Init_UavDiagnostics_stamp
{
public:
  Init_UavDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavDiagnostics_state stamp(::mrs_msgs::msg::UavDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_UavDiagnostics_state(msg_);
  }

private:
  ::mrs_msgs::msg::UavDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::UavDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_UavDiagnostics_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__UAV_DIAGNOSTICS__BUILDER_HPP_
