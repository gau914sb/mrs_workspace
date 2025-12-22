// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgsv.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGSV__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGSV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gpgsv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpgsv_satellites
{
public:
  explicit Init_Gpgsv_satellites(::mrs_modules_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Gpgsv satellites(::mrs_modules_msgs::msg::Gpgsv::_satellites_type arg)
  {
    msg_.satellites = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_n_satellites
{
public:
  explicit Init_Gpgsv_n_satellites(::mrs_modules_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  Init_Gpgsv_satellites n_satellites(::mrs_modules_msgs::msg::Gpgsv::_n_satellites_type arg)
  {
    msg_.n_satellites = std::move(arg);
    return Init_Gpgsv_satellites(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_msg_number
{
public:
  explicit Init_Gpgsv_msg_number(::mrs_modules_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  Init_Gpgsv_n_satellites msg_number(::mrs_modules_msgs::msg::Gpgsv::_msg_number_type arg)
  {
    msg_.msg_number = std::move(arg);
    return Init_Gpgsv_n_satellites(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_n_msgs
{
public:
  explicit Init_Gpgsv_n_msgs(::mrs_modules_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  Init_Gpgsv_msg_number n_msgs(::mrs_modules_msgs::msg::Gpgsv::_n_msgs_type arg)
  {
    msg_.n_msgs = std::move(arg);
    return Init_Gpgsv_msg_number(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_message_id
{
public:
  explicit Init_Gpgsv_message_id(::mrs_modules_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  Init_Gpgsv_n_msgs message_id(::mrs_modules_msgs::msg::Gpgsv::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpgsv_n_msgs(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_header
{
public:
  Init_Gpgsv_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpgsv_message_id header(::mrs_modules_msgs::msg::Gpgsv::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpgsv_message_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsv msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Gpgsv>()
{
  return mrs_modules_msgs::msg::builder::Init_Gpgsv_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGSV__BUILDER_HPP_
