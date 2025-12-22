// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:msg/ObstacleSectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/obstacle_sectors.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__BUILDER_HPP_
#define MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/msg/detail/obstacle_sectors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleSectors_sector_sensors
{
public:
  explicit Init_ObstacleSectors_sector_sensors(::mrs_msgs::msg::ObstacleSectors & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::msg::ObstacleSectors sector_sensors(::mrs_msgs::msg::ObstacleSectors::_sector_sensors_type arg)
  {
    msg_.sector_sensors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::msg::ObstacleSectors msg_;
};

class Init_ObstacleSectors_sectors
{
public:
  explicit Init_ObstacleSectors_sectors(::mrs_msgs::msg::ObstacleSectors & msg)
  : msg_(msg)
  {}
  Init_ObstacleSectors_sector_sensors sectors(::mrs_msgs::msg::ObstacleSectors::_sectors_type arg)
  {
    msg_.sectors = std::move(arg);
    return Init_ObstacleSectors_sector_sensors(msg_);
  }

private:
  ::mrs_msgs::msg::ObstacleSectors msg_;
};

class Init_ObstacleSectors_sectors_vertical_fov
{
public:
  explicit Init_ObstacleSectors_sectors_vertical_fov(::mrs_msgs::msg::ObstacleSectors & msg)
  : msg_(msg)
  {}
  Init_ObstacleSectors_sectors sectors_vertical_fov(::mrs_msgs::msg::ObstacleSectors::_sectors_vertical_fov_type arg)
  {
    msg_.sectors_vertical_fov = std::move(arg);
    return Init_ObstacleSectors_sectors(msg_);
  }

private:
  ::mrs_msgs::msg::ObstacleSectors msg_;
};

class Init_ObstacleSectors_n_horizontal_sectors
{
public:
  explicit Init_ObstacleSectors_n_horizontal_sectors(::mrs_msgs::msg::ObstacleSectors & msg)
  : msg_(msg)
  {}
  Init_ObstacleSectors_sectors_vertical_fov n_horizontal_sectors(::mrs_msgs::msg::ObstacleSectors::_n_horizontal_sectors_type arg)
  {
    msg_.n_horizontal_sectors = std::move(arg);
    return Init_ObstacleSectors_sectors_vertical_fov(msg_);
  }

private:
  ::mrs_msgs::msg::ObstacleSectors msg_;
};

class Init_ObstacleSectors_header
{
public:
  Init_ObstacleSectors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleSectors_n_horizontal_sectors header(::mrs_msgs::msg::ObstacleSectors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleSectors_n_horizontal_sectors(msg_);
  }

private:
  ::mrs_msgs::msg::ObstacleSectors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::msg::ObstacleSectors>()
{
  return mrs_msgs::msg::builder::Init_ObstacleSectors_header();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__BUILDER_HPP_
