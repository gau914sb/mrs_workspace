// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Time.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/time.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Time_utc_status
{
public:
  explicit Init_Time_utc_status(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Time utc_status(::mrs_modules_msgs::msg::Time::_utc_status_type arg)
  {
    msg_.utc_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_utc_millisecond
{
public:
  explicit Init_Time_utc_millisecond(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_utc_status utc_millisecond(::mrs_modules_msgs::msg::Time::_utc_millisecond_type arg)
  {
    msg_.utc_millisecond = std::move(arg);
    return Init_Time_utc_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_utc_minute
{
public:
  explicit Init_Time_utc_minute(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_utc_millisecond utc_minute(::mrs_modules_msgs::msg::Time::_utc_minute_type arg)
  {
    msg_.utc_minute = std::move(arg);
    return Init_Time_utc_millisecond(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_utc_hour
{
public:
  explicit Init_Time_utc_hour(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_utc_minute utc_hour(::mrs_modules_msgs::msg::Time::_utc_hour_type arg)
  {
    msg_.utc_hour = std::move(arg);
    return Init_Time_utc_minute(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_utc_day
{
public:
  explicit Init_Time_utc_day(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_utc_hour utc_day(::mrs_modules_msgs::msg::Time::_utc_day_type arg)
  {
    msg_.utc_day = std::move(arg);
    return Init_Time_utc_hour(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_utc_month
{
public:
  explicit Init_Time_utc_month(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_utc_day utc_month(::mrs_modules_msgs::msg::Time::_utc_month_type arg)
  {
    msg_.utc_month = std::move(arg);
    return Init_Time_utc_day(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_utc_year
{
public:
  explicit Init_Time_utc_year(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_utc_month utc_year(::mrs_modules_msgs::msg::Time::_utc_year_type arg)
  {
    msg_.utc_year = std::move(arg);
    return Init_Time_utc_month(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_utc_offset
{
public:
  explicit Init_Time_utc_offset(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_utc_year utc_offset(::mrs_modules_msgs::msg::Time::_utc_offset_type arg)
  {
    msg_.utc_offset = std::move(arg);
    return Init_Time_utc_year(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_offset_std
{
public:
  explicit Init_Time_offset_std(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_utc_offset offset_std(::mrs_modules_msgs::msg::Time::_offset_std_type arg)
  {
    msg_.offset_std = std::move(arg);
    return Init_Time_utc_offset(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_offset
{
public:
  explicit Init_Time_offset(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_offset_std offset(::mrs_modules_msgs::msg::Time::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_Time_offset_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_clock_status
{
public:
  explicit Init_Time_clock_status(::mrs_modules_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_offset clock_status(::mrs_modules_msgs::msg::Time::_clock_status_type arg)
  {
    msg_.clock_status = std::move(arg);
    return Init_Time_offset(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

class Init_Time_header
{
public:
  Init_Time_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_clock_status header(::mrs_modules_msgs::msg::Time::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Time_clock_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Time msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Time>()
{
  return mrs_modules_msgs::msg::builder::Init_Time_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
