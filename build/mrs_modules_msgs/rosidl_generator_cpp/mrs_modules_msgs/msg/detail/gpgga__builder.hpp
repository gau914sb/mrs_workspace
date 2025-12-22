// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgga.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gpgga__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpgga_station_id
{
public:
  explicit Init_Gpgga_station_id(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Gpgga station_id(::mrs_modules_msgs::msg::Gpgga::_station_id_type arg)
  {
    msg_.station_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_diff_age
{
public:
  explicit Init_Gpgga_diff_age(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_station_id diff_age(::mrs_modules_msgs::msg::Gpgga::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_Gpgga_station_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_undulation_units
{
public:
  explicit Init_Gpgga_undulation_units(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_diff_age undulation_units(::mrs_modules_msgs::msg::Gpgga::_undulation_units_type arg)
  {
    msg_.undulation_units = std::move(arg);
    return Init_Gpgga_diff_age(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_undulation
{
public:
  explicit Init_Gpgga_undulation(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_undulation_units undulation(::mrs_modules_msgs::msg::Gpgga::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_Gpgga_undulation_units(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_altitude_units
{
public:
  explicit Init_Gpgga_altitude_units(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_undulation altitude_units(::mrs_modules_msgs::msg::Gpgga::_altitude_units_type arg)
  {
    msg_.altitude_units = std::move(arg);
    return Init_Gpgga_undulation(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_altitude
{
public:
  explicit Init_Gpgga_altitude(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_altitude_units altitude(::mrs_modules_msgs::msg::Gpgga::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_Gpgga_altitude_units(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_hdop
{
public:
  explicit Init_Gpgga_hdop(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_altitude hdop(::mrs_modules_msgs::msg::Gpgga::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_Gpgga_altitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_num_sats
{
public:
  explicit Init_Gpgga_num_sats(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_hdop num_sats(::mrs_modules_msgs::msg::Gpgga::_num_sats_type arg)
  {
    msg_.num_sats = std::move(arg);
    return Init_Gpgga_hdop(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_gps_quality
{
public:
  explicit Init_Gpgga_gps_quality(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_num_sats gps_quality(::mrs_modules_msgs::msg::Gpgga::_gps_quality_type arg)
  {
    msg_.gps_quality = std::move(arg);
    return Init_Gpgga_num_sats(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_longitude_dir
{
public:
  explicit Init_Gpgga_longitude_dir(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_gps_quality longitude_dir(::mrs_modules_msgs::msg::Gpgga::_longitude_dir_type arg)
  {
    msg_.longitude_dir = std::move(arg);
    return Init_Gpgga_gps_quality(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_latitude_dir
{
public:
  explicit Init_Gpgga_latitude_dir(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_longitude_dir latitude_dir(::mrs_modules_msgs::msg::Gpgga::_latitude_dir_type arg)
  {
    msg_.latitude_dir = std::move(arg);
    return Init_Gpgga_longitude_dir(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_longitude
{
public:
  explicit Init_Gpgga_longitude(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_latitude_dir longitude(::mrs_modules_msgs::msg::Gpgga::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Gpgga_latitude_dir(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_latitude
{
public:
  explicit Init_Gpgga_latitude(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_longitude latitude(::mrs_modules_msgs::msg::Gpgga::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Gpgga_longitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_utc_seconds
{
public:
  explicit Init_Gpgga_utc_seconds(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_latitude utc_seconds(::mrs_modules_msgs::msg::Gpgga::_utc_seconds_type arg)
  {
    msg_.utc_seconds = std::move(arg);
    return Init_Gpgga_latitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_message_id
{
public:
  explicit Init_Gpgga_message_id(::mrs_modules_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_utc_seconds message_id(::mrs_modules_msgs::msg::Gpgga::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpgga_utc_seconds(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_header
{
public:
  Init_Gpgga_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpgga_message_id header(::mrs_modules_msgs::msg::Gpgga::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpgga_message_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgga msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Gpgga>()
{
  return mrs_modules_msgs::msg::builder::Init_Gpgga_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGGA__BUILDER_HPP_
