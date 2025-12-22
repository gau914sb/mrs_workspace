// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:srv/PathSrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mrs_msgs/srv/detail/path_srv__functions.h"
#include "mrs_msgs/srv/detail/path_srv__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathSrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathSrv_Request_type_support_ids_t;

static const _PathSrv_Request_type_support_ids_t _PathSrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathSrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathSrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathSrv_Request_type_support_symbol_names_t _PathSrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, srv, PathSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, PathSrv_Request)),
  }
};

typedef struct _PathSrv_Request_type_support_data_t
{
  void * data[2];
} _PathSrv_Request_type_support_data_t;

static _PathSrv_Request_type_support_data_t _PathSrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathSrv_Request_message_typesupport_map = {
  2,
  "mrs_msgs",
  &_PathSrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PathSrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PathSrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathSrv_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_msgs__srv__PathSrv_Request__get_type_hash,
  &mrs_msgs__srv__PathSrv_Request__get_type_description,
  &mrs_msgs__srv__PathSrv_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::PathSrv_Request>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_cpp::PathSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_msgs, srv, PathSrv_Request)() {
  return get_message_type_support_handle<mrs_msgs::srv::PathSrv_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mrs_msgs/srv/detail/path_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/path_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathSrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathSrv_Response_type_support_ids_t;

static const _PathSrv_Response_type_support_ids_t _PathSrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathSrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathSrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathSrv_Response_type_support_symbol_names_t _PathSrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, srv, PathSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, PathSrv_Response)),
  }
};

typedef struct _PathSrv_Response_type_support_data_t
{
  void * data[2];
} _PathSrv_Response_type_support_data_t;

static _PathSrv_Response_type_support_data_t _PathSrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathSrv_Response_message_typesupport_map = {
  2,
  "mrs_msgs",
  &_PathSrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PathSrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PathSrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathSrv_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_msgs__srv__PathSrv_Response__get_type_hash,
  &mrs_msgs__srv__PathSrv_Response__get_type_description,
  &mrs_msgs__srv__PathSrv_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::PathSrv_Response>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_cpp::PathSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_msgs, srv, PathSrv_Response)() {
  return get_message_type_support_handle<mrs_msgs::srv::PathSrv_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mrs_msgs/srv/detail/path_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/path_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathSrv_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathSrv_Event_type_support_ids_t;

static const _PathSrv_Event_type_support_ids_t _PathSrv_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathSrv_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathSrv_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathSrv_Event_type_support_symbol_names_t _PathSrv_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, srv, PathSrv_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, PathSrv_Event)),
  }
};

typedef struct _PathSrv_Event_type_support_data_t
{
  void * data[2];
} _PathSrv_Event_type_support_data_t;

static _PathSrv_Event_type_support_data_t _PathSrv_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathSrv_Event_message_typesupport_map = {
  2,
  "mrs_msgs",
  &_PathSrv_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PathSrv_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PathSrv_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathSrv_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathSrv_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_msgs__srv__PathSrv_Event__get_type_hash,
  &mrs_msgs__srv__PathSrv_Event__get_type_description,
  &mrs_msgs__srv__PathSrv_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::PathSrv_Event>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_cpp::PathSrv_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_msgs, srv, PathSrv_Event)() {
  return get_message_type_support_handle<mrs_msgs::srv::PathSrv_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mrs_msgs/srv/detail/path_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mrs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathSrv_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathSrv_type_support_ids_t;

static const _PathSrv_type_support_ids_t _PathSrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathSrv_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathSrv_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathSrv_type_support_symbol_names_t _PathSrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, srv, PathSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, PathSrv)),
  }
};

typedef struct _PathSrv_type_support_data_t
{
  void * data[2];
} _PathSrv_type_support_data_t;

static _PathSrv_type_support_data_t _PathSrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathSrv_service_typesupport_map = {
  2,
  "mrs_msgs",
  &_PathSrv_service_typesupport_ids.typesupport_identifier[0],
  &_PathSrv_service_typesupport_symbol_names.symbol_name[0],
  &_PathSrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PathSrv_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathSrv_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_msgs::srv::PathSrv_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_msgs::srv::PathSrv_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_msgs::srv::PathSrv_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mrs_msgs::srv::PathSrv>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mrs_msgs::srv::PathSrv>,
  &mrs_msgs__srv__PathSrv__get_type_hash,
  &mrs_msgs__srv__PathSrv__get_type_description,
  &mrs_msgs__srv__PathSrv__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mrs_msgs::srv::PathSrv>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_cpp::PathSrv_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_msgs, srv, PathSrv)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mrs_msgs::srv::PathSrv>();
}

#ifdef __cplusplus
}
#endif
