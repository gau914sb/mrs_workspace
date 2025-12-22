// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/SensorInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/sensor_info.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SENSOR_TYPE_UNKNOWN'.
/**
  * sensor type
 */
enum
{
  mrs_modules_msgs__msg__SensorInfo__SENSOR_TYPE_UNKNOWN = 0
};

/// Constant 'SENSOR_TYPE_CAMERA'.
enum
{
  mrs_modules_msgs__msg__SensorInfo__SENSOR_TYPE_CAMERA = 1
};

/// Constant 'SENSOR_TYPE_LIDAR_1D'.
enum
{
  mrs_modules_msgs__msg__SensorInfo__SENSOR_TYPE_LIDAR_1D = 2
};

/// Constant 'SENSOR_TYPE_LIDAR_2D'.
enum
{
  mrs_modules_msgs__msg__SensorInfo__SENSOR_TYPE_LIDAR_2D = 3
};

/// Constant 'ENSOR_TYPE_LIDAR_3D'.
enum
{
  mrs_modules_msgs__msg__SensorInfo__ENSOR_TYPE_LIDAR_3D = 4
};

// Include directives for member types
// Member 'name'
// Member 'topic'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorInfo in the package mrs_modules_msgs.
/**
  * name of the sensor
 */
typedef struct mrs_modules_msgs__msg__SensorInfo
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String topic;
  uint8_t type;
  float expected_rate;
} mrs_modules_msgs__msg__SensorInfo;

// Struct for a sequence of mrs_modules_msgs__msg__SensorInfo.
typedef struct mrs_modules_msgs__msg__SensorInfo__Sequence
{
  mrs_modules_msgs__msg__SensorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__SensorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__SENSOR_INFO__STRUCT_H_
