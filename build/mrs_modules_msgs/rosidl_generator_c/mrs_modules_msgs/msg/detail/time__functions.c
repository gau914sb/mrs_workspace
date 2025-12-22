// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Time.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `clock_status`
// Member `utc_status`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__Time__init(mrs_modules_msgs__msg__Time * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__Time__fini(msg);
    return false;
  }
  // clock_status
  if (!rosidl_runtime_c__String__init(&msg->clock_status)) {
    mrs_modules_msgs__msg__Time__fini(msg);
    return false;
  }
  // offset
  // offset_std
  // utc_offset
  // utc_year
  // utc_month
  // utc_day
  // utc_hour
  // utc_minute
  // utc_millisecond
  // utc_status
  if (!rosidl_runtime_c__String__init(&msg->utc_status)) {
    mrs_modules_msgs__msg__Time__fini(msg);
    return false;
  }
  return true;
}

void
mrs_modules_msgs__msg__Time__fini(mrs_modules_msgs__msg__Time * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // clock_status
  rosidl_runtime_c__String__fini(&msg->clock_status);
  // offset
  // offset_std
  // utc_offset
  // utc_year
  // utc_month
  // utc_day
  // utc_hour
  // utc_minute
  // utc_millisecond
  // utc_status
  rosidl_runtime_c__String__fini(&msg->utc_status);
}

bool
mrs_modules_msgs__msg__Time__are_equal(const mrs_modules_msgs__msg__Time * lhs, const mrs_modules_msgs__msg__Time * rhs)
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
  // clock_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->clock_status), &(rhs->clock_status)))
  {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // offset_std
  if (lhs->offset_std != rhs->offset_std) {
    return false;
  }
  // utc_offset
  if (lhs->utc_offset != rhs->utc_offset) {
    return false;
  }
  // utc_year
  if (lhs->utc_year != rhs->utc_year) {
    return false;
  }
  // utc_month
  if (lhs->utc_month != rhs->utc_month) {
    return false;
  }
  // utc_day
  if (lhs->utc_day != rhs->utc_day) {
    return false;
  }
  // utc_hour
  if (lhs->utc_hour != rhs->utc_hour) {
    return false;
  }
  // utc_minute
  if (lhs->utc_minute != rhs->utc_minute) {
    return false;
  }
  // utc_millisecond
  if (lhs->utc_millisecond != rhs->utc_millisecond) {
    return false;
  }
  // utc_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->utc_status), &(rhs->utc_status)))
  {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Time__copy(
  const mrs_modules_msgs__msg__Time * input,
  mrs_modules_msgs__msg__Time * output)
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
  // clock_status
  if (!rosidl_runtime_c__String__copy(
      &(input->clock_status), &(output->clock_status)))
  {
    return false;
  }
  // offset
  output->offset = input->offset;
  // offset_std
  output->offset_std = input->offset_std;
  // utc_offset
  output->utc_offset = input->utc_offset;
  // utc_year
  output->utc_year = input->utc_year;
  // utc_month
  output->utc_month = input->utc_month;
  // utc_day
  output->utc_day = input->utc_day;
  // utc_hour
  output->utc_hour = input->utc_hour;
  // utc_minute
  output->utc_minute = input->utc_minute;
  // utc_millisecond
  output->utc_millisecond = input->utc_millisecond;
  // utc_status
  if (!rosidl_runtime_c__String__copy(
      &(input->utc_status), &(output->utc_status)))
  {
    return false;
  }
  return true;
}

mrs_modules_msgs__msg__Time *
mrs_modules_msgs__msg__Time__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Time * msg = (mrs_modules_msgs__msg__Time *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Time), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Time));
  bool success = mrs_modules_msgs__msg__Time__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Time__destroy(mrs_modules_msgs__msg__Time * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Time__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Time__Sequence__init(mrs_modules_msgs__msg__Time__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Time * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Time *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Time), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Time__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Time__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Time__Sequence__fini(mrs_modules_msgs__msg__Time__Sequence * array)
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
      mrs_modules_msgs__msg__Time__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Time__Sequence *
mrs_modules_msgs__msg__Time__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Time__Sequence * array = (mrs_modules_msgs__msg__Time__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Time__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Time__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Time__Sequence__destroy(mrs_modules_msgs__msg__Time__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Time__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Time__Sequence__are_equal(const mrs_modules_msgs__msg__Time__Sequence * lhs, const mrs_modules_msgs__msg__Time__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Time__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Time__Sequence__copy(
  const mrs_modules_msgs__msg__Time__Sequence * input,
  mrs_modules_msgs__msg__Time__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Time);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Time * data =
      (mrs_modules_msgs__msg__Time *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Time__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Time__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Time__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
