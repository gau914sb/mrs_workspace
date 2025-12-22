// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/pcl_tools_diagnostics.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_PclToolsDiagnostics_cols_after
{
public:
  explicit Init_PclToolsDiagnostics_cols_after(::mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::PclToolsDiagnostics cols_after(::mrs_modules_msgs::msg::PclToolsDiagnostics::_cols_after_type arg)
  {
    msg_.cols_after = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

class Init_PclToolsDiagnostics_rows_after
{
public:
  explicit Init_PclToolsDiagnostics_rows_after(::mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
  : msg_(msg)
  {}
  Init_PclToolsDiagnostics_cols_after rows_after(::mrs_modules_msgs::msg::PclToolsDiagnostics::_rows_after_type arg)
  {
    msg_.rows_after = std::move(arg);
    return Init_PclToolsDiagnostics_cols_after(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

class Init_PclToolsDiagnostics_cols_before
{
public:
  explicit Init_PclToolsDiagnostics_cols_before(::mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
  : msg_(msg)
  {}
  Init_PclToolsDiagnostics_rows_after cols_before(::mrs_modules_msgs::msg::PclToolsDiagnostics::_cols_before_type arg)
  {
    msg_.cols_before = std::move(arg);
    return Init_PclToolsDiagnostics_rows_after(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

class Init_PclToolsDiagnostics_rows_before
{
public:
  explicit Init_PclToolsDiagnostics_rows_before(::mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
  : msg_(msg)
  {}
  Init_PclToolsDiagnostics_cols_before rows_before(::mrs_modules_msgs::msg::PclToolsDiagnostics::_rows_before_type arg)
  {
    msg_.rows_before = std::move(arg);
    return Init_PclToolsDiagnostics_cols_before(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

class Init_PclToolsDiagnostics_vfov
{
public:
  explicit Init_PclToolsDiagnostics_vfov(::mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
  : msg_(msg)
  {}
  Init_PclToolsDiagnostics_rows_before vfov(::mrs_modules_msgs::msg::PclToolsDiagnostics::_vfov_type arg)
  {
    msg_.vfov = std::move(arg);
    return Init_PclToolsDiagnostics_rows_before(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

class Init_PclToolsDiagnostics_frequency
{
public:
  explicit Init_PclToolsDiagnostics_frequency(::mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
  : msg_(msg)
  {}
  Init_PclToolsDiagnostics_vfov frequency(::mrs_modules_msgs::msg::PclToolsDiagnostics::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_PclToolsDiagnostics_vfov(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

class Init_PclToolsDiagnostics_sensor_type
{
public:
  explicit Init_PclToolsDiagnostics_sensor_type(::mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
  : msg_(msg)
  {}
  Init_PclToolsDiagnostics_frequency sensor_type(::mrs_modules_msgs::msg::PclToolsDiagnostics::_sensor_type_type arg)
  {
    msg_.sensor_type = std::move(arg);
    return Init_PclToolsDiagnostics_frequency(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

class Init_PclToolsDiagnostics_sensor_name
{
public:
  explicit Init_PclToolsDiagnostics_sensor_name(::mrs_modules_msgs::msg::PclToolsDiagnostics & msg)
  : msg_(msg)
  {}
  Init_PclToolsDiagnostics_sensor_type sensor_name(::mrs_modules_msgs::msg::PclToolsDiagnostics::_sensor_name_type arg)
  {
    msg_.sensor_name = std::move(arg);
    return Init_PclToolsDiagnostics_sensor_type(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

class Init_PclToolsDiagnostics_stamp
{
public:
  Init_PclToolsDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PclToolsDiagnostics_sensor_name stamp(::mrs_modules_msgs::msg::PclToolsDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_PclToolsDiagnostics_sensor_name(msg_);
  }

private:
  ::mrs_modules_msgs::msg::PclToolsDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::PclToolsDiagnostics>()
{
  return mrs_modules_msgs::msg::builder::Init_PclToolsDiagnostics_stamp();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__BUILDER_HPP_
