// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/GetBoolSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/get_bool_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__GET_BOOL_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__GET_BOOL_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/get_bool_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::GetBoolSrv_Request>()
{
  return ::mrs_msgs::srv::GetBoolSrv_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBoolSrv_Response_value
{
public:
  Init_GetBoolSrv_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrs_msgs::srv::GetBoolSrv_Response value(::mrs_msgs::srv::GetBoolSrv_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::GetBoolSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::GetBoolSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_GetBoolSrv_Response_value();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBoolSrv_Event_response
{
public:
  explicit Init_GetBoolSrv_Event_response(::mrs_msgs::srv::GetBoolSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::GetBoolSrv_Event response(::mrs_msgs::srv::GetBoolSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::GetBoolSrv_Event msg_;
};

class Init_GetBoolSrv_Event_request
{
public:
  explicit Init_GetBoolSrv_Event_request(::mrs_msgs::srv::GetBoolSrv_Event & msg)
  : msg_(msg)
  {}
  Init_GetBoolSrv_Event_response request(::mrs_msgs::srv::GetBoolSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetBoolSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::GetBoolSrv_Event msg_;
};

class Init_GetBoolSrv_Event_info
{
public:
  Init_GetBoolSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBoolSrv_Event_request info(::mrs_msgs::srv::GetBoolSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetBoolSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::GetBoolSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::GetBoolSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_GetBoolSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__GET_BOOL_SRV__BUILDER_HPP_
