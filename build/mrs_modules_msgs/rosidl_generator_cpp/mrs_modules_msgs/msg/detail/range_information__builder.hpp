// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/range_information.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/range_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_RangeInformation_tracking_status
{
public:
  explicit Init_RangeInformation_tracking_status(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::RangeInformation tracking_status(::mrs_modules_msgs::msg::RangeInformation::_tracking_status_type arg)
  {
    msg_.tracking_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_locktime
{
public:
  explicit Init_RangeInformation_locktime(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  Init_RangeInformation_tracking_status locktime(::mrs_modules_msgs::msg::RangeInformation::_locktime_type arg)
  {
    msg_.locktime = std::move(arg);
    return Init_RangeInformation_tracking_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_noise_density_ratio
{
public:
  explicit Init_RangeInformation_noise_density_ratio(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  Init_RangeInformation_locktime noise_density_ratio(::mrs_modules_msgs::msg::RangeInformation::_noise_density_ratio_type arg)
  {
    msg_.noise_density_ratio = std::move(arg);
    return Init_RangeInformation_locktime(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_dopp
{
public:
  explicit Init_RangeInformation_dopp(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  Init_RangeInformation_noise_density_ratio dopp(::mrs_modules_msgs::msg::RangeInformation::_dopp_type arg)
  {
    msg_.dopp = std::move(arg);
    return Init_RangeInformation_noise_density_ratio(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_adr_std
{
public:
  explicit Init_RangeInformation_adr_std(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  Init_RangeInformation_dopp adr_std(::mrs_modules_msgs::msg::RangeInformation::_adr_std_type arg)
  {
    msg_.adr_std = std::move(arg);
    return Init_RangeInformation_dopp(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_adr
{
public:
  explicit Init_RangeInformation_adr(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  Init_RangeInformation_adr_std adr(::mrs_modules_msgs::msg::RangeInformation::_adr_type arg)
  {
    msg_.adr = std::move(arg);
    return Init_RangeInformation_adr_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_psr_std
{
public:
  explicit Init_RangeInformation_psr_std(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  Init_RangeInformation_adr psr_std(::mrs_modules_msgs::msg::RangeInformation::_psr_std_type arg)
  {
    msg_.psr_std = std::move(arg);
    return Init_RangeInformation_adr(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_psr
{
public:
  explicit Init_RangeInformation_psr(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  Init_RangeInformation_psr_std psr(::mrs_modules_msgs::msg::RangeInformation::_psr_type arg)
  {
    msg_.psr = std::move(arg);
    return Init_RangeInformation_psr_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_glofreq
{
public:
  explicit Init_RangeInformation_glofreq(::mrs_modules_msgs::msg::RangeInformation & msg)
  : msg_(msg)
  {}
  Init_RangeInformation_psr glofreq(::mrs_modules_msgs::msg::RangeInformation::_glofreq_type arg)
  {
    msg_.glofreq = std::move(arg);
    return Init_RangeInformation_psr(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

class Init_RangeInformation_prn_number
{
public:
  Init_RangeInformation_prn_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeInformation_glofreq prn_number(::mrs_modules_msgs::msg::RangeInformation::_prn_number_type arg)
  {
    msg_.prn_number = std::move(arg);
    return Init_RangeInformation_glofreq(msg_);
  }

private:
  ::mrs_modules_msgs::msg::RangeInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::RangeInformation>()
{
  return mrs_modules_msgs::msg::builder::Init_RangeInformation_prn_number();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__BUILDER_HPP_
