// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/trackstat_channel.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/trackstat_channel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackstatChannel_psr_weight
{
public:
  explicit Init_TrackstatChannel_psr_weight(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::TrackstatChannel psr_weight(::mrs_modules_msgs::msg::TrackstatChannel::_psr_weight_type arg)
  {
    msg_.psr_weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_reject
{
public:
  explicit Init_TrackstatChannel_reject(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  Init_TrackstatChannel_psr_weight reject(::mrs_modules_msgs::msg::TrackstatChannel::_reject_type arg)
  {
    msg_.reject = std::move(arg);
    return Init_TrackstatChannel_psr_weight(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_psr_res
{
public:
  explicit Init_TrackstatChannel_psr_res(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  Init_TrackstatChannel_reject psr_res(::mrs_modules_msgs::msg::TrackstatChannel::_psr_res_type arg)
  {
    msg_.psr_res = std::move(arg);
    return Init_TrackstatChannel_reject(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_locktime
{
public:
  explicit Init_TrackstatChannel_locktime(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  Init_TrackstatChannel_psr_res locktime(::mrs_modules_msgs::msg::TrackstatChannel::_locktime_type arg)
  {
    msg_.locktime = std::move(arg);
    return Init_TrackstatChannel_psr_res(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_c_no
{
public:
  explicit Init_TrackstatChannel_c_no(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  Init_TrackstatChannel_locktime c_no(::mrs_modules_msgs::msg::TrackstatChannel::_c_no_type arg)
  {
    msg_.c_no = std::move(arg);
    return Init_TrackstatChannel_locktime(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_doppler
{
public:
  explicit Init_TrackstatChannel_doppler(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  Init_TrackstatChannel_c_no doppler(::mrs_modules_msgs::msg::TrackstatChannel::_doppler_type arg)
  {
    msg_.doppler = std::move(arg);
    return Init_TrackstatChannel_c_no(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_psr
{
public:
  explicit Init_TrackstatChannel_psr(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  Init_TrackstatChannel_doppler psr(::mrs_modules_msgs::msg::TrackstatChannel::_psr_type arg)
  {
    msg_.psr = std::move(arg);
    return Init_TrackstatChannel_doppler(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_ch_tr_status
{
public:
  explicit Init_TrackstatChannel_ch_tr_status(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  Init_TrackstatChannel_psr ch_tr_status(::mrs_modules_msgs::msg::TrackstatChannel::_ch_tr_status_type arg)
  {
    msg_.ch_tr_status = std::move(arg);
    return Init_TrackstatChannel_psr(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_glofreq
{
public:
  explicit Init_TrackstatChannel_glofreq(::mrs_modules_msgs::msg::TrackstatChannel & msg)
  : msg_(msg)
  {}
  Init_TrackstatChannel_ch_tr_status glofreq(::mrs_modules_msgs::msg::TrackstatChannel::_glofreq_type arg)
  {
    msg_.glofreq = std::move(arg);
    return Init_TrackstatChannel_ch_tr_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

class Init_TrackstatChannel_prn
{
public:
  Init_TrackstatChannel_prn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackstatChannel_glofreq prn(::mrs_modules_msgs::msg::TrackstatChannel::_prn_type arg)
  {
    msg_.prn = std::move(arg);
    return Init_TrackstatChannel_glofreq(msg_);
  }

private:
  ::mrs_modules_msgs::msg::TrackstatChannel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::TrackstatChannel>()
{
  return mrs_modules_msgs::msg::builder::Init_TrackstatChannel_prn();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__BUILDER_HPP_
