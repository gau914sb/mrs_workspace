// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:srv/SetObstacleSrv.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/srv/detail/set_obstacle_srv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__SetObstacleSrv__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x58, 0x70, 0x5d, 0x46, 0x2f, 0x36, 0xa4,
      0x7a, 0x18, 0x7b, 0x27, 0xba, 0x70, 0x52, 0x18,
      0xa6, 0x68, 0xcd, 0xee, 0xea, 0x52, 0xa2, 0x79,
      0x6f, 0x61, 0xa5, 0x25, 0x84, 0x3f, 0xdd, 0x12,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__SetObstacleSrv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x81, 0x56, 0x88, 0xd4, 0x1a, 0xf3, 0xdb,
      0x63, 0x13, 0xeb, 0x02, 0x81, 0xab, 0x98, 0xa7,
      0xd5, 0x71, 0x42, 0xd5, 0x04, 0x25, 0xe6, 0x77,
      0x2c, 0xeb, 0xdc, 0x1f, 0xa5, 0x47, 0x5e, 0xca,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__SetObstacleSrv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x4b, 0x87, 0xff, 0xac, 0x36, 0x1b, 0xdd,
      0x0f, 0x3d, 0xb8, 0x18, 0xc0, 0xc7, 0xec, 0x00,
      0xd2, 0xb7, 0xa1, 0xf0, 0x54, 0x77, 0x8b, 0x2a,
      0xb2, 0x7b, 0x3a, 0xab, 0xc8, 0xdc, 0x44, 0x04,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__SetObstacleSrv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0xd7, 0xae, 0x6b, 0x30, 0x15, 0x40, 0xd7,
      0xac, 0x43, 0x54, 0x0b, 0x78, 0x83, 0x1f, 0xf1,
      0x30, 0x21, 0x85, 0x41, 0xb2, 0x5f, 0x3d, 0x0f,
      0xc8, 0x9c, 0x44, 0xae, 0x84, 0x03, 0xdc, 0x85,
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

static char mrs_msgs__srv__SetObstacleSrv__TYPE_NAME[] = "mrs_msgs/srv/SetObstacleSrv";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrs_msgs__msg__Point2D__TYPE_NAME[] = "mrs_msgs/msg/Point2D";
static char mrs_msgs__msg__Prism__TYPE_NAME[] = "mrs_msgs/msg/Prism";
static char mrs_msgs__srv__SetObstacleSrv_Event__TYPE_NAME[] = "mrs_msgs/srv/SetObstacleSrv_Event";
static char mrs_msgs__srv__SetObstacleSrv_Request__TYPE_NAME[] = "mrs_msgs/srv/SetObstacleSrv_Request";
static char mrs_msgs__srv__SetObstacleSrv_Response__TYPE_NAME[] = "mrs_msgs/srv/SetObstacleSrv_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mrs_msgs__srv__SetObstacleSrv__FIELD_NAME__request_message[] = "request_message";
static char mrs_msgs__srv__SetObstacleSrv__FIELD_NAME__response_message[] = "response_message";
static char mrs_msgs__srv__SetObstacleSrv__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__SetObstacleSrv__FIELDS[] = {
  {
    {mrs_msgs__srv__SetObstacleSrv__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__SetObstacleSrv_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetObstacleSrv__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__SetObstacleSrv_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetObstacleSrv__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__SetObstacleSrv_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__SetObstacleSrv__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {mrs_msgs__srv__SetObstacleSrv_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetObstacleSrv_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetObstacleSrv_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__SetObstacleSrv__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__SetObstacleSrv__TYPE_NAME, 27, 27},
      {mrs_msgs__srv__SetObstacleSrv__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__SetObstacleSrv__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Point2D__EXPECTED_HASH, mrs_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Prism__EXPECTED_HASH, mrs_msgs__msg__Prism__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Prism__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__srv__SetObstacleSrv_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__srv__SetObstacleSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = mrs_msgs__srv__SetObstacleSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__SetObstacleSrv_Request__FIELD_NAME__prism[] = "prism";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__SetObstacleSrv_Request__FIELDS[] = {
  {
    {mrs_msgs__srv__SetObstacleSrv_Request__FIELD_NAME__prism, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__Prism__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__SetObstacleSrv_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
mrs_msgs__srv__SetObstacleSrv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__SetObstacleSrv_Request__TYPE_NAME, 35, 35},
      {mrs_msgs__srv__SetObstacleSrv_Request__FIELDS, 1, 1},
    },
    {mrs_msgs__srv__SetObstacleSrv_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
static char mrs_msgs__srv__SetObstacleSrv_Response__FIELD_NAME__success[] = "success";
static char mrs_msgs__srv__SetObstacleSrv_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__SetObstacleSrv_Response__FIELDS[] = {
  {
    {mrs_msgs__srv__SetObstacleSrv_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetObstacleSrv_Response__FIELD_NAME__message, 7, 7},
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
mrs_msgs__srv__SetObstacleSrv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__SetObstacleSrv_Response__TYPE_NAME, 36, 36},
      {mrs_msgs__srv__SetObstacleSrv_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__SetObstacleSrv_Event__FIELD_NAME__info[] = "info";
static char mrs_msgs__srv__SetObstacleSrv_Event__FIELD_NAME__request[] = "request";
static char mrs_msgs__srv__SetObstacleSrv_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__SetObstacleSrv_Event__FIELDS[] = {
  {
    {mrs_msgs__srv__SetObstacleSrv_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetObstacleSrv_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mrs_msgs__srv__SetObstacleSrv_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetObstacleSrv_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mrs_msgs__srv__SetObstacleSrv_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__SetObstacleSrv_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {mrs_msgs__srv__SetObstacleSrv_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__SetObstacleSrv_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__SetObstacleSrv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__SetObstacleSrv_Event__TYPE_NAME, 33, 33},
      {mrs_msgs__srv__SetObstacleSrv_Event__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__SetObstacleSrv_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Point2D__EXPECTED_HASH, mrs_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrs_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Prism__EXPECTED_HASH, mrs_msgs__msg__Prism__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Prism__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__srv__SetObstacleSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__srv__SetObstacleSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "mrs_msgs/Prism prism \n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__SetObstacleSrv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__SetObstacleSrv__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 54, 54},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__SetObstacleSrv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__SetObstacleSrv_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__SetObstacleSrv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__SetObstacleSrv_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__SetObstacleSrv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__SetObstacleSrv_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__SetObstacleSrv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__SetObstacleSrv__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__srv__SetObstacleSrv_Event__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__srv__SetObstacleSrv_Request__get_individual_type_description_source(NULL);
    sources[6] = *mrs_msgs__srv__SetObstacleSrv_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__SetObstacleSrv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__SetObstacleSrv_Request__get_individual_type_description_source(NULL),
    sources[1] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__SetObstacleSrv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__SetObstacleSrv_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__SetObstacleSrv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__SetObstacleSrv_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrs_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Prism__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__srv__SetObstacleSrv_Request__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__srv__SetObstacleSrv_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
