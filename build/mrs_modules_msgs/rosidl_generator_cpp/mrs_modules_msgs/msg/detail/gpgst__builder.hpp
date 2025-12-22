// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/gpgst.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__GPGST__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__GPGST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/gpgst__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpgst_alt_std
{
public:
  explicit Init_Gpgst_alt_std(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Gpgst alt_std(::mrs_modules_msgs::msg::Gpgst::_alt_std_type arg)
  {
    msg_.alt_std = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_lon_std
{
public:
  explicit Init_Gpgst_lon_std(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_alt_std lon_std(::mrs_modules_msgs::msg::Gpgst::_lon_std_type arg)
  {
    msg_.lon_std = std::move(arg);
    return Init_Gpgst_alt_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_lat_std
{
public:
  explicit Init_Gpgst_lat_std(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_lon_std lat_std(::mrs_modules_msgs::msg::Gpgst::_lat_std_type arg)
  {
    msg_.lat_std = std::move(arg);
    return Init_Gpgst_lon_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_orient
{
public:
  explicit Init_Gpgst_orient(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_lat_std orient(::mrs_modules_msgs::msg::Gpgst::_orient_type arg)
  {
    msg_.orient = std::move(arg);
    return Init_Gpgst_lat_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_smnr_std
{
public:
  explicit Init_Gpgst_smnr_std(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_orient smnr_std(::mrs_modules_msgs::msg::Gpgst::_smnr_std_type arg)
  {
    msg_.smnr_std = std::move(arg);
    return Init_Gpgst_orient(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_smjr_std
{
public:
  explicit Init_Gpgst_smjr_std(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_smnr_std smjr_std(::mrs_modules_msgs::msg::Gpgst::_smjr_std_type arg)
  {
    msg_.smjr_std = std::move(arg);
    return Init_Gpgst_smnr_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_rms
{
public:
  explicit Init_Gpgst_rms(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_smjr_std rms(::mrs_modules_msgs::msg::Gpgst::_rms_type arg)
  {
    msg_.rms = std::move(arg);
    return Init_Gpgst_smjr_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_utc
{
public:
  explicit Init_Gpgst_utc(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_rms utc(::mrs_modules_msgs::msg::Gpgst::_utc_type arg)
  {
    msg_.utc = std::move(arg);
    return Init_Gpgst_rms(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_message_id
{
public:
  explicit Init_Gpgst_message_id(::mrs_modules_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_utc message_id(::mrs_modules_msgs::msg::Gpgst::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpgst_utc(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_header
{
public:
  Init_Gpgst_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpgst_message_id header(::mrs_modules_msgs::msg::Gpgst::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpgst_message_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Gpgst msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Gpgst>()
{
  return mrs_modules_msgs::msg::builder::Init_Gpgst_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__GPGST__BUILDER_HPP_
