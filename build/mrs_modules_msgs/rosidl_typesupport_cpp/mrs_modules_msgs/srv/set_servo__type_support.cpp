// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mrs_modules_msgs:srv/SetServo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mrs_modules_msgs/srv/detail/set_servo__functions.h"
#include "mrs_modules_msgs/srv/detail/set_servo__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mrs_modules_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetServo_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetServo_Request_type_support_ids_t;

static const _SetServo_Request_type_support_ids_t _SetServo_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetServo_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetServo_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetServo_Request_type_support_symbol_names_t _SetServo_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, srv, SetServo_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_modules_msgs, srv, SetServo_Request)),
  }
};

typedef struct _SetServo_Request_type_support_data_t
{
  void * data[2];
} _SetServo_Request_type_support_data_t;

static _SetServo_Request_type_support_data_t _SetServo_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetServo_Request_message_typesupport_map = {
  2,
  "mrs_modules_msgs",
  &_SetServo_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetServo_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetServo_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetServo_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetServo_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_modules_msgs__srv__SetServo_Request__get_type_hash,
  &mrs_modules_msgs__srv__SetServo_Request__get_type_description,
  &mrs_modules_msgs__srv__SetServo_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Request>()
{
  return &::mrs_modules_msgs::srv::rosidl_typesupport_cpp::SetServo_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_modules_msgs, srv, SetServo_Request)() {
  return get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Request>();
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
// #include "mrs_modules_msgs/srv/detail/set_servo__functions.h"
// already included above
// #include "mrs_modules_msgs/srv/detail/set_servo__struct.hpp"
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

namespace mrs_modules_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetServo_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetServo_Response_type_support_ids_t;

static const _SetServo_Response_type_support_ids_t _SetServo_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetServo_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetServo_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetServo_Response_type_support_symbol_names_t _SetServo_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, srv, SetServo_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_modules_msgs, srv, SetServo_Response)),
  }
};

typedef struct _SetServo_Response_type_support_data_t
{
  void * data[2];
} _SetServo_Response_type_support_data_t;

static _SetServo_Response_type_support_data_t _SetServo_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetServo_Response_message_typesupport_map = {
  2,
  "mrs_modules_msgs",
  &_SetServo_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetServo_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetServo_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetServo_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetServo_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_modules_msgs__srv__SetServo_Response__get_type_hash,
  &mrs_modules_msgs__srv__SetServo_Response__get_type_description,
  &mrs_modules_msgs__srv__SetServo_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Response>()
{
  return &::mrs_modules_msgs::srv::rosidl_typesupport_cpp::SetServo_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_modules_msgs, srv, SetServo_Response)() {
  return get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Response>();
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
// #include "mrs_modules_msgs/srv/detail/set_servo__functions.h"
// already included above
// #include "mrs_modules_msgs/srv/detail/set_servo__struct.hpp"
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

namespace mrs_modules_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetServo_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetServo_Event_type_support_ids_t;

static const _SetServo_Event_type_support_ids_t _SetServo_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetServo_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetServo_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetServo_Event_type_support_symbol_names_t _SetServo_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, srv, SetServo_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_modules_msgs, srv, SetServo_Event)),
  }
};

typedef struct _SetServo_Event_type_support_data_t
{
  void * data[2];
} _SetServo_Event_type_support_data_t;

static _SetServo_Event_type_support_data_t _SetServo_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetServo_Event_message_typesupport_map = {
  2,
  "mrs_modules_msgs",
  &_SetServo_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetServo_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetServo_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetServo_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetServo_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_modules_msgs__srv__SetServo_Event__get_type_hash,
  &mrs_modules_msgs__srv__SetServo_Event__get_type_description,
  &mrs_modules_msgs__srv__SetServo_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Event>()
{
  return &::mrs_modules_msgs::srv::rosidl_typesupport_cpp::SetServo_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_modules_msgs, srv, SetServo_Event)() {
  return get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Event>();
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
// #include "mrs_modules_msgs/srv/detail/set_servo__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mrs_modules_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetServo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetServo_type_support_ids_t;

static const _SetServo_type_support_ids_t _SetServo_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetServo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetServo_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetServo_type_support_symbol_names_t _SetServo_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_modules_msgs, srv, SetServo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_modules_msgs, srv, SetServo)),
  }
};

typedef struct _SetServo_type_support_data_t
{
  void * data[2];
} _SetServo_type_support_data_t;

static _SetServo_type_support_data_t _SetServo_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetServo_service_typesupport_map = {
  2,
  "mrs_modules_msgs",
  &_SetServo_service_typesupport_ids.typesupport_identifier[0],
  &_SetServo_service_typesupport_symbol_names.symbol_name[0],
  &_SetServo_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetServo_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetServo_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_modules_msgs::srv::SetServo_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mrs_modules_msgs::srv::SetServo>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mrs_modules_msgs::srv::SetServo>,
  &mrs_modules_msgs__srv__SetServo__get_type_hash,
  &mrs_modules_msgs__srv__SetServo__get_type_description,
  &mrs_modules_msgs__srv__SetServo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_modules_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mrs_modules_msgs::srv::SetServo>()
{
  return &::mrs_modules_msgs::srv::rosidl_typesupport_cpp::SetServo_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_modules_msgs, srv, SetServo)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mrs_modules_msgs::srv::SetServo>();
}

#ifdef __cplusplus
}
#endif
