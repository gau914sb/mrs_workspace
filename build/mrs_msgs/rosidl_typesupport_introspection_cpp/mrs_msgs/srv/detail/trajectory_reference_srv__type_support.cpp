// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:srv/TrajectoryReferenceSrv.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_msgs/srv/detail/trajectory_reference_srv__functions.h"
#include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryReferenceSrv_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::srv::TrajectoryReferenceSrv_Request(_init);
}

void TrajectoryReferenceSrv_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::srv::TrajectoryReferenceSrv_Request *>(message_memory);
  typed_message->~TrajectoryReferenceSrv_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryReferenceSrv_Request_message_member_array[1] = {
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::msg::TrajectoryReference>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Request, trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryReferenceSrv_Request_message_members = {
  "mrs_msgs::srv",  // message namespace
  "TrajectoryReferenceSrv_Request",  // message name
  1,  // number of fields
  sizeof(mrs_msgs::srv::TrajectoryReferenceSrv_Request),
  false,  // has_any_key_member_
  TrajectoryReferenceSrv_Request_message_member_array,  // message members
  TrajectoryReferenceSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryReferenceSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryReferenceSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryReferenceSrv_Request_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_hash,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_description,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv_Request>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryReferenceSrv_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, TrajectoryReferenceSrv_Request)() {
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryReferenceSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryReferenceSrv_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::srv::TrajectoryReferenceSrv_Response(_init);
}

void TrajectoryReferenceSrv_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::srv::TrajectoryReferenceSrv_Response *>(message_memory);
  typed_message->~TrajectoryReferenceSrv_Response();
}

size_t size_function__TrajectoryReferenceSrv_Response__tracker_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryReferenceSrv_Response__tracker_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryReferenceSrv_Response__tracker_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryReferenceSrv_Response__tracker_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TrajectoryReferenceSrv_Response__tracker_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryReferenceSrv_Response__tracker_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TrajectoryReferenceSrv_Response__tracker_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryReferenceSrv_Response__tracker_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryReferenceSrv_Response__tracker_successes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__TrajectoryReferenceSrv_Response__tracker_successes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__TrajectoryReferenceSrv_Response__tracker_successes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__TrajectoryReferenceSrv_Response__tracker_successes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryReferenceSrv_Response__tracker_messages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryReferenceSrv_Response__tracker_messages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryReferenceSrv_Response__tracker_messages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryReferenceSrv_Response__tracker_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TrajectoryReferenceSrv_Response__tracker_messages(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryReferenceSrv_Response__tracker_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TrajectoryReferenceSrv_Response__tracker_messages(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryReferenceSrv_Response__tracker_messages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryReferenceSrv_Response_message_member_array[6] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "modified",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Response, modified),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracker_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Response, tracker_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryReferenceSrv_Response__tracker_names,  // size() function pointer
    get_const_function__TrajectoryReferenceSrv_Response__tracker_names,  // get_const(index) function pointer
    get_function__TrajectoryReferenceSrv_Response__tracker_names,  // get(index) function pointer
    fetch_function__TrajectoryReferenceSrv_Response__tracker_names,  // fetch(index, &value) function pointer
    assign_function__TrajectoryReferenceSrv_Response__tracker_names,  // assign(index, value) function pointer
    resize_function__TrajectoryReferenceSrv_Response__tracker_names  // resize(index) function pointer
  },
  {
    "tracker_successes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Response, tracker_successes),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryReferenceSrv_Response__tracker_successes,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__TrajectoryReferenceSrv_Response__tracker_successes,  // fetch(index, &value) function pointer
    assign_function__TrajectoryReferenceSrv_Response__tracker_successes,  // assign(index, value) function pointer
    resize_function__TrajectoryReferenceSrv_Response__tracker_successes  // resize(index) function pointer
  },
  {
    "tracker_messages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Response, tracker_messages),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryReferenceSrv_Response__tracker_messages,  // size() function pointer
    get_const_function__TrajectoryReferenceSrv_Response__tracker_messages,  // get_const(index) function pointer
    get_function__TrajectoryReferenceSrv_Response__tracker_messages,  // get(index) function pointer
    fetch_function__TrajectoryReferenceSrv_Response__tracker_messages,  // fetch(index, &value) function pointer
    assign_function__TrajectoryReferenceSrv_Response__tracker_messages,  // assign(index, value) function pointer
    resize_function__TrajectoryReferenceSrv_Response__tracker_messages  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryReferenceSrv_Response_message_members = {
  "mrs_msgs::srv",  // message namespace
  "TrajectoryReferenceSrv_Response",  // message name
  6,  // number of fields
  sizeof(mrs_msgs::srv::TrajectoryReferenceSrv_Response),
  false,  // has_any_key_member_
  TrajectoryReferenceSrv_Response_message_member_array,  // message members
  TrajectoryReferenceSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryReferenceSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryReferenceSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryReferenceSrv_Response_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_hash,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_description,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv_Response>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryReferenceSrv_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, TrajectoryReferenceSrv_Response)() {
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryReferenceSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryReferenceSrv_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_msgs::srv::TrajectoryReferenceSrv_Event(_init);
}

void TrajectoryReferenceSrv_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_msgs::srv::TrajectoryReferenceSrv_Event *>(message_memory);
  typed_message->~TrajectoryReferenceSrv_Event();
}

