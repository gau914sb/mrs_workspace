// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/PathSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/path_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__PATH_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__PATH_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/path_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_PathSrv_Request_path
{
public:
  Init_PathSrv_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrs_msgs::srv::PathSrv_Request path(::mrs_msgs::srv::PathSrv_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::PathSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::PathSrv_Request>()
{
  return mrs_msgs::srv::builder::Init_PathSrv_Request_path();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_PathSrv_Response_message
{
public:
  explicit Init_PathSrv_Response_message(::mrs_msgs::srv::PathSrv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::PathSrv_Response message(::mrs_msgs::srv::PathSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::PathSrv_Response msg_;
};

class Init_PathSrv_Response_success
{
public:
  Init_PathSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathSrv_Response_message success(::mrs_msgs::srv::PathSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PathSrv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::PathSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::PathSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_PathSrv_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_PathSrv_Event_response
{
public:
  explicit Init_PathSrv_Event_response(::mrs_msgs::srv::PathSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::PathSrv_Event response(::mrs_msgs::srv::PathSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::PathSrv_Event msg_;
};

class Init_PathSrv_Event_request
{
public:
  explicit Init_PathSrv_Event_request(::mrs_msgs::srv::PathSrv_Event & msg)
  : msg_(msg)
  {}
  Init_PathSrv_Event_response request(::mrs_msgs::srv::PathSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PathSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::PathSrv_Event msg_;
};

class Init_PathSrv_Event_info
{
public:
  Init_PathSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathSrv_Event_request info(::mrs_msgs::srv::PathSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PathSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::PathSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::PathSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_PathSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__PATH_SRV__BUILDER_HPP_
