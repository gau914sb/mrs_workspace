// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ReferenceStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/reference_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__REFERENCE_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__REFERENCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/reference_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ReferenceStamped_reference
{
public:
  explicit Init_ReferenceStamped_reference(::mrs_msgs::msg::ReferenceStamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ReferenceStamped reference(::mrs_msgs::msg::ReferenceStamped::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ReferenceStamped msg_;
};

class Init_ReferenceStamped_header
{
public:
  Init_ReferenceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceStamped_reference header(::mrs_msgs::msg::ReferenceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReferenceStamped_reference(msg_);
  }

private:
  ::mrs_msgs::msg::ReferenceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ReferenceStamped>()
{
  return mrs_msgs::msg::builder::Init_ReferenceStamped_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__REFERENCE_STAMPED__BUILDER_HPP_
