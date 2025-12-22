// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/VelocityReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/velocity_reference.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/velocity_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityReference_use_heading_rate
{
public:
  explicit Init_VelocityReference_use_heading_rate(::mrs_msgs::msg::VelocityReference & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::VelocityReference use_heading_rate(::mrs_msgs::msg::VelocityReference::_use_heading_rate_type arg)
  {
    msg_.use_heading_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReference msg_;
};

class Init_VelocityReference_use_heading
{
public:
  explicit Init_VelocityReference_use_heading(::mrs_msgs::msg::VelocityReference & msg)
  : msg_(msg)
  {}
  Init_VelocityReference_use_heading_rate use_heading(::mrs_msgs::msg::VelocityReference::_use_heading_type arg)
  {
    msg_.use_heading = std::move(arg);
    return Init_VelocityReference_use_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReference msg_;
};

class Init_VelocityReference_use_altitude
{
public:
  explicit Init_VelocityReference_use_altitude(::mrs_msgs::msg::VelocityReference & msg)
  : msg_(msg)
  {}
  Init_VelocityReference_use_heading use_altitude(::mrs_msgs::msg::VelocityReference::_use_altitude_type arg)
  {
    msg_.use_altitude = std::move(arg);
    return Init_VelocityReference_use_heading(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReference msg_;
};

class Init_VelocityReference_heading_rate
{
public:
  explicit Init_VelocityReference_heading_rate(::mrs_msgs::msg::VelocityReference & msg)
  : msg_(msg)
  {}
  Init_VelocityReference_use_altitude heading_rate(::mrs_msgs::msg::VelocityReference::_heading_rate_type arg)
  {
    msg_.heading_rate = std::move(arg);
    return Init_VelocityReference_use_altitude(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReference msg_;
};

class Init_VelocityReference_heading
{
public:
  explicit Init_VelocityReference_heading(::mrs_msgs::msg::VelocityReference & msg)
  : msg_(msg)
  {}
  Init_VelocityReference_heading_rate heading(::mrs_msgs::msg::VelocityReference::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_VelocityReference_heading_rate(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReference msg_;
};

class Init_VelocityReference_altitude
{
public:
  explicit Init_VelocityReference_altitude(::mrs_msgs::msg::VelocityReference & msg)
  : msg_(msg)
  {}
  Init_VelocityReference_heading altitude(::mrs_msgs::msg::VelocityReference::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_VelocityReference_heading(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReference msg_;
};

class Init_VelocityReference_velocity
{
public:
  Init_VelocityReference_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityReference_altitude velocity(::mrs_msgs::msg::VelocityReference::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_VelocityReference_altitude(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::VelocityReference>()
{
  return mrs_msgs::msg::builder::Init_VelocityReference_velocity();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE__BUILDER_HPP_
