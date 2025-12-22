// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:msg/Trackstat.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mrs_modules_msgs/msg/detail/trackstat__struct.h"
#include "mrs_modules_msgs/msg/detail/trackstat__type_support.h"
#include "mrs_modules_msgs/msg/detail/trackstat__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mrs_modules_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Trackstat_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Trackstat_type_support_ids_t;

static const _Trackstat_type_support_ids_t _Trackstat_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Trackstat_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Trackstat_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trackstat_type_support_symbol_names_t _Trackstat_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrs_modules_msgs, msg, Trackstat)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrs_modules_msgs, msg, Trackstat)),
  }
};

typedef struct _Trackstat_type_support_data_t
{
  void * data[2];
} _Trackstat_type_support_data_t;

static _Trackstat_type_support_data_t _Trackstat_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Trackstat_message_typesupport_map = {
  2,
  "mrs_modules_msgs",
  &_Trackstat_message_typesupport_ids.typesupport_identifier[0],
  &_Trackstat_message_typesupport_symbol_names.symbol_name[0],
  &_Trackstat_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Trackstat_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trackstat_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mrs_modules_msgs__msg__Trackstat__get_type_hash,
  &mrs_modules_msgs__msg__Trackstat__get_type_description,
  &mrs_modules_msgs__msg__Trackstat__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace mrs_modules_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mrs_modules_msgs, msg, Trackstat)() {
  return &::mrs_modules_msgs::msg::rosidl_typesupport_c::Trackstat_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
