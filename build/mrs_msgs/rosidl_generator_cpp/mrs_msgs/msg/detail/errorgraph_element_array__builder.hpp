// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ErrorgraphElementArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/errorgraph_element_array.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/errorgraph_element_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ErrorgraphElementArray_elements
{
public:
  explicit Init_ErrorgraphElementArray_elements(::mrs_msgs::msg::ErrorgraphElementArray & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ErrorgraphElementArray elements(::mrs_msgs::msg::ErrorgraphElementArray::_elements_type arg)
  {
    msg_.elements = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphElementArray msg_;
};

class Init_ErrorgraphElementArray_stamp
{
public:
  Init_ErrorgraphElementArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorgraphElementArray_elements stamp(::mrs_msgs::msg::ErrorgraphElementArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ErrorgraphElementArray_elements(msg_);
  }

private:
  ::mrs_msgs::msg::ErrorgraphElementArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ErrorgraphElementArray>()
{
  return mrs_msgs::msg::builder::Init_ErrorgraphElementArray_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__ERRORGRAPH_ELEMENT_ARRAY__BUILDER_HPP_
