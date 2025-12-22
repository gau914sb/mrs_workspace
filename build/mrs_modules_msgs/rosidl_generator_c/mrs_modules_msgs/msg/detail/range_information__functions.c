// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/RangeInformation.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/range_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrs_modules_msgs__msg__RangeInformation__init(mrs_modules_msgs__msg__RangeInformation * msg)
{
  if (!msg) {
    return false;
  }
  // prn_number
  // glofreq
  // psr
  // psr_std
  // adr
  // adr_std
  // dopp
  // noise_density_ratio
  // locktime
  // tracking_status
  return true;
}

void
mrs_modules_msgs__msg__RangeInformation__fini(mrs_modules_msgs__msg__RangeInformation * msg)
{
  if (!msg) {
    return;
  }
  // prn_number
  // glofreq
  // psr
  // psr_std
  // adr
  // adr_std
  // dopp
  // noise_density_ratio
  // locktime
  // tracking_status
}

bool
mrs_modules_msgs__msg__RangeInformation__are_equal(const mrs_modules_msgs__msg__RangeInformation * lhs, const mrs_modules_msgs__msg__RangeInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prn_number
  if (lhs->prn_number != rhs->prn_number) {
    return false;
  }
  // glofreq
  if (lhs->glofreq != rhs->glofreq) {
    return false;
  }
  // psr
  if (lhs->psr != rhs->psr) {
    return false;
  }
  // psr_std
  if (lhs->psr_std != rhs->psr_std) {
    return false;
  }
  // adr
  if (lhs->adr != rhs->adr) {
    return false;
  }
  // adr_std
  if (lhs->adr_std != rhs->adr_std) {
    return false;
  }
  // dopp
  if (lhs->dopp != rhs->dopp) {
    return false;
  }
  // noise_density_ratio
  if (lhs->noise_density_ratio != rhs->noise_density_ratio) {
    return false;
  }
  // locktime
  if (lhs->locktime != rhs->locktime) {
    return false;
  }
  // tracking_status
  if (lhs->tracking_status != rhs->tracking_status) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__RangeInformation__copy(
  const mrs_modules_msgs__msg__RangeInformation * input,
  mrs_modules_msgs__msg__RangeInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // prn_number
  output->prn_number = input->prn_number;
  // glofreq
  output->glofreq = input->glofreq;
  // psr
  output->psr = input->psr;
  // psr_std
  output->psr_std = input->psr_std;
  // adr
  output->adr = input->adr;
  // adr_std
  output->adr_std = input->adr_std;
  // dopp
  output->dopp = input->dopp;
  // noise_density_ratio
  output->noise_density_ratio = input->noise_density_ratio;
  // locktime
  output->locktime = input->locktime;
  // tracking_status
  output->tracking_status = input->tracking_status;
  return true;
}

mrs_modules_msgs__msg__RangeInformation *
mrs_modules_msgs__msg__RangeInformation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__RangeInformation * msg = (mrs_modules_msgs__msg__RangeInformation *)allocator.allocate(sizeof(mrs_modules_msgs__msg__RangeInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__RangeInformation));
  bool success = mrs_modules_msgs__msg__RangeInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__RangeInformation__destroy(mrs_modules_msgs__msg__RangeInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__RangeInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__RangeInformation__Sequence__init(mrs_modules_msgs__msg__RangeInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__RangeInformation * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__RangeInformation *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__RangeInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__RangeInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__RangeInformation__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__RangeInformation__Sequence__fini(mrs_modules_msgs__msg__RangeInformation__Sequence * array)
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
      mrs_modules_msgs__msg__RangeInformation__fini(&array->data[i]);
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

mrs_modules_msgs__msg__RangeInformation__Sequence *
mrs_modules_msgs__msg__RangeInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__RangeInformation__Sequence * array = (mrs_modules_msgs__msg__RangeInformation__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__RangeInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__RangeInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__RangeInformation__Sequence__destroy(mrs_modules_msgs__msg__RangeInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__RangeInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__RangeInformation__Sequence__are_equal(const mrs_modules_msgs__msg__RangeInformation__Sequence * lhs, const mrs_modules_msgs__msg__RangeInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__RangeInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__RangeInformation__Sequence__copy(
  const mrs_modules_msgs__msg__RangeInformation__Sequence * input,
  mrs_modules_msgs__msg__RangeInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__RangeInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__RangeInformation * data =
      (mrs_modules_msgs__msg__RangeInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__RangeInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__RangeInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__RangeInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
