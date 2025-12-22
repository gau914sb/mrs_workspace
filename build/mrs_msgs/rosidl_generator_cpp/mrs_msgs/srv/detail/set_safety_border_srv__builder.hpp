// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/SetSafetyBorderSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/set_safety_border_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__SET_SAFETY_BORDER_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__SET_SAFETY_BORDER_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/set_safety_border_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSafetyBorderSrv_Request_update_world_origin
{
public:
  explicit Init_SetSafetyBorderSrv_Request_update_world_origin(::mrs_msgs::srv::SetSafetyBorderSrv_Request & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::SetSafetyBorderSrv_Request update_world_origin(::mrs_msgs::srv::SetSafetyBorderSrv_Request::_update_world_origin_type arg)
  {
    msg_.update_world_origin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::SetSafetyBorderSrv_Request msg_;
};

class Init_SetSafetyBorderSrv_Request_keep_obstacles
{
public:
  explicit Init_SetSafetyBorderSrv_Request_keep_obstacles(::mrs_msgs::srv::SetSafetyBorderSrv_Request & msg)
  : msg_(msg)
  {}
  Init_SetSafetyBorderSrv_Request_update_world_origin keep_obstacles(::mrs_msgs::srv::SetSafetyBorderSrv_Request::_keep_obstacles_type arg)
  {
    msg_.keep_obstacles = std::move(arg);
    return Init_SetSafetyBorderSrv_Request_update_world_origin(msg_);
  }

private:
  ::mrs_msgs::srv::SetSafetyBorderSrv_Request msg_;
};

class Init_SetSafetyBorderSrv_Request_prism
{
public:
  Init_SetSafetyBorderSrv_Request_prism()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSafetyBorderSrv_Request_keep_obstacles prism(::mrs_msgs::srv::SetSafetyBorderSrv_Request::_prism_type arg)
  {
    msg_.prism = std::move(arg);
    return Init_SetSafetyBorderSrv_Request_keep_obstacles(msg_);
  }

private:
  ::mrs_msgs::srv::SetSafetyBorderSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::SetSafetyBorderSrv_Request>()
{
  return mrs_msgs::srv::builder::Init_SetSafetyBorderSrv_Request_prism();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSafetyBorderSrv_Response_message
{
public:
  explicit Init_SetSafetyBorderSrv_Response_message(::mrs_msgs::srv::SetSafetyBorderSrv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::SetSafetyBorderSrv_Response message(::mrs_msgs::srv::SetSafetyBorderSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::SetSafetyBorderSrv_Response msg_;
};

class Init_SetSafetyBorderSrv_Response_success
{
public:
  Init_SetSafetyBorderSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSafetyBorderSrv_Response_message success(::mrs_msgs::srv::SetSafetyBorderSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetSafetyBorderSrv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::SetSafetyBorderSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::SetSafetyBorderSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_SetSafetyBorderSrv_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSafetyBorderSrv_Event_response
{
public:
  explicit Init_SetSafetyBorderSrv_Event_response(::mrs_msgs::srv::SetSafetyBorderSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::SetSafetyBorderSrv_Event response(::mrs_msgs::srv::SetSafetyBorderSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::SetSafetyBorderSrv_Event msg_;
};

class Init_SetSafetyBorderSrv_Event_request
{
public:
  explicit Init_SetSafetyBorderSrv_Event_request(::mrs_msgs::srv::SetSafetyBorderSrv_Event & msg)
  : msg_(msg)
  {}
  Init_SetSafetyBorderSrv_Event_response request(::mrs_msgs::srv::SetSafetyBorderSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetSafetyBorderSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::SetSafetyBorderSrv_Event msg_;
};

class Init_SetSafetyBorderSrv_Event_info
{
public:
  Init_SetSafetyBorderSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSafetyBorderSrv_Event_request info(::mrs_msgs::srv::SetSafetyBorderSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetSafetyBorderSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::SetSafetyBorderSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::SetSafetyBorderSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_SetSafetyBorderSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__SET_SAFETY_BORDER_SRV__BUILDER_HPP_
