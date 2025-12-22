// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/range_information.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RangeInformation in the package mrs_modules_msgs.
/**
  * Satellite Range information structure used in range messages
 */
typedef struct mrs_modules_msgs__msg__RangeInformation
{
  /// Satelite PRN number of range measurement
  uint16_t prn_number;
  /// GLONASS Frequency
  uint16_t glofreq;
  /// Pseudorange measurement(m)
  double psr;
  /// Pseudorange measurement standard deviation(m)
  float psr_std;
  /// Carrier phase, in cycles
  double adr;
  /// Estimated carrier phase standard deviation(cycles)
  float adr_std;
  /// Instantaneous carrier Doppler frequency(Hz)
  float dopp;
  /// Carrier to noise density ratio
  float noise_density_ratio;
  /// of seconds of continous tracking
  float locktime;
  /// Tracking status
  uint32_t tracking_status;
} mrs_modules_msgs__msg__RangeInformation;

// Struct for a sequence of mrs_modules_msgs__msg__RangeInformation.
typedef struct mrs_modules_msgs__msg__RangeInformation__Sequence
{
  mrs_modules_msgs__msg__RangeInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__RangeInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__RANGE_INFORMATION__STRUCT_H_
