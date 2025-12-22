// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/UavManagerDiagnostics.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/uav_manager_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `uav_name`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_msgs__msg__UavManagerDiagnostics__init(mrs_msgs__msg__UavManagerDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__UavManagerDiagnostics__fini(msg);
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__init(&msg->uav_name)) {
    mrs_msgs__msg__UavManagerDiagnostics__fini(msg);
    return false;
  }
  // home_latitude
  // home_longitude
  // cur_latitude
  // cur_longitude
  // flight_time
  // state
  return true;
}

void
mrs_msgs__msg__UavManagerDiagnostics__fini(mrs_msgs__msg__UavManagerDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // uav_name
  rosidl_runtime_c__String__fini(&msg->uav_name);
  // home_latitude
  // home_longitude
  // cur_latitude
  // cur_longitude
  // flight_time
  // state
}

bool
mrs_msgs__msg__UavManagerDiagnostics__are_equal(const mrs_msgs__msg__UavManagerDiagnostics * lhs, const mrs_msgs__msg__UavManagerDiagnostics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uav_name), &(rhs->uav_name)))
  {
    return false;
  }
  // home_latitude
  if (lhs->home_latitude != rhs->home_latitude) {
    return false;
  }
  // home_longitude
  if (lhs->home_longitude != rhs->home_longitude) {
    return false;
  }
  // cur_latitude
  if (lhs->cur_latitude != rhs->cur_latitude) {
    return false;
  }
  // cur_longitude
  if (lhs->cur_longitude != rhs->cur_longitude) {
    return false;
  }
  // flight_time
  if (lhs->flight_time != rhs->flight_time) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__UavManagerDiagnostics__copy(
  const mrs_msgs__msg__UavManagerDiagnostics * input,
  mrs_msgs__msg__UavManagerDiagnostics * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // uav_name
  if (!rosidl_runtime_c__String__copy(
      &(input->uav_name), &(output->uav_name)))
  {
    return false;
  }
  // home_latitude
  output->home_latitude = input->home_latitude;
  // home_longitude
  output->home_longitude = input->home_longitude;
  // cur_latitude
  output->cur_latitude = input->cur_latitude;
  // cur_longitude
  output->cur_longitude = input->cur_longitude;
  // flight_time
  output->flight_time = input->flight_time;
  // state
  output->state = input->state;
  return true;
}

mrs_msgs__msg__UavManagerDiagnostics *
mrs_msgs__msg__UavManagerDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavManagerDiagnostics * msg = (mrs_msgs__msg__UavManagerDiagnostics *)allocator.allocate(sizeof(mrs_msgs__msg__UavManagerDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__UavManagerDiagnostics));
  bool success = mrs_msgs__msg__UavManagerDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__UavManagerDiagnostics__destroy(mrs_msgs__msg__UavManagerDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__UavManagerDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__UavManagerDiagnostics__Sequence__init(mrs_msgs__msg__UavManagerDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavManagerDiagnostics * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__UavManagerDiagnostics *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__UavManagerDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__UavManagerDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__UavManagerDiagnostics__fini(&data[i - 1]);
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
mrs_msgs__msg__UavManagerDiagnostics__Sequence__fini(mrs_msgs__msg__UavManagerDiagnostics__Sequence * array)
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
      mrs_msgs__msg__UavManagerDiagnostics__fini(&array->data[i]);
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

mrs_msgs__msg__UavManagerDiagnostics__Sequence *
mrs_msgs__msg__UavManagerDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavManagerDiagnostics__Sequence * array = (mrs_msgs__msg__UavManagerDiagnostics__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__UavManagerDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__UavManagerDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__UavManagerDiagnostics__Sequence__destroy(mrs_msgs__msg__UavManagerDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__UavManagerDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__UavManagerDiagnostics__Sequence__are_equal(const mrs_msgs__msg__UavManagerDiagnostics__Sequence * lhs, const mrs_msgs__msg__UavManagerDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__UavManagerDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__UavManagerDiagnostics__Sequence__copy(
  const mrs_msgs__msg__UavManagerDiagnostics__Sequence * input,
  mrs_msgs__msg__UavManagerDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__UavManagerDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__UavManagerDiagnostics * data =
      (mrs_msgs__msg__UavManagerDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__UavManagerDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__UavManagerDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__UavManagerDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
