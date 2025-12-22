// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:msg/OctomapPlannerDiagnostics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrs_modules_msgs/msg/detail/octomap_planner_diagnostics__functions.h"
#include "mrs_modules_msgs/msg/detail/octomap_planner_diagnostics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrs_modules_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OctomapPlannerDiagnostics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrs_modules_msgs::msg::OctomapPlannerDiagnostics(_init);
}

void OctomapPlannerDiagnostics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrs_modules_msgs::msg::OctomapPlannerDiagnostics *>(message_memory);
  typed_message->~OctomapPlannerDiagnostics();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OctomapPlannerDiagnostics_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs::msg::OctomapPlannerDiagnostics, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "idle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs::msg::OctomapPlannerDiagnostics, idle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "desired_reference",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs::msg::OctomapPlannerDiagnostics, desired_reference),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "best_goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs::msg::OctomapPlannerDiagnostics, best_goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OctomapPlannerDiagnostics_message_members = {
  "mrs_modules_msgs::msg",  // message namespace
  "OctomapPlannerDiagnostics",  // message name
  4,  // number of fields
  sizeof(mrs_modules_msgs::msg::OctomapPlannerDiagnostics),
  false,  // has_any_key_member_
  OctomapPlannerDiagnostics_message_member_array,  // message members
  OctomapPlannerDiagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  OctomapPlannerDiagnostics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OctomapPlannerDiagnostics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OctomapPlannerDiagnostics_message_members,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__OctomapPlannerDiagnostics__get_type_hash,
  &mrs_modules_msgs__msg__OctomapPlannerDiagnostics__get_type_description,
  &mrs_modules_msgs__msg__OctomapPlannerDiagnostics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrs_modules_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::msg::OctomapPlannerDiagnostics>()
{
  return &::mrs_modules_msgs::msg::rosidl_typesupport_introspection_cpp::OctomapPlannerDiagnostics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_modules_msgs, msg, OctomapPlannerDiagnostics)() {
  return &::mrs_modules_msgs::msg::rosidl_typesupport_introspection_cpp::OctomapPlannerDiagnostics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
