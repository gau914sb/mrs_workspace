// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:srv/SetSafetyBorderSrv.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/srv/detail/set_safety_border_srv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__SetSafetyBorderSrv__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0xf2, 0x83, 0xb1, 0x8e, 0x76, 0x1d, 0x60,
      0xa2, 0xa2, 0x86, 0xac, 0x4b, 0xdd, 0xfc, 0xbd,
      0x99, 0x2c, 0x19, 0x34, 0xed, 0x5e, 0x89, 0x5b,
      0xc0, 0x39, 0x30, 0xeb, 0x76, 0x8b, 0xaf, 0x11,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__SetSafetyBorderSrv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x39, 0xd8, 0xf6, 0x9f, 0xe8, 0x07, 0x3c,
      0xe3, 0xa6, 0xd8, 0x01, 0x0d, 0x37, 0xfe, 0x1e,
      0x12, 0x7d, 0x2a, 0x05, 0x0c, 0xfc, 0x97, 0xb5,
      0x7b, 0x39, 0xe9, 0x7d, 0x5f, 0x0b, 0x85, 0x49,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__SetSafetyBorderSrv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0xf6, 0x73, 0x8b, 0x9e, 0x30, 0xa5, 0x6e,
      0xe4, 0xdf, 0xb0, 0xd7, 0xf2, 0x49, 0x1c, 0xce,
      0xb9, 0x28, 0x3d, 0x21, 0x03, 0xe5, 0x4d, 0x90,
      0xb8, 0x32, 0xdf, 0xf6, 0x54, 0x95, 0x74, 0x46,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__SetSafetyBorderSrv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x0b, 0x7c, 0x8f, 0xac, 0x8c, 0x2d, 0xd7,
      0x6d, 0x55, 0x8c, 0x54, 0x9a, 0xaf, 0xfa, 0xc5,
      0xe3, 0x3f, 0xdc, 0xef, 0xa4, 0xae, 0x0c, 0x55,
      0x8c, 0x44, 0x48, 0x2b, 0x7f, 0x36, 0xd4, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "mrs_msgs/msg/detail/prism__functions.h"
#include "mrs_msgs/msg/detail/point2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__Point2D__EXPECTED_HASH = {1, {
    0x8b, 0x29, 0xc1, 0xd6, 0x5b, 0xaa, 0x59, 0x27,
    0x24, 0x76, 0xbe, 0x8e, 0x76, 0x8a, 0xd2, 0x03,
    0x93, 0x4c, 0xf5, 0xac, 0x4c, 0xe4, 0x93, 0xc4,
    0xd6, 0x26, 0x1f, 0x5d, 0x8b, 0xf1, 0xec, 0x2f,
  }};
