// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrs_modules_msgs:srv/SetServo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/srv/set_servo.hpp"


#ifndef MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__BUILDER_HPP_
#define MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrs_modules_msgs/srv/detail/set_servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_SetServo_Request_servo2_val
{
public:
  explicit Init_SetServo_Request_servo2_val(::mrs_modules_msgs::srv::SetServo_Request & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::SetServo_Request servo2_val(::mrs_modules_msgs::srv::SetServo_Request::_servo2_val_type arg)
  {
    msg_.servo2_val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetServo_Request msg_;
};

class Init_SetServo_Request_servo1_val
{
public:
  Init_SetServo_Request_servo1_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetServo_Request_servo2_val servo1_val(::mrs_modules_msgs::srv::SetServo_Request::_servo1_val_type arg)
  {
    msg_.servo1_val = std::move(arg);
    return Init_SetServo_Request_servo2_val(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetServo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::SetServo_Request>()
{
  return mrs_modules_msgs::srv::builder::Init_SetServo_Request_servo1_val();
}

}  // namespace mrs_modules_msgs


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_SetServo_Response_message
{
public:
  explicit Init_SetServo_Response_message(::mrs_modules_msgs::srv::SetServo_Response & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::SetServo_Response message(::mrs_modules_msgs::srv::SetServo_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetServo_Response msg_;
};

class Init_SetServo_Response_success
{
public:
  Init_SetServo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetServo_Response_message success(::mrs_modules_msgs::srv::SetServo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetServo_Response_message(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetServo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::SetServo_Response>()
{
  return mrs_modules_msgs::srv::builder::Init_SetServo_Response_success();
}

}  // namespace mrs_modules_msgs


namespace mrs_modules_msgs
{

namespace srv
{

namespace builder
{

class Init_SetServo_Event_response
{
public:
  explicit Init_SetServo_Event_response(::mrs_modules_msgs::srv::SetServo_Event & msg)
  : msg_(msg)
  {}
  ::mrs_modules_msgs::srv::SetServo_Event response(::mrs_modules_msgs::srv::SetServo_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetServo_Event msg_;
};

class Init_SetServo_Event_request
{
public:
  explicit Init_SetServo_Event_request(::mrs_modules_msgs::srv::SetServo_Event & msg)
  : msg_(msg)
  {}
  Init_SetServo_Event_response request(::mrs_modules_msgs::srv::SetServo_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetServo_Event_response(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetServo_Event msg_;
};

class Init_SetServo_Event_info
{
public:
  Init_SetServo_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetServo_Event_request info(::mrs_modules_msgs::srv::SetServo_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetServo_Event_request(msg_);
  }

private:
  ::mrs_modules_msgs::srv::SetServo_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrs_modules_msgs::srv::SetServo_Event>()
{
  return mrs_modules_msgs::srv::builder::Init_SetServo_Event_info();
}

}  // namespace mrs_modules_msgs

#endif  // MRS_MODULES_MSGS__SRV__DETAIL__SET_SERVO__BUILDER_HPP_
