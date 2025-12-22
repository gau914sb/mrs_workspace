// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/gpgst__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__Gpgst__init(mrs_modules_msgs__msg__Gpgst * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__Gpgst__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    mrs_modules_msgs__msg__Gpgst__fini(msg);
    return false;
  }
  // utc
  // rms
  // smjr_std
  // smnr_std
  // orient
  // lat_std
  // lon_std
  // alt_std
  return true;
}

void
mrs_modules_msgs__msg__Gpgst__fini(mrs_modules_msgs__msg__Gpgst * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // utc
  // rms
  // smjr_std
  // smnr_std
  // orient
  // lat_std
  // lon_std
  // alt_std
}

bool
mrs_modules_msgs__msg__Gpgst__are_equal(const mrs_modules_msgs__msg__Gpgst * lhs, const mrs_modules_msgs__msg__Gpgst * rhs)
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
  // message_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_id), &(rhs->message_id)))
  {
    return false;
  }
  // utc
  if (lhs->utc != rhs->utc) {
    return false;
  }
  // rms
  if (lhs->rms != rhs->rms) {
    return false;
  }
  // smjr_std
  if (lhs->smjr_std != rhs->smjr_std) {
    return false;
  }
  // smnr_std
  if (lhs->smnr_std != rhs->smnr_std) {
    return false;
  }
  // orient
  if (lhs->orient != rhs->orient) {
    return false;
  }
  // lat_std
  if (lhs->lat_std != rhs->lat_std) {
    return false;
  }
  // lon_std
  if (lhs->lon_std != rhs->lon_std) {
    return false;
  }
  // alt_std
  if (lhs->alt_std != rhs->alt_std) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Gpgst__copy(
  const mrs_modules_msgs__msg__Gpgst * input,
  mrs_modules_msgs__msg__Gpgst * output)
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
  // message_id
  if (!rosidl_runtime_c__String__copy(
      &(input->message_id), &(output->message_id)))
  {
    return false;
  }
  // utc
  output->utc = input->utc;
  // rms
  output->rms = input->rms;
  // smjr_std
  output->smjr_std = input->smjr_std;
  // smnr_std
  output->smnr_std = input->smnr_std;
  // orient
  output->orient = input->orient;
  // lat_std
  output->lat_std = input->lat_std;
  // lon_std
  output->lon_std = input->lon_std;
  // alt_std
  output->alt_std = input->alt_std;
  return true;
}

mrs_modules_msgs__msg__Gpgst *
mrs_modules_msgs__msg__Gpgst__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpgst * msg = (mrs_modules_msgs__msg__Gpgst *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Gpgst), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Gpgst));
  bool success = mrs_modules_msgs__msg__Gpgst__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Gpgst__destroy(mrs_modules_msgs__msg__Gpgst * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Gpgst__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Gpgst__Sequence__init(mrs_modules_msgs__msg__Gpgst__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpgst * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Gpgst *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Gpgst), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Gpgst__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Gpgst__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Gpgst__Sequence__fini(mrs_modules_msgs__msg__Gpgst__Sequence * array)
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
      mrs_modules_msgs__msg__Gpgst__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Gpgst__Sequence *
mrs_modules_msgs__msg__Gpgst__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpgst__Sequence * array = (mrs_modules_msgs__msg__Gpgst__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Gpgst__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Gpgst__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Gpgst__Sequence__destroy(mrs_modules_msgs__msg__Gpgst__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Gpgst__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Gpgst__Sequence__are_equal(const mrs_modules_msgs__msg__Gpgst__Sequence * lhs, const mrs_modules_msgs__msg__Gpgst__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Gpgst__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Gpgst__Sequence__copy(
  const mrs_modules_msgs__msg__Gpgst__Sequence * input,
  mrs_modules_msgs__msg__Gpgst__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Gpgst);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Gpgst * data =
      (mrs_modules_msgs__msg__Gpgst *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Gpgst__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Gpgst__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Gpgst__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
