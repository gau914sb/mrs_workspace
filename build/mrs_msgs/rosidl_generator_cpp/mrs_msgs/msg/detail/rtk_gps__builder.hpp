// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/RtkGps.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/rtk_gps.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RTK_GPS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__RTK_GPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/rtk_gps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_RtkGps_fix_type
{
public:
  explicit Init_RtkGps_fix_type(::mrs_msgs::msg::RtkGps & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::RtkGps fix_type(::mrs_msgs::msg::RtkGps::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::RtkGps msg_;
};

class Init_RtkGps_status
{
public:
  explicit Init_RtkGps_status(::mrs_msgs::msg::RtkGps & msg)
  : msg_(msg)
  {}
  Init_RtkGps_fix_type status(::mrs_msgs::msg::RtkGps::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RtkGps_fix_type(msg_);
  }

private:
  ::mrs_msgs::msg::RtkGps msg_;
};

class Init_RtkGps_gps
{
public:
  explicit Init_RtkGps_gps(::mrs_msgs::msg::RtkGps & msg)
  : msg_(msg)
  {}
  Init_RtkGps_status gps(::mrs_msgs::msg::RtkGps::_gps_type arg)
  {
    msg_.gps = std::move(arg);
    return Init_RtkGps_status(msg_);
  }

private:
  ::mrs_msgs::msg::RtkGps msg_;
};

class Init_RtkGps_header
{
public:
  Init_RtkGps_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RtkGps_gps header(::mrs_msgs::msg::RtkGps::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RtkGps_gps(msg_);
  }

private:
  ::mrs_msgs::msg::RtkGps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::RtkGps>()
{
  return mrs_msgs::msg::builder::Init_RtkGps_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__RTK_GPS__BUILDER_HPP_
