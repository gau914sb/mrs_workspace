// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/gps_fix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "mrs_modules_msgs/msg/detail/gps_status__functions.h"

bool
mrs_modules_msgs__msg__GPSFix__init(mrs_modules_msgs__msg__GPSFix * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__GPSFix__fini(msg);
    return false;
  }
  // num_satellites_used_in_solution
  // num_satellites_tracked
  // status
  if (!mrs_modules_msgs__msg__GpsStatus__init(&msg->status)) {
    mrs_modules_msgs__msg__GPSFix__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // altitude
  // track
  // speed
  // time
  // hdop
  // position_covariance
  // position_covariance_type
  return true;
}

void
mrs_modules_msgs__msg__GPSFix__fini(mrs_modules_msgs__msg__GPSFix * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // num_satellites_used_in_solution
  // num_satellites_tracked
  // status
  mrs_modules_msgs__msg__GpsStatus__fini(&msg->status);
  // latitude
  // longitude
  // altitude
  // track
  // speed
  // time
  // hdop
  // position_covariance
  // position_covariance_type
}

bool
mrs_modules_msgs__msg__GPSFix__are_equal(const mrs_modules_msgs__msg__GPSFix * lhs, const mrs_modules_msgs__msg__GPSFix * rhs)
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
  // num_satellites_used_in_solution
  if (lhs->num_satellites_used_in_solution != rhs->num_satellites_used_in_solution) {
    return false;
  }
  // num_satellites_tracked
  if (lhs->num_satellites_tracked != rhs->num_satellites_tracked) {
    return false;
  }
  // status
  if (!mrs_modules_msgs__msg__GpsStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // track
  if (lhs->track != rhs->track) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // hdop
  if (lhs->hdop != rhs->hdop) {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->position_covariance[i] != rhs->position_covariance[i]) {
      return false;
    }
  }
  // position_covariance_type
  if (lhs->position_covariance_type != rhs->position_covariance_type) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__GPSFix__copy(
  const mrs_modules_msgs__msg__GPSFix * input,
  mrs_modules_msgs__msg__GPSFix * output)
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
  // num_satellites_used_in_solution
  output->num_satellites_used_in_solution = input->num_satellites_used_in_solution;
  // num_satellites_tracked
  output->num_satellites_tracked = input->num_satellites_tracked;
  // status
  if (!mrs_modules_msgs__msg__GpsStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // altitude
  output->altitude = input->altitude;
  // track
  output->track = input->track;
  // speed
  output->speed = input->speed;
  // time
  output->time = input->time;
  // hdop
  output->hdop = input->hdop;
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->position_covariance[i] = input->position_covariance[i];
  }
  // position_covariance_type
  output->position_covariance_type = input->position_covariance_type;
  return true;
}

mrs_modules_msgs__msg__GPSFix *
mrs_modules_msgs__msg__GPSFix__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__GPSFix * msg = (mrs_modules_msgs__msg__GPSFix *)allocator.allocate(sizeof(mrs_modules_msgs__msg__GPSFix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__GPSFix));
  bool success = mrs_modules_msgs__msg__GPSFix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__GPSFix__destroy(mrs_modules_msgs__msg__GPSFix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__GPSFix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__GPSFix__Sequence__init(mrs_modules_msgs__msg__GPSFix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__GPSFix * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__GPSFix *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__GPSFix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__GPSFix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__GPSFix__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__GPSFix__Sequence__fini(mrs_modules_msgs__msg__GPSFix__Sequence * array)
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
      mrs_modules_msgs__msg__GPSFix__fini(&array->data[i]);
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

mrs_modules_msgs__msg__GPSFix__Sequence *
mrs_modules_msgs__msg__GPSFix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__GPSFix__Sequence * array = (mrs_modules_msgs__msg__GPSFix__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__GPSFix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__GPSFix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__GPSFix__Sequence__destroy(mrs_modules_msgs__msg__GPSFix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__GPSFix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__GPSFix__Sequence__are_equal(const mrs_modules_msgs__msg__GPSFix__Sequence * lhs, const mrs_modules_msgs__msg__GPSFix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__GPSFix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__GPSFix__Sequence__copy(
  const mrs_modules_msgs__msg__GPSFix__Sequence * input,
  mrs_modules_msgs__msg__GPSFix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__GPSFix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__GPSFix * data =
      (mrs_modules_msgs__msg__GPSFix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__GPSFix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__GPSFix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__GPSFix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
