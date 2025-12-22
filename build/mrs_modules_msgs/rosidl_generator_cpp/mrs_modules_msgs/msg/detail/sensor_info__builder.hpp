// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:msg/SensorInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/sensor_info.hpp"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__BUILDER_HPP_
#define MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/msg/detail/sensor_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorInfo_expected_rate
{
public:
  explicit Init_SensorInfo_expected_rate(::mrs_modules_msgs::msg::SensorInfo & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::msg::SensorInfo expected_rate(::mrs_modules_msgs::msg::SensorInfo::_expected_rate_type arg)
  {
    msg_.expected_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::msg::SensorInfo msg_;
};

class Init_SensorInfo_type
{
public:
  explicit Init_SensorInfo_type(::mrs_modules_msgs::msg::SensorInfo & msg)
  : msg_(msg)
  {}
  Init_SensorInfo_expected_rate type(::mrs_modules_msgs::msg::SensorInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SensorInfo_expected_rate(msg_);
  }

private:
  ::mrs_modules_msgs::msg::SensorInfo msg_;
};

class Init_SensorInfo_topic
{
public:
  explicit Init_SensorInfo_topic(::mrs_modules_msgs::msg::SensorInfo & msg)
  : msg_(msg)
  {}
  Init_SensorInfo_type topic(::mrs_modules_msgs::msg::SensorInfo::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_SensorInfo_type(msg_);
  }

private:
  ::mrs_modules_msgs::msg::SensorInfo msg_;
};

class Init_SensorInfo_name
{
public:
  Init_SensorInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorInfo_topic name(::mrs_modules_msgs::msg::SensorInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SensorInfo_topic(msg_);
  }

private:
  ::mrs_modules_msgs::msg::SensorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::msg::SensorInfo>()
{
  return mrs_modules_msgs::msg::builder::Init_SensorInfo_name();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__BUILDER_HPP_
