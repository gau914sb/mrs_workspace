// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/Se3Gains.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/se3_gains.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__SE3_GAINS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__SE3_GAINS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/se3_gains__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_Se3Gains_km_lim
{
public:
  explicit Init_Se3Gains_km_lim(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::Se3Gains km_lim(::mrs_msgs::msg::Se3Gains::_km_lim_type arg)
  {
    msg_.km_lim = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_km
{
public:
  explicit Init_Se3Gains_km(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_km_lim km(::mrs_msgs::msg::Se3Gains::_km_type arg)
  {
    msg_.km = std::move(arg);
    return Init_Se3Gains_km_lim(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kqy
{
public:
  explicit Init_Se3Gains_kqy(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_km kqy(::mrs_msgs::msg::Se3Gains::_kqy_type arg)
  {
    msg_.kqy = std::move(arg);
    return Init_Se3Gains_km(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kqrp
{
public:
  explicit Init_Se3Gains_kqrp(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kqy kqrp(::mrs_msgs::msg::Se3Gains::_kqrp_type arg)
  {
    msg_.kqrp = std::move(arg);
    return Init_Se3Gains_kqy(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kiwxy_lim
{
public:
  explicit Init_Se3Gains_kiwxy_lim(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kqrp kiwxy_lim(::mrs_msgs::msg::Se3Gains::_kiwxy_lim_type arg)
  {
    msg_.kiwxy_lim = std::move(arg);
    return Init_Se3Gains_kqrp(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kiwxy
{
public:
  explicit Init_Se3Gains_kiwxy(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kiwxy_lim kiwxy(::mrs_msgs::msg::Se3Gains::_kiwxy_type arg)
  {
    msg_.kiwxy = std::move(arg);
    return Init_Se3Gains_kiwxy_lim(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kibxy_lim
{
public:
  explicit Init_Se3Gains_kibxy_lim(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kiwxy kibxy_lim(::mrs_msgs::msg::Se3Gains::_kibxy_lim_type arg)
  {
    msg_.kibxy_lim = std::move(arg);
    return Init_Se3Gains_kiwxy(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kibxy
{
public:
  explicit Init_Se3Gains_kibxy(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kibxy_lim kibxy(::mrs_msgs::msg::Se3Gains::_kibxy_type arg)
  {
    msg_.kibxy = std::move(arg);
    return Init_Se3Gains_kibxy_lim(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kaz
{
public:
  explicit Init_Se3Gains_kaz(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kibxy kaz(::mrs_msgs::msg::Se3Gains::_kaz_type arg)
  {
    msg_.kaz = std::move(arg);
    return Init_Se3Gains_kibxy(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kvz
{
public:
  explicit Init_Se3Gains_kvz(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kaz kvz(::mrs_msgs::msg::Se3Gains::_kvz_type arg)
  {
    msg_.kvz = std::move(arg);
    return Init_Se3Gains_kaz(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kpz
{
public:
  explicit Init_Se3Gains_kpz(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kvz kpz(::mrs_msgs::msg::Se3Gains::_kpz_type arg)
  {
    msg_.kpz = std::move(arg);
    return Init_Se3Gains_kvz(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kaxy
{
public:
  explicit Init_Se3Gains_kaxy(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kpz kaxy(::mrs_msgs::msg::Se3Gains::_kaxy_type arg)
  {
    msg_.kaxy = std::move(arg);
    return Init_Se3Gains_kpz(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kvxy
{
public:
  explicit Init_Se3Gains_kvxy(::mrs_msgs::msg::Se3Gains & msg)
  : msg_(msg)
  {}
  Init_Se3Gains_kaxy kvxy(::mrs_msgs::msg::Se3Gains::_kvxy_type arg)
  {
    msg_.kvxy = std::move(arg);
    return Init_Se3Gains_kaxy(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

class Init_Se3Gains_kpxy
{
public:
  Init_Se3Gains_kpxy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Se3Gains_kvxy kpxy(::mrs_msgs::msg::Se3Gains::_kpxy_type arg)
  {
    msg_.kpxy = std::move(arg);
    return Init_Se3Gains_kvxy(msg_);
  }

private:
  ::mrs_msgs::msg::Se3Gains msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::Se3Gains>()
{
  return mrs_msgs::msg::builder::Init_Se3Gains_kpxy();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__SE3_GAINS__BUILDER_HPP_
