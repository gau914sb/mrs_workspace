// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/ControllerDiagnostics.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/controller_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__ControllerDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0xb7, 0x03, 0xc7, 0xef, 0x18, 0xbc, 0x23,
      0x82, 0x8c, 0x95, 0xa2, 0x3a, 0xaa, 0x4b, 0xf8,
      0xb7, 0xb7, 0xf9, 0xbb, 0xb2, 0x9e, 0x50, 0x75,
      0xe5, 0x81, 0x8b, 0xc0, 0x02, 0xbb, 0x80, 0x31,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char mrs_msgs__msg__ControllerDiagnostics__TYPE_NAME[] = "mrs_msgs/msg/ControllerDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__controller[] = "controller";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__ramping_up[] = "ramping_up";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__mass_estimator[] = "mass_estimator";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__mass_difference[] = "mass_difference";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__total_mass[] = "total_mass";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_estimator[] = "disturbance_estimator";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_wx_w[] = "disturbance_wx_w";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_wy_w[] = "disturbance_wy_w";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_bx_w[] = "disturbance_bx_w";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_by_w[] = "disturbance_by_w";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_bx_b[] = "disturbance_bx_b";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_by_b[] = "disturbance_by_b";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__controller_enforcing_constraints[] = "controller_enforcing_constraints";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__horizontal_speed_constraint[] = "horizontal_speed_constraint";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__horizontal_acc_constraint[] = "horizontal_acc_constraint";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__vertical_asc_speed_constraint[] = "vertical_asc_speed_constraint";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__vertical_asc_acc_constraint[] = "vertical_asc_acc_constraint";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__vertical_desc_speed_constraint[] = "vertical_desc_speed_constraint";
static char mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__vertical_desc_acc_constraint[] = "vertical_desc_acc_constraint";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__ControllerDiagnostics__FIELDS[] = {
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__controller, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__ramping_up, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__mass_estimator, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__mass_difference, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__total_mass, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_estimator, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_wx_w, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_wy_w, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_bx_w, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_by_w, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_bx_b, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__disturbance_by_b, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__controller_enforcing_constraints, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__horizontal_speed_constraint, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__horizontal_acc_constraint, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__vertical_asc_speed_constraint, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__vertical_asc_acc_constraint, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__vertical_desc_speed_constraint, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__ControllerDiagnostics__FIELD_NAME__vertical_desc_acc_constraint, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__ControllerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__ControllerDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__ControllerDiagnostics__TYPE_NAME, 34, 34},
      {mrs_msgs__msg__ControllerDiagnostics__FIELDS, 20, 20},
    },
    {mrs_msgs__msg__ControllerDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "\n"
  "# The name of the controller (implementation-wise).\n"
  "# Beware, multiple instances of the same controller can be running.\n"
  "# The ControlManagerDiagnostics message contains the name given them\n"
  "# by the ControlManager.\n"
  "string controller\n"
  "\n"
  "# True if the controller is in the initial rampup phase (just after activation).\n"
  "bool ramping_up\n"
  "\n"
  "# true if the mass estimator is running\n"
  "bool mass_estimator\n"
  "\n"
  "# The estimated mass difference from the nominal mass.\n"
  "float64 mass_difference\n"
  "\n"
  "# Total estimated UAV mass.\n"
  "float64 total_mass\n"
  "\n"
  "# true if disturbance estimators are running\n"
  "bool disturbance_estimator\n"
  "\n"
  "# World-frame disturbances expressed in the world frame.\n"
  "float64 disturbance_wx_w\n"
  "float64 disturbance_wy_w\n"
  "\n"
  "# Body-frame (fcu_untilted) disturbances expressed in the world frame.\n"
  "float64 disturbance_bx_w\n"
  "float64 disturbance_by_w\n"
  "\n"
  "# Body-frame (fcu_untilted) disturbances expressed in the body frame (fcu_untilted).\n"
  "float64 disturbance_bx_b\n"
  "float64 disturbance_by_b\n"
  "\n"
  "# The controller can enforce dynamics constraints over the trackers.\n"
  "# This can be used when flying with a controller that is limited to\n"
  "# some maximum speed and acceleration.\n"
  "bool controller_enforcing_constraints\n"
  "float64 horizontal_speed_constraint\n"
  "float64 horizontal_acc_constraint\n"
  "float64 vertical_asc_speed_constraint\n"
  "float64 vertical_asc_acc_constraint\n"
  "float64 vertical_desc_speed_constraint\n"
  "float64 vertical_desc_acc_constraint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__ControllerDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__ControllerDiagnostics__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1424, 1424},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__ControllerDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__ControllerDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
