// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrs_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrs_msgs/msg/detail/track__rosidl_typesupport_introspection_c.h"
#include "mrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrs_msgs/msg/detail/track__functions.h"
#include "mrs_msgs/msg/detail/track__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "geometry_msgs/msg/vector3.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrs_msgs__msg__Track__init(message_memory);
}

void mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_fini_function(void * message_memory)
{
  mrs_msgs__msg__Track__fini(message_memory);
}

size_t mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__position_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__position_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__position_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__position_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__position_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__orientation_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__orientation_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__orientation_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__orientation_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__orientation_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__orientation_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__orientation_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__velocity_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__velocity_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__velocity_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__velocity_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__velocity_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__velocity_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__velocity_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Track, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Track, position),  // bytes offset in struct
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
    offsetof(mrs_msgs__msg__Track, position_covariance),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__position_covariance,  // size() function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__position_covariance,  // get_const(index) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__position_covariance,  // get(index) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__position_covariance,  // fetch(index, &value) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__position_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Track, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Track, orientation_covariance),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__orientation_covariance,  // size() function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__orientation_covariance,  // get_const(index) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__orientation_covariance,  // get(index) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__orientation_covariance,  // fetch(index, &value) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__orientation_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Track, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(mrs_msgs__msg__Track, velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__velocity_covariance,  // size() function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__velocity_covariance,  // get_const(index) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__velocity_covariance,  // get(index) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__velocity_covariance,  // fetch(index, &value) function pointer
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__velocity_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_members = {
  "mrs_msgs__msg",  // message namespace
  "Track",  // message name
  7,  // number of fields
  sizeof(mrs_msgs__msg__Track),
  false,  // has_any_key_member_
  mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array,  // message members
  mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_init_function,  // function to initialize message memory (memory has to be allocated)
  mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle = {
  0,
  &mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_members,
  get_message_typesupport_handle_function,
  &mrs_msgs__msg__Track__get_type_hash,
  &mrs_msgs__msg__Track__get_type_description,
  &mrs_msgs__msg__Track__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_msgs, msg, Track)() {
  mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle.typesupport_identifier) {
    mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrs_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
