// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/ConstraintsOverride.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/constraints_override.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__CONSTRAINTS_OVERRIDE__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__CONSTRAINTS_OVERRIDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/constraints_override__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ConstraintsOverride_Request_acceleration_vertical
{
public:
  explicit Init_ConstraintsOverride_Request_acceleration_vertical(::mrs_msgs::srv::ConstraintsOverride_Request & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ConstraintsOverride_Request acceleration_vertical(::mrs_msgs::srv::ConstraintsOverride_Request::_acceleration_vertical_type arg)
  {
    msg_.acceleration_vertical = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ConstraintsOverride_Request msg_;
};

class Init_ConstraintsOverride_Request_acceleration_horizontal
{
public:
  Init_ConstraintsOverride_Request_acceleration_horizontal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintsOverride_Request_acceleration_vertical acceleration_horizontal(::mrs_msgs::srv::ConstraintsOverride_Request::_acceleration_horizontal_type arg)
  {
    msg_.acceleration_horizontal = std::move(arg);
    return Init_ConstraintsOverride_Request_acceleration_vertical(msg_);
  }

private:
  ::mrs_msgs::srv::ConstraintsOverride_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ConstraintsOverride_Request>()
{
  return mrs_msgs::srv::builder::Init_ConstraintsOverride_Request_acceleration_horizontal();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ConstraintsOverride_Response_message
{
public:
  explicit Init_ConstraintsOverride_Response_message(::mrs_msgs::srv::ConstraintsOverride_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ConstraintsOverride_Response message(::mrs_msgs::srv::ConstraintsOverride_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ConstraintsOverride_Response msg_;
};

class Init_ConstraintsOverride_Response_success
{
public:
  Init_ConstraintsOverride_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintsOverride_Response_message success(::mrs_msgs::srv::ConstraintsOverride_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ConstraintsOverride_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::ConstraintsOverride_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ConstraintsOverride_Response>()
{
  return mrs_msgs::srv::builder::Init_ConstraintsOverride_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ConstraintsOverride_Event_response
{
public:
  explicit Init_ConstraintsOverride_Event_response(::mrs_msgs::srv::ConstraintsOverride_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ConstraintsOverride_Event response(::mrs_msgs::srv::ConstraintsOverride_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ConstraintsOverride_Event msg_;
};

class Init_ConstraintsOverride_Event_request
{
public:
  explicit Init_ConstraintsOverride_Event_request(::mrs_msgs::srv::ConstraintsOverride_Event & msg)
  : msg_(msg)
  {}
  Init_ConstraintsOverride_Event_response request(::mrs_msgs::srv::ConstraintsOverride_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ConstraintsOverride_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::ConstraintsOverride_Event msg_;
};

class Init_ConstraintsOverride_Event_info
{
public:
  Init_ConstraintsOverride_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintsOverride_Event_request info(::mrs_msgs::srv::ConstraintsOverride_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ConstraintsOverride_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::ConstraintsOverride_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ConstraintsOverride_Event>()
{
  return mrs_msgs::srv::builder::Init_ConstraintsOverride_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__CONSTRAINTS_OVERRIDE__BUILDER_HPP_
