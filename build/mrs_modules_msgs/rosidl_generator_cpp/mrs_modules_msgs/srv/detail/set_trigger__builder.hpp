// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:srv/SetTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/srv/set_trigger.hpp"


#ifndef MRS_MODULES_MSGS__SRV__DETAIL__SET_TRIGGER__BUILDER_HPP_
#define MRS_MODULES_MSGS__SRV__DETAIL__SET_TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/srv/detail/set_trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTrigger_Request_trigger_num
{
public:
  explicit Init_SetTrigger_Request_trigger_num(::mrs_modules_msgs::srv::SetTrigger_Request & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::SetTrigger_Request trigger_num(::mrs_modules_msgs::srv::SetTrigger_Request::_trigger_num_type arg)
  {
    msg_.trigger_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetTrigger_Request msg_;
};

class Init_SetTrigger_Request_trigger
{
public:
  Init_SetTrigger_Request_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTrigger_Request_trigger_num trigger(::mrs_modules_msgs::srv::SetTrigger_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return Init_SetTrigger_Request_trigger_num(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetTrigger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::SetTrigger_Request>()
{
  return mrs_modules_msgs::srv::builder::Init_SetTrigger_Request_trigger();
}

}  // namespace mrs_modules_msgs


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTrigger_Response_message
{
public:
  explicit Init_SetTrigger_Response_message(::mrs_modules_msgs::srv::SetTrigger_Response & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::SetTrigger_Response message(::mrs_modules_msgs::srv::SetTrigger_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetTrigger_Response msg_;
};

class Init_SetTrigger_Response_success
{
public:
  Init_SetTrigger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTrigger_Response_message success(::mrs_modules_msgs::srv::SetTrigger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetTrigger_Response_message(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetTrigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::SetTrigger_Response>()
{
  return mrs_modules_msgs::srv::builder::Init_SetTrigger_Response_success();
}

}  // namespace mrs_modules_msgs


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTrigger_Event_response
{
public:
  explicit Init_SetTrigger_Event_response(::mrs_modules_msgs::srv::SetTrigger_Event & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::SetTrigger_Event response(::mrs_modules_msgs::srv::SetTrigger_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetTrigger_Event msg_;
};

class Init_SetTrigger_Event_request
{
public:
  explicit Init_SetTrigger_Event_request(::mrs_modules_msgs::srv::SetTrigger_Event & msg)
  : msg_(msg)
  {}
  Init_SetTrigger_Event_response request(::mrs_modules_msgs::srv::SetTrigger_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetTrigger_Event_response(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetTrigger_Event msg_;
};

class Init_SetTrigger_Event_info
{
public:
  Init_SetTrigger_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTrigger_Event_request info(::mrs_modules_msgs::srv::SetTrigger_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetTrigger_Event_request(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetTrigger_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::SetTrigger_Event>()
{
  return mrs_modules_msgs::srv::builder::Init_SetTrigger_Event_info();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__SRV__DETAIL__SET_TRIGGER__BUILDER_HPP_
