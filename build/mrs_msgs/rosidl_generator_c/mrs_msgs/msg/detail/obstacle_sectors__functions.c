// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/ObstacleSectors.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/obstacle_sectors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sectors`
// Member `sector_sensors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrs_msgs__msg__ObstacleSectors__init(mrs_msgs__msg__ObstacleSectors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__msg__ObstacleSectors__fini(msg);
    return false;
  }
  // n_horizontal_sectors
  // sectors_vertical_fov
  // sectors
  if (!rosidl_runtime_c__double__Sequence__init(&msg->sectors, 0)) {
    mrs_msgs__msg__ObstacleSectors__fini(msg);
    return false;
  }
  // sector_sensors
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->sector_sensors, 0)) {
    mrs_msgs__msg__ObstacleSectors__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__ObstacleSectors__fini(mrs_msgs__msg__ObstacleSectors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // n_horizontal_sectors
  // sectors_vertical_fov
  // sectors
  rosidl_runtime_c__double__Sequence__fini(&msg->sectors);
  // sector_sensors
  rosidl_runtime_c__int8__Sequence__fini(&msg->sector_sensors);
}

bool
mrs_msgs__msg__ObstacleSectors__are_equal(const mrs_msgs__msg__ObstacleSectors * lhs, const mrs_msgs__msg__ObstacleSectors * rhs)
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
  // n_horizontal_sectors
  if (lhs->n_horizontal_sectors != rhs->n_horizontal_sectors) {
    return false;
  }
  // sectors_vertical_fov
  if (lhs->sectors_vertical_fov != rhs->sectors_vertical_fov) {
    return false;
  }
  // sectors
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->sectors), &(rhs->sectors)))
  {
    return false;
  }
  // sector_sensors
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->sector_sensors), &(rhs->sector_sensors)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__ObstacleSectors__copy(
  const mrs_msgs__msg__ObstacleSectors * input,
  mrs_msgs__msg__ObstacleSectors * output)
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
  // n_horizontal_sectors
  output->n_horizontal_sectors = input->n_horizontal_sectors;
  // sectors_vertical_fov
  output->sectors_vertical_fov = input->sectors_vertical_fov;
  // sectors
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->sectors), &(output->sectors)))
  {
    return false;
  }
  // sector_sensors
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->sector_sensors), &(output->sector_sensors)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__ObstacleSectors *
mrs_msgs__msg__ObstacleSectors__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ObstacleSectors * msg = (mrs_msgs__msg__ObstacleSectors *)allocator.allocate(sizeof(mrs_msgs__msg__ObstacleSectors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__ObstacleSectors));
  bool success = mrs_msgs__msg__ObstacleSectors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__ObstacleSectors__destroy(mrs_msgs__msg__ObstacleSectors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__ObstacleSectors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__ObstacleSectors__Sequence__init(mrs_msgs__msg__ObstacleSectors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ObstacleSectors * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__ObstacleSectors *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__ObstacleSectors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__ObstacleSectors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__ObstacleSectors__fini(&data[i - 1]);
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
mrs_msgs__msg__ObstacleSectors__Sequence__fini(mrs_msgs__msg__ObstacleSectors__Sequence * array)
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
      mrs_msgs__msg__ObstacleSectors__fini(&array->data[i]);
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

mrs_msgs__msg__ObstacleSectors__Sequence *
mrs_msgs__msg__ObstacleSectors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ObstacleSectors__Sequence * array = (mrs_msgs__msg__ObstacleSectors__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__ObstacleSectors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__ObstacleSectors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__ObstacleSectors__Sequence__destroy(mrs_msgs__msg__ObstacleSectors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__ObstacleSectors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__ObstacleSectors__Sequence__are_equal(const mrs_msgs__msg__ObstacleSectors__Sequence * lhs, const mrs_msgs__msg__ObstacleSectors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__ObstacleSectors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__ObstacleSectors__Sequence__copy(
  const mrs_msgs__msg__ObstacleSectors__Sequence * input,
  mrs_msgs__msg__ObstacleSectors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__ObstacleSectors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__ObstacleSectors * data =
      (mrs_msgs__msg__ObstacleSectors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__ObstacleSectors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__ObstacleSectors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__ObstacleSectors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
