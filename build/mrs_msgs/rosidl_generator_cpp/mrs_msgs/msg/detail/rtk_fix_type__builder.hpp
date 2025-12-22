// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/RtkFixType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/rtk_fix_type.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/rtk_fix_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_RtkFixType_fix_type
{
public:
  Init_RtkFixType_fix_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrs_msgs::msg::RtkFixType fix_type(::mrs_msgs::msg::RtkFixType::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::RtkFixType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::RtkFixType>()
{
  return mrs_msgs::msg::builder::Init_RtkFixType_fix_type();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__RTK_FIX_TYPE__BUILDER_HPP_
