// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/PathReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/path_reference.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/path_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_PathReference_points
{
public:
  explicit Init_PathReference_points(::mrs_msgs::msg::PathReference & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::PathReference points(::mrs_msgs::msg::PathReference::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::PathReference msg_;
};

class Init_PathReference_loop
{
public:
  explicit Init_PathReference_loop(::mrs_msgs::msg::PathReference & msg)
  : msg_(msg)
  {}
  Init_PathReference_points loop(::mrs_msgs::msg::PathReference::_loop_type arg)
  {
    msg_.loop = std::move(arg);
    return Init_PathReference_points(msg_);
  }

private:
  ::mrs_msgs::msg::PathReference msg_;
};

class Init_PathReference_fly_now
{
public:
  explicit Init_PathReference_fly_now(::mrs_msgs::msg::PathReference & msg)
  : msg_(msg)
  {}
  Init_PathReference_loop fly_now(::mrs_msgs::msg::PathReference::_fly_now_type arg)
  {
    msg_.fly_now = std::move(arg);
    return Init_PathReference_loop(msg_);
  }

private:
  ::mrs_msgs::msg::PathReference msg_;
};

class Init_PathReference_use_heading
{
public:
  explicit Init_PathReference_use_heading(::mrs_msgs::msg::PathReference & msg)
  : msg_(msg)
  {}
  Init_PathReference_fly_now use_heading(::mrs_msgs::msg::PathReference::_use_heading_type arg)
  {
    msg_.use_heading = std::move(arg);
    return Init_PathReference_fly_now(msg_);
  }

private:
  ::mrs_msgs::msg::PathReference msg_;
};

class Init_PathReference_header
{
public:
  Init_PathReference_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathReference_use_heading header(::mrs_msgs::msg::PathReference::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathReference_use_heading(msg_);
  }

private:
  ::mrs_msgs::msg::PathReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::PathReference>()
{
  return mrs_msgs::msg::builder::Init_PathReference_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PATH_REFERENCE__BUILDER_HPP_
