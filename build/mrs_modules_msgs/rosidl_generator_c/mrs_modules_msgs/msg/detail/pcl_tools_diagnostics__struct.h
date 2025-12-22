// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/pcl_tools_diagnostics.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SENSOR_TYPE_NONE'.
/**
  * Sensor type
 */
enum
{
  mrs_modules_msgs__msg__PclToolsDiagnostics__SENSOR_TYPE_NONE = -1
};

/// Constant 'SENSOR_TYPE_LIDAR_3D'.
enum
{
  mrs_modules_msgs__msg__PclToolsDiagnostics__SENSOR_TYPE_LIDAR_3D = 0
};

/// Constant 'SENSOR_TYPE_DEPTH_CAMERA'.
enum
{
  mrs_modules_msgs__msg__PclToolsDiagnostics__SENSOR_TYPE_DEPTH_CAMERA = 1
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'sensor_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PclToolsDiagnostics in the package mrs_modules_msgs.
typedef struct mrs_modules_msgs__msg__PclToolsDiagnostics
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String sensor_name;
  uint8_t sensor_type;
  float frequency;
  float vfov;
  /// height of input data
  uint16_t rows_before;
  /// width of input data
  uint16_t cols_before;
  /// height of output data
  uint16_t rows_after;
  /// width of output data
  uint16_t cols_after;
} mrs_modules_msgs__msg__PclToolsDiagnostics;

// Struct for a sequence of mrs_modules_msgs__msg__PclToolsDiagnostics.
typedef struct mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence
{
  mrs_modules_msgs__msg__PclToolsDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__PclToolsDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__PCL_TOOLS_DIAGNOSTICS__STRUCT_H_
