// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/GpsStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gps_status.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gps_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsStatus_quality
{
public:
  Init_GpsStatus_quality()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrs_modules_msgs::msg::GpsStatus quality(::mrs_modules_msgs::msg::GpsStatus::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GpsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::GpsStatus>()
{
  return mrs_modules_msgs::msg::builder::Init_GpsStatus_quality();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPS_STATUS__BUILDER_HPP_
