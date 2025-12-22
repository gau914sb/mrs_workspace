// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/gps_data__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/gps_data__functions.h"
#include "mrs_msgs/msg/detail/gps_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__GpsData__init(message_memory);
}

void mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_fini_function(void * message_memory)
{
  mrs_msgs__msg__GpsData__fini(message_memory);
}

size_t mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__size_function__GpsData__covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__get_const_function__GpsData__covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__get_function__GpsData__covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__fetch_function__GpsData__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__get_const_function__GpsData__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__assign_function__GpsData__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__get_function__GpsData__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_member_array[4] = {
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GpsData, latitude),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GpsData, longitude),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__GpsData, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__GpsData, covariance),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__size_function__GpsData__covariance,  // size() function pointer
    mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__get_const_function__GpsData__covariance,  // get_const(index) function pointer
    mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__get_function__GpsData__covariance,  // get(index) function pointer
    mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__fetch_function__GpsData__covariance,  // fetch(index, &value) function pointer
    mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__assign_function__GpsData__covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_members = {
  "mrs_msgs__msg",  // message namespace
  "GpsData",  // message name
  4,  // number of fields
  sizeof(mrs_msgs__msg__GpsData),
  false,  // has_any_key_member_
  mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_member_array,  // message members
  mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_type_support_handle = {
  0,
  &mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__GpsData__get_type_hash,
  &mrs_msgs__msg__GpsData__get_type_description,
  &mrs_msgs__msg__GpsData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, GpsData)() {
  if (!mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
