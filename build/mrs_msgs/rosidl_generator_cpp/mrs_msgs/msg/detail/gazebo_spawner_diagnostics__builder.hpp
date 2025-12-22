// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gazebo_spawner_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/gazebo_spawner_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_GazeboSpawnerDiagnostics_queued_processes
{
public:
  explicit Init_GazeboSpawnerDiagnostics_queued_processes(::mrs_msgs::msg::GazeboSpawnerDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::GazeboSpawnerDiagnostics queued_processes(::mrs_msgs::msg::GazeboSpawnerDiagnostics::_queued_processes_type arg)
  {
    msg_.queued_processes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::GazeboSpawnerDiagnostics msg_;
};

class Init_GazeboSpawnerDiagnostics_queued_vehicles
{
public:
  explicit Init_GazeboSpawnerDiagnostics_queued_vehicles(::mrs_msgs::msg::GazeboSpawnerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GazeboSpawnerDiagnostics_queued_processes queued_vehicles(::mrs_msgs::msg::GazeboSpawnerDiagnostics::_queued_vehicles_type arg)
  {
    msg_.queued_vehicles = std::move(arg);
    return Init_GazeboSpawnerDiagnostics_queued_processes(msg_);
  }

private:
  ::mrs_msgs::msg::GazeboSpawnerDiagnostics msg_;
};

class Init_GazeboSpawnerDiagnostics_active_vehicles
{
public:
  explicit Init_GazeboSpawnerDiagnostics_active_vehicles(::mrs_msgs::msg::GazeboSpawnerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GazeboSpawnerDiagnostics_queued_vehicles active_vehicles(::mrs_msgs::msg::GazeboSpawnerDiagnostics::_active_vehicles_type arg)
  {
    msg_.active_vehicles = std::move(arg);
    return Init_GazeboSpawnerDiagnostics_queued_vehicles(msg_);
  }

private:
  ::mrs_msgs::msg::GazeboSpawnerDiagnostics msg_;
};

class Init_GazeboSpawnerDiagnostics_processing
{
public:
  explicit Init_GazeboSpawnerDiagnostics_processing(::mrs_msgs::msg::GazeboSpawnerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GazeboSpawnerDiagnostics_active_vehicles processing(::mrs_msgs::msg::GazeboSpawnerDiagnostics::_processing_type arg)
  {
    msg_.processing = std::move(arg);
    return Init_GazeboSpawnerDiagnostics_active_vehicles(msg_);
  }

private:
  ::mrs_msgs::msg::GazeboSpawnerDiagnostics msg_;
};

class Init_GazeboSpawnerDiagnostics_spawn_called
{
public:
  Init_GazeboSpawnerDiagnostics_spawn_called()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GazeboSpawnerDiagnostics_processing spawn_called(::mrs_msgs::msg::GazeboSpawnerDiagnostics::_spawn_called_type arg)
  {
    msg_.spawn_called = std::move(arg);
    return Init_GazeboSpawnerDiagnostics_processing(msg_);
  }

private:
  ::mrs_msgs::msg::GazeboSpawnerDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::GazeboSpawnerDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_GazeboSpawnerDiagnostics_spawn_called();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GAZEBO_SPAWNER_DIAGNOSTICS__BUILDER_HPP_
