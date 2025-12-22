// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/controller_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/controller_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerDiagnostics_vertical_desc_acc_constraint
{
public:
  explicit Init_ControllerDiagnostics_vertical_desc_acc_constraint(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ControllerDiagnostics vertical_desc_acc_constraint(::mrs_msgs::msg::ControllerDiagnostics::_vertical_desc_acc_constraint_type arg)
  {
    msg_.vertical_desc_acc_constraint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_vertical_desc_speed_constraint
{
public:
  explicit Init_ControllerDiagnostics_vertical_desc_speed_constraint(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_vertical_desc_acc_constraint vertical_desc_speed_constraint(::mrs_msgs::msg::ControllerDiagnostics::_vertical_desc_speed_constraint_type arg)
  {
    msg_.vertical_desc_speed_constraint = std::move(arg);
    return Init_ControllerDiagnostics_vertical_desc_acc_constraint(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_vertical_asc_acc_constraint
{
public:
  explicit Init_ControllerDiagnostics_vertical_asc_acc_constraint(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_vertical_desc_speed_constraint vertical_asc_acc_constraint(::mrs_msgs::msg::ControllerDiagnostics::_vertical_asc_acc_constraint_type arg)
  {
    msg_.vertical_asc_acc_constraint = std::move(arg);
    return Init_ControllerDiagnostics_vertical_desc_speed_constraint(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_vertical_asc_speed_constraint
{
public:
  explicit Init_ControllerDiagnostics_vertical_asc_speed_constraint(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_vertical_asc_acc_constraint vertical_asc_speed_constraint(::mrs_msgs::msg::ControllerDiagnostics::_vertical_asc_speed_constraint_type arg)
  {
    msg_.vertical_asc_speed_constraint = std::move(arg);
    return Init_ControllerDiagnostics_vertical_asc_acc_constraint(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_horizontal_acc_constraint
{
public:
  explicit Init_ControllerDiagnostics_horizontal_acc_constraint(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_vertical_asc_speed_constraint horizontal_acc_constraint(::mrs_msgs::msg::ControllerDiagnostics::_horizontal_acc_constraint_type arg)
  {
    msg_.horizontal_acc_constraint = std::move(arg);
    return Init_ControllerDiagnostics_vertical_asc_speed_constraint(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_horizontal_speed_constraint
{
public:
  explicit Init_ControllerDiagnostics_horizontal_speed_constraint(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_horizontal_acc_constraint horizontal_speed_constraint(::mrs_msgs::msg::ControllerDiagnostics::_horizontal_speed_constraint_type arg)
  {
    msg_.horizontal_speed_constraint = std::move(arg);
    return Init_ControllerDiagnostics_horizontal_acc_constraint(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_controller_enforcing_constraints
{
public:
  explicit Init_ControllerDiagnostics_controller_enforcing_constraints(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_horizontal_speed_constraint controller_enforcing_constraints(::mrs_msgs::msg::ControllerDiagnostics::_controller_enforcing_constraints_type arg)
  {
    msg_.controller_enforcing_constraints = std::move(arg);
    return Init_ControllerDiagnostics_horizontal_speed_constraint(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_disturbance_by_b
{
public:
  explicit Init_ControllerDiagnostics_disturbance_by_b(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_controller_enforcing_constraints disturbance_by_b(::mrs_msgs::msg::ControllerDiagnostics::_disturbance_by_b_type arg)
  {
    msg_.disturbance_by_b = std::move(arg);
    return Init_ControllerDiagnostics_controller_enforcing_constraints(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_disturbance_bx_b
{
public:
  explicit Init_ControllerDiagnostics_disturbance_bx_b(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_disturbance_by_b disturbance_bx_b(::mrs_msgs::msg::ControllerDiagnostics::_disturbance_bx_b_type arg)
  {
    msg_.disturbance_bx_b = std::move(arg);
    return Init_ControllerDiagnostics_disturbance_by_b(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_disturbance_by_w
{
public:
  explicit Init_ControllerDiagnostics_disturbance_by_w(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_disturbance_bx_b disturbance_by_w(::mrs_msgs::msg::ControllerDiagnostics::_disturbance_by_w_type arg)
  {
    msg_.disturbance_by_w = std::move(arg);
    return Init_ControllerDiagnostics_disturbance_bx_b(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_disturbance_bx_w
{
public:
  explicit Init_ControllerDiagnostics_disturbance_bx_w(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_disturbance_by_w disturbance_bx_w(::mrs_msgs::msg::ControllerDiagnostics::_disturbance_bx_w_type arg)
  {
    msg_.disturbance_bx_w = std::move(arg);
    return Init_ControllerDiagnostics_disturbance_by_w(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_disturbance_wy_w
{
public:
  explicit Init_ControllerDiagnostics_disturbance_wy_w(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_disturbance_bx_w disturbance_wy_w(::mrs_msgs::msg::ControllerDiagnostics::_disturbance_wy_w_type arg)
  {
    msg_.disturbance_wy_w = std::move(arg);
    return Init_ControllerDiagnostics_disturbance_bx_w(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_disturbance_wx_w
{
public:
  explicit Init_ControllerDiagnostics_disturbance_wx_w(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_disturbance_wy_w disturbance_wx_w(::mrs_msgs::msg::ControllerDiagnostics::_disturbance_wx_w_type arg)
  {
    msg_.disturbance_wx_w = std::move(arg);
    return Init_ControllerDiagnostics_disturbance_wy_w(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_disturbance_estimator
{
public:
  explicit Init_ControllerDiagnostics_disturbance_estimator(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_disturbance_wx_w disturbance_estimator(::mrs_msgs::msg::ControllerDiagnostics::_disturbance_estimator_type arg)
  {
    msg_.disturbance_estimator = std::move(arg);
    return Init_ControllerDiagnostics_disturbance_wx_w(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_total_mass
{
public:
  explicit Init_ControllerDiagnostics_total_mass(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_disturbance_estimator total_mass(::mrs_msgs::msg::ControllerDiagnostics::_total_mass_type arg)
  {
    msg_.total_mass = std::move(arg);
    return Init_ControllerDiagnostics_disturbance_estimator(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_mass_difference
{
public:
  explicit Init_ControllerDiagnostics_mass_difference(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_total_mass mass_difference(::mrs_msgs::msg::ControllerDiagnostics::_mass_difference_type arg)
  {
    msg_.mass_difference = std::move(arg);
    return Init_ControllerDiagnostics_total_mass(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_mass_estimator
{
public:
  explicit Init_ControllerDiagnostics_mass_estimator(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_mass_difference mass_estimator(::mrs_msgs::msg::ControllerDiagnostics::_mass_estimator_type arg)
  {
    msg_.mass_estimator = std::move(arg);
    return Init_ControllerDiagnostics_mass_difference(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_ramping_up
{
public:
  explicit Init_ControllerDiagnostics_ramping_up(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_mass_estimator ramping_up(::mrs_msgs::msg::ControllerDiagnostics::_ramping_up_type arg)
  {
    msg_.ramping_up = std::move(arg);
    return Init_ControllerDiagnostics_mass_estimator(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_controller
{
public:
  explicit Init_ControllerDiagnostics_controller(::mrs_msgs::msg::ControllerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_ControllerDiagnostics_ramping_up controller(::mrs_msgs::msg::ControllerDiagnostics::_controller_type arg)
  {
    msg_.controller = std::move(arg);
    return Init_ControllerDiagnostics_ramping_up(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

class Init_ControllerDiagnostics_stamp
{
public:
  Init_ControllerDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerDiagnostics_controller stamp(::mrs_msgs::msg::ControllerDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControllerDiagnostics_controller(msg_);
  }

private:
  ::mrs_msgs::msg::ControllerDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ControllerDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_ControllerDiagnostics_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__CONTROLLER_DIAGNOSTICS__BUILDER_HPP_
