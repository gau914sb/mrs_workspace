// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ProfilerUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/profiler_update.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/profiler_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ProfilerUpdate_event
{
public:
  explicit Init_ProfilerUpdate_event(::mrs_msgs::msg::ProfilerUpdate & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ProfilerUpdate event(::mrs_msgs::msg::ProfilerUpdate::_event_type arg)
  {
    msg_.event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ProfilerUpdate msg_;
};

class Init_ProfilerUpdate_duration
{
public:
  explicit Init_ProfilerUpdate_duration(::mrs_msgs::msg::ProfilerUpdate & msg)
  : msg_(msg)
  {}
  Init_ProfilerUpdate_event duration(::mrs_msgs::msg::ProfilerUpdate::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_ProfilerUpdate_event(msg_);
  }

private:
  ::mrs_msgs::msg::ProfilerUpdate msg_;
};

class Init_ProfilerUpdate_iteration
{
public:
  explicit Init_ProfilerUpdate_iteration(::mrs_msgs::msg::ProfilerUpdate & msg)
  : msg_(msg)
  {}
  Init_ProfilerUpdate_duration iteration(::mrs_msgs::msg::ProfilerUpdate::_iteration_type arg)
  {
    msg_.iteration = std::move(arg);
    return Init_ProfilerUpdate_duration(msg_);
  }

private:
  ::mrs_msgs::msg::ProfilerUpdate msg_;
};

class Init_ProfilerUpdate_routine_name
{
public:
  explicit Init_ProfilerUpdate_routine_name(::mrs_msgs::msg::ProfilerUpdate & msg)
  : msg_(msg)
  {}
  Init_ProfilerUpdate_iteration routine_name(::mrs_msgs::msg::ProfilerUpdate::_routine_name_type arg)
  {
    msg_.routine_name = std::move(arg);
    return Init_ProfilerUpdate_iteration(msg_);
  }

private:
  ::mrs_msgs::msg::ProfilerUpdate msg_;
};

class Init_ProfilerUpdate_node_name
{
public:
  explicit Init_ProfilerUpdate_node_name(::mrs_msgs::msg::ProfilerUpdate & msg)
  : msg_(msg)
  {}
  Init_ProfilerUpdate_routine_name node_name(::mrs_msgs::msg::ProfilerUpdate::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_ProfilerUpdate_routine_name(msg_);
  }

private:
  ::mrs_msgs::msg::ProfilerUpdate msg_;
};

class Init_ProfilerUpdate_stamp
{
public:
  Init_ProfilerUpdate_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProfilerUpdate_node_name stamp(::mrs_msgs::msg::ProfilerUpdate::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ProfilerUpdate_node_name(msg_);
  }

private:
  ::mrs_msgs::msg::ProfilerUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ProfilerUpdate>()
{
  return mrs_msgs::msg::builder::Init_ProfilerUpdate_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__PROFILER_UPDATE__BUILDER_HPP_
