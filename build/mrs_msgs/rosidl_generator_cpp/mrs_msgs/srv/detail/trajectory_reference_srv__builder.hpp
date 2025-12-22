// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_msgs:srv/TrajectoryReferenceSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/srv/trajectory_reference_srv.hpp"


#ifndef MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__BUILDER_HPP_
#define MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TrajectoryReferenceSrv_Request_trajectory
{
public:
  Init_TrajectoryReferenceSrv_Request_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Request trajectory(::mrs_msgs::srv::TrajectoryReferenceSrv_Request::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TrajectoryReferenceSrv_Request>()
{
  return mrs_msgs::srv::builder::Init_TrajectoryReferenceSrv_Request_trajectory();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TrajectoryReferenceSrv_Response_tracker_messages
{
public:
  explicit Init_TrajectoryReferenceSrv_Response_tracker_messages(::mrs_msgs::srv::TrajectoryReferenceSrv_Response & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Response tracker_messages(::mrs_msgs::srv::TrajectoryReferenceSrv_Response::_tracker_messages_type arg)
  {
    msg_.tracker_messages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Response msg_;
};

class Init_TrajectoryReferenceSrv_Response_tracker_successes
{
public:
  explicit Init_TrajectoryReferenceSrv_Response_tracker_successes(::mrs_msgs::srv::TrajectoryReferenceSrv_Response & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReferenceSrv_Response_tracker_messages tracker_successes(::mrs_msgs::srv::TrajectoryReferenceSrv_Response::_tracker_successes_type arg)
  {
    msg_.tracker_successes = std::move(arg);
    return Init_TrajectoryReferenceSrv_Response_tracker_messages(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Response msg_;
};

class Init_TrajectoryReferenceSrv_Response_tracker_names
{
public:
  explicit Init_TrajectoryReferenceSrv_Response_tracker_names(::mrs_msgs::srv::TrajectoryReferenceSrv_Response & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReferenceSrv_Response_tracker_successes tracker_names(::mrs_msgs::srv::TrajectoryReferenceSrv_Response::_tracker_names_type arg)
  {
    msg_.tracker_names = std::move(arg);
    return Init_TrajectoryReferenceSrv_Response_tracker_successes(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Response msg_;
};

class Init_TrajectoryReferenceSrv_Response_modified
{
public:
  explicit Init_TrajectoryReferenceSrv_Response_modified(::mrs_msgs::srv::TrajectoryReferenceSrv_Response & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReferenceSrv_Response_tracker_names modified(::mrs_msgs::srv::TrajectoryReferenceSrv_Response::_modified_type arg)
  {
    msg_.modified = std::move(arg);
    return Init_TrajectoryReferenceSrv_Response_tracker_names(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Response msg_;
};

class Init_TrajectoryReferenceSrv_Response_message
{
public:
  explicit Init_TrajectoryReferenceSrv_Response_message(::mrs_msgs::srv::TrajectoryReferenceSrv_Response & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReferenceSrv_Response_modified message(::mrs_msgs::srv::TrajectoryReferenceSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_TrajectoryReferenceSrv_Response_modified(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Response msg_;
};

class Init_TrajectoryReferenceSrv_Response_success
{
public:
  Init_TrajectoryReferenceSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryReferenceSrv_Response_message success(::mrs_msgs::srv::TrajectoryReferenceSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TrajectoryReferenceSrv_Response_message(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TrajectoryReferenceSrv_Response>()
{
  return mrs_msgs::srv::builder::Init_TrajectoryReferenceSrv_Response_success();
}

}  // namespace mrs_msgs


namespace mrs_msgs
{

namespace srv
{

namespace builder
{

class Init_TrajectoryReferenceSrv_Event_response
{
public:
  explicit Init_TrajectoryReferenceSrv_Event_response(::mrs_msgs::srv::TrajectoryReferenceSrv_Event & msg)
  : msg_(msg)
  {}
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Event response(::mrs_msgs::srv::TrajectoryReferenceSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Event msg_;
};

class Init_TrajectoryReferenceSrv_Event_request
{
public:
  explicit Init_TrajectoryReferenceSrv_Event_request(::mrs_msgs::srv::TrajectoryReferenceSrv_Event & msg)
  : msg_(msg)
  {}
  Init_TrajectoryReferenceSrv_Event_response request(::mrs_msgs::srv::TrajectoryReferenceSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TrajectoryReferenceSrv_Event_response(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Event msg_;
};

class Init_TrajectoryReferenceSrv_Event_info
{
public:
  Init_TrajectoryReferenceSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryReferenceSrv_Event_request info(::mrs_msgs::srv::TrajectoryReferenceSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TrajectoryReferenceSrv_Event_request(msg_);
  }

private:
  ::mrs_msgs::srv::TrajectoryReferenceSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_msgs::srv::TrajectoryReferenceSrv_Event>()
{
  return mrs_msgs::srv::builder::Init_TrajectoryReferenceSrv_Event_info();
}

}  // namespace mrs_msgs

#endif  // MRS_MSGS__SRV__DETAIL__TRAJECTORY_REFERENCE_SRV__BUILDER_HPP_
