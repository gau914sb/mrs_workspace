// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message_name`
// Member `port_address`
// Member `time_status`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__TersusMessageHeader__init(mrs_modules_msgs__msg__TersusMessageHeader * msg)
{
  if (!msg) {
    return false;
  }
  // message_name
  if (!rosidl_runtime_c__String__init(&msg->message_name)) {
    mrs_modules_msgs__msg__TersusMessageHeader__fini(msg);
    return false;
  }
  // port_address
  if (!rosidl_runtime_c__String__init(&msg->port_address)) {
    mrs_modules_msgs__msg__TersusMessageHeader__fini(msg);
    return false;
  }
  // sequence
  // idle_time
  // time_status
  if (!rosidl_runtime_c__String__init(&msg->time_status)) {
    mrs_modules_msgs__msg__TersusMessageHeader__fini(msg);
    return false;
  }
  // gps_week
  // gps_week_seconds
  // receiver_status
  // software_version
  return true;
}

void
mrs_modules_msgs__msg__TersusMessageHeader__fini(mrs_modules_msgs__msg__TersusMessageHeader * msg)
{
  if (!msg) {
    return;
  }
  // message_name
  rosidl_runtime_c__String__fini(&msg->message_name);
  // port_address
  rosidl_runtime_c__String__fini(&msg->port_address);
  // sequence
  // idle_time
  // time_status
  rosidl_runtime_c__String__fini(&msg->time_status);
  // gps_week
  // gps_week_seconds
  // receiver_status
  // software_version
}

bool
mrs_modules_msgs__msg__TersusMessageHeader__are_equal(const mrs_modules_msgs__msg__TersusMessageHeader * lhs, const mrs_modules_msgs__msg__TersusMessageHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_name), &(rhs->message_name)))
  {
    return false;
  }
  // port_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->port_address), &(rhs->port_address)))
  {
    return false;
  }
  // sequence
  if (lhs->sequence != rhs->sequence) {
    return false;
  }
  // idle_time
  if (lhs->idle_time != rhs->idle_time) {
    return false;
  }
  // time_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->time_status), &(rhs->time_status)))
  {
    return false;
  }
  // gps_week
  if (lhs->gps_week != rhs->gps_week) {
    return false;
  }
  // gps_week_seconds
  if (lhs->gps_week_seconds != rhs->gps_week_seconds) {
    return false;
  }
  // receiver_status
  if (lhs->receiver_status != rhs->receiver_status) {
    return false;
  }
  // software_version
  if (lhs->software_version != rhs->software_version) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__TersusMessageHeader__copy(
  const mrs_modules_msgs__msg__TersusMessageHeader * input,
  mrs_modules_msgs__msg__TersusMessageHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // message_name
  if (!rosidl_runtime_c__String__copy(
      &(input->message_name), &(output->message_name)))
  {
    return false;
  }
  // port_address
  if (!rosidl_runtime_c__String__copy(
      &(input->port_address), &(output->port_address)))
  {
    return false;
  }
  // sequence
  output->sequence = input->sequence;
  // idle_time
  output->idle_time = input->idle_time;
  // time_status
  if (!rosidl_runtime_c__String__copy(
      &(input->time_status), &(output->time_status)))
  {
    return false;
  }
  // gps_week
  output->gps_week = input->gps_week;
  // gps_week_seconds
  output->gps_week_seconds = input->gps_week_seconds;
  // receiver_status
  output->receiver_status = input->receiver_status;
  // software_version
  output->software_version = input->software_version;
  return true;
}

mrs_modules_msgs__msg__TersusMessageHeader *
mrs_modules_msgs__msg__TersusMessageHeader__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__TersusMessageHeader * msg = (mrs_modules_msgs__msg__TersusMessageHeader *)allocator.allocate(sizeof(mrs_modules_msgs__msg__TersusMessageHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__TersusMessageHeader));
  bool success = mrs_modules_msgs__msg__TersusMessageHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__TersusMessageHeader__destroy(mrs_modules_msgs__msg__TersusMessageHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__TersusMessageHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__TersusMessageHeader__Sequence__init(mrs_modules_msgs__msg__TersusMessageHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__TersusMessageHeader * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__TersusMessageHeader *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__TersusMessageHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__TersusMessageHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__TersusMessageHeader__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__TersusMessageHeader__Sequence__fini(mrs_modules_msgs__msg__TersusMessageHeader__Sequence * array)
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
      mrs_modules_msgs__msg__TersusMessageHeader__fini(&array->data[i]);
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

mrs_modules_msgs__msg__TersusMessageHeader__Sequence *
mrs_modules_msgs__msg__TersusMessageHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__TersusMessageHeader__Sequence * array = (mrs_modules_msgs__msg__TersusMessageHeader__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__TersusMessageHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__TersusMessageHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__TersusMessageHeader__Sequence__destroy(mrs_modules_msgs__msg__TersusMessageHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__TersusMessageHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__TersusMessageHeader__Sequence__are_equal(const mrs_modules_msgs__msg__TersusMessageHeader__Sequence * lhs, const mrs_modules_msgs__msg__TersusMessageHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__TersusMessageHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__TersusMessageHeader__Sequence__copy(
  const mrs_modules_msgs__msg__TersusMessageHeader__Sequence * input,
  mrs_modules_msgs__msg__TersusMessageHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__TersusMessageHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__TersusMessageHeader * data =
      (mrs_modules_msgs__msg__TersusMessageHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__TersusMessageHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__TersusMessageHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__TersusMessageHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
