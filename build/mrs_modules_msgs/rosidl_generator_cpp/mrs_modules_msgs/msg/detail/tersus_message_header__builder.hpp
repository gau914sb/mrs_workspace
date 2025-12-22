// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/tersus_message_header.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/tersus_message_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_TersusMessageHeader_software_version
{
public:
  explicit Init_TersusMessageHeader_software_version(::mrs_modules_msgs::msg::TersusMessageHeader & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::TersusMessageHeader software_version(::mrs_modules_msgs::msg::TersusMessageHeader::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

class Init_TersusMessageHeader_receiver_status
{
public:
  explicit Init_TersusMessageHeader_receiver_status(::mrs_modules_msgs::msg::TersusMessageHeader & msg)
  : msg_(msg)
  {}
  Init_TersusMessageHeader_software_version receiver_status(::mrs_modules_msgs::msg::TersusMessageHeader::_receiver_status_type arg)
  {
    msg_.receiver_status = std::move(arg);
    return Init_TersusMessageHeader_software_version(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

class Init_TersusMessageHeader_gps_week_seconds
{
public:
  explicit Init_TersusMessageHeader_gps_week_seconds(::mrs_modules_msgs::msg::TersusMessageHeader & msg)
  : msg_(msg)
  {}
  Init_TersusMessageHeader_receiver_status gps_week_seconds(::mrs_modules_msgs::msg::TersusMessageHeader::_gps_week_seconds_type arg)
  {
    msg_.gps_week_seconds = std::move(arg);
    return Init_TersusMessageHeader_receiver_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

class Init_TersusMessageHeader_gps_week
{
public:
  explicit Init_TersusMessageHeader_gps_week(::mrs_modules_msgs::msg::TersusMessageHeader & msg)
  : msg_(msg)
  {}
  Init_TersusMessageHeader_gps_week_seconds gps_week(::mrs_modules_msgs::msg::TersusMessageHeader::_gps_week_type arg)
  {
    msg_.gps_week = std::move(arg);
    return Init_TersusMessageHeader_gps_week_seconds(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

class Init_TersusMessageHeader_time_status
{
public:
  explicit Init_TersusMessageHeader_time_status(::mrs_modules_msgs::msg::TersusMessageHeader & msg)
  : msg_(msg)
  {}
  Init_TersusMessageHeader_gps_week time_status(::mrs_modules_msgs::msg::TersusMessageHeader::_time_status_type arg)
  {
    msg_.time_status = std::move(arg);
    return Init_TersusMessageHeader_gps_week(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

class Init_TersusMessageHeader_idle_time
{
public:
  explicit Init_TersusMessageHeader_idle_time(::mrs_modules_msgs::msg::TersusMessageHeader & msg)
  : msg_(msg)
  {}
  Init_TersusMessageHeader_time_status idle_time(::mrs_modules_msgs::msg::TersusMessageHeader::_idle_time_type arg)
  {
    msg_.idle_time = std::move(arg);
    return Init_TersusMessageHeader_time_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

class Init_TersusMessageHeader_sequence
{
public:
  explicit Init_TersusMessageHeader_sequence(::mrs_modules_msgs::msg::TersusMessageHeader & msg)
  : msg_(msg)
  {}
  Init_TersusMessageHeader_idle_time sequence(::mrs_modules_msgs::msg::TersusMessageHeader::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_TersusMessageHeader_idle_time(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

class Init_TersusMessageHeader_port_address
{
public:
  explicit Init_TersusMessageHeader_port_address(::mrs_modules_msgs::msg::TersusMessageHeader & msg)
  : msg_(msg)
  {}
  Init_TersusMessageHeader_sequence port_address(::mrs_modules_msgs::msg::TersusMessageHeader::_port_address_type arg)
  {
    msg_.port_address = std::move(arg);
    return Init_TersusMessageHeader_sequence(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

class Init_TersusMessageHeader_message_name
{
public:
  Init_TersusMessageHeader_message_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TersusMessageHeader_port_address message_name(::mrs_modules_msgs::msg::TersusMessageHeader::_message_name_type arg)
  {
    msg_.message_name = std::move(arg);
    return Init_TersusMessageHeader_port_address(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TersusMessageHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::TersusMessageHeader>()
{
  return mrs_modules_msgs::msg::builder::Init_TersusMessageHeader_message_name();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TERSUS_MESSAGE_HEADER__BUILDER_HPP_
