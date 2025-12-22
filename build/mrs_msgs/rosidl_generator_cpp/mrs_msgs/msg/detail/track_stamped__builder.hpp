// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/TrackStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/track_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACK_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACK_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/track_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackStamped_track
{
public:
  explicit Init_TrackStamped_track(::mrs_msgs::msg::TrackStamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::TrackStamped track(::mrs_msgs::msg::TrackStamped::_track_type arg)
  {
    msg_.track = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::TrackStamped msg_;
};

class Init_TrackStamped_header
{
public:
  Init_TrackStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackStamped_track header(::mrs_msgs::msg::TrackStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackStamped_track(msg_);
  }

private:
  ::mrs_msgs::msg::TrackStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::TrackStamped>()
{
  return mrs_msgs::msg::builder::Init_TrackStamped_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRACK_STAMPED__BUILDER_HPP_