size_t size_function__TrajectoryReferenceSrv_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrs_msgs::srv::TrajectoryReferenceSrv_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryReferenceSrv_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrs_msgs::srv::TrajectoryReferenceSrv_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryReferenceSrv_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrs_msgs::srv::TrajectoryReferenceSrv_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryReferenceSrv_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrs_msgs::srv::TrajectoryReferenceSrv_Request *>(
    get_const_function__TrajectoryReferenceSrv_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<mrs_msgs::srv::TrajectoryReferenceSrv_Request *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryReferenceSrv_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrs_msgs::srv::TrajectoryReferenceSrv_Request *>(
    get_function__TrajectoryReferenceSrv_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrs_msgs::srv::TrajectoryReferenceSrv_Request *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryReferenceSrv_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrs_msgs::srv::TrajectoryReferenceSrv_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryReferenceSrv_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrs_msgs::srv::TrajectoryReferenceSrv_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryReferenceSrv_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrs_msgs::srv::TrajectoryReferenceSrv_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryReferenceSrv_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrs_msgs::srv::TrajectoryReferenceSrv_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryReferenceSrv_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrs_msgs::srv::TrajectoryReferenceSrv_Response *>(
    get_const_function__TrajectoryReferenceSrv_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<mrs_msgs::srv::TrajectoryReferenceSrv_Response *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryReferenceSrv_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrs_msgs::srv::TrajectoryReferenceSrv_Response *>(
    get_function__TrajectoryReferenceSrv_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrs_msgs::srv::TrajectoryReferenceSrv_Response *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryReferenceSrv_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrs_msgs::srv::TrajectoryReferenceSrv_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryReferenceSrv_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryReferenceSrv_Event__request,  // size() function pointer
    get_const_function__TrajectoryReferenceSrv_Event__request,  // get_const(index) function pointer
    get_function__TrajectoryReferenceSrv_Event__request,  // get(index) function pointer
    fetch_function__TrajectoryReferenceSrv_Event__request,  // fetch(index, &value) function pointer
    assign_function__TrajectoryReferenceSrv_Event__request,  // assign(index, value) function pointer
    resize_function__TrajectoryReferenceSrv_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrs_msgs::srv::TrajectoryReferenceSrv_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryReferenceSrv_Event__response,  // size() function pointer
    get_const_function__TrajectoryReferenceSrv_Event__response,  // get_const(index) function pointer
    get_function__TrajectoryReferenceSrv_Event__response,  // get(index) function pointer
    fetch_function__TrajectoryReferenceSrv_Event__response,  // fetch(index, &value) function pointer
    assign_function__TrajectoryReferenceSrv_Event__response,  // assign(index, value) function pointer
    resize_function__TrajectoryReferenceSrv_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryReferenceSrv_Event_message_members = {
  "mrs_msgs::srv",  // message namespace
  "TrajectoryReferenceSrv_Event",  // message name
  3,  // number of fields
  sizeof(mrs_msgs::srv::TrajectoryReferenceSrv_Event),
  false,  // has_any_key_member_
  TrajectoryReferenceSrv_Event_message_member_array,  // message members
  TrajectoryReferenceSrv_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryReferenceSrv_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryReferenceSrv_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryReferenceSrv_Event_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_hash,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_description,
  &mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv_Event>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryReferenceSrv_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, TrajectoryReferenceSrv_Event)() {
  return &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryReferenceSrv_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/trajectory_reference_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TrajectoryReferenceSrv_service_members = {
  "mrs_msgs::srv",  // service namespace
  "TrajectoryReferenceSrv",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t TrajectoryReferenceSrv_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryReferenceSrv_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mrs_msgs::srv::TrajectoryReferenceSrv>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mrs_msgs::srv::TrajectoryReferenceSrv>,
  &mrs_msgs__srv__TrajectoryReferenceSrv__get_type_hash,
  &mrs_msgs__srv__TrajectoryReferenceSrv__get_type_description,
  &mrs_msgs__srv__TrajectoryReferenceSrv__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::mrs_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryReferenceSrv_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrs_msgs::srv::TrajectoryReferenceSrv_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrs_msgs::srv::TrajectoryReferenceSrv_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrs_msgs::srv::TrajectoryReferenceSrv_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, TrajectoryReferenceSrv)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<mrs_msgs::srv::TrajectoryReferenceSrv>();
}

#ifdef __cplusplus
}
#endif
