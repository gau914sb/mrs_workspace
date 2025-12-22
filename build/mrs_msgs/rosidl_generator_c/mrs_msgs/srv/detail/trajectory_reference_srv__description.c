// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:srv/TrajectoryReferenceSrv.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/srv/detail/trajectory_reference_srv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__TrajectoryReferenceSrv__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0xbc, 0xbe, 0x28, 0x94, 0xc4, 0x7c, 0x88,
      0x66, 0x14, 0x41, 0xa8, 0x0a, 0xfa, 0x83, 0xfb,
      0x1e, 0x49, 0x4d, 0x78, 0xc6, 0xe7, 0x3e, 0xc2,
      0x78, 0xa1, 0xd8, 0x84, 0xef, 0xf6, 0xa0, 0xee,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x9e, 0x7d, 0xf3, 0x95, 0x33, 0x9d, 0x3a,
      0x2e, 0x97, 0xef, 0xc0, 0xeb, 0xa3, 0xcd, 0xa4,
      0x20, 0x21, 0x39, 0x96, 0x8f, 0x48, 0xb3, 0x4d,
      0x9c, 0xb9, 0x57, 0x98, 0x36, 0xc9, 0x7a, 0xb3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x23, 0x8f, 0x9a, 0x03, 0xfc, 0xbe, 0x7d,
      0x73, 0xea, 0xc5, 0x14, 0xc2, 0xc6, 0x85, 0x30,
      0x0d, 0xfb, 0xd1, 0xec, 0x94, 0xcd, 0x14, 0xf6,
      0xfc, 0x7b, 0xdf, 0x35, 0x66, 0xa3, 0x5f, 0x54,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0xdb, 0x9c, 0xf4, 0x47, 0x23, 0x30, 0xc8,
      0x52, 0x38, 0xad, 0x6a, 0x5d, 0x73, 0x31, 0x0f,
      0xb2, 0x02, 0x6d, 0xa3, 0xd1, 0x54, 0x7a, 0xf6,
      0x72, 0x35, 0x3f, 0xe1, 0xad, 0xb6, 0x50, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "mrs_msgs/msg/detail/reference__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "mrs_msgs/msg/detail/trajectory_reference__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__Reference__EXPECTED_HASH = {1, {
    0xac, 0x0b, 0xfc, 0x8f, 0x9d, 0xde, 0x16, 0xc9,
    0xbc, 0x28, 0x24, 0x38, 0xb7, 0x54, 0x41, 0xec,
    0xba, 0xd7, 0x41, 0xd9, 0x2f, 0xfa, 0x6d, 0x47,
    0xb9, 0xd6, 0xe3, 0x6d, 0x4d, 0x5b, 0x11, 0x17,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__TrajectoryReference__EXPECTED_HASH = {1, {
    0xfe, 0x2d, 0x23, 0x36, 0x47, 0x2a, 0x7e, 0xf6,
    0x92, 0x97, 0xa5, 0x5e, 0x5a, 0x98, 0xfb, 0x1f,
    0x8f, 0x65, 0x30, 0x05, 0x56, 0xe2, 0xf6, 0x1e,
    0x6c, 0x30, 0x99, 0xd7, 0x4d, 0xe4, 0x3d, 0x15,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrs_msgs__srv__TrajectoryReferenceSrv__TYPE_NAME[] = "mrs_msgs/srv/TrajectoryReferenceSrv";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char mrs_msgs__msg__Reference__TYPE_NAME[] = "mrs_msgs/msg/Reference";
static char mrs_msgs__msg__TrajectoryReference__TYPE_NAME[] = "mrs_msgs/msg/TrajectoryReference";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Event__TYPE_NAME[] = "mrs_msgs/srv/TrajectoryReferenceSrv_Event";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Request__TYPE_NAME[] = "mrs_msgs/srv/TrajectoryReferenceSrv_Request";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Response__TYPE_NAME[] = "mrs_msgs/srv/TrajectoryReferenceSrv_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__srv__TrajectoryReferenceSrv__FIELD_NAME__request_message[] = "request_message";
static char mrs_msgs__srv__TrajectoryReferenceSrv__FIELD_NAME__response_message[] = "response_message";
static char mrs_msgs__srv__TrajectoryReferenceSrv__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__TrajectoryReferenceSrv__FIELDS[] = {
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__TrajectoryReferenceSrv_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__TrajectoryReferenceSrv_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__TrajectoryReferenceSrv_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__TrajectoryReferenceSrv__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Reference__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrajectoryReference__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__TrajectoryReferenceSrv__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__TrajectoryReferenceSrv__TYPE_NAME, 35, 35},
      {mrs_msgs__srv__TrajectoryReferenceSrv__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__TrajectoryReferenceSrv__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Reference__EXPECTED_HASH, mrs_msgs__msg__Reference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Reference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__TrajectoryReference__EXPECTED_HASH, mrs_msgs__msg__TrajectoryReference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__TrajectoryReference__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__TrajectoryReferenceSrv_Request__FIELD_NAME__trajectory[] = "trajectory";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__TrajectoryReferenceSrv_Request__FIELDS[] = {
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Request__FIELD_NAME__trajectory, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__TrajectoryReference__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__TrajectoryReferenceSrv_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Reference__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrajectoryReference__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__TrajectoryReferenceSrv_Request__TYPE_NAME, 43, 43},
      {mrs_msgs__srv__TrajectoryReferenceSrv_Request__FIELDS, 1, 1},
    },
    {mrs_msgs__srv__TrajectoryReferenceSrv_Request__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Reference__EXPECTED_HASH, mrs_msgs__msg__Reference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Reference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__TrajectoryReference__EXPECTED_HASH, mrs_msgs__msg__TrajectoryReference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__TrajectoryReference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__success[] = "success";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__message[] = "message";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__modified[] = "modified";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__tracker_names[] = "tracker_names";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__tracker_successes[] = "tracker_successes";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__tracker_messages[] = "tracker_messages";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELDS[] = {
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__modified, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__tracker_names, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__tracker_successes, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELD_NAME__tracker_messages, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__TrajectoryReferenceSrv_Response__TYPE_NAME, 44, 44},
      {mrs_msgs__srv__TrajectoryReferenceSrv_Response__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__TrajectoryReferenceSrv_Event__FIELD_NAME__info[] = "info";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Event__FIELD_NAME__request[] = "request";
static char mrs_msgs__srv__TrajectoryReferenceSrv_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__TrajectoryReferenceSrv_Event__FIELDS[] = {
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mrs_msgs__srv__TrajectoryReferenceSrv_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mrs_msgs__srv__TrajectoryReferenceSrv_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__TrajectoryReferenceSrv_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Reference__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__TrajectoryReference__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__TrajectoryReferenceSrv_Event__TYPE_NAME, 41, 41},
      {mrs_msgs__srv__TrajectoryReferenceSrv_Event__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__TrajectoryReferenceSrv_Event__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Reference__EXPECTED_HASH, mrs_msgs__msg__Reference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Reference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__TrajectoryReference__EXPECTED_HASH, mrs_msgs__msg__TrajectoryReference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__TrajectoryReference__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "mrs_msgs/TrajectoryReference trajectory\n"
  "---\n"
  "\n"
  "# response of the currently active tracker\n"
  "bool success\n"
  "string message\n"
  "bool modified\n"
  "\n"
  "# responses of each loaded tracker\n"
  "string[] tracker_names\n"
  "bool[] tracker_successes\n"
  "string[] tracker_messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__TrajectoryReferenceSrv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__TrajectoryReferenceSrv__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 240, 240},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__TrajectoryReferenceSrv_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__TrajectoryReferenceSrv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__TrajectoryReferenceSrv__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Reference__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__TrajectoryReference__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_individual_type_description_source(NULL);
    sources[6] = *mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_individual_type_description_source(NULL);
    sources[7] = *mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[9] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Reference__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__TrajectoryReference__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__TrajectoryReferenceSrv_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Reference__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__TrajectoryReference__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__srv__TrajectoryReferenceSrv_Request__get_individual_type_description_source(NULL);
    sources[6] = *mrs_msgs__srv__TrajectoryReferenceSrv_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
