// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/VelocityReference.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/velocity_reference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mrs_msgs__msg__VelocityReference__init(mrs_msgs__msg__VelocityReference * msg)
{
  if (!msg) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    mrs_msgs__msg__VelocityReference__fini(msg);
    return false;
  }
  // altitude
  // heading
  // heading_rate
  // use_altitude
  // use_heading
  // use_heading_rate
  return true;
}

void
mrs_msgs__msg__VelocityReference__fini(mrs_msgs__msg__VelocityReference * msg)
{
  if (!msg) {
    return;
  }
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // altitude
  // heading
  // heading_rate
  // use_altitude
  // use_heading
  // use_heading_rate
}

bool
mrs_msgs__msg__VelocityReference__are_equal(const mrs_msgs__msg__VelocityReference * lhs, const mrs_msgs__msg__VelocityReference * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
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
  // use_altitude
  if (lhs->use_altitude != rhs->use_altitude) {
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
  return true;
}

bool
mrs_msgs__msg__VelocityReference__copy(
  const mrs_msgs__msg__VelocityReference * input,
  mrs_msgs__msg__VelocityReference * output)
{
  if (!input || !output) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // altitude
  output->altitude = input->altitude;
  // heading
  output->heading = input->heading;
  // heading_rate
  output->heading_rate = input->heading_rate;
  // use_altitude
  output->use_altitude = input->use_altitude;
  // use_heading
  output->use_heading = input->use_heading;
  // use_heading_rate
  output->use_heading_rate = input->use_heading_rate;
  return true;
}

mrs_msgs__msg__VelocityReference *
mrs_msgs__msg__VelocityReference__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__VelocityReference * msg = (mrs_msgs__msg__VelocityReference *)allocator.allocate(sizeof(mrs_msgs__msg__VelocityReference), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__VelocityReference));
  bool success = mrs_msgs__msg__VelocityReference__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__VelocityReference__destroy(mrs_msgs__msg__VelocityReference * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__VelocityReference__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__VelocityReference__Sequence__init(mrs_msgs__msg__VelocityReference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__VelocityReference * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__VelocityReference *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__VelocityReference), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__VelocityReference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__VelocityReference__fini(&data[i - 1]);
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
mrs_msgs__msg__VelocityReference__Sequence__fini(mrs_msgs__msg__VelocityReference__Sequence * array)
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
      mrs_msgs__msg__VelocityReference__fini(&array->data[i]);
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

mrs_msgs__msg__VelocityReference__Sequence *
mrs_msgs__msg__VelocityReference__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__VelocityReference__Sequence * array = (mrs_msgs__msg__VelocityReference__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__VelocityReference__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__VelocityReference__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__VelocityReference__Sequence__destroy(mrs_msgs__msg__VelocityReference__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__VelocityReference__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__VelocityReference__Sequence__are_equal(const mrs_msgs__msg__VelocityReference__Sequence * lhs, const mrs_msgs__msg__VelocityReference__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__VelocityReference__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__VelocityReference__Sequence__copy(
  const mrs_msgs__msg__VelocityReference__Sequence * input,
  mrs_msgs__msg__VelocityReference__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__VelocityReference);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__VelocityReference * data =
      (mrs_msgs__msg__VelocityReference *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__VelocityReference__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__VelocityReference__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__VelocityReference__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
