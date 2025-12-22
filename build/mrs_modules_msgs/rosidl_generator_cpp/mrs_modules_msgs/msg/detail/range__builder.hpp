// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Range.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/range.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Range_info
{
public:
  explicit Init_Range_info(::mrs_modules_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Range info(::mrs_modules_msgs::msg::Range::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Range msg_;
};

class Init_Range_numb_of_observ
{
public:
  explicit Init_Range_numb_of_observ(::mrs_modules_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_info numb_of_observ(::mrs_modules_msgs::msg::Range::_numb_of_observ_type arg)
  {
    msg_.numb_of_observ = std::move(arg);
    return Init_Range_info(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Range msg_;
};

class Init_Range_tersus_msg_header
{
public:
  explicit Init_Range_tersus_msg_header(::mrs_modules_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_numb_of_observ tersus_msg_header(::mrs_modules_msgs::msg::Range::_tersus_msg_header_type arg)
  {
    msg_.tersus_msg_header = std::move(arg);
    return Init_Range_numb_of_observ(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Range msg_;
};

class Init_Range_header
{
public:
  Init_Range_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Range_tersus_msg_header header(::mrs_modules_msgs::msg::Range::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Range_tersus_msg_header(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Range msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Range>()
{
  return mrs_modules_msgs::msg::builder::Init_Range_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_
