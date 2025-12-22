// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/sphere.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::mrs_msgs::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::Sphere radius(::mrs_msgs::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Sphere msg_;
};

class Init_Sphere_position
{
public:
  explicit Init_Sphere_position(::mrs_msgs::msg::Sphere & msg)
  : msg_(msg)
  {}
  Init_Sphere_radius position(::mrs_msgs::msg::Sphere::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::mrs_msgs::msg::Sphere msg_;
};

class Init_Sphere_header
{
public:
  Init_Sphere_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_position header(::mrs_msgs::msg::Sphere::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Sphere_position(msg_);
  }

private:
  ::mrs_msgs::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Sphere>()
{
  return mrs_msgs::msg::builder::Init_Sphere_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SPHERE__BUILDER_HPP_
