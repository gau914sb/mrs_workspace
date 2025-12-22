// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/FutureTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/future_trajectory.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/future_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_FutureTrajectory_points
{
public:
  explicit Init_FutureTrajectory_points(::mrs_msgs::msg::FutureTrajectory & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::FutureTrajectory points(::mrs_msgs::msg::FutureTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::FutureTrajectory msg_;
};

class Init_FutureTrajectory_collision_avoidance
{
public:
  explicit Init_FutureTrajectory_collision_avoidance(::mrs_msgs::msg::FutureTrajectory & msg)
  : msg_(msg)
  {}
  Init_FutureTrajectory_points collision_avoidance(::mrs_msgs::msg::FutureTrajectory::_collision_avoidance_type arg)
  {
    msg_.collision_avoidance = std::move(arg);
    return Init_FutureTrajectory_points(msg_);
  }

private:
  ::mrs_msgs::msg::FutureTrajectory msg_;
};

class Init_FutureTrajectory_priority
{
public:
  explicit Init_FutureTrajectory_priority(::mrs_msgs::msg::FutureTrajectory & msg)
  : msg_(msg)
  {}
  Init_FutureTrajectory_collision_avoidance priority(::mrs_msgs::msg::FutureTrajectory::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_FutureTrajectory_collision_avoidance(msg_);
  }

private:
  ::mrs_msgs::msg::FutureTrajectory msg_;
};

class Init_FutureTrajectory_uav_name
{
public:
  explicit Init_FutureTrajectory_uav_name(::mrs_msgs::msg::FutureTrajectory & msg)
  : msg_(msg)
  {}
  Init_FutureTrajectory_priority uav_name(::mrs_msgs::msg::FutureTrajectory::_uav_name_type arg)
  {
    msg_.uav_name = std::move(arg);
    return Init_FutureTrajectory_priority(msg_);
  }

private:
  ::mrs_msgs::msg::FutureTrajectory msg_;
};

class Init_FutureTrajectory_stamp
{
public:
  Init_FutureTrajectory_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FutureTrajectory_uav_name stamp(::mrs_msgs::msg::FutureTrajectory::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_FutureTrajectory_uav_name(msg_);
  }

private:
  ::mrs_msgs::msg::FutureTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::FutureTrajectory>()
{
  return mrs_msgs::msg::builder::Init_FutureTrajectory_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__FUTURE_TRAJECTORY__BUILDER_HPP_
