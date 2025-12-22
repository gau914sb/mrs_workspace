// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gps_data.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GPS_DATA__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__GPS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/gps_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsData_covariance
{
public:
  explicit Init_GpsData_covariance(::mrs_msgs::msg::GpsData & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::GpsData covariance(::mrs_msgs::msg::GpsData::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::GpsData msg_;
};

class Init_GpsData_altitude
{
public:
  explicit Init_GpsData_altitude(::mrs_msgs::msg::GpsData & msg)
  : msg_(msg)
  {}
  Init_GpsData_covariance altitude(::mrs_msgs::msg::GpsData::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_GpsData_covariance(msg_);
  }

private:
  ::mrs_msgs::msg::GpsData msg_;
};

class Init_GpsData_longitude
{
public:
  explicit Init_GpsData_longitude(::mrs_msgs::msg::GpsData & msg)
  : msg_(msg)
  {}
  Init_GpsData_altitude longitude(::mrs_msgs::msg::GpsData::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GpsData_altitude(msg_);
  }

private:
  ::mrs_msgs::msg::GpsData msg_;
};

class Init_GpsData_latitude
{
public:
  Init_GpsData_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsData_longitude latitude(::mrs_msgs::msg::GpsData::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GpsData_longitude(msg_);
  }

private:
  ::mrs_msgs::msg::GpsData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::GpsData>()
{
  return mrs_msgs::msg::builder::Init_GpsData_latitude();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GPS_DATA__BUILDER_HPP_
