// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:srv/GetReferenceStampedSrv.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/srv/detail/get_reference_stamped_srv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__GetReferenceStampedSrv__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0xba, 0x64, 0xf8, 0xbf, 0x8a, 0x1e, 0x44,
      0xfe, 0xf6, 0x55, 0x08, 0x6a, 0x70, 0x67, 0x01,
      0x70, 0xf0, 0x46, 0x1e, 0x15, 0x93, 0x0b, 0x5b,
      0xc2, 0x16, 0x0a, 0x05, 0xf4, 0x17, 0xda, 0xc6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__GetReferenceStampedSrv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0xa4, 0xd2, 0x66, 0xdf, 0xb8, 0xbb, 0xfe,
      0xff, 0x28, 0xd0, 0x77, 0x1c, 0x6a, 0xa2, 0x03,
      0x3e, 0xb6, 0x73, 0xef, 0x2c, 0x93, 0xba, 0x0f,
      0xe7, 0xc1, 0xa3, 0x78, 0x8a, 0x54, 0xfa, 0x98,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__GetReferenceStampedSrv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x4d, 0x62, 0x93, 0x2a, 0x83, 0xa2, 0x10,
      0x1c, 0xfd, 0x92, 0xcb, 0x25, 0xf7, 0xc0, 0xde,
      0xdb, 0xf9, 0x6b, 0x50, 0x3c, 0x09, 0xa8, 0xe2,
      0xad, 0x6e, 0x64, 0xbf, 0xf5, 0x88, 0xbf, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__srv__GetReferenceStampedSrv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0xdc, 0x1e, 0x6c, 0x20, 0x89, 0x25, 0x9c,
      0xa2, 0xbf, 0xf8, 0x5f, 0x5d, 0x72, 0x87, 0x4e,
      0x75, 0xc8, 0xc3, 0xcd, 0x65, 0x44, 0x0d, 0x4e,
      0xe9, 0xad, 0x83, 0x29, 0x06, 0x01, 0xa2, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "mrs_msgs/msg/detail/reference_stamped__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "mrs_msgs/msg/detail/reference__functions.h"

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
static const rosidl_type_hash_t mrs_msgs__msg__ReferenceStamped__EXPECTED_HASH = {1, {
    0xbe, 0xed, 0xbc, 0x78, 0x47, 0x32, 0x24, 0x9c,
    0xa5, 0xd7, 0xb0, 0x9f, 0x79, 0xe2, 0xb3, 0x5b,
    0x72, 0xa7, 0x76, 0x9e, 0x38, 0x63, 0xf1, 0x6a,
    0x06, 0x82, 0xe4, 0xce, 0xf7, 0xe6, 0x43, 0xf6,
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

static char mrs_msgs__srv__GetReferenceStampedSrv__TYPE_NAME[] = "mrs_msgs/srv/GetReferenceStampedSrv";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char mrs_msgs__msg__Reference__TYPE_NAME[] = "mrs_msgs/msg/Reference";
static char mrs_msgs__msg__ReferenceStamped__TYPE_NAME[] = "mrs_msgs/msg/ReferenceStamped";
static char mrs_msgs__srv__GetReferenceStampedSrv_Event__TYPE_NAME[] = "mrs_msgs/srv/GetReferenceStampedSrv_Event";
static char mrs_msgs__srv__GetReferenceStampedSrv_Request__TYPE_NAME[] = "mrs_msgs/srv/GetReferenceStampedSrv_Request";
static char mrs_msgs__srv__GetReferenceStampedSrv_Response__TYPE_NAME[] = "mrs_msgs/srv/GetReferenceStampedSrv_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrs_msgs__srv__GetReferenceStampedSrv__FIELD_NAME__request_message[] = "request_message";
static char mrs_msgs__srv__GetReferenceStampedSrv__FIELD_NAME__response_message[] = "response_message";
static char mrs_msgs__srv__GetReferenceStampedSrv__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__GetReferenceStampedSrv__FIELDS[] = {
  {
    {mrs_msgs__srv__GetReferenceStampedSrv__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__GetReferenceStampedSrv_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__GetReferenceStampedSrv_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__srv__GetReferenceStampedSrv_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__GetReferenceStampedSrv__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {mrs_msgs__msg__ReferenceStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Response__TYPE_NAME, 44, 44},
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
mrs_msgs__srv__GetReferenceStampedSrv__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__GetReferenceStampedSrv__TYPE_NAME, 35, 35},
      {mrs_msgs__srv__GetReferenceStampedSrv__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__GetReferenceStampedSrv__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Reference__EXPECTED_HASH, mrs_msgs__msg__Reference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Reference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__ReferenceStamped__EXPECTED_HASH, mrs_msgs__msg__ReferenceStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__ReferenceStamped__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__srv__GetReferenceStampedSrv_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = mrs_msgs__srv__GetReferenceStampedSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = mrs_msgs__srv__GetReferenceStampedSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__GetReferenceStampedSrv_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__GetReferenceStampedSrv_Request__FIELDS[] = {
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__GetReferenceStampedSrv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__GetReferenceStampedSrv_Request__TYPE_NAME, 43, 43},
      {mrs_msgs__srv__GetReferenceStampedSrv_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__GetReferenceStampedSrv_Response__FIELD_NAME__reference[] = "reference";
static char mrs_msgs__srv__GetReferenceStampedSrv_Response__FIELD_NAME__success[] = "success";
static char mrs_msgs__srv__GetReferenceStampedSrv_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__GetReferenceStampedSrv_Response__FIELDS[] = {
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Response__FIELD_NAME__reference, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrs_msgs__msg__ReferenceStamped__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__GetReferenceStampedSrv_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {mrs_msgs__msg__ReferenceStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__srv__GetReferenceStampedSrv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__GetReferenceStampedSrv_Response__TYPE_NAME, 44, 44},
      {mrs_msgs__srv__GetReferenceStampedSrv_Response__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__GetReferenceStampedSrv_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Reference__EXPECTED_HASH, mrs_msgs__msg__Reference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Reference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__ReferenceStamped__EXPECTED_HASH, mrs_msgs__msg__ReferenceStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__ReferenceStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mrs_msgs__srv__GetReferenceStampedSrv_Event__FIELD_NAME__info[] = "info";
static char mrs_msgs__srv__GetReferenceStampedSrv_Event__FIELD_NAME__request[] = "request";
static char mrs_msgs__srv__GetReferenceStampedSrv_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mrs_msgs__srv__GetReferenceStampedSrv_Event__FIELDS[] = {
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mrs_msgs__srv__GetReferenceStampedSrv_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mrs_msgs__srv__GetReferenceStampedSrv_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__srv__GetReferenceStampedSrv_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {mrs_msgs__msg__ReferenceStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__srv__GetReferenceStampedSrv_Response__TYPE_NAME, 44, 44},
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
mrs_msgs__srv__GetReferenceStampedSrv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__srv__GetReferenceStampedSrv_Event__TYPE_NAME, 41, 41},
      {mrs_msgs__srv__GetReferenceStampedSrv_Event__FIELDS, 3, 3},
    },
    {mrs_msgs__srv__GetReferenceStampedSrv_Event__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__Reference__EXPECTED_HASH, mrs_msgs__msg__Reference__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mrs_msgs__msg__Reference__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrs_msgs__msg__ReferenceStamped__EXPECTED_HASH, mrs_msgs__msg__ReferenceStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mrs_msgs__msg__ReferenceStamped__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = mrs_msgs__srv__GetReferenceStampedSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = mrs_msgs__srv__GetReferenceStampedSrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "mrs_msgs/ReferenceStamped reference\n"
  "bool success\n"
  "string message\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__GetReferenceStampedSrv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__GetReferenceStampedSrv__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__GetReferenceStampedSrv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__GetReferenceStampedSrv_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__GetReferenceStampedSrv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__GetReferenceStampedSrv_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__srv__GetReferenceStampedSrv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__srv__GetReferenceStampedSrv_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__GetReferenceStampedSrv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__GetReferenceStampedSrv__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Reference__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__ReferenceStamped__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__srv__GetReferenceStampedSrv_Event__get_individual_type_description_source(NULL);
    sources[6] = *mrs_msgs__srv__GetReferenceStampedSrv_Request__get_individual_type_description_source(NULL);
    sources[7] = *mrs_msgs__srv__GetReferenceStampedSrv_Response__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[9] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__GetReferenceStampedSrv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__GetReferenceStampedSrv_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__GetReferenceStampedSrv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__GetReferenceStampedSrv_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Reference__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__ReferenceStamped__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__srv__GetReferenceStampedSrv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__srv__GetReferenceStampedSrv_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *mrs_msgs__msg__Reference__get_individual_type_description_source(NULL);
    sources[4] = *mrs_msgs__msg__ReferenceStamped__get_individual_type_description_source(NULL);
    sources[5] = *mrs_msgs__srv__GetReferenceStampedSrv_Request__get_individual_type_description_source(NULL);
    sources[6] = *mrs_msgs__srv__GetReferenceStampedSrv_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