static const rosidl_type_hash_t mrs_msgs__msg__Prism__EXPECTED_HASH = {1, {
    0xd9, 0xbb, 0x96, 0x60, 0x86, 0xdf, 0x6f, 0xd7,
    0x96, 0xb8, 0x80, 0x99, 0x16, 0x17, 0x25, 0x3a,
    0x48, 0x0e, 0xd3, 0x44, 0xa2, 0x28, 0xa4, 0xff,
    0xbf, 0x00, 0xdc, 0x8f, 0x2e, 0x0b, 0x6f, 0xef,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char mrs_msgs__srv__SetSafetyBorderSrv__TYPE_NAME[] = "mrs_msgs/srv/SetSafetyBorderSrv";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__Point2D__TYPE_NAME[] = "mrs_msgs/msg/Point2D";
static char mrs_msgs__msg__Prism__TYPE_NAME[] = "mrs_msgs/msg/Prism";
static char mrs_msgs__srv__SetSafetyBorderSrv_Event__TYPE_NAME[] = "mrs_msgs/srv/SetSafetyBorderSrv_Event";
static char mrs_msgs__srv__SetSafetyBorderSrv_Request__TYPE_NAME[] = "mrs_msgs/srv/SetSafetyBorderSrv_Request";
static char mrs_msgs__srv__SetSafetyBorderSrv_Response__TYPE_NAME[] = "mrs_msgs/srv/SetSafetyBorderSrv_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mrs_msgs__srv__SetSafetyBorderSrv__FIELD_NAME__request_message[] = "request_message";
static char mrs_msgs__srv__SetSafetyBorderSrv__FIELD_NAME__response_message[] = "response_message";
static char mrs_msgs__srv__SetSafetyBorderSrv__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__SetSafetyBorderSrv__FIELDS[] = {
  {
    {mrs_msgs__srv__SetSafetyBorderSrv__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__SetSafetyBorderSrv_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__SetSafetyBorderSrv_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__SetSafetyBorderSrv_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__SetSafetyBorderSrv__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__SetSafetyBorderSrv__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__SetSafetyBorderSrv__TYPE_NAME, 31, 31},
      {mrs_msgs__srv__SetSafetyBorderSrv__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__SetSafetyBorderSrv__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Point2D__EXPECTED_HASH, mrs_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Prism__EXPECTED_HASH, mrs_msgs__msg__Prism__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Prism__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__srv__SetSafetyBorderSrv_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__srv__SetSafetyBorderSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = mrs_msgs__srv__SetSafetyBorderSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__SetSafetyBorderSrv_Request__FIELD_NAME__prism[] = "prism";
static char mrs_msgs__srv__SetSafetyBorderSrv_Request__FIELD_NAME__keep_obstacles[] = "keep_obstacles";
static char mrs_msgs__srv__SetSafetyBorderSrv_Request__FIELD_NAME__update_world_origin[] = "update_world_origin";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__SetSafetyBorderSrv_Request__FIELDS[] = {
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Request__FIELD_NAME__prism, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Request__FIELD_NAME__keep_obstacles, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Request__FIELD_NAME__update_world_origin, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__SetSafetyBorderSrv_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__SetSafetyBorderSrv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__SetSafetyBorderSrv_Request__TYPE_NAME, 39, 39},
      {mrs_msgs__srv__SetSafetyBorderSrv_Request__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__SetSafetyBorderSrv_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&mrs_msgs__msg__Point2D__EXPECTED_HASH, mrs_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mrs_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Prism__EXPECTED_HASH, mrs_msgs__msg__Prism__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__Prism__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__SetSafetyBorderSrv_Response__FIELD_NAME__success[] = "success";
static char mrs_msgs__srv__SetSafetyBorderSrv_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__SetSafetyBorderSrv_Response__FIELDS[] = {
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__SetSafetyBorderSrv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__SetSafetyBorderSrv_Response__TYPE_NAME, 40, 40},
      {mrs_msgs__srv__SetSafetyBorderSrv_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__SetSafetyBorderSrv_Event__FIELD_NAME__info[] = "info";
static char mrs_msgs__srv__SetSafetyBorderSrv_Event__FIELD_NAME__request[] = "request";
static char mrs_msgs__srv__SetSafetyBorderSrv_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__SetSafetyBorderSrv_Event__FIELDS[] = {
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mrs_msgs__srv__SetSafetyBorderSrv_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mrs_msgs__srv__SetSafetyBorderSrv_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__SetSafetyBorderSrv_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Point2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetSafetyBorderSrv_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__SetSafetyBorderSrv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__SetSafetyBorderSrv_Event__TYPE_NAME, 37, 37},
      {mrs_msgs__srv__SetSafetyBorderSrv_Event__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__SetSafetyBorderSrv_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Point2D__EXPECTED_HASH, mrs_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Prism__EXPECTED_HASH, mrs_msgs__msg__Prism__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Prism__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__srv__SetSafetyBorderSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__srv__SetSafetyBorderSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "mrs_msgs/Prism prism \n"
  "bool keep_obstacles\n"
  "bool update_world_origin #Will update the world origin to the prism \n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__SetSafetyBorderSrv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__SetSafetyBorderSrv__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 143, 143},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__SetSafetyBorderSrv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__SetSafetyBorderSrv_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__SetSafetyBorderSrv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__SetSafetyBorderSrv_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__SetSafetyBorderSrv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__SetSafetyBorderSrv_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__SetSafetyBorderSrv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__SetSafetyBorderSrv__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__srv__SetSafetyBorderSrv_Event__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__srv__SetSafetyBorderSrv_Request__get_individual_type_description_source(NULL);
    sources[6] = *mrs_msgs__srv__SetSafetyBorderSrv_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__SetSafetyBorderSrv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__SetSafetyBorderSrv_Request__get_individual_type_description_source(NULL),
    sources[1] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__SetSafetyBorderSrv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__SetSafetyBorderSrv_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__SetSafetyBorderSrv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__SetSafetyBorderSrv_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__srv__SetSafetyBorderSrv_Request__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__srv__SetSafetyBorderSrv_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
