// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/VelocityReferenceStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/velocity_reference_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/velocity_reference_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityReferenceStamped_reference
{
public:
  explicit Init_VelocityReferenceStamped_reference(::mrs_msgs::msg::VelocityReferenceStamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::VelocityReferenceStamped reference(::mrs_msgs::msg::VelocityReferenceStamped::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReferenceStamped msg_;
};

class Init_VelocityReferenceStamped_header
{
public:
  Init_VelocityReferenceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityReferenceStamped_reference header(::mrs_msgs::msg::VelocityReferenceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelocityReferenceStamped_reference(msg_);
  }

private:
  ::mrs_msgs::msg::VelocityReferenceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::VelocityReferenceStamped>()
{
  return mrs_msgs::msg::builder::Init_VelocityReferenceStamped_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__VELOCITY_REFERENCE_STAMPED__BUILDER_HPP_
