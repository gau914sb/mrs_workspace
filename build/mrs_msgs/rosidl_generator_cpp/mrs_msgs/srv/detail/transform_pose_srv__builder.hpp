// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/TransformPoseSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/transform_pose_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__TRANSFORM_POSE_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__TRANSFORM_POSE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/transform_pose_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformPoseSrv_Request_pose
{
public:
  explicit Init_TransformPoseSrv_Request_pose(::mrs_msgs::srv::TransformPoseSrv_Request & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::TransformPoseSrv_Request pose(::mrs_msgs::srv::TransformPoseSrv_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TransformPoseSrv_Request msg_;
};

class Init_TransformPoseSrv_Request_frame_id
{
public:
  Init_TransformPoseSrv_Request_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformPoseSrv_Request_pose frame_id(::mrs_msgs::srv::TransformPoseSrv_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_TransformPoseSrv_Request_pose(msg_);
  }

private:
  ::mrs_msgs::srv::TransformPoseSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TransformPoseSrv_Request>()
{
  return mrs_msgs::srv::builder::Init_TransformPoseSrv_Request_frame_id();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformPoseSrv_Response_pose
{
public:
  explicit Init_TransformPoseSrv_Response_pose(::mrs_msgs::srv::TransformPoseSrv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::TransformPoseSrv_Response pose(::mrs_msgs::srv::TransformPoseSrv_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TransformPoseSrv_Response msg_;
};

class Init_TransformPoseSrv_Response_message
{
public:
  explicit Init_TransformPoseSrv_Response_message(::mrs_msgs::srv::TransformPoseSrv_Response & msg)
  : msg_(msg)
  {}
  Init_TransformPoseSrv_Response_pose message(::mrs_msgs::srv::TransformPoseSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_TransformPoseSrv_Response_pose(msg_);
  }

private:
  ::mrs_msgs::srv::TransformPoseSrv_Response msg_;
};

class Init_TransformPoseSrv_Response_success
{
public:
  Init_TransformPoseSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformPoseSrv_Response_message success(::mrs_msgs::srv::TransformPoseSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TransformPoseSrv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::TransformPoseSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TransformPoseSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_TransformPoseSrv_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformPoseSrv_Event_response
{
public:
  explicit Init_TransformPoseSrv_Event_response(::mrs_msgs::srv::TransformPoseSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::TransformPoseSrv_Event response(::mrs_msgs::srv::TransformPoseSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TransformPoseSrv_Event msg_;
};

class Init_TransformPoseSrv_Event_request
{
public:
  explicit Init_TransformPoseSrv_Event_request(::mrs_msgs::srv::TransformPoseSrv_Event & msg)
  : msg_(msg)
  {}
  Init_TransformPoseSrv_Event_response request(::mrs_msgs::srv::TransformPoseSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TransformPoseSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::TransformPoseSrv_Event msg_;
};

class Init_TransformPoseSrv_Event_info
{
public:
  Init_TransformPoseSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformPoseSrv_Event_request info(::mrs_msgs::srv::TransformPoseSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TransformPoseSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::TransformPoseSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TransformPoseSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_TransformPoseSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__TRANSFORM_POSE_SRV__BUILDER_HPP_
