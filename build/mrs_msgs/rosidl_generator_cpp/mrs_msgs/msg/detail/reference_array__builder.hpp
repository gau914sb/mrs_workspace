// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ReferenceArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/reference_array.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__REFERENCE_ARRAY__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__REFERENCE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/reference_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ReferenceArray_array
{
public:
  explicit Init_ReferenceArray_array(::mrs_msgs::msg::ReferenceArray & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ReferenceArray array(::mrs_msgs::msg::ReferenceArray::_array_type arg)
  {
    msg_.array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ReferenceArray msg_;
};

class Init_ReferenceArray_header
{
public:
  Init_ReferenceArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceArray_array header(::mrs_msgs::msg::ReferenceArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReferenceArray_array(msg_);
  }

private:
  ::mrs_msgs::msg::ReferenceArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ReferenceArray>()
{
  return mrs_msgs::msg::builder::Init_ReferenceArray_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__REFERENCE_ARRAY__BUILDER_HPP_
