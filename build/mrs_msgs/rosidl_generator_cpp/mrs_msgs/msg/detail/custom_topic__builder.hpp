// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/CustomTopic.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/custom_topic.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/custom_topic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomTopic_topic_color
{
public:
  explicit Init_CustomTopic_topic_color(::mrs_msgs::msg::CustomTopic & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::CustomTopic topic_color(::mrs_msgs::msg::CustomTopic::_topic_color_type arg)
  {
    msg_.topic_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::CustomTopic msg_;
};

class Init_CustomTopic_topic_hz
{
public:
  explicit Init_CustomTopic_topic_hz(::mrs_msgs::msg::CustomTopic & msg)
  : msg_(msg)
  {}
  Init_CustomTopic_topic_color topic_hz(::mrs_msgs::msg::CustomTopic::_topic_hz_type arg)
  {
    msg_.topic_hz = std::move(arg);
    return Init_CustomTopic_topic_color(msg_);
  }

private:
  ::mrs_msgs::msg::CustomTopic msg_;
};

class Init_CustomTopic_topic_name
{
public:
  Init_CustomTopic_topic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomTopic_topic_hz topic_name(::mrs_msgs::msg::CustomTopic::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_CustomTopic_topic_hz(msg_);
  }

private:
  ::mrs_msgs::msg::CustomTopic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::CustomTopic>()
{
  return mrs_msgs::msg::builder::Init_CustomTopic_topic_name();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CUSTOM_TOPIC__BUILDER_HPP_
