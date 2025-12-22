// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/SetObstacleSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/set_obstacle_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__SET_OBSTACLE_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__SET_OBSTACLE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/set_obstacle_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObstacleSrv_Request_prism
{
public:
  Init_SetObstacleSrv_Request_prism()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrs_msgs::srv::SetObstacleSrv_Request prism(::mrs_msgs::srv::SetObstacleSrv_Request::_prism_type arg)
  {
    msg_.prism = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::SetObstacleSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::SetObstacleSrv_Request>()
{
  return mrs_msgs::srv::builder::Init_SetObstacleSrv_Request_prism();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObstacleSrv_Response_message
{
public:
  explicit Init_SetObstacleSrv_Response_message(::mrs_msgs::srv::SetObstacleSrv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::SetObstacleSrv_Response message(::mrs_msgs::srv::SetObstacleSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::SetObstacleSrv_Response msg_;
};

class Init_SetObstacleSrv_Response_success
{
public:
  Init_SetObstacleSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetObstacleSrv_Response_message success(::mrs_msgs::srv::SetObstacleSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetObstacleSrv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::SetObstacleSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::SetObstacleSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_SetObstacleSrv_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObstacleSrv_Event_response
{
public:
  explicit Init_SetObstacleSrv_Event_response(::mrs_msgs::srv::SetObstacleSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::SetObstacleSrv_Event response(::mrs_msgs::srv::SetObstacleSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::SetObstacleSrv_Event msg_;
};

class Init_SetObstacleSrv_Event_request
{
public:
  explicit Init_SetObstacleSrv_Event_request(::mrs_msgs::srv::SetObstacleSrv_Event & msg)
  : msg_(msg)
  {}
  Init_SetObstacleSrv_Event_response request(::mrs_msgs::srv::SetObstacleSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetObstacleSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::SetObstacleSrv_Event msg_;
};

class Init_SetObstacleSrv_Event_info
{
public:
  Init_SetObstacleSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetObstacleSrv_Event_request info(::mrs_msgs::srv::SetObstacleSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetObstacleSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::SetObstacleSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::SetObstacleSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_SetObstacleSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__SET_OBSTACLE_SRV__BUILDER_HPP_
