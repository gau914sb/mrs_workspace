// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_modules_msgs/msg/trackstat_channel.h"


#ifndef MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__STRUCT_H_
#define MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'reject'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TrackstatChannel in the package mrs_modules_msgs.
/**
  * A submessage of Trackstat that contains all of the data about a single hardware channel
 */
typedef struct mrs_modules_msgs__msg__TrackstatChannel
{
  /// Satellite PRN number
  int16_t prn;
  /// GLONASS Frequency +7
  int16_t glofreq;
  /// Channel tracking status
  uint32_t ch_tr_status;
  /// Pseudorange (m)
  double psr;
  /// Doppler frequency (Hz)
  float doppler;
  /// Carrier to noise density ratio (dB-Hz)
  float c_no;
  /// Number of seconds of continuous tracking (no cycle slips)
  float locktime;
  /// Pseudorange residual from pseudorange filter (m)
  float psr_res;
  /// Range reject code from pseudorange filter
  rosidl_runtime_c__String reject;
  /// Pseudorange filter weighting
  float psr_weight;
} mrs_modules_msgs__msg__TrackstatChannel;

// Struct for a sequence of mrs_modules_msgs__msg__TrackstatChannel.
typedef struct mrs_modules_msgs__msg__TrackstatChannel__Sequence
{
  mrs_modules_msgs__msg__TrackstatChannel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrs_modules_msgs__msg__TrackstatChannel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRS_MODULES_MSGS__MSG__DETAIL__TRACKSTAT_CHANNEL__STRUCT_H_
