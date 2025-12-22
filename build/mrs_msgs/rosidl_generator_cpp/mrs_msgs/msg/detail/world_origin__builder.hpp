// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/WorldOrigin.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/world_origin.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__WORLD_ORIGIN__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__WORLD_ORIGIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/world_origin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldOrigin_y
{
public:
  explicit Init_WorldOrigin_y(::mrs_msgs::msg::WorldOrigin & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::WorldOrigin y(::mrs_msgs::msg::WorldOrigin::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::WorldOrigin msg_;
};

class Init_WorldOrigin_x
{
public:
  explicit Init_WorldOrigin_x(::mrs_msgs::msg::WorldOrigin & msg)
  : msg_(msg)
  {}
  Init_WorldOrigin_y x(::mrs_msgs::msg::WorldOrigin::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_WorldOrigin_y(msg_);
  }

private:
  ::mrs_msgs::msg::WorldOrigin msg_;
};

class Init_WorldOrigin_units
{
public:
  Init_WorldOrigin_units()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldOrigin_x units(::mrs_msgs::msg::WorldOrigin::_units_type arg)
  {
    msg_.units = std::move(arg);
    return Init_WorldOrigin_x(msg_);
  }

private:
  ::mrs_msgs::msg::WorldOrigin msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::WorldOrigin>()
{
  return mrs_msgs::msg::builder::Init_WorldOrigin_units();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__WORLD_ORIGIN__BUILDER_HPP_
