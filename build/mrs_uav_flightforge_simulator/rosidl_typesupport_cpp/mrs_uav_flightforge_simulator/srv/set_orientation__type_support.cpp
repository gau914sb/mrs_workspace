// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mrs_uav_flightforge_simulator:srv/SetOrientation.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mrs_uav_flightforge_simulator/srv/detail/set_orientation__functions.h"
#include "mrs_uav_flightforge_simulator/srv/detail/set_orientation__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mrs_uav_flightforge_simulator
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetOrientation_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetOrientation_Request_type_support_ids_t;

static const _SetOrientation_Request_type_support_ids_t _SetOrientation_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetOrientation_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetOrientation_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetOrientation_Request_type_support_symbol_names_t _SetOrientation_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Request)),
  }
};

typedef struct _SetOrientation_Request_type_support_data_t
{
  void * data[2];
} _SetOrientation_Request_type_support_data_t;

static _SetOrientation_Request_type_support_data_t _SetOrientation_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetOrientation_Request_message_typesupport_map = {
  2,
  "mrs_uav_flightforge_simulator",
  &_SetOrientation_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetOrientation_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetOrientation_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetOrientation_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetOrientation_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Request__get_type_hash,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Request__get_type_description,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_uav_flightforge_simulator

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Request>()
{
  return &::mrs_uav_flightforge_simulator::srv::rosidl_typesupport_cpp::SetOrientation_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Request)() {
  return get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Request>();
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
// #include "mrs_uav_flightforge_simulator/srv/detail/set_orientation__functions.h"
// already included above
// #include "mrs_uav_flightforge_simulator/srv/detail/set_orientation__struct.hpp"
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

namespace mrs_uav_flightforge_simulator
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetOrientation_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetOrientation_Response_type_support_ids_t;

static const _SetOrientation_Response_type_support_ids_t _SetOrientation_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetOrientation_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetOrientation_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetOrientation_Response_type_support_symbol_names_t _SetOrientation_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Response)),
  }
};

typedef struct _SetOrientation_Response_type_support_data_t
{
  void * data[2];
} _SetOrientation_Response_type_support_data_t;

static _SetOrientation_Response_type_support_data_t _SetOrientation_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetOrientation_Response_message_typesupport_map = {
  2,
  "mrs_uav_flightforge_simulator",
  &_SetOrientation_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetOrientation_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetOrientation_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetOrientation_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetOrientation_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Response__get_type_hash,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Response__get_type_description,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_uav_flightforge_simulator

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Response>()
{
  return &::mrs_uav_flightforge_simulator::srv::rosidl_typesupport_cpp::SetOrientation_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Response)() {
  return get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Response>();
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
// #include "mrs_uav_flightforge_simulator/srv/detail/set_orientation__functions.h"
// already included above
// #include "mrs_uav_flightforge_simulator/srv/detail/set_orientation__struct.hpp"
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

namespace mrs_uav_flightforge_simulator
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetOrientation_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetOrientation_Event_type_support_ids_t;

static const _SetOrientation_Event_type_support_ids_t _SetOrientation_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetOrientation_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetOrientation_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetOrientation_Event_type_support_symbol_names_t _SetOrientation_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Event)),
  }
};

typedef struct _SetOrientation_Event_type_support_data_t
{
  void * data[2];
} _SetOrientation_Event_type_support_data_t;

static _SetOrientation_Event_type_support_data_t _SetOrientation_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetOrientation_Event_message_typesupport_map = {
  2,
  "mrs_uav_flightforge_simulator",
  &_SetOrientation_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetOrientation_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetOrientation_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetOrientation_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetOrientation_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Event__get_type_hash,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Event__get_type_description,
  &mrs_uav_flightforge_simulator__srv__SetOrientation_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_uav_flightforge_simulator

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Event>()
{
  return &::mrs_uav_flightforge_simulator::srv::rosidl_typesupport_cpp::SetOrientation_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation_Event)() {
  return get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Event>();
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
// #include "mrs_uav_flightforge_simulator/srv/detail/set_orientation__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mrs_uav_flightforge_simulator
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetOrientation_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetOrientation_type_support_ids_t;

static const _SetOrientation_type_support_ids_t _SetOrientation_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetOrientation_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetOrientation_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetOrientation_type_support_symbol_names_t _SetOrientation_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation)),
  }
};

typedef struct _SetOrientation_type_support_data_t
{
  void * data[2];
} _SetOrientation_type_support_data_t;

static _SetOrientation_type_support_data_t _SetOrientation_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetOrientation_service_typesupport_map = {
  2,
  "mrs_uav_flightforge_simulator",
  &_SetOrientation_service_typesupport_ids.typesupport_identifier[0],
  &_SetOrientation_service_typesupport_symbol_names.symbol_name[0],
  &_SetOrientation_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetOrientation_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetOrientation_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mrs_uav_flightforge_simulator::srv::SetOrientation>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mrs_uav_flightforge_simulator::srv::SetOrientation>,
  &mrs_uav_flightforge_simulator__srv__SetOrientation__get_type_hash,
  &mrs_uav_flightforge_simulator__srv__SetOrientation__get_type_description,
  &mrs_uav_flightforge_simulator__srv__SetOrientation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrs_uav_flightforge_simulator

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation>()
{
  return &::mrs_uav_flightforge_simulator::srv::rosidl_typesupport_cpp::SetOrientation_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mrs_uav_flightforge_simulator, srv, SetOrientation)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mrs_uav_flightforge_simulator::srv::SetOrientation>();
}

#ifdef __cplusplus
}
#endif
