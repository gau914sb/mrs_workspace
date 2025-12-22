// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiAltitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_altitude.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_altitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiAltitude_amsl
{
public:
  explicit Init_HwApiAltitude_amsl(::mrs_msgs::msg::HwApiAltitude & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiAltitude amsl(::mrs_msgs::msg::HwApiAltitude::_amsl_type arg)
  {
    msg_.amsl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAltitude msg_;
};

class Init_HwApiAltitude_stamp
{
public:
  Init_HwApiAltitude_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiAltitude_amsl stamp(::mrs_msgs::msg::HwApiAltitude::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HwApiAltitude_amsl(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiAltitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiAltitude>()
{
  return mrs_msgs::msg::builder::Init_HwApiAltitude_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_ALTITUDE__BUILDER_HPP_
