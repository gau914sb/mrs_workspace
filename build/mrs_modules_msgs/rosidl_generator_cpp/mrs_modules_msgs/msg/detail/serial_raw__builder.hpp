// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/SerialRaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/serial_raw.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__SERIAL_RAW__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__SERIAL_RAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/serial_raw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_SerialRaw_payload
{
public:
  explicit Init_SerialRaw_payload(::mrs_modules_msgs::msg::SerialRaw & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::SerialRaw payload(::mrs_modules_msgs::msg::SerialRaw::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::SerialRaw msg_;
};

class Init_SerialRaw_stamp
{
public:
  Init_SerialRaw_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerialRaw_payload stamp(::mrs_modules_msgs::msg::SerialRaw::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SerialRaw_payload(msg_);
  }

private:
  ::mrs_modules_msgs::msg::SerialRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::SerialRaw>()
{
  return mrs_modules_msgs::msg::builder::Init_SerialRaw_stamp();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__SERIAL_RAW__BUILDER_HPP_
