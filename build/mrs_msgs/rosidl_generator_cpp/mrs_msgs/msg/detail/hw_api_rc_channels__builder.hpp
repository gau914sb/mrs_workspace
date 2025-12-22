// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/HwApiRcChannels.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/hw_api_rc_channels.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/hw_api_rc_channels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_HwApiRcChannels_channels
{
public:
  explicit Init_HwApiRcChannels_channels(::mrs_msgs::msg::HwApiRcChannels & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::HwApiRcChannels channels(::mrs_msgs::msg::HwApiRcChannels::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiRcChannels msg_;
};

class Init_HwApiRcChannels_stamp
{
public:
  Init_HwApiRcChannels_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwApiRcChannels_channels stamp(::mrs_msgs::msg::HwApiRcChannels::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HwApiRcChannels_channels(msg_);
  }

private:
  ::mrs_msgs::msg::HwApiRcChannels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::HwApiRcChannels>()
{
  return mrs_msgs::msg::builder::Init_HwApiRcChannels_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HW_API_RC_CHANNELS__BUILDER_HPP_
