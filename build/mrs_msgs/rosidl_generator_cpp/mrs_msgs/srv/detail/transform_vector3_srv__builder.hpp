// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/TransformVector3Srv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/transform_vector3_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__TRANSFORM_VECTOR3_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__TRANSFORM_VECTOR3_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/transform_vector3_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformVector3Srv_Request_vector
{
public:
  explicit Init_TransformVector3Srv_Request_vector(::mrs_msgs::srv::TransformVector3Srv_Request & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::TransformVector3Srv_Request vector(::mrs_msgs::srv::TransformVector3Srv_Request::_vector_type arg)
  {
    msg_.vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TransformVector3Srv_Request msg_;
};

class Init_TransformVector3Srv_Request_frame_id
{
public:
  Init_TransformVector3Srv_Request_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformVector3Srv_Request_vector frame_id(::mrs_msgs::srv::TransformVector3Srv_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_TransformVector3Srv_Request_vector(msg_);
  }

private:
  ::mrs_msgs::srv::TransformVector3Srv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TransformVector3Srv_Request>()
{
  return mrs_msgs::srv::builder::Init_TransformVector3Srv_Request_frame_id();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformVector3Srv_Response_vector
{
public:
  explicit Init_TransformVector3Srv_Response_vector(::mrs_msgs::srv::TransformVector3Srv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::TransformVector3Srv_Response vector(::mrs_msgs::srv::TransformVector3Srv_Response::_vector_type arg)
  {
    msg_.vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TransformVector3Srv_Response msg_;
};

class Init_TransformVector3Srv_Response_message
{
public:
  explicit Init_TransformVector3Srv_Response_message(::mrs_msgs::srv::TransformVector3Srv_Response & msg)
  : msg_(msg)
  {}
  Init_TransformVector3Srv_Response_vector message(::mrs_msgs::srv::TransformVector3Srv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_TransformVector3Srv_Response_vector(msg_);
  }

private:
  ::mrs_msgs::srv::TransformVector3Srv_Response msg_;
};

class Init_TransformVector3Srv_Response_success
{
public:
  Init_TransformVector3Srv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformVector3Srv_Response_message success(::mrs_msgs::srv::TransformVector3Srv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TransformVector3Srv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::TransformVector3Srv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TransformVector3Srv_Response>()
{
  return mrs_msgs::srv::builder::Init_TransformVector3Srv_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformVector3Srv_Event_response
{
public:
  explicit Init_TransformVector3Srv_Event_response(::mrs_msgs::srv::TransformVector3Srv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::TransformVector3Srv_Event response(::mrs_msgs::srv::TransformVector3Srv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TransformVector3Srv_Event msg_;
};

class Init_TransformVector3Srv_Event_request
{
public:
  explicit Init_TransformVector3Srv_Event_request(::mrs_msgs::srv::TransformVector3Srv_Event & msg)
  : msg_(msg)
  {}
  Init_TransformVector3Srv_Event_response request(::mrs_msgs::srv::TransformVector3Srv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TransformVector3Srv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::TransformVector3Srv_Event msg_;
};

class Init_TransformVector3Srv_Event_info
{
public:
  Init_TransformVector3Srv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformVector3Srv_Event_request info(::mrs_msgs::srv::TransformVector3Srv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TransformVector3Srv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::TransformVector3Srv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TransformVector3Srv_Event>()
{
  return mrs_msgs::srv::builder::Init_TransformVector3Srv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__TRANSFORM_VECTOR3_SRV__BUILDER_HPP_
