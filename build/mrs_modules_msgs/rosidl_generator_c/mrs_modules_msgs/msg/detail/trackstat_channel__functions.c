// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/TrackstatChannel.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/trackstat_channel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reject`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__TrackstatChannel__init(mrs_modules_msgs__msg__TrackstatChannel * msg)
{
  if (!msg) {
    return false;
  }
  // prn
  // glofreq
  // ch_tr_status
  // psr
  // doppler
  // c_no
  // locktime
  // psr_res
  // reject
  if (!rosidl_runtime_c__String__init(&msg->reject)) {
    mrs_modules_msgs__msg__TrackstatChannel__fini(msg);
    return false;
  }
  // psr_weight
  return true;
}

void
mrs_modules_msgs__msg__TrackstatChannel__fini(mrs_modules_msgs__msg__TrackstatChannel * msg)
{
  if (!msg) {
    return;
  }
  // prn
  // glofreq
  // ch_tr_status
  // psr
  // doppler
  // c_no
  // locktime
  // psr_res
  // reject
  rosidl_runtime_c__String__fini(&msg->reject);
  // psr_weight
}

bool
mrs_modules_msgs__msg__TrackstatChannel__are_equal(const mrs_modules_msgs__msg__TrackstatChannel * lhs, const mrs_modules_msgs__msg__TrackstatChannel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prn
  if (lhs->prn != rhs->prn) {
    return false;
  }
  // glofreq
  if (lhs->glofreq != rhs->glofreq) {
    return false;
  }
  // ch_tr_status
  if (lhs->ch_tr_status != rhs->ch_tr_status) {
    return false;
  }
  // psr
  if (lhs->psr != rhs->psr) {
    return false;
  }
  // doppler
  if (lhs->doppler != rhs->doppler) {
    return false;
  }
  // c_no
  if (lhs->c_no != rhs->c_no) {
    return false;
  }
  // locktime
  if (lhs->locktime != rhs->locktime) {
    return false;
  }
  // psr_res
  if (lhs->psr_res != rhs->psr_res) {
    return false;
  }
  // reject
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reject), &(rhs->reject)))
  {
    return false;
  }
  // psr_weight
  if (lhs->psr_weight != rhs->psr_weight) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__TrackstatChannel__copy(
  const mrs_modules_msgs__msg__TrackstatChannel * input,
  mrs_modules_msgs__msg__TrackstatChannel * output)
{
  if (!input || !output) {
    return false;
  }
  // prn
  output->prn = input->prn;
  // glofreq
  output->glofreq = input->glofreq;
  // ch_tr_status
  output->ch_tr_status = input->ch_tr_status;
  // psr
  output->psr = input->psr;
  // doppler
  output->doppler = input->doppler;
  // c_no
  output->c_no = input->c_no;
  // locktime
  output->locktime = input->locktime;
  // psr_res
  output->psr_res = input->psr_res;
  // reject
  if (!rosidl_runtime_c__String__copy(
      &(input->reject), &(output->reject)))
  {
    return false;
  }
  // psr_weight
  output->psr_weight = input->psr_weight;
  return true;
}

mrs_modules_msgs__msg__TrackstatChannel *
mrs_modules_msgs__msg__TrackstatChannel__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__TrackstatChannel * msg = (mrs_modules_msgs__msg__TrackstatChannel *)allocator.allocate(sizeof(mrs_modules_msgs__msg__TrackstatChannel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__TrackstatChannel));
  bool success = mrs_modules_msgs__msg__TrackstatChannel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__TrackstatChannel__destroy(mrs_modules_msgs__msg__TrackstatChannel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__TrackstatChannel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__TrackstatChannel__Sequence__init(mrs_modules_msgs__msg__TrackstatChannel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__TrackstatChannel * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__TrackstatChannel *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__TrackstatChannel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__TrackstatChannel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__TrackstatChannel__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__TrackstatChannel__Sequence__fini(mrs_modules_msgs__msg__TrackstatChannel__Sequence * array)
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
      mrs_modules_msgs__msg__TrackstatChannel__fini(&array->data[i]);
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

mrs_modules_msgs__msg__TrackstatChannel__Sequence *
mrs_modules_msgs__msg__TrackstatChannel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__TrackstatChannel__Sequence * array = (mrs_modules_msgs__msg__TrackstatChannel__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__TrackstatChannel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__TrackstatChannel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__TrackstatChannel__Sequence__destroy(mrs_modules_msgs__msg__TrackstatChannel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__TrackstatChannel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__TrackstatChannel__Sequence__are_equal(const mrs_modules_msgs__msg__TrackstatChannel__Sequence * lhs, const mrs_modules_msgs__msg__TrackstatChannel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__TrackstatChannel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__TrackstatChannel__Sequence__copy(
  const mrs_modules_msgs__msg__TrackstatChannel__Sequence * input,
  mrs_modules_msgs__msg__TrackstatChannel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__TrackstatChannel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__TrackstatChannel * data =
      (mrs_modules_msgs__msg__TrackstatChannel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__TrackstatChannel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__TrackstatChannel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__TrackstatChannel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
