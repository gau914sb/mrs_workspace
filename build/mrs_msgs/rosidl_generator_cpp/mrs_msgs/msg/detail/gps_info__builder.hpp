// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/GpsInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/gps_info.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__GPS_INFO__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__GPS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/gps_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsInfo_baseline_dist
{
public:
  explicit Init_GpsInfo_baseline_dist(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::GpsInfo baseline_dist(::mrs_msgs::msg::GpsInfo::_baseline_dist_type arg)
  {
    msg_.baseline_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_dgps_age
{
public:
  explicit Init_GpsInfo_dgps_age(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_baseline_dist dgps_age(::mrs_msgs::msg::GpsInfo::_dgps_age_type arg)
  {
    msg_.dgps_age = std::move(arg);
    return Init_GpsInfo_baseline_dist(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_dgps_num_sats
{
public:
  explicit Init_GpsInfo_dgps_num_sats(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_dgps_age dgps_num_sats(::mrs_msgs::msg::GpsInfo::_dgps_num_sats_type arg)
  {
    msg_.dgps_num_sats = std::move(arg);
    return Init_GpsInfo_dgps_age(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_yaw
{
public:
  explicit Init_GpsInfo_yaw(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_dgps_num_sats yaw(::mrs_msgs::msg::GpsInfo::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GpsInfo_dgps_num_sats(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_hdg_acc
{
public:
  explicit Init_GpsInfo_hdg_acc(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_yaw hdg_acc(::mrs_msgs::msg::GpsInfo::_hdg_acc_type arg)
  {
    msg_.hdg_acc = std::move(arg);
    return Init_GpsInfo_yaw(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_vel_acc
{
public:
  explicit Init_GpsInfo_vel_acc(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_hdg_acc vel_acc(::mrs_msgs::msg::GpsInfo::_vel_acc_type arg)
  {
    msg_.vel_acc = std::move(arg);
    return Init_GpsInfo_hdg_acc(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_v_acc
{
public:
  explicit Init_GpsInfo_v_acc(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_vel_acc v_acc(::mrs_msgs::msg::GpsInfo::_v_acc_type arg)
  {
    msg_.v_acc = std::move(arg);
    return Init_GpsInfo_vel_acc(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_h_acc
{
public:
  explicit Init_GpsInfo_h_acc(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_v_acc h_acc(::mrs_msgs::msg::GpsInfo::_h_acc_type arg)
  {
    msg_.h_acc = std::move(arg);
    return Init_GpsInfo_v_acc(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_alt_ellipsoid
{
public:
  explicit Init_GpsInfo_alt_ellipsoid(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_h_acc alt_ellipsoid(::mrs_msgs::msg::GpsInfo::_alt_ellipsoid_type arg)
  {
    msg_.alt_ellipsoid = std::move(arg);
    return Init_GpsInfo_h_acc(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_satellites_visible
{
public:
  explicit Init_GpsInfo_satellites_visible(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_alt_ellipsoid satellites_visible(::mrs_msgs::msg::GpsInfo::_satellites_visible_type arg)
  {
    msg_.satellites_visible = std::move(arg);
    return Init_GpsInfo_alt_ellipsoid(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_cog
{
public:
  explicit Init_GpsInfo_cog(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_satellites_visible cog(::mrs_msgs::msg::GpsInfo::_cog_type arg)
  {
    msg_.cog = std::move(arg);
    return Init_GpsInfo_satellites_visible(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_vel
{
public:
  explicit Init_GpsInfo_vel(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_cog vel(::mrs_msgs::msg::GpsInfo::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_GpsInfo_cog(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_epv
{
public:
  explicit Init_GpsInfo_epv(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_vel epv(::mrs_msgs::msg::GpsInfo::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_GpsInfo_vel(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_eph
{
public:
  explicit Init_GpsInfo_eph(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_epv eph(::mrs_msgs::msg::GpsInfo::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_GpsInfo_epv(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_alt
{
public:
  explicit Init_GpsInfo_alt(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_eph alt(::mrs_msgs::msg::GpsInfo::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_GpsInfo_eph(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_lon
{
public:
  explicit Init_GpsInfo_lon(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_alt lon(::mrs_msgs::msg::GpsInfo::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_GpsInfo_alt(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_lat
{
public:
  explicit Init_GpsInfo_lat(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_lon lat(::mrs_msgs::msg::GpsInfo::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_GpsInfo_lon(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_fix_type
{
public:
  explicit Init_GpsInfo_fix_type(::mrs_msgs::msg::GpsInfo & msg)
  : msg_(msg)
  {}
  Init_GpsInfo_lat fix_type(::mrs_msgs::msg::GpsInfo::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_GpsInfo_lat(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

class Init_GpsInfo_stamp
{
public:
  Init_GpsInfo_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsInfo_fix_type stamp(::mrs_msgs::msg::GpsInfo::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GpsInfo_fix_type(msg_);
  }

private:
  ::mrs_msgs::msg::GpsInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::GpsInfo>()
{
  return mrs_msgs::msg::builder::Init_GpsInfo_stamp();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__GPS_INFO__BUILDER_HPP_
