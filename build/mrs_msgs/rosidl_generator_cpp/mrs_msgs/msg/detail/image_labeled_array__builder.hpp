// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ImageLabeledArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/image_labeled_array.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__IMAGE_LABELED_ARRAY__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__IMAGE_LABELED_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/image_labeled_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageLabeledArray_imgs_labeled
{
public:
  explicit Init_ImageLabeledArray_imgs_labeled(::mrs_msgs::msg::ImageLabeledArray & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ImageLabeledArray imgs_labeled(::mrs_msgs::msg::ImageLabeledArray::_imgs_labeled_type arg)
  {
    msg_.imgs_labeled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ImageLabeledArray msg_;
};

class Init_ImageLabeledArray_header
{
public:
  Init_ImageLabeledArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageLabeledArray_imgs_labeled header(::mrs_msgs::msg::ImageLabeledArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImageLabeledArray_imgs_labeled(msg_);
  }

private:
  ::mrs_msgs::msg::ImageLabeledArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ImageLabeledArray>()
{
  return mrs_msgs::msg::builder::Init_ImageLabeledArray_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__IMAGE_LABELED_ARRAY__BUILDER_HPP_
