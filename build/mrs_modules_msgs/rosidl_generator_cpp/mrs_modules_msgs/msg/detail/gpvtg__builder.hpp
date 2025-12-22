// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpvtg.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gpvtg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpvtg_mode_indicator
{
public:
  explicit Init_Gpvtg_mode_indicator(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Gpvtg mode_indicator(::mrs_modules_msgs::msg::Gpvtg::_mode_indicator_type arg)
  {
    msg_.mode_indicator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_speed_kmh_indicator
{
public:
  explicit Init_Gpvtg_speed_kmh_indicator(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_mode_indicator speed_kmh_indicator(::mrs_modules_msgs::msg::Gpvtg::_speed_kmh_indicator_type arg)
  {
    msg_.speed_kmh_indicator = std::move(arg);
    return Init_Gpvtg_mode_indicator(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_speed_kmh
{
public:
  explicit Init_Gpvtg_speed_kmh(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_speed_kmh_indicator speed_kmh(::mrs_modules_msgs::msg::Gpvtg::_speed_kmh_type arg)
  {
    msg_.speed_kmh = std::move(arg);
    return Init_Gpvtg_speed_kmh_indicator(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_speed_knots_indicator
{
public:
  explicit Init_Gpvtg_speed_knots_indicator(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_speed_kmh speed_knots_indicator(::mrs_modules_msgs::msg::Gpvtg::_speed_knots_indicator_type arg)
  {
    msg_.speed_knots_indicator = std::move(arg);
    return Init_Gpvtg_speed_kmh(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_speed_knots
{
public:
  explicit Init_Gpvtg_speed_knots(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_speed_knots_indicator speed_knots(::mrs_modules_msgs::msg::Gpvtg::_speed_knots_type arg)
  {
    msg_.speed_knots = std::move(arg);
    return Init_Gpvtg_speed_knots_indicator(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_track_mag_indicator
{
public:
  explicit Init_Gpvtg_track_mag_indicator(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_speed_knots track_mag_indicator(::mrs_modules_msgs::msg::Gpvtg::_track_mag_indicator_type arg)
  {
    msg_.track_mag_indicator = std::move(arg);
    return Init_Gpvtg_speed_knots(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_track_mag
{
public:
  explicit Init_Gpvtg_track_mag(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_track_mag_indicator track_mag(::mrs_modules_msgs::msg::Gpvtg::_track_mag_type arg)
  {
    msg_.track_mag = std::move(arg);
    return Init_Gpvtg_track_mag_indicator(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_track_true_indicator
{
public:
  explicit Init_Gpvtg_track_true_indicator(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_track_mag track_true_indicator(::mrs_modules_msgs::msg::Gpvtg::_track_true_indicator_type arg)
  {
    msg_.track_true_indicator = std::move(arg);
    return Init_Gpvtg_track_mag(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_track_true
{
public:
  explicit Init_Gpvtg_track_true(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_track_true_indicator track_true(::mrs_modules_msgs::msg::Gpvtg::_track_true_type arg)
  {
    msg_.track_true = std::move(arg);
    return Init_Gpvtg_track_true_indicator(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_message_id
{
public:
  explicit Init_Gpvtg_message_id(::mrs_modules_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_track_true message_id(::mrs_modules_msgs::msg::Gpvtg::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpvtg_track_true(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_header
{
public:
  Init_Gpvtg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpvtg_message_id header(::mrs_modules_msgs::msg::Gpvtg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpvtg_message_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpvtg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Gpvtg>()
{
  return mrs_modules_msgs::msg::builder::Init_Gpvtg_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPVTG__BUILDER_HPP_
