// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/gpgsa__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
// Member `auto_manual_mode`
#include "rosidl_runtime_c/string_functions.h"
// Member `prn`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrs_modules_msgs__msg__Gpgsa__init(mrs_modules_msgs__msg__Gpgsa * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__Gpgsa__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    mrs_modules_msgs__msg__Gpgsa__fini(msg);
    return false;
  }
  // auto_manual_mode
  if (!rosidl_runtime_c__String__init(&msg->auto_manual_mode)) {
    mrs_modules_msgs__msg__Gpgsa__fini(msg);
    return false;
  }
  // fix_mode
  // prn
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->prn, 0)) {
    mrs_modules_msgs__msg__Gpgsa__fini(msg);
    return false;
  }
  // pdop
  // hdop
  // vdop
  return true;
}

void
mrs_modules_msgs__msg__Gpgsa__fini(mrs_modules_msgs__msg__Gpgsa * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // auto_manual_mode
  rosidl_runtime_c__String__fini(&msg->auto_manual_mode);
  // fix_mode
  // prn
  rosidl_runtime_c__uint8__Sequence__fini(&msg->prn);
  // pdop
  // hdop
  // vdop
}

bool
mrs_modules_msgs__msg__Gpgsa__are_equal(const mrs_modules_msgs__msg__Gpgsa * lhs, const mrs_modules_msgs__msg__Gpgsa * rhs)
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
  // auto_manual_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->auto_manual_mode), &(rhs->auto_manual_mode)))
  {
    return false;
  }
  // fix_mode
  if (lhs->fix_mode != rhs->fix_mode) {
    return false;
  }
  // prn
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->prn), &(rhs->prn)))
  {
    return false;
  }
  // pdop
  if (lhs->pdop != rhs->pdop) {
    return false;
  }
  // hdop
  if (lhs->hdop != rhs->hdop) {
    return false;
  }
  // vdop
  if (lhs->vdop != rhs->vdop) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Gpgsa__copy(
  const mrs_modules_msgs__msg__Gpgsa * input,
  mrs_modules_msgs__msg__Gpgsa * output)
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
  // auto_manual_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->auto_manual_mode), &(output->auto_manual_mode)))
  {
    return false;
  }
  // fix_mode
  output->fix_mode = input->fix_mode;
  // prn
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->prn), &(output->prn)))
  {
    return false;
  }
  // pdop
  output->pdop = input->pdop;
  // hdop
  output->hdop = input->hdop;
  // vdop
  output->vdop = input->vdop;
  return true;
}

mrs_modules_msgs__msg__Gpgsa *
mrs_modules_msgs__msg__Gpgsa__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpgsa * msg = (mrs_modules_msgs__msg__Gpgsa *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Gpgsa), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Gpgsa));
  bool success = mrs_modules_msgs__msg__Gpgsa__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Gpgsa__destroy(mrs_modules_msgs__msg__Gpgsa * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Gpgsa__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Gpgsa__Sequence__init(mrs_modules_msgs__msg__Gpgsa__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpgsa * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Gpgsa *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Gpgsa), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Gpgsa__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Gpgsa__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Gpgsa__Sequence__fini(mrs_modules_msgs__msg__Gpgsa__Sequence * array)
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
      mrs_modules_msgs__msg__Gpgsa__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Gpgsa__Sequence *
mrs_modules_msgs__msg__Gpgsa__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Gpgsa__Sequence * array = (mrs_modules_msgs__msg__Gpgsa__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Gpgsa__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Gpgsa__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Gpgsa__Sequence__destroy(mrs_modules_msgs__msg__Gpgsa__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Gpgsa__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Gpgsa__Sequence__are_equal(const mrs_modules_msgs__msg__Gpgsa__Sequence * lhs, const mrs_modules_msgs__msg__Gpgsa__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Gpgsa__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Gpgsa__Sequence__copy(
  const mrs_modules_msgs__msg__Gpgsa__Sequence * input,
  mrs_modules_msgs__msg__Gpgsa__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Gpgsa);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Gpgsa * data =
      (mrs_modules_msgs__msg__Gpgsa *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Gpgsa__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Gpgsa__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Gpgsa__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
