// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Bestvel.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/bestvel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tersus_msg_header`
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"
// Member `solution_status`
// Member `velocity_type`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__Bestvel__init(mrs_modules_msgs__msg__Bestvel * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__Bestvel__fini(msg);
    return false;
  }
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__init(&msg->tersus_msg_header)) {
    mrs_modules_msgs__msg__Bestvel__fini(msg);
    return false;
  }
  // solution_status
  if (!rosidl_runtime_c__String__init(&msg->solution_status)) {
    mrs_modules_msgs__msg__Bestvel__fini(msg);
    return false;
  }
  // velocity_type
  if (!rosidl_runtime_c__String__init(&msg->velocity_type)) {
    mrs_modules_msgs__msg__Bestvel__fini(msg);
    return false;
  }
  // latency
  // age
  // horizontal_speed
  // track_ground
  // vertical_speed
  return true;
}

void
mrs_modules_msgs__msg__Bestvel__fini(mrs_modules_msgs__msg__Bestvel * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tersus_msg_header
  mrs_modules_msgs__msg__TersusMessageHeader__fini(&msg->tersus_msg_header);
  // solution_status
  rosidl_runtime_c__String__fini(&msg->solution_status);
  // velocity_type
  rosidl_runtime_c__String__fini(&msg->velocity_type);
  // latency
  // age
  // horizontal_speed
  // track_ground
  // vertical_speed
}

bool
mrs_modules_msgs__msg__Bestvel__are_equal(const mrs_modules_msgs__msg__Bestvel * lhs, const mrs_modules_msgs__msg__Bestvel * rhs)
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
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__are_equal(
      &(lhs->tersus_msg_header), &(rhs->tersus_msg_header)))
  {
    return false;
  }
  // solution_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->solution_status), &(rhs->solution_status)))
  {
    return false;
  }
  // velocity_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->velocity_type), &(rhs->velocity_type)))
  {
    return false;
  }
  // latency
  if (lhs->latency != rhs->latency) {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // horizontal_speed
  if (lhs->horizontal_speed != rhs->horizontal_speed) {
    return false;
  }
  // track_ground
  if (lhs->track_ground != rhs->track_ground) {
    return false;
  }
  // vertical_speed
  if (lhs->vertical_speed != rhs->vertical_speed) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Bestvel__copy(
  const mrs_modules_msgs__msg__Bestvel * input,
  mrs_modules_msgs__msg__Bestvel * output)
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
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__copy(
      &(input->tersus_msg_header), &(output->tersus_msg_header)))
  {
    return false;
  }
  // solution_status
  if (!rosidl_runtime_c__String__copy(
      &(input->solution_status), &(output->solution_status)))
  {
    return false;
  }
  // velocity_type
  if (!rosidl_runtime_c__String__copy(
      &(input->velocity_type), &(output->velocity_type)))
  {
    return false;
  }
  // latency
  output->latency = input->latency;
  // age
  output->age = input->age;
  // horizontal_speed
  output->horizontal_speed = input->horizontal_speed;
  // track_ground
  output->track_ground = input->track_ground;
  // vertical_speed
  output->vertical_speed = input->vertical_speed;
  return true;
}

mrs_modules_msgs__msg__Bestvel *
mrs_modules_msgs__msg__Bestvel__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Bestvel * msg = (mrs_modules_msgs__msg__Bestvel *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Bestvel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Bestvel));
  bool success = mrs_modules_msgs__msg__Bestvel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Bestvel__destroy(mrs_modules_msgs__msg__Bestvel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Bestvel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Bestvel__Sequence__init(mrs_modules_msgs__msg__Bestvel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Bestvel * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Bestvel *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Bestvel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Bestvel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Bestvel__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Bestvel__Sequence__fini(mrs_modules_msgs__msg__Bestvel__Sequence * array)
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
      mrs_modules_msgs__msg__Bestvel__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Bestvel__Sequence *
mrs_modules_msgs__msg__Bestvel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Bestvel__Sequence * array = (mrs_modules_msgs__msg__Bestvel__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Bestvel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Bestvel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Bestvel__Sequence__destroy(mrs_modules_msgs__msg__Bestvel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Bestvel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Bestvel__Sequence__are_equal(const mrs_modules_msgs__msg__Bestvel__Sequence * lhs, const mrs_modules_msgs__msg__Bestvel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Bestvel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Bestvel__Sequence__copy(
  const mrs_modules_msgs__msg__Bestvel__Sequence * input,
  mrs_modules_msgs__msg__Bestvel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Bestvel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Bestvel * data =
      (mrs_modules_msgs__msg__Bestvel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Bestvel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Bestvel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Bestvel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
