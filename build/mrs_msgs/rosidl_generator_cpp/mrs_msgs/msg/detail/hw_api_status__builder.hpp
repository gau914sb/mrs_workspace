// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_status.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_STATUS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiStatus_mode
{
public:
  explicit Init_HwApiStatus_mode(::mrs_msgs::msg::HwApiStatus & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiStatus mode(::mrs_msgs::msg::HwApiStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiStatus msg_;
};

class Init_HwApiStatus_offboard
{
public:
  explicit Init_HwApiStatus_offboard(::mrs_msgs::msg::HwApiStatus & msg)
  : msg_(msg)
  {}
  Init_HwApiStatus_mode offboard(::mrs_msgs::msg::HwApiStatus::_offboard_type arg)
  {
    msg_.offboard = std::move(arg);
    return Init_HwApiStatus_mode(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiStatus msg_;
};

class Init_HwApiStatus_armed
{
public:
  explicit Init_HwApiStatus_armed(::mrs_msgs::msg::HwApiStatus & msg)
  : msg_(msg)
  {}
  Init_HwApiStatus_offboard armed(::mrs_msgs::msg::HwApiStatus::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_HwApiStatus_offboard(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiStatus msg_;
};

class Init_HwApiStatus_connected
{
public:
  explicit Init_HwApiStatus_connected(::mrs_msgs::msg::HwApiStatus & msg)
  : msg_(msg)
  {}
  Init_HwApiStatus_armed connected(::mrs_msgs::msg::HwApiStatus::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_HwApiStatus_armed(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiStatus msg_;
};

class Init_HwApiStatus_stamp
{
public:
  Init_HwApiStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiStatus_connected stamp(::mrs_msgs::msg::HwApiStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HwApiStatus_connected(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiStatus>()
{
  return mrs_msgs::msg::builder::Init_HwApiStatus_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_STATUS__BUILDER_HPP_
