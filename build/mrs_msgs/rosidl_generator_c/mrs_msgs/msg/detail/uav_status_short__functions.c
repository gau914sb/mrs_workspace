// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/UavStatusShort.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/uav_status_short__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrs_msgs__msg__UavStatusShort__init(mrs_msgs__msg__UavStatusShort * msg)
{
  if (!msg) {
    return false;
  }
  // odom_hz
  // odom_color
  // odom_x
  // odom_y
  // odom_z
  // odom_hdg
  // cmd_x
  // cmd_y
  // cmd_z
  // cmd_hdg
  return true;
}

void
mrs_msgs__msg__UavStatusShort__fini(mrs_msgs__msg__UavStatusShort * msg)
{
  if (!msg) {
    return;
  }
  // odom_hz
  // odom_color
  // odom_x
  // odom_y
  // odom_z
  // odom_hdg
  // cmd_x
  // cmd_y
  // cmd_z
  // cmd_hdg
}

bool
mrs_msgs__msg__UavStatusShort__are_equal(const mrs_msgs__msg__UavStatusShort * lhs, const mrs_msgs__msg__UavStatusShort * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // odom_hz
  if (lhs->odom_hz != rhs->odom_hz) {
    return false;
  }
  // odom_color
  if (lhs->odom_color != rhs->odom_color) {
    return false;
  }
  // odom_x
  if (lhs->odom_x != rhs->odom_x) {
    return false;
  }
  // odom_y
  if (lhs->odom_y != rhs->odom_y) {
    return false;
  }
  // odom_z
  if (lhs->odom_z != rhs->odom_z) {
    return false;
  }
  // odom_hdg
  if (lhs->odom_hdg != rhs->odom_hdg) {
    return false;
  }
  // cmd_x
  if (lhs->cmd_x != rhs->cmd_x) {
    return false;
  }
  // cmd_y
  if (lhs->cmd_y != rhs->cmd_y) {
    return false;
  }
  // cmd_z
  if (lhs->cmd_z != rhs->cmd_z) {
    return false;
  }
  // cmd_hdg
  if (lhs->cmd_hdg != rhs->cmd_hdg) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__UavStatusShort__copy(
  const mrs_msgs__msg__UavStatusShort * input,
  mrs_msgs__msg__UavStatusShort * output)
{
  if (!input || !output) {
    return false;
  }
  // odom_hz
  output->odom_hz = input->odom_hz;
  // odom_color
  output->odom_color = input->odom_color;
  // odom_x
  output->odom_x = input->odom_x;
  // odom_y
  output->odom_y = input->odom_y;
  // odom_z
  output->odom_z = input->odom_z;
  // odom_hdg
  output->odom_hdg = input->odom_hdg;
  // cmd_x
  output->cmd_x = input->cmd_x;
  // cmd_y
  output->cmd_y = input->cmd_y;
  // cmd_z
  output->cmd_z = input->cmd_z;
  // cmd_hdg
  output->cmd_hdg = input->cmd_hdg;
  return true;
}

mrs_msgs__msg__UavStatusShort *
mrs_msgs__msg__UavStatusShort__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavStatusShort * msg = (mrs_msgs__msg__UavStatusShort *)allocator.allocate(sizeof(mrs_msgs__msg__UavStatusShort), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__UavStatusShort));
  bool success = mrs_msgs__msg__UavStatusShort__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__UavStatusShort__destroy(mrs_msgs__msg__UavStatusShort * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__UavStatusShort__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__UavStatusShort__Sequence__init(mrs_msgs__msg__UavStatusShort__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavStatusShort * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__UavStatusShort *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__UavStatusShort), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__UavStatusShort__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__UavStatusShort__fini(&data[i - 1]);
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
mrs_msgs__msg__UavStatusShort__Sequence__fini(mrs_msgs__msg__UavStatusShort__Sequence * array)
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
      mrs_msgs__msg__UavStatusShort__fini(&array->data[i]);
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

mrs_msgs__msg__UavStatusShort__Sequence *
mrs_msgs__msg__UavStatusShort__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__UavStatusShort__Sequence * array = (mrs_msgs__msg__UavStatusShort__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__UavStatusShort__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__UavStatusShort__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__UavStatusShort__Sequence__destroy(mrs_msgs__msg__UavStatusShort__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__UavStatusShort__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__UavStatusShort__Sequence__are_equal(const mrs_msgs__msg__UavStatusShort__Sequence * lhs, const mrs_msgs__msg__UavStatusShort__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__UavStatusShort__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__UavStatusShort__Sequence__copy(
  const mrs_msgs__msg__UavStatusShort__Sequence * input,
  mrs_msgs__msg__UavStatusShort__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__UavStatusShort);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__UavStatusShort * data =
      (mrs_msgs__msg__UavStatusShort *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__UavStatusShort__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__UavStatusShort__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__UavStatusShort__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
