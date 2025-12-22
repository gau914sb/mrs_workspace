// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/ValidatePathToPointSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/validate_path_to_point_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__VALIDATE_PATH_TO_POINT_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__VALIDATE_PATH_TO_POINT_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/validate_path_to_point_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ValidatePathToPointSrv_Request_end
{
public:
  explicit Init_ValidatePathToPointSrv_Request_end(::mrs_msgs::srv::ValidatePathToPointSrv_Request & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ValidatePathToPointSrv_Request end(::mrs_msgs::srv::ValidatePathToPointSrv_Request::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ValidatePathToPointSrv_Request msg_;
};

class Init_ValidatePathToPointSrv_Request_start
{
public:
  Init_ValidatePathToPointSrv_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidatePathToPointSrv_Request_end start(::mrs_msgs::srv::ValidatePathToPointSrv_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_ValidatePathToPointSrv_Request_end(msg_);
  }

private:
  ::mrs_msgs::srv::ValidatePathToPointSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ValidatePathToPointSrv_Request>()
{
  return mrs_msgs::srv::builder::Init_ValidatePathToPointSrv_Request_start();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ValidatePathToPointSrv_Response_message
{
public:
  explicit Init_ValidatePathToPointSrv_Response_message(::mrs_msgs::srv::ValidatePathToPointSrv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ValidatePathToPointSrv_Response message(::mrs_msgs::srv::ValidatePathToPointSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ValidatePathToPointSrv_Response msg_;
};

class Init_ValidatePathToPointSrv_Response_success
{
public:
  Init_ValidatePathToPointSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidatePathToPointSrv_Response_message success(::mrs_msgs::srv::ValidatePathToPointSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ValidatePathToPointSrv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::ValidatePathToPointSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ValidatePathToPointSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_ValidatePathToPointSrv_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_ValidatePathToPointSrv_Event_response
{
public:
  explicit Init_ValidatePathToPointSrv_Event_response(::mrs_msgs::srv::ValidatePathToPointSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::ValidatePathToPointSrv_Event response(::mrs_msgs::srv::ValidatePathToPointSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::ValidatePathToPointSrv_Event msg_;
};

class Init_ValidatePathToPointSrv_Event_request
{
public:
  explicit Init_ValidatePathToPointSrv_Event_request(::mrs_msgs::srv::ValidatePathToPointSrv_Event & msg)
  : msg_(msg)
  {}
  Init_ValidatePathToPointSrv_Event_response request(::mrs_msgs::srv::ValidatePathToPointSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ValidatePathToPointSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::ValidatePathToPointSrv_Event msg_;
};

class Init_ValidatePathToPointSrv_Event_info
{
public:
  Init_ValidatePathToPointSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidatePathToPointSrv_Event_request info(::mrs_msgs::srv::ValidatePathToPointSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ValidatePathToPointSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::ValidatePathToPointSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::ValidatePathToPointSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_ValidatePathToPointSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__VALIDATE_PATH_TO_POINT_SRV__BUILDER_HPP_
