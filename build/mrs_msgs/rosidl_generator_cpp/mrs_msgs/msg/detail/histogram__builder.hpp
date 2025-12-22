// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/histogram.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__HISTOGRAM__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__HISTOGRAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/histogram__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Histogram_bins
{
public:
  explicit Init_Histogram_bins(::mrs_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::Histogram bins(::mrs_msgs::msg::Histogram::_bins_type arg)
  {
    msg_.bins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Histogram msg_;
};

class Init_Histogram_bin_mark
{
public:
  explicit Init_Histogram_bin_mark(::mrs_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_bins bin_mark(::mrs_msgs::msg::Histogram::_bin_mark_type arg)
  {
    msg_.bin_mark = std::move(arg);
    return Init_Histogram_bins(msg_);
  }

private:
  ::mrs_msgs::msg::Histogram msg_;
};

class Init_Histogram_bin_max
{
public:
  explicit Init_Histogram_bin_max(::mrs_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_bin_mark bin_max(::mrs_msgs::msg::Histogram::_bin_max_type arg)
  {
    msg_.bin_max = std::move(arg);
    return Init_Histogram_bin_mark(msg_);
  }

private:
  ::mrs_msgs::msg::Histogram msg_;
};

class Init_Histogram_bin_min
{
public:
  explicit Init_Histogram_bin_min(::mrs_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_bin_max bin_min(::mrs_msgs::msg::Histogram::_bin_min_type arg)
  {
    msg_.bin_min = std::move(arg);
    return Init_Histogram_bin_max(msg_);
  }

private:
  ::mrs_msgs::msg::Histogram msg_;
};

class Init_Histogram_bin_size
{
public:
  explicit Init_Histogram_bin_size(::mrs_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_bin_min bin_size(::mrs_msgs::msg::Histogram::_bin_size_type arg)
  {
    msg_.bin_size = std::move(arg);
    return Init_Histogram_bin_min(msg_);
  }

private:
  ::mrs_msgs::msg::Histogram msg_;
};

class Init_Histogram_unit
{
public:
  explicit Init_Histogram_unit(::mrs_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_bin_size unit(::mrs_msgs::msg::Histogram::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_Histogram_bin_size(msg_);
  }

private:
  ::mrs_msgs::msg::Histogram msg_;
};

class Init_Histogram_header
{
public:
  Init_Histogram_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Histogram_unit header(::mrs_msgs::msg::Histogram::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Histogram_unit(msg_);
  }

private:
  ::mrs_msgs::msg::Histogram msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Histogram>()
{
  return mrs_msgs::msg::builder::Init_Histogram_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__HISTOGRAM__BUILDER_HPP_
