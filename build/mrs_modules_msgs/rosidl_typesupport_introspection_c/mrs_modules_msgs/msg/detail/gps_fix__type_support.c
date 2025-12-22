// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_modules_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_modules_msgs/msg/detail/gps_fix__rosidl_typesupport_introspection_c.h"
#include "mrs_modules_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_modules_msgs/msg/detail/gps_fix__functions.h"
#include "mrs_modules_msgs/msg/detail/gps_fix__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "mrs_modules_msgs/msg/gps_status.h"
// Member `status`
#include "mrs_modules_msgs/msg/detail/gps_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_modules_msgs__msg__GPSFix__init(message_memory);
}

void mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_fini_function(void * message_memory)
{
  mrs_modules_msgs__msg__GPSFix__fini(message_memory);
}

size_t mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__size_function__GPSFix__position_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__get_const_function__GPSFix__position_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__get_function__GPSFix__position_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__fetch_function__GPSFix__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__get_const_function__GPSFix__position_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__assign_function__GPSFix__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__get_function__GPSFix__position_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_satellites_used_in_solution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, num_satellites_used_in_solution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_satellites_tracked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, num_satellites_tracked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hdop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, hdop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, position_covariance),  // bytes offset in struct
    NULL,  // default value
    mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__size_function__GPSFix__position_covariance,  // size() function pointer
    mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__get_const_function__GPSFix__position_covariance,  // get_const(index) function pointer
    mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__get_function__GPSFix__position_covariance,  // get(index) function pointer
    mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__fetch_function__GPSFix__position_covariance,  // fetch(index, &value) function pointer
    mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__assign_function__GPSFix__position_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_modules_msgs__msg__GPSFix, position_covariance_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_members = {
  "mrs_modules_msgs__msg",  // message namespace
  "GPSFix",  // message name
  13,  // number of fields
  sizeof(mrs_modules_msgs__msg__GPSFix),
  false,  // has_any_key_member_
  mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_member_array,  // message members
  mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_type_support_handle = {
  0,
  &mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_members,
  get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__GPSFix__get_type_hash,
  &mrs_modules_msgs__msg__GPSFix__get_type_description,
  &mrs_modules_msgs__msg__GPSFix__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_modules_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_modules_msgs, msg, GPSFix)() {
  mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_modules_msgs, msg, GpsStatus)();
  if (!mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_type_support_handle.typesupport_identifier) {
    mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_modules_msgs__msg__GPSFix__rosidl_typesupport_introspection_c__GPSFix_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
