// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Trackstat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/trackstat.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/trackstat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Trackstat_channels
{
public:
  explicit Init_Trackstat_channels(::mrs_modules_msgs::msg::Trackstat & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Trackstat channels(::mrs_modules_msgs::msg::Trackstat::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Trackstat msg_;
};

class Init_Trackstat_cutoff
{
public:
  explicit Init_Trackstat_cutoff(::mrs_modules_msgs::msg::Trackstat & msg)
  : msg_(msg)
  {}
  Init_Trackstat_channels cutoff(::mrs_modules_msgs::msg::Trackstat::_cutoff_type arg)
  {
    msg_.cutoff = std::move(arg);
    return Init_Trackstat_channels(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Trackstat msg_;
};

class Init_Trackstat_position_type
{
public:
  explicit Init_Trackstat_position_type(::mrs_modules_msgs::msg::Trackstat & msg)
  : msg_(msg)
  {}
  Init_Trackstat_cutoff position_type(::mrs_modules_msgs::msg::Trackstat::_position_type_type arg)
  {
    msg_.position_type = std::move(arg);
    return Init_Trackstat_cutoff(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Trackstat msg_;
};

class Init_Trackstat_solution_status
{
public:
  explicit Init_Trackstat_solution_status(::mrs_modules_msgs::msg::Trackstat & msg)
  : msg_(msg)
  {}
  Init_Trackstat_position_type solution_status(::mrs_modules_msgs::msg::Trackstat::_solution_status_type arg)
  {
    msg_.solution_status = std::move(arg);
    return Init_Trackstat_position_type(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Trackstat msg_;
};

class Init_Trackstat_header
{
public:
  Init_Trackstat_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trackstat_solution_status header(::mrs_modules_msgs::msg::Trackstat::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trackstat_solution_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Trackstat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Trackstat>()
{
  return mrs_modules_msgs::msg::builder::Init_Trackstat_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT__BUILDER_HPP_
