// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/OctomapPlannerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/octomap_planner_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/octomap_planner_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_OctomapPlannerDiagnostics_best_goal
{
public:
  explicit Init_OctomapPlannerDiagnostics_best_goal(::mrs_modules_msgs::msg::OctomapPlannerDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::OctomapPlannerDiagnostics best_goal(::mrs_modules_msgs::msg::OctomapPlannerDiagnostics::_best_goal_type arg)
  {
    msg_.best_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::OctomapPlannerDiagnostics msg_;
};

class Init_OctomapPlannerDiagnostics_desired_reference
{
public:
  explicit Init_OctomapPlannerDiagnostics_desired_reference(::mrs_modules_msgs::msg::OctomapPlannerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_OctomapPlannerDiagnostics_best_goal desired_reference(::mrs_modules_msgs::msg::OctomapPlannerDiagnostics::_desired_reference_type arg)
  {
    msg_.desired_reference = std::move(arg);
    return Init_OctomapPlannerDiagnostics_best_goal(msg_);
  }

private:
  ::mrs_modules_msgs::msg::OctomapPlannerDiagnostics msg_;
};

class Init_OctomapPlannerDiagnostics_idle
{
public:
  explicit Init_OctomapPlannerDiagnostics_idle(::mrs_modules_msgs::msg::OctomapPlannerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_OctomapPlannerDiagnostics_desired_reference idle(::mrs_modules_msgs::msg::OctomapPlannerDiagnostics::_idle_type arg)
  {
    msg_.idle = std::move(arg);
    return Init_OctomapPlannerDiagnostics_desired_reference(msg_);
  }

private:
  ::mrs_modules_msgs::msg::OctomapPlannerDiagnostics msg_;
};

class Init_OctomapPlannerDiagnostics_header
{
public:
  Init_OctomapPlannerDiagnostics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OctomapPlannerDiagnostics_idle header(::mrs_modules_msgs::msg::OctomapPlannerDiagnostics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OctomapPlannerDiagnostics_idle(msg_);
  }

private:
  ::mrs_modules_msgs::msg::OctomapPlannerDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::OctomapPlannerDiagnostics>()
{
  return mrs_modules_msgs::msg::builder::Init_OctomapPlannerDiagnostics_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__OCTOMAP_PLANNER_DIAGNOSTICS__BUILDER_HPP_
