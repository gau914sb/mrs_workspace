// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gps_fix.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gps_fix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_GPSFix_position_covariance_type
{
public:
  explicit Init_GPSFix_position_covariance_type(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::GPSFix position_covariance_type(::mrs_modules_msgs::msg::GPSFix::_position_covariance_type_type arg)
  {
    msg_.position_covariance_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_position_covariance
{
public:
  explicit Init_GPSFix_position_covariance(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_position_covariance_type position_covariance(::mrs_modules_msgs::msg::GPSFix::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_GPSFix_position_covariance_type(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_hdop
{
public:
  explicit Init_GPSFix_hdop(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_position_covariance hdop(::mrs_modules_msgs::msg::GPSFix::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_GPSFix_position_covariance(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_time
{
public:
  explicit Init_GPSFix_time(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_hdop time(::mrs_modules_msgs::msg::GPSFix::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_GPSFix_hdop(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_speed
{
public:
  explicit Init_GPSFix_speed(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_time speed(::mrs_modules_msgs::msg::GPSFix::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GPSFix_time(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_track
{
public:
  explicit Init_GPSFix_track(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_speed track(::mrs_modules_msgs::msg::GPSFix::_track_type arg)
  {
    msg_.track = std::move(arg);
    return Init_GPSFix_speed(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_altitude
{
public:
  explicit Init_GPSFix_altitude(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_track altitude(::mrs_modules_msgs::msg::GPSFix::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_GPSFix_track(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_longitude
{
public:
  explicit Init_GPSFix_longitude(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_altitude longitude(::mrs_modules_msgs::msg::GPSFix::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GPSFix_altitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_latitude
{
public:
  explicit Init_GPSFix_latitude(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_longitude latitude(::mrs_modules_msgs::msg::GPSFix::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GPSFix_longitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_status
{
public:
  explicit Init_GPSFix_status(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_latitude status(::mrs_modules_msgs::msg::GPSFix::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GPSFix_latitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_num_satellites_tracked
{
public:
  explicit Init_GPSFix_num_satellites_tracked(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_status num_satellites_tracked(::mrs_modules_msgs::msg::GPSFix::_num_satellites_tracked_type arg)
  {
    msg_.num_satellites_tracked = std::move(arg);
    return Init_GPSFix_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_num_satellites_used_in_solution
{
public:
  explicit Init_GPSFix_num_satellites_used_in_solution(::mrs_modules_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_num_satellites_tracked num_satellites_used_in_solution(::mrs_modules_msgs::msg::GPSFix::_num_satellites_used_in_solution_type arg)
  {
    msg_.num_satellites_used_in_solution = std::move(arg);
    return Init_GPSFix_num_satellites_tracked(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_header
{
public:
  Init_GPSFix_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPSFix_num_satellites_used_in_solution header(::mrs_modules_msgs::msg::GPSFix::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GPSFix_num_satellites_used_in_solution(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GPSFix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::GPSFix>()
{
  return mrs_modules_msgs::msg::builder::Init_GPSFix_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_
