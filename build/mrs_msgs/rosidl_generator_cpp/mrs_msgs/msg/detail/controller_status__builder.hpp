// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/controller_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROLLER_STATUS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROLLER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/controller_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerStatus_active
{
public:
  Init_ControllerStatus_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrs_msgs::msg::ControllerStatus active(::mrs_msgs::msg::ControllerStatus::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ControllerStatus>()
{
  return mrs_msgs::msg::builder::Init_ControllerStatus_active();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CONTROLLER_STATUS__BUILDER_HPP_
