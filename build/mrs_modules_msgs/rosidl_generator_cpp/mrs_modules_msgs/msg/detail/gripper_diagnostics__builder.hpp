// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/GripperDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gripper_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gripper_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperDiagnostics_proximity2_debug
{
public:
  explicit Init_GripperDiagnostics_proximity2_debug(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::GripperDiagnostics proximity2_debug(::mrs_modules_msgs::msg::GripperDiagnostics::_proximity2_debug_type arg)
  {
    msg_.proximity2_debug = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_proximity1_debug
{
public:
  explicit Init_GripperDiagnostics_proximity1_debug(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_proximity2_debug proximity1_debug(::mrs_modules_msgs::msg::GripperDiagnostics::_proximity1_debug_type arg)
  {
    msg_.proximity1_debug = std::move(arg);
    return Init_GripperDiagnostics_proximity2_debug(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_has_proximity
{
public:
  explicit Init_GripperDiagnostics_has_proximity(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_proximity1_debug has_proximity(::mrs_modules_msgs::msg::GripperDiagnostics::_has_proximity_type arg)
  {
    msg_.has_proximity = std::move(arg);
    return Init_GripperDiagnostics_proximity1_debug(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_ultrasonic2_debug
{
public:
  explicit Init_GripperDiagnostics_ultrasonic2_debug(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_has_proximity ultrasonic2_debug(::mrs_modules_msgs::msg::GripperDiagnostics::_ultrasonic2_debug_type arg)
  {
    msg_.ultrasonic2_debug = std::move(arg);
    return Init_GripperDiagnostics_has_proximity(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_ultrasonic1_debug
{
public:
  explicit Init_GripperDiagnostics_ultrasonic1_debug(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_ultrasonic2_debug ultrasonic1_debug(::mrs_modules_msgs::msg::GripperDiagnostics::_ultrasonic1_debug_type arg)
  {
    msg_.ultrasonic1_debug = std::move(arg);
    return Init_GripperDiagnostics_ultrasonic2_debug(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_has_ultrasonic
{
public:
  explicit Init_GripperDiagnostics_has_ultrasonic(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_ultrasonic1_debug has_ultrasonic(::mrs_modules_msgs::msg::GripperDiagnostics::_has_ultrasonic_type arg)
  {
    msg_.has_ultrasonic = std::move(arg);
    return Init_GripperDiagnostics_ultrasonic1_debug(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_hall2_debug
{
public:
  explicit Init_GripperDiagnostics_hall2_debug(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_has_ultrasonic hall2_debug(::mrs_modules_msgs::msg::GripperDiagnostics::_hall2_debug_type arg)
  {
    msg_.hall2_debug = std::move(arg);
    return Init_GripperDiagnostics_has_ultrasonic(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_hall1_debug
{
public:
  explicit Init_GripperDiagnostics_hall1_debug(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_hall2_debug hall1_debug(::mrs_modules_msgs::msg::GripperDiagnostics::_hall1_debug_type arg)
  {
    msg_.hall1_debug = std::move(arg);
    return Init_GripperDiagnostics_hall2_debug(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_has_hall
{
public:
  explicit Init_GripperDiagnostics_has_hall(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_hall1_debug has_hall(::mrs_modules_msgs::msg::GripperDiagnostics::_has_hall_type arg)
  {
    msg_.has_hall = std::move(arg);
    return Init_GripperDiagnostics_hall1_debug(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_gripping_object
{
public:
  explicit Init_GripperDiagnostics_gripping_object(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_has_hall gripping_object(::mrs_modules_msgs::msg::GripperDiagnostics::_gripping_object_type arg)
  {
    msg_.gripping_object = std::move(arg);
    return Init_GripperDiagnostics_has_hall(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_gripper_on
{
public:
  explicit Init_GripperDiagnostics_gripper_on(::mrs_modules_msgs::msg::GripperDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnostics_gripping_object gripper_on(::mrs_modules_msgs::msg::GripperDiagnostics::_gripper_on_type arg)
  {
    msg_.gripper_on = std::move(arg);
    return Init_GripperDiagnostics_gripping_object(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

class Init_GripperDiagnostics_stamp
{
public:
  Init_GripperDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperDiagnostics_gripper_on stamp(::mrs_modules_msgs::msg::GripperDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GripperDiagnostics_gripper_on(msg_);
  }

private:
  ::mrs_modules_msgs::msg::GripperDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::GripperDiagnostics>()
{
  return mrs_modules_msgs::msg::builder::Init_GripperDiagnostics_stamp();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GRIPPER_DIAGNOSTICS__BUILDER_HPP_
