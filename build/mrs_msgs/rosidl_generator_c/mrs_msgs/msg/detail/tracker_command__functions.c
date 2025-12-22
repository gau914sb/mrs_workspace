// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/TrackerCommand.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/tracker_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
// Member `attitude_rate`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
// Member `acceleration`
// Member `jerk`
// Member `snap`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `full_state_prediction`
#include "mrs_msgs/msg/detail/mpc_prediction_full_state__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
mrs_msgs__msg__TrackerCommand__init(mrs_msgs__msg__TrackerCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__init(&msg->jerk)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__init(&msg->snap)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // full_state_prediction
  if (!mrs_msgs__msg__MpcPredictionFullState__init(&msg->full_state_prediction)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // attitude_rate
  if (!geometry_msgs__msg__Point__init(&msg->attitude_rate)) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
    return false;
  }
  // throttle
  // heading
  // heading_rate
  // heading_acceleration
  // heading_jerk
  // disable_position_gains
  // disable_antiwindups
  // use_position_horizontal
  // use_position_vertical
  // use_velocity_horizontal
  // use_velocity_vertical
  // use_acceleration
  // use_jerk
  // use_snap
  // use_attitude_rate
  // use_heading
  // use_heading_rate
  // use_heading_acceleration
  // use_heading_jerk
  // use_orientation
  // use_throttle
  // use_full_state_prediction
  return true;
}

void
mrs_msgs__msg__TrackerCommand__fini(mrs_msgs__msg__TrackerCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // jerk
  geometry_msgs__msg__Vector3__fini(&msg->jerk);
  // snap
  geometry_msgs__msg__Vector3__fini(&msg->snap);
  // full_state_prediction
  mrs_msgs__msg__MpcPredictionFullState__fini(&msg->full_state_prediction);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // attitude_rate
  geometry_msgs__msg__Point__fini(&msg->attitude_rate);
  // throttle
  // heading
  // heading_rate
  // heading_acceleration
  // heading_jerk
  // disable_position_gains
  // disable_antiwindups
  // use_position_horizontal
  // use_position_vertical
  // use_velocity_horizontal
  // use_velocity_vertical
  // use_acceleration
  // use_jerk
  // use_snap
  // use_attitude_rate
  // use_heading
  // use_heading_rate
  // use_heading_acceleration
  // use_heading_jerk
  // use_orientation
  // use_throttle
  // use_full_state_prediction
}

