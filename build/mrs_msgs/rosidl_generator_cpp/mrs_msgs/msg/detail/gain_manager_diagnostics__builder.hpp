// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/GainManagerDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gain_manager_diagnostics.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/gain_manager_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_GainManagerDiagnostics_current_values
{
public:
  explicit Init_GainManagerDiagnostics_current_values(::mrs_msgs::msg::GainManagerDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::GainManagerDiagnostics current_values(::mrs_msgs::msg::GainManagerDiagnostics::_current_values_type arg)
  {
    msg_.current_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::GainManagerDiagnostics msg_;
};

class Init_GainManagerDiagnostics_current_name
{
public:
  explicit Init_GainManagerDiagnostics_current_name(::mrs_msgs::msg::GainManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GainManagerDiagnostics_current_values current_name(::mrs_msgs::msg::GainManagerDiagnostics::_current_name_type arg)
  {
    msg_.current_name = std::move(arg);
    return Init_GainManagerDiagnostics_current_values(msg_);
  }

private:
  ::mrs_msgs::msg::GainManagerDiagnostics msg_;
};

class Init_GainManagerDiagnostics_available
{
public:
  explicit Init_GainManagerDiagnostics_available(::mrs_msgs::msg::GainManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GainManagerDiagnostics_current_name available(::mrs_msgs::msg::GainManagerDiagnostics::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_GainManagerDiagnostics_current_name(msg_);
  }

private:
  ::mrs_msgs::msg::GainManagerDiagnostics msg_;
};

class Init_GainManagerDiagnostics_loaded
{
public:
  explicit Init_GainManagerDiagnostics_loaded(::mrs_msgs::msg::GainManagerDiagnostics & msg)
  : msg_(msg)
  {}
  Init_GainManagerDiagnostics_available loaded(::mrs_msgs::msg::GainManagerDiagnostics::_loaded_type arg)
  {
    msg_.loaded = std::move(arg);
    return Init_GainManagerDiagnostics_available(msg_);
  }

private:
  ::mrs_msgs::msg::GainManagerDiagnostics msg_;
};

class Init_GainManagerDiagnostics_stamp
{
public:
  Init_GainManagerDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GainManagerDiagnostics_loaded stamp(::mrs_msgs::msg::GainManagerDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GainManagerDiagnostics_loaded(msg_);
  }

private:
  ::mrs_msgs::msg::GainManagerDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::GainManagerDiagnostics>()
{
  return mrs_msgs::msg::builder::Init_GainManagerDiagnostics_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GAIN_MANAGER_DIAGNOSTICS__BUILDER_HPP_
