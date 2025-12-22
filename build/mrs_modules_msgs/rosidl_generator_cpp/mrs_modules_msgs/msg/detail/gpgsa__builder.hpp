// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgsa.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGSA__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGSA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gpgsa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpgsa_vdop
{
public:
  explicit Init_Gpgsa_vdop(::mrs_modules_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Gpgsa vdop(::mrs_modules_msgs::msg::Gpgsa::_vdop_type arg)
  {
    msg_.vdop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_hdop
{
public:
  explicit Init_Gpgsa_hdop(::mrs_modules_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_vdop hdop(::mrs_modules_msgs::msg::Gpgsa::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_Gpgsa_vdop(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_pdop
{
public:
  explicit Init_Gpgsa_pdop(::mrs_modules_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_hdop pdop(::mrs_modules_msgs::msg::Gpgsa::_pdop_type arg)
  {
    msg_.pdop = std::move(arg);
    return Init_Gpgsa_hdop(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_prn
{
public:
  explicit Init_Gpgsa_prn(::mrs_modules_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_pdop prn(::mrs_modules_msgs::msg::Gpgsa::_prn_type arg)
  {
    msg_.prn = std::move(arg);
    return Init_Gpgsa_pdop(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_fix_mode
{
public:
  explicit Init_Gpgsa_fix_mode(::mrs_modules_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_prn fix_mode(::mrs_modules_msgs::msg::Gpgsa::_fix_mode_type arg)
  {
    msg_.fix_mode = std::move(arg);
    return Init_Gpgsa_prn(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_auto_manual_mode
{
public:
  explicit Init_Gpgsa_auto_manual_mode(::mrs_modules_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_fix_mode auto_manual_mode(::mrs_modules_msgs::msg::Gpgsa::_auto_manual_mode_type arg)
  {
    msg_.auto_manual_mode = std::move(arg);
    return Init_Gpgsa_fix_mode(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_message_id
{
public:
  explicit Init_Gpgsa_message_id(::mrs_modules_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_auto_manual_mode message_id(::mrs_modules_msgs::msg::Gpgsa::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpgsa_auto_manual_mode(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_header
{
public:
  Init_Gpgsa_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpgsa_message_id header(::mrs_modules_msgs::msg::Gpgsa::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpgsa_message_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgsa msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Gpgsa>()
{
  return mrs_modules_msgs::msg::builder::Init_Gpgsa_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGSA__BUILDER_HPP_
