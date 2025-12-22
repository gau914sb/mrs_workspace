// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Llcp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/llcp.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__LLCP__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__LLCP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/llcp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Llcp_payload
{
public:
  explicit Init_Llcp_payload(::mrs_modules_msgs::msg::Llcp & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Llcp payload(::mrs_modules_msgs::msg::Llcp::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Llcp msg_;
};

class Init_Llcp_id
{
public:
  explicit Init_Llcp_id(::mrs_modules_msgs::msg::Llcp & msg)
  : msg_(msg)
  {}
  Init_Llcp_payload id(::mrs_modules_msgs::msg::Llcp::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Llcp_payload(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Llcp msg_;
};

class Init_Llcp_checksum_matched
{
public:
  explicit Init_Llcp_checksum_matched(::mrs_modules_msgs::msg::Llcp & msg)
  : msg_(msg)
  {}
  Init_Llcp_id checksum_matched(::mrs_modules_msgs::msg::Llcp::_checksum_matched_type arg)
  {
    msg_.checksum_matched = std::move(arg);
    return Init_Llcp_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Llcp msg_;
};

class Init_Llcp_stamp
{
public:
  Init_Llcp_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Llcp_checksum_matched stamp(::mrs_modules_msgs::msg::Llcp::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Llcp_checksum_matched(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Llcp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Llcp>()
{
  return mrs_modules_msgs::msg::builder::Init_Llcp_stamp();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__LLCP__BUILDER_HPP_
