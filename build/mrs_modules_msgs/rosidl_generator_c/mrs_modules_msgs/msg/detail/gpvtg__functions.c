// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/gpvtg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
// Member `track_true_indicator`
// Member `track_mag_indicator`
// Member `speed_knots_indicator`
// Member `speed_kmh_indicator`
// Member `mode_indicator`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__Gpvtg__init(mrs_modules_msgs__msg__Gpvtg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    mrs_modules_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // track_true
  // track_true_indicator
  if (!rosidl_runtime_c__String__init(&msg->track_true_indicator)) {
    mrs_modules_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // track_mag
  // track_mag_indicator
  if (!rosidl_runtime_c__String__init(&msg->track_mag_indicator)) {
    mrs_modules_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // speed_knots
  // speed_knots_indicator
  if (!rosidl_runtime_c__String__init(&msg->speed_knots_indicator)) {
    mrs_modules_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // speed_kmh
  // speed_kmh_indicator
  if (!rosidl_runtime_c__String__init(&msg->speed_kmh_indicator)) {
    mrs_modules_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__init(&msg->mode_indicator)) {
    mrs_modules_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  return true;
}

void
mrs_modules_msgs__msg__Gpvtg__fini(mrs_modules_msgs__msg__Gpvtg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // track_true
  // track_true_indicator
  rosidl_runtime_c__String__fini(&msg->track_true_indicator);
  // track_mag
  // track_mag_indicator
  rosidl_runtime_c__String__fini(&msg->track_mag_indicator);
  // speed_knots
  // speed_knots_indicator
  rosidl_runtime_c__String__fini(&msg->speed_knots_indicator);
  // speed_kmh
  // speed_kmh_indicator
  rosidl_runtime_c__String__fini(&msg->speed_kmh_indicator);
  // mode_indicator
  rosidl_runtime_c__String__fini(&msg->mode_indicator);
}

bool
mrs_modules_msgs__msg__Gpvtg__are_equal(const mrs_modules_msgs__msg__Gpvtg * lhs, const mrs_modules_msgs__msg__Gpvtg * rhs)
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
  // track_true
  if (lhs->track_true != rhs->track_true) {
    return false;
  }
  // track_true_indicator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->track_true_indicator), &(rhs->track_true_indicator)))
  {
    return false;
  }
  // track_mag
  if (lhs->track_mag != rhs->track_mag) {
    return false;
  }
  // track_mag_indicator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->track_mag_indicator), &(rhs->track_mag_indicator)))
  {
    return false;
  }
  // speed_knots
  if (lhs->speed_knots != rhs->speed_knots) {
    return false;
  }
  // speed_knots_indicator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->speed_knots_indicator), &(rhs->speed_knots_indicator)))
  {
    return false;
  }
  // speed_kmh
  if (lhs->speed_kmh != rhs->speed_kmh) {
    return false;
  }
  // speed_kmh_indicator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->speed_kmh_indicator), &(rhs->speed_kmh_indicator)))
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
mrs_modules_msgs__msg__Gpvtg__copy(
  const mrs_modules_msgs__msg__Gpvtg * input,
  mrs_modules_msgs__msg__Gpvtg * output)
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
  // track_true
  output->track_true = input->track_true;
  // track_true_indicator
  if (!rosidl_runtime_c__String__copy(
      &(input->track_true_indicator), &(output->track_true_indicator)))
  {
    return false;
  }
  // track_mag
  output->track_mag = input->track_mag;
  // track_mag_indicator
  if (!rosidl_runtime_c__String__copy(
      &(input->track_mag_indicator), &(output->track_mag_indicator)))
  {
    return false;
  }
  // speed_knots
  output->speed_knots = input->speed_knots;
  // speed_knots_indicator
  if (!rosidl_runtime_c__String__copy(
      &(input->speed_knots_indicator), &(output->speed_knots_indicator)))
  {
    return false;
  }
  // speed_kmh
  output->speed_kmh = input->speed_kmh;
  // speed_kmh_indicator
  if (!rosidl_runtime_c__String__copy(
      &(input->speed_kmh_indicator), &(output->speed_kmh_indicator)))
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

mrs_modules_msgs__msg__Gpvtg *
mrs_modules_msgs__msg__Gpvtg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpvtg * msg = (mrs_modules_msgs__msg__Gpvtg *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Gpvtg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Gpvtg));
  bool success = mrs_modules_msgs__msg__Gpvtg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Gpvtg__destroy(mrs_modules_msgs__msg__Gpvtg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Gpvtg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Gpvtg__Sequence__init(mrs_modules_msgs__msg__Gpvtg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpvtg * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Gpvtg *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Gpvtg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Gpvtg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Gpvtg__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Gpvtg__Sequence__fini(mrs_modules_msgs__msg__Gpvtg__Sequence * array)
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
      mrs_modules_msgs__msg__Gpvtg__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Gpvtg__Sequence *
mrs_modules_msgs__msg__Gpvtg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpvtg__Sequence * array = (mrs_modules_msgs__msg__Gpvtg__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Gpvtg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Gpvtg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Gpvtg__Sequence__destroy(mrs_modules_msgs__msg__Gpvtg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Gpvtg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Gpvtg__Sequence__are_equal(const mrs_modules_msgs__msg__Gpvtg__Sequence * lhs, const mrs_modules_msgs__msg__Gpvtg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Gpvtg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Gpvtg__Sequence__copy(
  const mrs_modules_msgs__msg__Gpvtg__Sequence * input,
  mrs_modules_msgs__msg__Gpvtg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Gpvtg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Gpvtg * data =
      (mrs_modules_msgs__msg__Gpvtg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Gpvtg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Gpvtg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Gpvtg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
