// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiPositionCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_position_cmd.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_POSITION_CMD__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_POSITION_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_position_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiPositionCmd_heading
{
public:
  explicit Init_HwApiPositionCmd_heading(::mrs_msgs::msg::HwApiPositionCmd & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiPositionCmd heading(::mrs_msgs::msg::HwApiPositionCmd::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiPositionCmd msg_;
};

class Init_HwApiPositionCmd_position
{
public:
  explicit Init_HwApiPositionCmd_position(::mrs_msgs::msg::HwApiPositionCmd & msg)
  : msg_(msg)
  {}
  Init_HwApiPositionCmd_heading position(::mrs_msgs::msg::HwApiPositionCmd::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_HwApiPositionCmd_heading(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiPositionCmd msg_;
};

class Init_HwApiPositionCmd_header
{
public:
  Init_HwApiPositionCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiPositionCmd_position header(::mrs_msgs::msg::HwApiPositionCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HwApiPositionCmd_position(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiPositionCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiPositionCmd>()
{
  return mrs_msgs::msg::builder::Init_HwApiPositionCmd_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_POSITION_CMD__BUILDER_HPP_
