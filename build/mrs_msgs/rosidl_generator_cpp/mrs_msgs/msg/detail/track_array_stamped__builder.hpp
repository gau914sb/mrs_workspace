// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/TrackArrayStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/track_array_stamped.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__TRACK_ARRAY_STAMPED__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__TRACK_ARRAY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/track_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackArrayStamped_tracks
{
public:
  explicit Init_TrackArrayStamped_tracks(::mrs_msgs::msg::TrackArrayStamped & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::TrackArrayStamped tracks(::mrs_msgs::msg::TrackArrayStamped::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::TrackArrayStamped msg_;
};

class Init_TrackArrayStamped_header
{
public:
  Init_TrackArrayStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackArrayStamped_tracks header(::mrs_msgs::msg::TrackArrayStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackArrayStamped_tracks(msg_);
  }

private:
  ::mrs_msgs::msg::TrackArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::TrackArrayStamped>()
{
  return mrs_msgs::msg::builder::Init_TrackArrayStamped_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__TRACK_ARRAY_STAMPED__BUILDER_HPP_
