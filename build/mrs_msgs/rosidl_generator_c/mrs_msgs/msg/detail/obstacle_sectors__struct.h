// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_msgs:msg/ObstacleSectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/obstacle_sectors.h"


#ifndef MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__STRUCT_H_
#define MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'OBSTACLE_NOT_DETECTED'.
/**
  * Obstacle distance special values.
 */
static const double mrs_msgs__msg__ObstacleSectors__OBSTACLE_NOT_DETECTED = -1.0l;

/// Constant 'OBSTACLE_NO_DATA'.
static const double mrs_msgs__msg__ObstacleSectors__OBSTACLE_NO_DATA = -2.0l;

/// Constant 'SENSOR_NONE'.
/**
  * Sensor types enum.
 */
enum
{
  mrs_msgs__msg__ObstacleSectors__SENSOR_NONE = -1
};

/// Constant 'SENSOR_DEPTH'.
enum
{
  mrs_msgs__msg__ObstacleSectors__SENSOR_DEPTH = 0
};

/// Constant 'SENSOR_LIDAR1D'.
enum
{
  mrs_msgs__msg__ObstacleSectors__SENSOR_LIDAR1D = 1
};

/// Constant 'SENSOR_LIDAR2D'.
enum
{
  mrs_msgs__msg__ObstacleSectors__SENSOR_LIDAR2D = 2
};

/// Constant 'SENSOR_LIDAR3D'.
enum
{
  mrs_msgs__msg__ObstacleSectors__SENSOR_LIDAR3D = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sectors'
// Member 'sector_sensors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ObstacleSectors in the package mrs_msgs.
/**
  * This message represents the output from the mrs_bumper package.
  *
  * The *sectors* variable contains information about obstacles in the horizontal,
  * bottom and up sectors. Horizontal sectors take up the first part of the array.
  * Bottom and up sectors are the second and first elements from the end of the array:
  * sectors[0, 1, ..., n_horizontal_sectors-1] -> horizontal sectors
  * sectors[n_horizontal_sectors]              -> bottom sector
  * sectors[n_horizontal_sectors+1]            -> top sector
  *
  * The horizontal sectors are indexed counterclockwise, starting from the front facing
  * sector, relative to the MAV orientation (see picture below). The last two
  * elements of the *sectors* variable are the above and below sectors, respectively.
  *
  *         TOP VIEW
  *         --------
  *
  * |      \         /            |
  * |       \   0   /   (forward) |
  * |        \     /        x     |
  * |                       ^     |
  * |          O O          |     |
  * |      1    X    3   <--* z   |
  * |          O O       y        |
  * |                             |
  * |        /     \              |
  * |       /   2   \             |
  * |      /         \            |
 */
typedef struct mrs_msgs__msg__ObstacleSectors
{
  /// Time at which the data in this message was generated, coordinate frame ID.
  std_msgs__msg__Header header;
  /// Number of horizontal bumper sectors (total number of sectors -2).
  uint32_t n_horizontal_sectors;
  /// Vertical FOV of the individual horizontal sectors.
  double sectors_vertical_fov;
  /// Distance to closest detected obstacle in each sector.
  rosidl_runtime_c__double__Sequence sectors;
  /// Sensor ID of the sensor, which was used for obstacle detection in each sector.
  rosidl_runtime_c__int8__Sequence sector_sensors;
} mrs_msgs__msg__ObstacleSectors;

// Struct for a sequence of mrs_msgs__msg__ObstacleSectors.
typedef struct mrs_msgs__msg__ObstacleSectors__Sequence
{
  mrs_msgs__msg__ObstacleSectors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_msgs__msg__ObstacleSectors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MSGS__MSG__DETAIL__OBSTACLE_SECTORS__STRUCT_H_
