// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/BacaProtocol.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/baca_protocol.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/baca_protocol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_BacaProtocol_checksum_correct
{
public:
  explicit Init_BacaProtocol_checksum_correct(::mrs_modules_msgs::msg::BacaProtocol & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::BacaProtocol checksum_correct(::mrs_modules_msgs::msg::BacaProtocol::_checksum_correct_type arg)
  {
    msg_.checksum_correct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::BacaProtocol msg_;
};

class Init_BacaProtocol_checksum_received
{
public:
  explicit Init_BacaProtocol_checksum_received(::mrs_modules_msgs::msg::BacaProtocol & msg)
  : msg_(msg)
  {}
  Init_BacaProtocol_checksum_correct checksum_received(::mrs_modules_msgs::msg::BacaProtocol::_checksum_received_type arg)
  {
    msg_.checksum_received = std::move(arg);
    return Init_BacaProtocol_checksum_correct(msg_);
  }

private:
  ::mrs_modules_msgs::msg::BacaProtocol msg_;
};

class Init_BacaProtocol_checksum_calculated
{
public:
  explicit Init_BacaProtocol_checksum_calculated(::mrs_modules_msgs::msg::BacaProtocol & msg)
  : msg_(msg)
  {}
  Init_BacaProtocol_checksum_received checksum_calculated(::mrs_modules_msgs::msg::BacaProtocol::_checksum_calculated_type arg)
  {
    msg_.checksum_calculated = std::move(arg);
    return Init_BacaProtocol_checksum_received(msg_);
  }

private:
  ::mrs_modules_msgs::msg::BacaProtocol msg_;
};

class Init_BacaProtocol_payload
{
public:
  explicit Init_BacaProtocol_payload(::mrs_modules_msgs::msg::BacaProtocol & msg)
  : msg_(msg)
  {}
  Init_BacaProtocol_checksum_calculated payload(::mrs_modules_msgs::msg::BacaProtocol::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return Init_BacaProtocol_checksum_calculated(msg_);
  }

private:
  ::mrs_modules_msgs::msg::BacaProtocol msg_;
};

class Init_BacaProtocol_stamp
{
public:
  Init_BacaProtocol_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BacaProtocol_payload stamp(::mrs_modules_msgs::msg::BacaProtocol::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BacaProtocol_payload(msg_);
  }

private:
  ::mrs_modules_msgs::msg::BacaProtocol msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::BacaProtocol>()
{
  return mrs_modules_msgs::msg::builder::Init_BacaProtocol_stamp();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BACA_PROTOCOL__BUILDER_HPP_
