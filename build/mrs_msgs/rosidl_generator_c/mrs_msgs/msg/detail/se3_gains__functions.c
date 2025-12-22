// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/Se3Gains.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/se3_gains__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrs_msgs__msg__Se3Gains__init(mrs_msgs__msg__Se3Gains * msg)
{
  if (!msg) {
    return false;
  }
  // kpxy
  // kvxy
  // kaxy
  // kpz
  // kvz
  // kaz
  // kibxy
  // kibxy_lim
  // kiwxy
  // kiwxy_lim
  // kqrp
  // kqy
  // km
  // km_lim
  return true;
}

void
mrs_msgs__msg__Se3Gains__fini(mrs_msgs__msg__Se3Gains * msg)
{
  if (!msg) {
    return;
  }
  // kpxy
  // kvxy
  // kaxy
  // kpz
  // kvz
  // kaz
  // kibxy
  // kibxy_lim
  // kiwxy
  // kiwxy_lim
  // kqrp
  // kqy
  // km
  // km_lim
}

bool
mrs_msgs__msg__Se3Gains__are_equal(const mrs_msgs__msg__Se3Gains * lhs, const mrs_msgs__msg__Se3Gains * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kpxy
  if (lhs->kpxy != rhs->kpxy) {
    return false;
  }
  // kvxy
  if (lhs->kvxy != rhs->kvxy) {
    return false;
  }
  // kaxy
  if (lhs->kaxy != rhs->kaxy) {
    return false;
  }
  // kpz
  if (lhs->kpz != rhs->kpz) {
    return false;
  }
  // kvz
  if (lhs->kvz != rhs->kvz) {
    return false;
  }
  // kaz
  if (lhs->kaz != rhs->kaz) {
    return false;
  }
  // kibxy
  if (lhs->kibxy != rhs->kibxy) {
    return false;
  }
  // kibxy_lim
  if (lhs->kibxy_lim != rhs->kibxy_lim) {
    return false;
  }
  // kiwxy
  if (lhs->kiwxy != rhs->kiwxy) {
    return false;
  }
  // kiwxy_lim
  if (lhs->kiwxy_lim != rhs->kiwxy_lim) {
    return false;
  }
  // kqrp
  if (lhs->kqrp != rhs->kqrp) {
    return false;
  }
  // kqy
  if (lhs->kqy != rhs->kqy) {
    return false;
  }
  // km
  if (lhs->km != rhs->km) {
    return false;
  }
  // km_lim
  if (lhs->km_lim != rhs->km_lim) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__Se3Gains__copy(
  const mrs_msgs__msg__Se3Gains * input,
  mrs_msgs__msg__Se3Gains * output)
{
  if (!input || !output) {
    return false;
  }
  // kpxy
  output->kpxy = input->kpxy;
  // kvxy
  output->kvxy = input->kvxy;
  // kaxy
  output->kaxy = input->kaxy;
  // kpz
  output->kpz = input->kpz;
  // kvz
  output->kvz = input->kvz;
  // kaz
  output->kaz = input->kaz;
  // kibxy
  output->kibxy = input->kibxy;
  // kibxy_lim
  output->kibxy_lim = input->kibxy_lim;
  // kiwxy
  output->kiwxy = input->kiwxy;
  // kiwxy_lim
  output->kiwxy_lim = input->kiwxy_lim;
  // kqrp
  output->kqrp = input->kqrp;
  // kqy
  output->kqy = input->kqy;
  // km
  output->km = input->km;
  // km_lim
  output->km_lim = input->km_lim;
  return true;
}

mrs_msgs__msg__Se3Gains *
mrs_msgs__msg__Se3Gains__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Se3Gains * msg = (mrs_msgs__msg__Se3Gains *)allocator.allocate(sizeof(mrs_msgs__msg__Se3Gains), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__Se3Gains));
  bool success = mrs_msgs__msg__Se3Gains__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__Se3Gains__destroy(mrs_msgs__msg__Se3Gains * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__Se3Gains__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__Se3Gains__Sequence__init(mrs_msgs__msg__Se3Gains__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Se3Gains * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__Se3Gains *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__Se3Gains), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__Se3Gains__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__Se3Gains__fini(&data[i - 1]);
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
mrs_msgs__msg__Se3Gains__Sequence__fini(mrs_msgs__msg__Se3Gains__Sequence * array)
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
      mrs_msgs__msg__Se3Gains__fini(&array->data[i]);
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

mrs_msgs__msg__Se3Gains__Sequence *
mrs_msgs__msg__Se3Gains__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__Se3Gains__Sequence * array = (mrs_msgs__msg__Se3Gains__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__Se3Gains__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__Se3Gains__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__Se3Gains__Sequence__destroy(mrs_msgs__msg__Se3Gains__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__Se3Gains__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__Se3Gains__Sequence__are_equal(const mrs_msgs__msg__Se3Gains__Sequence * lhs, const mrs_msgs__msg__Se3Gains__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__Se3Gains__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__Se3Gains__Sequence__copy(
  const mrs_msgs__msg__Se3Gains__Sequence * input,
  mrs_msgs__msg__Se3Gains__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__Se3Gains);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__Se3Gains * data =
      (mrs_msgs__msg__Se3Gains *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__Se3Gains__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__Se3Gains__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__Se3Gains__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
