// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Prism.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/prism.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PRISM__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__PRISM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/prism__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Prism_min_z
{
public:
  explicit Init_Prism_min_z(::mrs_msgs::msg::Prism & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::Prism min_z(::mrs_msgs::msg::Prism::_min_z_type arg)
  {
    msg_.min_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Prism msg_;
};

class Init_Prism_max_z
{
public:
  explicit Init_Prism_max_z(::mrs_msgs::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_min_z max_z(::mrs_msgs::msg::Prism::_max_z_type arg)
  {
    msg_.max_z = std::move(arg);
    return Init_Prism_min_z(msg_);
  }

private:
  ::mrs_msgs::msg::Prism msg_;
};

class Init_Prism_points
{
public:
  explicit Init_Prism_points(::mrs_msgs::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_max_z points(::mrs_msgs::msg::Prism::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_Prism_max_z(msg_);
  }

private:
  ::mrs_msgs::msg::Prism msg_;
};

class Init_Prism_vertical_frame
{
public:
  explicit Init_Prism_vertical_frame(::mrs_msgs::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_points vertical_frame(::mrs_msgs::msg::Prism::_vertical_frame_type arg)
  {
    msg_.vertical_frame = std::move(arg);
    return Init_Prism_points(msg_);
  }

private:
  ::mrs_msgs::msg::Prism msg_;
};

class Init_Prism_horizontal_frame
{
public:
  Init_Prism_horizontal_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Prism_vertical_frame horizontal_frame(::mrs_msgs::msg::Prism::_horizontal_frame_type arg)
  {
    msg_.horizontal_frame = std::move(arg);
    return Init_Prism_vertical_frame(msg_);
  }

private:
  ::mrs_msgs::msg::Prism msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Prism>()
{
  return mrs_msgs::msg::builder::Init_Prism_horizontal_frame();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PRISM__BUILDER_HPP_