bool
mrs_msgs__msg__TrackerCommand__are_equal(const mrs_msgs__msg__TrackerCommand * lhs, const mrs_msgs__msg__TrackerCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->jerk), &(rhs->jerk)))
  {
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->snap), &(rhs->snap)))
  {
    return false;
  }
  // full_state_prediction
  if (!mrs_msgs__msg__MpcPredictionFullState__are_equal(
      &(lhs->full_state_prediction), &(rhs->full_state_prediction)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // attitude_rate
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->attitude_rate), &(rhs->attitude_rate)))
  {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // heading_rate
  if (lhs->heading_rate != rhs->heading_rate) {
    return false;
  }
  // heading_acceleration
  if (lhs->heading_acceleration != rhs->heading_acceleration) {
    return false;
  }
  // heading_jerk
  if (lhs->heading_jerk != rhs->heading_jerk) {
    return false;
  }
  // disable_position_gains
  if (lhs->disable_position_gains != rhs->disable_position_gains) {
    return false;
  }
  // disable_antiwindups
  if (lhs->disable_antiwindups != rhs->disable_antiwindups) {
    return false;
  }
  // use_position_horizontal
  if (lhs->use_position_horizontal != rhs->use_position_horizontal) {
    return false;
  }
  // use_position_vertical
  if (lhs->use_position_vertical != rhs->use_position_vertical) {
    return false;
  }
  // use_velocity_horizontal
  if (lhs->use_velocity_horizontal != rhs->use_velocity_horizontal) {
    return false;
  }
  // use_velocity_vertical
  if (lhs->use_velocity_vertical != rhs->use_velocity_vertical) {
    return false;
  }
  // use_acceleration
  if (lhs->use_acceleration != rhs->use_acceleration) {
    return false;
  }
  // use_jerk
  if (lhs->use_jerk != rhs->use_jerk) {
    return false;
  }
  // use_snap
  if (lhs->use_snap != rhs->use_snap) {
    return false;
  }
  // use_attitude_rate
  if (lhs->use_attitude_rate != rhs->use_attitude_rate) {
    return false;
  }
  // use_heading
  if (lhs->use_heading != rhs->use_heading) {
    return false;
  }
  // use_heading_rate
  if (lhs->use_heading_rate != rhs->use_heading_rate) {
    return false;
  }
  // use_heading_acceleration
  if (lhs->use_heading_acceleration != rhs->use_heading_acceleration) {
    return false;
  }
  // use_heading_jerk
  if (lhs->use_heading_jerk != rhs->use_heading_jerk) {
    return false;
  }
  // use_orientation
  if (lhs->use_orientation != rhs->use_orientation) {
    return false;
  }
  // use_throttle
  if (lhs->use_throttle != rhs->use_throttle) {
    return false;
  }
  // use_full_state_prediction
  if (lhs->use_full_state_prediction != rhs->use_full_state_prediction) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__TrackerCommand__copy(
  const mrs_msgs__msg__TrackerCommand * input,
  mrs_msgs__msg__TrackerCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->jerk), &(output->jerk)))
  {
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->snap), &(output->snap)))
  {
    return false;
  }
  // full_state_prediction
  if (!mrs_msgs__msg__MpcPredictionFullState__copy(
      &(input->full_state_prediction), &(output->full_state_prediction)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // attitude_rate
  if (!geometry_msgs__msg__Point__copy(
      &(input->attitude_rate), &(output->attitude_rate)))
  {
    return false;
  }
  // throttle
  output->throttle = input->throttle;
  // heading
  output->heading = input->heading;
  // heading_rate
  output->heading_rate = input->heading_rate;
  // heading_acceleration
  output->heading_acceleration = input->heading_acceleration;
  // heading_jerk
  output->heading_jerk = input->heading_jerk;
  // disable_position_gains
  output->disable_position_gains = input->disable_position_gains;
  // disable_antiwindups
  output->disable_antiwindups = input->disable_antiwindups;
  // use_position_horizontal
  output->use_position_horizontal = input->use_position_horizontal;
  // use_position_vertical
  output->use_position_vertical = input->use_position_vertical;
  // use_velocity_horizontal
  output->use_velocity_horizontal = input->use_velocity_horizontal;
  // use_velocity_vertical
  output->use_velocity_vertical = input->use_velocity_vertical;
  // use_acceleration
  output->use_acceleration = input->use_acceleration;
  // use_jerk
  output->use_jerk = input->use_jerk;
  // use_snap
  output->use_snap = input->use_snap;
  // use_attitude_rate
  output->use_attitude_rate = input->use_attitude_rate;
  // use_heading
  output->use_heading = input->use_heading;
  // use_heading_rate
  output->use_heading_rate = input->use_heading_rate;
  // use_heading_acceleration
  output->use_heading_acceleration = input->use_heading_acceleration;
  // use_heading_jerk
  output->use_heading_jerk = input->use_heading_jerk;
  // use_orientation
  output->use_orientation = input->use_orientation;
  // use_throttle
  output->use_throttle = input->use_throttle;
  // use_full_state_prediction
  output->use_full_state_prediction = input->use_full_state_prediction;
  return true;
}

mrs_msgs__msg__TrackerCommand *
mrs_msgs__msg__TrackerCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__TrackerCommand * msg = (mrs_msgs__msg__TrackerCommand *)allocator.allocate(sizeof(mrs_msgs__msg__TrackerCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__TrackerCommand));
  bool success = mrs_msgs__msg__TrackerCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__TrackerCommand__destroy(mrs_msgs__msg__TrackerCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__TrackerCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__TrackerCommand__Sequence__init(mrs_msgs__msg__TrackerCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__TrackerCommand * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__TrackerCommand *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__TrackerCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__TrackerCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__TrackerCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mrs_msgs__msg__TrackerCommand__Sequence__fini(mrs_msgs__msg__TrackerCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mrs_msgs__msg__TrackerCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mrs_msgs__msg__TrackerCommand__Sequence *
mrs_msgs__msg__TrackerCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__TrackerCommand__Sequence * array = (mrs_msgs__msg__TrackerCommand__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__TrackerCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__TrackerCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__TrackerCommand__Sequence__destroy(mrs_msgs__msg__TrackerCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__TrackerCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__TrackerCommand__Sequence__are_equal(const mrs_msgs__msg__TrackerCommand__Sequence * lhs, const mrs_msgs__msg__TrackerCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__TrackerCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__TrackerCommand__Sequence__copy(
  const mrs_msgs__msg__TrackerCommand__Sequence * input,
  mrs_msgs__msg__TrackerCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__TrackerCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__TrackerCommand * data =
      (mrs_msgs__msg__TrackerCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__TrackerCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__TrackerCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__TrackerCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
