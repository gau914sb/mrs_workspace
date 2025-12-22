// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Satellite.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/satellite.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/satellite__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Satellite_snr
{
public:
  explicit Init_Satellite_snr(::mrs_modules_msgs::msg::Satellite & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Satellite snr(::mrs_modules_msgs::msg::Satellite::_snr_type arg)
  {
    msg_.snr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Satellite msg_;
};

class Init_Satellite_azimuth
{
public:
  explicit Init_Satellite_azimuth(::mrs_modules_msgs::msg::Satellite & msg)
  : msg_(msg)
  {}
  Init_Satellite_snr azimuth(::mrs_modules_msgs::msg::Satellite::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_Satellite_snr(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Satellite msg_;
};

class Init_Satellite_elevation
{
public:
  explicit Init_Satellite_elevation(::mrs_modules_msgs::msg::Satellite & msg)
  : msg_(msg)
  {}
  Init_Satellite_azimuth elevation(::mrs_modules_msgs::msg::Satellite::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_Satellite_azimuth(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Satellite msg_;
};

class Init_Satellite_prn
{
public:
  Init_Satellite_prn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Satellite_elevation prn(::mrs_modules_msgs::msg::Satellite::_prn_type arg)
  {
    msg_.prn = std::move(arg);
    return Init_Satellite_elevation(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Satellite msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Satellite>()
{
  return mrs_modules_msgs::msg::builder::Init_Satellite_prn();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__SATELLITE__BUILDER_HPP_
