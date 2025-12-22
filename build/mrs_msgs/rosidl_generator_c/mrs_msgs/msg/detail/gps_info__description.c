// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrs_msgs:msg/GpsInfo.idl
// generated code does not contain a copyright notice

#include "mrs_msgs/msg/detail/gps_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrs_msgs
const rosidl_type_hash_t *
mrs_msgs__msg__GpsInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0xe3, 0x06, 0x8d, 0x04, 0x3a, 0x0a, 0x1b,
      0xdb, 0x46, 0x94, 0x7e, 0x23, 0x65, 0xc3, 0x69,
      0x5e, 0xf3, 0x5a, 0xce, 0x78, 0x0f, 0x9f, 0x48,
      0xb7, 0x7e, 0x66, 0x2a, 0x84, 0x66, 0xde, 0x02,
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

static char mrs_msgs__msg__GpsInfo__TYPE_NAME[] = "mrs_msgs/msg/GpsInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__stamp[] = "stamp";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__fix_type[] = "fix_type";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__lat[] = "lat";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__lon[] = "lon";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__alt[] = "alt";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__eph[] = "eph";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__epv[] = "epv";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__vel[] = "vel";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__cog[] = "cog";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__satellites_visible[] = "satellites_visible";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__alt_ellipsoid[] = "alt_ellipsoid";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__h_acc[] = "h_acc";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__v_acc[] = "v_acc";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__vel_acc[] = "vel_acc";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__hdg_acc[] = "hdg_acc";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__yaw[] = "yaw";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__dgps_num_sats[] = "dgps_num_sats";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__dgps_age[] = "dgps_age";
static char mrs_msgs__msg__GpsInfo__FIELD_NAME__baseline_dist[] = "baseline_dist";

static rosidl_runtime_c__type_description__Field mrs_msgs__msg__GpsInfo__FIELDS[] = {
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__fix_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__eph, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__epv, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__vel, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__cog, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__satellites_visible, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__alt_ellipsoid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__h_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__v_acc, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__vel_acc, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__hdg_acc, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__dgps_num_sats, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__dgps_age, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrs_msgs__msg__GpsInfo__FIELD_NAME__baseline_dist, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrs_msgs__msg__GpsInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrs_msgs__msg__GpsInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrs_msgs__msg__GpsInfo__TYPE_NAME, 20, 20},
      {mrs_msgs__msg__GpsInfo__FIELDS, 19, 19},
    },
    {mrs_msgs__msg__GpsInfo__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "## GPS_FIX_TYPE enum\n"
  "\n"
  "uint8 GPS_FIX_TYPE_NO_GPS     = 0    # no gps connected\n"
  "uint8 GPS_FIX_TYPE_NO_FIX     = 1    # no position information, gps is connected\n"
  "uint8 GPS_FIX_TYPE_2D_FIX     = 2    # 2D position\n"
  "uint8 GPS_FIX_TYPE_3D_FIX     = 3    # 3D position\n"
  "uint8 GPS_FIX_TYPE_DGPS       = 4    # dgps/sbas aided 3D position\n"
  "uint8 GPS_FIX_TYPE_RTK_FLOATR = 5    # tk float, 3D position\n"
  "uint8 GPS_FIX_TYPE_RTK_FIXEDR = 6    # tk fixed, 3D position\n"
  "uint8 GPS_FIX_TYPE_STATIC     = 7    # static fixed, typically used for base stations\n"
  "uint8 GPS_FIX_TYPE_PPP        = 8    # ppp, 3D position\n"
  "uint8 fix_type      # [GPS_FIX_TYPE] gps fix type\n"
  "\n"
  "float64 lat              # [deg] latitude (WGS84, egm96 ellipsoid)\n"
  "float64 lon              # [deg] longitude (WGS84, egm96 ellipsoid)\n"
  "float32 alt              # [m] altitude (MSL). positive for up. note that virtually all gps modules provide the msl altitude in addition to the wgs84 altitude.\n"
  "uint16 eph               # gps hdop horizontal dilution of position (unitless). if unknown, set to: uint16_max\n"
  "uint16 epv               # gps vdop vertical dilution of position (unitless). if unknown, set to: uint16_max\n"
  "float32 vel              # [m/s] gps ground speed. if unknown, set to: uint16_max\n"
  "float32 cog              # [deg] course over ground (NOT heading, but direction of movement), 0.0..359.99 degrees. if unknown, set to: uint16_max\n"
  "uint8 satellites_visible # number of satellites visible. if unknown, set to 255\n"
  "\n"
  "float32 alt_ellipsoid    # [m] altitude (above wgs84, egm96 ellipsoid). positive for up.\n"
  "float32 h_acc            # [m] position uncertainty. positive for up.\n"
  "float32 v_acc            # [m] altitude uncertainty. positive for up.\n"
  "float32 vel_acc          # [m/s] speed uncertainty. positive for up.\n"
  "float32 hdg_acc          # [deg] heading / track uncertainty\n"
  "float32 yaw              # [deg] yaw in earth frame from north.\n"
  "\n"
  "uint8 dgps_num_sats      # number of dgps satellites\n"
  "float32 dgps_age          # [s] age of dgps info\n"
  "float32 baseline_dist     # [m] distance to the basestation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrs_msgs__msg__GpsInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrs_msgs__msg__GpsInfo__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2083, 2083},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrs_msgs__msg__GpsInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrs_msgs__msg__GpsInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
