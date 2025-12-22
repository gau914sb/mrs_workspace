// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__rosidl_typesupport_introspection_c.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__functions.h"
#include "mrs_modules_msgs/msg/detail/pcl_tools_diagnostics__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `sensor_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_modules_msgs__msg__PclToolsDiagnostics__init(message_memory);
}

void mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_fini_function(void * message_memory)
{
  mrs_modules_msgs__msg__PclToolsDiagnostics__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_member_array[9] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, sensor_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, sensor_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vfov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, vfov),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rows_before",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, rows_before),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cols_before",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, cols_before),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rows_after",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, rows_after),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cols_after",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__PclToolsDiagnostics, cols_after),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_members = {
  "mrs_modules_msgs__msg",  // message namespace
  "PclToolsDiagnostics",  // message name
  9,  // number of fields
  sizeof(mrs_modules_msgs__msg__PclToolsDiagnostics),
  false,  // has_any_key_member_
  mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_member_array,  // message members
  mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_type_support_handle = {
  0,
  &mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_members,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__PclToolsDiagnostics__get_type_hash,
  &mrs_modules_msgs__msg__PclToolsDiagnostics__get_type_description,
  &mrs_modules_msgs__msg__PclToolsDiagnostics__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_modules_msgs, msg, PclToolsDiagnostics)() {
  mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_type_support_handle.typesupport_identifier) {
    mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_modules_msgs__msg__PclToolsDiagnostics__rosidl_typesupport_introspection_c__PclToolsDiagnostics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
