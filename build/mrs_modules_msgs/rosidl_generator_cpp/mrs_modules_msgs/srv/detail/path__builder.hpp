// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:srv/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/srv/path.hpp"


#ifndef MRS_MODULES_MSGS__SRV__DETAIL__PATH__BUILDER_HPP_
#define MRS_MODULES_MSGS__SRV__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/srv/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_Path_Request_end
{
public:
  explicit Init_Path_Request_end(::mrs_modules_msgs::srv::Path_Request & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::Path_Request end(::mrs_modules_msgs::srv::Path_Request::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Request msg_;
};

class Init_Path_Request_start
{
public:
  explicit Init_Path_Request_start(::mrs_modules_msgs::srv::Path_Request & msg)
  : msg_(msg)
  {}
  Init_Path_Request_end start(::mrs_modules_msgs::srv::Path_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_Path_Request_end(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Request msg_;
};

class Init_Path_Request_header
{
public:
  Init_Path_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_Request_start header(::mrs_modules_msgs::srv::Path_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path_Request_start(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::Path_Request>()
{
  return mrs_modules_msgs::srv::builder::Init_Path_Request_header();
}

}  // namespace mrs_modules_msgs


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_Path_Response_message
{
public:
  explicit Init_Path_Response_message(::mrs_modules_msgs::srv::Path_Response & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::Path_Response message(::mrs_modules_msgs::srv::Path_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Response msg_;
};

class Init_Path_Response_success
{
public:
  explicit Init_Path_Response_success(::mrs_modules_msgs::srv::Path_Response & msg)
  : msg_(msg)
  {}
  Init_Path_Response_message success(::mrs_modules_msgs::srv::Path_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Path_Response_message(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Response msg_;
};

class Init_Path_Response_path
{
public:
  explicit Init_Path_Response_path(::mrs_modules_msgs::srv::Path_Response & msg)
  : msg_(msg)
  {}
  Init_Path_Response_success path(::mrs_modules_msgs::srv::Path_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_Path_Response_success(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Response msg_;
};

class Init_Path_Response_header
{
public:
  Init_Path_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_Response_path header(::mrs_modules_msgs::srv::Path_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path_Response_path(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::Path_Response>()
{
  return mrs_modules_msgs::srv::builder::Init_Path_Response_header();
}

}  // namespace mrs_modules_msgs


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_Path_Event_response
{
public:
  explicit Init_Path_Event_response(::mrs_modules_msgs::srv::Path_Event & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::Path_Event response(::mrs_modules_msgs::srv::Path_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Event msg_;
};

class Init_Path_Event_request
{
public:
  explicit Init_Path_Event_request(::mrs_modules_msgs::srv::Path_Event & msg)
  : msg_(msg)
  {}
  Init_Path_Event_response request(::mrs_modules_msgs::srv::Path_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Path_Event_response(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Event msg_;
};

class Init_Path_Event_info
{
public:
  Init_Path_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_Event_request info(::mrs_modules_msgs::srv::Path_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Path_Event_request(msg_);
  }

private:
  ::mrs_modules_msgs::srv::Path_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::Path_Event>()
{
  return mrs_modules_msgs::srv::builder::Init_Path_Event_info();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__SRV__DETAIL__PATH__BUILDER_HPP_
