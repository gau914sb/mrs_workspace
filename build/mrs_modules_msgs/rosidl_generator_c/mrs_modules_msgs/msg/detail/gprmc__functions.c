// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/gprmc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
// Member `latitude_dir`
// Member `longitude_dir`
// Member `date`
// Member `mag_var_direction`
// Member `mode_indicator`
#include "rosidl_runtime_c/string_functions.h"
// Member `position_status`
#include "mrs_modules_msgs/msg/detail/gps_status__functions.h"

bool
mrs_modules_msgs__msg__Gprmc__init(mrs_modules_msgs__msg__Gprmc * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // utc_seconds
  // position_status
  if (!mrs_modules_msgs__msg__GpsStatus__init(&msg->position_status)) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // latitude_dir
  if (!rosidl_runtime_c__String__init(&msg->latitude_dir)) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // longitude_dir
  if (!rosidl_runtime_c__String__init(&msg->longitude_dir)) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // speed
  // track
  // date
  if (!rosidl_runtime_c__String__init(&msg->date)) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // mag_var
  // mag_var_direction
  if (!rosidl_runtime_c__String__init(&msg->mag_var_direction)) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__init(&msg->mode_indicator)) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  return true;
}

void
mrs_modules_msgs__msg__Gprmc__fini(mrs_modules_msgs__msg__Gprmc * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // utc_seconds
  // position_status
  mrs_modules_msgs__msg__GpsStatus__fini(&msg->position_status);
  // latitude
  // longitude
  // latitude_dir
  rosidl_runtime_c__String__fini(&msg->latitude_dir);
  // longitude_dir
  rosidl_runtime_c__String__fini(&msg->longitude_dir);
  // speed
  // track
  // date
  rosidl_runtime_c__String__fini(&msg->date);
  // mag_var
  // mag_var_direction
  rosidl_runtime_c__String__fini(&msg->mag_var_direction);
  // mode_indicator
  rosidl_runtime_c__String__fini(&msg->mode_indicator);
}

bool
mrs_modules_msgs__msg__Gprmc__are_equal(const mrs_modules_msgs__msg__Gprmc * lhs, const mrs_modules_msgs__msg__Gprmc * rhs)
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
  // message_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_id), &(rhs->message_id)))
  {
    return false;
  }
  // utc_seconds
  if (lhs->utc_seconds != rhs->utc_seconds) {
    return false;
  }
  // position_status
  if (!mrs_modules_msgs__msg__GpsStatus__are_equal(
      &(lhs->position_status), &(rhs->position_status)))
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
  // latitude_dir
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->latitude_dir), &(rhs->latitude_dir)))
  {
    return false;
  }
  // longitude_dir
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->longitude_dir), &(rhs->longitude_dir)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // track
  if (lhs->track != rhs->track) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date), &(rhs->date)))
  {
    return false;
  }
  // mag_var
  if (lhs->mag_var != rhs->mag_var) {
    return false;
  }
  // mag_var_direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mag_var_direction), &(rhs->mag_var_direction)))
  {
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode_indicator), &(rhs->mode_indicator)))
  {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Gprmc__copy(
  const mrs_modules_msgs__msg__Gprmc * input,
  mrs_modules_msgs__msg__Gprmc * output)
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
  // message_id
  if (!rosidl_runtime_c__String__copy(
      &(input->message_id), &(output->message_id)))
  {
    return false;
  }
  // utc_seconds
  output->utc_seconds = input->utc_seconds;
  // position_status
  if (!mrs_modules_msgs__msg__GpsStatus__copy(
      &(input->position_status), &(output->position_status)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // latitude_dir
  if (!rosidl_runtime_c__String__copy(
      &(input->latitude_dir), &(output->latitude_dir)))
  {
    return false;
  }
  // longitude_dir
  if (!rosidl_runtime_c__String__copy(
      &(input->longitude_dir), &(output->longitude_dir)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // track
  output->track = input->track;
  // date
  if (!rosidl_runtime_c__String__copy(
      &(input->date), &(output->date)))
  {
    return false;
  }
  // mag_var
  output->mag_var = input->mag_var;
  // mag_var_direction
  if (!rosidl_runtime_c__String__copy(
      &(input->mag_var_direction), &(output->mag_var_direction)))
  {
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__copy(
      &(input->mode_indicator), &(output->mode_indicator)))
  {
    return false;
  }
  return true;
}

mrs_modules_msgs__msg__Gprmc *
mrs_modules_msgs__msg__Gprmc__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gprmc * msg = (mrs_modules_msgs__msg__Gprmc *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Gprmc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Gprmc));
  bool success = mrs_modules_msgs__msg__Gprmc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Gprmc__destroy(mrs_modules_msgs__msg__Gprmc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Gprmc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Gprmc__Sequence__init(mrs_modules_msgs__msg__Gprmc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gprmc * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Gprmc *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Gprmc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Gprmc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Gprmc__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Gprmc__Sequence__fini(mrs_modules_msgs__msg__Gprmc__Sequence * array)
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
      mrs_modules_msgs__msg__Gprmc__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Gprmc__Sequence *
mrs_modules_msgs__msg__Gprmc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gprmc__Sequence * array = (mrs_modules_msgs__msg__Gprmc__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Gprmc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Gprmc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Gprmc__Sequence__destroy(mrs_modules_msgs__msg__Gprmc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Gprmc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Gprmc__Sequence__are_equal(const mrs_modules_msgs__msg__Gprmc__Sequence * lhs, const mrs_modules_msgs__msg__Gprmc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Gprmc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Gprmc__Sequence__copy(
  const mrs_modules_msgs__msg__Gprmc__Sequence * input,
  mrs_modules_msgs__msg__Gprmc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Gprmc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Gprmc * data =
      (mrs_modules_msgs__msg__Gprmc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Gprmc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Gprmc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Gprmc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
