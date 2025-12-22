// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ImageLabeled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/image_labeled.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/image_labeled__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageLabeled_img
{
public:
  explicit Init_ImageLabeled_img(::mrs_msgs::msg::ImageLabeled & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ImageLabeled img(::mrs_msgs::msg::ImageLabeled::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ImageLabeled msg_;
};

class Init_ImageLabeled_label
{
public:
  Init_ImageLabeled_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageLabeled_img label(::mrs_msgs::msg::ImageLabeled::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_ImageLabeled_img(msg_);
  }

private:
  ::mrs_msgs::msg::ImageLabeled msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ImageLabeled>()
{
  return mrs_msgs::msg::builder::Init_ImageLabeled_label();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__IMAGE_LABELED__BUILDER_HPP_
