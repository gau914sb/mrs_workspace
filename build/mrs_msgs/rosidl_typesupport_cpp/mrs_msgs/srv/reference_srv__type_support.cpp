// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mrs_msgs:srv/ReferenceSrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mrs_msgs/srv/detail/reference_srv__functions.h"
#include "mrs_msgs/srv/detail/reference_srv__struct.hpp"
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

typedef struct _ReferenceSrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReferenceSrv_Request_type_support_ids_t;

static const _ReferenceSrv_Request_type_support_ids_t _ReferenceSrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReferenceSrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReferenceSrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReferenceSrv_Request_type_support_symbol_names_t _ReferenceSrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, srv, ReferenceSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, ReferenceSrv_Request)),
  }
};

typedef struct _ReferenceSrv_Request_type_support_data_t
{
  void * data[2];
} _ReferenceSrv_Request_type_support_data_t;

static _ReferenceSrv_Request_type_support_data_t _ReferenceSrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReferenceSrv_Request_message_typesupport_map = {
  2,
  "mrs_msgs",
  &_ReferenceSrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReferenceSrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReferenceSrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReferenceSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReferenceSrv_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_msgs__srv__ReferenceSrv_Request__get_type_hash,
  &mrs_msgs__srv__ReferenceSrv_Request__get_type_description,
  &mrs_msgs__srv__ReferenceSrv_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Request>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_cpp::ReferenceSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_msgs, srv, ReferenceSrv_Request)() {
  return get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Request>();
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
// #include "mrs_msgs/srv/detail/reference_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/reference_srv__struct.hpp"
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

typedef struct _ReferenceSrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReferenceSrv_Response_type_support_ids_t;

static const _ReferenceSrv_Response_type_support_ids_t _ReferenceSrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReferenceSrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReferenceSrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReferenceSrv_Response_type_support_symbol_names_t _ReferenceSrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, srv, ReferenceSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, ReferenceSrv_Response)),
  }
};

typedef struct _ReferenceSrv_Response_type_support_data_t
{
  void * data[2];
} _ReferenceSrv_Response_type_support_data_t;

static _ReferenceSrv_Response_type_support_data_t _ReferenceSrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReferenceSrv_Response_message_typesupport_map = {
  2,
  "mrs_msgs",
  &_ReferenceSrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReferenceSrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReferenceSrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReferenceSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReferenceSrv_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_msgs__srv__ReferenceSrv_Response__get_type_hash,
  &mrs_msgs__srv__ReferenceSrv_Response__get_type_description,
  &mrs_msgs__srv__ReferenceSrv_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Response>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_cpp::ReferenceSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_msgs, srv, ReferenceSrv_Response)() {
  return get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Response>();
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
// #include "mrs_msgs/srv/detail/reference_srv__functions.h"
// already included above
// #include "mrs_msgs/srv/detail/reference_srv__struct.hpp"
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

typedef struct _ReferenceSrv_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReferenceSrv_Event_type_support_ids_t;

static const _ReferenceSrv_Event_type_support_ids_t _ReferenceSrv_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReferenceSrv_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReferenceSrv_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReferenceSrv_Event_type_support_symbol_names_t _ReferenceSrv_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, srv, ReferenceSrv_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, ReferenceSrv_Event)),
  }
};

typedef struct _ReferenceSrv_Event_type_support_data_t
{
  void * data[2];
} _ReferenceSrv_Event_type_support_data_t;

static _ReferenceSrv_Event_type_support_data_t _ReferenceSrv_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReferenceSrv_Event_message_typesupport_map = {
  2,
  "mrs_msgs",
  &_ReferenceSrv_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ReferenceSrv_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ReferenceSrv_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReferenceSrv_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReferenceSrv_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_msgs__srv__ReferenceSrv_Event__get_type_hash,
  &mrs_msgs__srv__ReferenceSrv_Event__get_type_description,
  &mrs_msgs__srv__ReferenceSrv_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Event>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_cpp::ReferenceSrv_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_msgs, srv, ReferenceSrv_Event)() {
  return get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Event>();
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
// #include "mrs_msgs/srv/detail/reference_srv__struct.hpp"
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

typedef struct _ReferenceSrv_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReferenceSrv_type_support_ids_t;

static const _ReferenceSrv_type_support_ids_t _ReferenceSrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReferenceSrv_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReferenceSrv_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReferenceSrv_type_support_symbol_names_t _ReferenceSrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_msgs, srv, ReferenceSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_msgs, srv, ReferenceSrv)),
  }
};

typedef struct _ReferenceSrv_type_support_data_t
{
  void * data[2];
} _ReferenceSrv_type_support_data_t;

static _ReferenceSrv_type_support_data_t _ReferenceSrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReferenceSrv_service_typesupport_map = {
  2,
  "mrs_msgs",
  &_ReferenceSrv_service_typesupport_ids.typesupport_identifier[0],
  &_ReferenceSrv_service_typesupport_symbol_names.symbol_name[0],
  &_ReferenceSrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReferenceSrv_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReferenceSrv_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_msgs::srv::ReferenceSrv_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mrs_msgs::srv::ReferenceSrv>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mrs_msgs::srv::ReferenceSrv>,
  &mrs_msgs__srv__ReferenceSrv__get_type_hash,
  &mrs_msgs__srv__ReferenceSrv__get_type_description,
  &mrs_msgs__srv__ReferenceSrv__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mrs_msgs::srv::ReferenceSrv>()
{
  return &::mrs_msgs::srv::rosidl_typesupport_cpp::ReferenceSrv_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_msgs, srv, ReferenceSrv)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mrs_msgs::srv::ReferenceSrv>();
}

#ifdef __cplusplus
}
#endif
