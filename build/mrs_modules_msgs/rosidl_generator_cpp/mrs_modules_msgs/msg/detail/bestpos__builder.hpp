// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/bestpos.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/bestpos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_Bestpos_num_gps_and_glonass_l1_and_l2_used_in_solution
{
public:
  explicit Init_Bestpos_num_gps_and_glonass_l1_and_l2_used_in_solution(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::Bestpos num_gps_and_glonass_l1_and_l2_used_in_solution(::mrs_modules_msgs::msg::Bestpos::_num_gps_and_glonass_l1_and_l2_used_in_solution_type arg)
  {
    msg_.num_gps_and_glonass_l1_and_l2_used_in_solution = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_num_gps_and_glonass_l1_used_in_solution
{
public:
  explicit Init_Bestpos_num_gps_and_glonass_l1_used_in_solution(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_num_gps_and_glonass_l1_and_l2_used_in_solution num_gps_and_glonass_l1_used_in_solution(::mrs_modules_msgs::msg::Bestpos::_num_gps_and_glonass_l1_used_in_solution_type arg)
  {
    msg_.num_gps_and_glonass_l1_used_in_solution = std::move(arg);
    return Init_Bestpos_num_gps_and_glonass_l1_and_l2_used_in_solution(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_num_satellites_used_in_solution
{
public:
  explicit Init_Bestpos_num_satellites_used_in_solution(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_num_gps_and_glonass_l1_used_in_solution num_satellites_used_in_solution(::mrs_modules_msgs::msg::Bestpos::_num_satellites_used_in_solution_type arg)
  {
    msg_.num_satellites_used_in_solution = std::move(arg);
    return Init_Bestpos_num_gps_and_glonass_l1_used_in_solution(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_num_satellites_tracked
{
public:
  explicit Init_Bestpos_num_satellites_tracked(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_num_satellites_used_in_solution num_satellites_tracked(::mrs_modules_msgs::msg::Bestpos::_num_satellites_tracked_type arg)
  {
    msg_.num_satellites_tracked = std::move(arg);
    return Init_Bestpos_num_satellites_used_in_solution(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_solution_age
{
public:
  explicit Init_Bestpos_solution_age(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_num_satellites_tracked solution_age(::mrs_modules_msgs::msg::Bestpos::_solution_age_type arg)
  {
    msg_.solution_age = std::move(arg);
    return Init_Bestpos_num_satellites_tracked(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_diff_age
{
public:
  explicit Init_Bestpos_diff_age(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_solution_age diff_age(::mrs_modules_msgs::msg::Bestpos::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_Bestpos_solution_age(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_base_station_id
{
public:
  explicit Init_Bestpos_base_station_id(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_diff_age base_station_id(::mrs_modules_msgs::msg::Bestpos::_base_station_id_type arg)
  {
    msg_.base_station_id = std::move(arg);
    return Init_Bestpos_diff_age(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_height_std
{
public:
  explicit Init_Bestpos_height_std(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_base_station_id height_std(::mrs_modules_msgs::msg::Bestpos::_height_std_type arg)
  {
    msg_.height_std = std::move(arg);
    return Init_Bestpos_base_station_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_longitude_std
{
public:
  explicit Init_Bestpos_longitude_std(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_height_std longitude_std(::mrs_modules_msgs::msg::Bestpos::_longitude_std_type arg)
  {
    msg_.longitude_std = std::move(arg);
    return Init_Bestpos_height_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_latitude_std
{
public:
  explicit Init_Bestpos_latitude_std(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_longitude_std latitude_std(::mrs_modules_msgs::msg::Bestpos::_latitude_std_type arg)
  {
    msg_.latitude_std = std::move(arg);
    return Init_Bestpos_longitude_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_datum_id
{
public:
  explicit Init_Bestpos_datum_id(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_latitude_std datum_id(::mrs_modules_msgs::msg::Bestpos::_datum_id_type arg)
  {
    msg_.datum_id = std::move(arg);
    return Init_Bestpos_latitude_std(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_undulation
{
public:
  explicit Init_Bestpos_undulation(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_datum_id undulation(::mrs_modules_msgs::msg::Bestpos::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_Bestpos_datum_id(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_height
{
public:
  explicit Init_Bestpos_height(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_undulation height(::mrs_modules_msgs::msg::Bestpos::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Bestpos_undulation(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_longitude
{
public:
  explicit Init_Bestpos_longitude(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_height longitude(::mrs_modules_msgs::msg::Bestpos::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Bestpos_height(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_latitude
{
public:
  explicit Init_Bestpos_latitude(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_longitude latitude(::mrs_modules_msgs::msg::Bestpos::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Bestpos_longitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_position_type
{
public:
  explicit Init_Bestpos_position_type(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_latitude position_type(::mrs_modules_msgs::msg::Bestpos::_position_type_type arg)
  {
    msg_.position_type = std::move(arg);
    return Init_Bestpos_latitude(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_solution_status
{
public:
  explicit Init_Bestpos_solution_status(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_position_type solution_status(::mrs_modules_msgs::msg::Bestpos::_solution_status_type arg)
  {
    msg_.solution_status = std::move(arg);
    return Init_Bestpos_position_type(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_tersus_msg_header
{
public:
  explicit Init_Bestpos_tersus_msg_header(::mrs_modules_msgs::msg::Bestpos & msg)
  : msg_(msg)
  {}
  Init_Bestpos_solution_status tersus_msg_header(::mrs_modules_msgs::msg::Bestpos::_tersus_msg_header_type arg)
  {
    msg_.tersus_msg_header = std::move(arg);
    return Init_Bestpos_solution_status(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

class Init_Bestpos_header
{
public:
  Init_Bestpos_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bestpos_tersus_msg_header header(::mrs_modules_msgs::msg::Bestpos::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Bestpos_tersus_msg_header(msg_);
  }

private:
  ::mrs_modules_msgs::msg::Bestpos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::Bestpos>()
{
  return mrs_modules_msgs::msg::builder::Init_Bestpos_header();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__BESTPOS__BUILDER_HPP_
