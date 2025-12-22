// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/UInt16Stamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/u_int16_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__U_INT16_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__U_INT16_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/u_int16_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_UInt16Stamped_data
{
public:
  explicit Init_UInt16Stamped_data(::mrs_msgs::msg::UInt16Stamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::UInt16Stamped data(::mrs_msgs::msg::UInt16Stamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::UInt16Stamped msg_;
};

class Init_UInt16Stamped_header
{
public:
  Init_UInt16Stamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UInt16Stamped_data header(::mrs_msgs::msg::UInt16Stamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UInt16Stamped_data(msg_);
  }

private:
  ::mrs_msgs::msg::UInt16Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::UInt16Stamped>()
{
  return mrs_msgs::msg::builder::Init_UInt16Stamped_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__U_INT16_STAMPED__BUILDER_HPP_
