// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gprmc.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gprmc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Gprmc_mode_indicator
{
public:
  explicit Init_Gprmc_mode_indicator(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Gprmc mode_indicator(::mrs_modules_msgs::msg::Gprmc::_mode_indicator_type arg)
  {
    msg_.mode_indicator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_mag_var_direction
{
public:
  explicit Init_Gprmc_mag_var_direction(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_mode_indicator mag_var_direction(::mrs_modules_msgs::msg::Gprmc::_mag_var_direction_type arg)
  {
    msg_.mag_var_direction = std::move(arg);
    return Init_Gprmc_mode_indicator(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_mag_var
{
public:
  explicit Init_Gprmc_mag_var(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_mag_var_direction mag_var(::mrs_modules_msgs::msg::Gprmc::_mag_var_type arg)
  {
    msg_.mag_var = std::move(arg);
    return Init_Gprmc_mag_var_direction(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_date
{
public:
  explicit Init_Gprmc_date(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_mag_var date(::mrs_modules_msgs::msg::Gprmc::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_Gprmc_mag_var(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_track
{
public:
  explicit Init_Gprmc_track(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_date track(::mrs_modules_msgs::msg::Gprmc::_track_type arg)
  {
    msg_.track = std::move(arg);
    return Init_Gprmc_date(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_speed
{
public:
  explicit Init_Gprmc_speed(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_track speed(::mrs_modules_msgs::msg::Gprmc::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Gprmc_track(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_longitude_dir
{
public:
  explicit Init_Gprmc_longitude_dir(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_speed longitude_dir(::mrs_modules_msgs::msg::Gprmc::_longitude_dir_type arg)
  {
    msg_.longitude_dir = std::move(arg);
    return Init_Gprmc_speed(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_latitude_dir
{
public:
  explicit Init_Gprmc_latitude_dir(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_longitude_dir latitude_dir(::mrs_modules_msgs::msg::Gprmc::_latitude_dir_type arg)
  {
    msg_.latitude_dir = std::move(arg);
    return Init_Gprmc_longitude_dir(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_longitude
{
public:
  explicit Init_Gprmc_longitude(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_latitude_dir longitude(::mrs_modules_msgs::msg::Gprmc::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Gprmc_latitude_dir(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_latitude
{
public:
  explicit Init_Gprmc_latitude(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_longitude latitude(::mrs_modules_msgs::msg::Gprmc::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Gprmc_longitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_position_status
{
public:
  explicit Init_Gprmc_position_status(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_latitude position_status(::mrs_modules_msgs::msg::Gprmc::_position_status_type arg)
  {
    msg_.position_status = std::move(arg);
    return Init_Gprmc_latitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_utc_seconds
{
public:
  explicit Init_Gprmc_utc_seconds(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_position_status utc_seconds(::mrs_modules_msgs::msg::Gprmc::_utc_seconds_type arg)
  {
    msg_.utc_seconds = std::move(arg);
    return Init_Gprmc_position_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_message_id
{
public:
  explicit Init_Gprmc_message_id(::mrs_modules_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_utc_seconds message_id(::mrs_modules_msgs::msg::Gprmc::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gprmc_utc_seconds(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_header
{
public:
  Init_Gprmc_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gprmc_message_id header(::mrs_modules_msgs::msg::Gprmc::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gprmc_message_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gprmc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Gprmc>()
{
  return mrs_modules_msgs::msg::builder::Init_Gprmc_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPRMC__BUILDER_HPP_
