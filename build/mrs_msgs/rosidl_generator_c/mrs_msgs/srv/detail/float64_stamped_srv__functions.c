// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:srv/Float64StampedSrv.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/srv/detail/float64_stamped_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mrs_msgs__srv__Float64StampedSrv_Request__init(mrs_msgs__srv__Float64StampedSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_msgs__srv__Float64StampedSrv_Request__fini(msg);
    return false;
  }
  // value
  return true;
}

void
mrs_msgs__srv__Float64StampedSrv_Request__fini(mrs_msgs__srv__Float64StampedSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // value
}

bool
mrs_msgs__srv__Float64StampedSrv_Request__are_equal(const mrs_msgs__srv__Float64StampedSrv_Request * lhs, const mrs_msgs__srv__Float64StampedSrv_Request * rhs)
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
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
mrs_msgs__srv__Float64StampedSrv_Request__copy(
  const mrs_msgs__srv__Float64StampedSrv_Request * input,
  mrs_msgs__srv__Float64StampedSrv_Request * output)
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
  // value
  output->value = input->value;
  return true;
}

mrs_msgs__srv__Float64StampedSrv_Request *
mrs_msgs__srv__Float64StampedSrv_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Request * msg = (mrs_msgs__srv__Float64StampedSrv_Request *)allocator.allocate(sizeof(mrs_msgs__srv__Float64StampedSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__srv__Float64StampedSrv_Request));
  bool success = mrs_msgs__srv__Float64StampedSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__srv__Float64StampedSrv_Request__destroy(mrs_msgs__srv__Float64StampedSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__srv__Float64StampedSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__srv__Float64StampedSrv_Request__Sequence__init(mrs_msgs__srv__Float64StampedSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Request * data = NULL;

  if (size) {
    data = (mrs_msgs__srv__Float64StampedSrv_Request *)allocator.zero_allocate(size, sizeof(mrs_msgs__srv__Float64StampedSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__srv__Float64StampedSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__srv__Float64StampedSrv_Request__fini(&data[i - 1]);
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
mrs_msgs__srv__Float64StampedSrv_Request__Sequence__fini(mrs_msgs__srv__Float64StampedSrv_Request__Sequence * array)
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
      mrs_msgs__srv__Float64StampedSrv_Request__fini(&array->data[i]);
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

mrs_msgs__srv__Float64StampedSrv_Request__Sequence *
mrs_msgs__srv__Float64StampedSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Request__Sequence * array = (mrs_msgs__srv__Float64StampedSrv_Request__Sequence *)allocator.allocate(sizeof(mrs_msgs__srv__Float64StampedSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__srv__Float64StampedSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__srv__Float64StampedSrv_Request__Sequence__destroy(mrs_msgs__srv__Float64StampedSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__srv__Float64StampedSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__srv__Float64StampedSrv_Request__Sequence__are_equal(const mrs_msgs__srv__Float64StampedSrv_Request__Sequence * lhs, const mrs_msgs__srv__Float64StampedSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__srv__Float64StampedSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__srv__Float64StampedSrv_Request__Sequence__copy(
  const mrs_msgs__srv__Float64StampedSrv_Request__Sequence * input,
  mrs_msgs__srv__Float64StampedSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__srv__Float64StampedSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__srv__Float64StampedSrv_Request * data =
      (mrs_msgs__srv__Float64StampedSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__srv__Float64StampedSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__srv__Float64StampedSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__srv__Float64StampedSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_msgs__srv__Float64StampedSrv_Response__init(mrs_msgs__srv__Float64StampedSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mrs_msgs__srv__Float64StampedSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__srv__Float64StampedSrv_Response__fini(mrs_msgs__srv__Float64StampedSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
mrs_msgs__srv__Float64StampedSrv_Response__are_equal(const mrs_msgs__srv__Float64StampedSrv_Response * lhs, const mrs_msgs__srv__Float64StampedSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__srv__Float64StampedSrv_Response__copy(
  const mrs_msgs__srv__Float64StampedSrv_Response * input,
  mrs_msgs__srv__Float64StampedSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

mrs_msgs__srv__Float64StampedSrv_Response *
mrs_msgs__srv__Float64StampedSrv_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Response * msg = (mrs_msgs__srv__Float64StampedSrv_Response *)allocator.allocate(sizeof(mrs_msgs__srv__Float64StampedSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__srv__Float64StampedSrv_Response));
  bool success = mrs_msgs__srv__Float64StampedSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__srv__Float64StampedSrv_Response__destroy(mrs_msgs__srv__Float64StampedSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__srv__Float64StampedSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__srv__Float64StampedSrv_Response__Sequence__init(mrs_msgs__srv__Float64StampedSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Response * data = NULL;

  if (size) {
    data = (mrs_msgs__srv__Float64StampedSrv_Response *)allocator.zero_allocate(size, sizeof(mrs_msgs__srv__Float64StampedSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__srv__Float64StampedSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__srv__Float64StampedSrv_Response__fini(&data[i - 1]);
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
mrs_msgs__srv__Float64StampedSrv_Response__Sequence__fini(mrs_msgs__srv__Float64StampedSrv_Response__Sequence * array)
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
      mrs_msgs__srv__Float64StampedSrv_Response__fini(&array->data[i]);
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

mrs_msgs__srv__Float64StampedSrv_Response__Sequence *
mrs_msgs__srv__Float64StampedSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Response__Sequence * array = (mrs_msgs__srv__Float64StampedSrv_Response__Sequence *)allocator.allocate(sizeof(mrs_msgs__srv__Float64StampedSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__srv__Float64StampedSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__srv__Float64StampedSrv_Response__Sequence__destroy(mrs_msgs__srv__Float64StampedSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__srv__Float64StampedSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__srv__Float64StampedSrv_Response__Sequence__are_equal(const mrs_msgs__srv__Float64StampedSrv_Response__Sequence * lhs, const mrs_msgs__srv__Float64StampedSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__srv__Float64StampedSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__srv__Float64StampedSrv_Response__Sequence__copy(
  const mrs_msgs__srv__Float64StampedSrv_Response__Sequence * input,
  mrs_msgs__srv__Float64StampedSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__srv__Float64StampedSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__srv__Float64StampedSrv_Response * data =
      (mrs_msgs__srv__Float64StampedSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__srv__Float64StampedSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__srv__Float64StampedSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__srv__Float64StampedSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mrs_msgs/srv/detail/float64_stamped_srv__functions.h"

bool
mrs_msgs__srv__Float64StampedSrv_Event__init(mrs_msgs__srv__Float64StampedSrv_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mrs_msgs__srv__Float64StampedSrv_Event__fini(msg);
    return false;
  }
  // request
  if (!mrs_msgs__srv__Float64StampedSrv_Request__Sequence__init(&msg->request, 0)) {
    mrs_msgs__srv__Float64StampedSrv_Event__fini(msg);
    return false;
  }
  // response
  if (!mrs_msgs__srv__Float64StampedSrv_Response__Sequence__init(&msg->response, 0)) {
    mrs_msgs__srv__Float64StampedSrv_Event__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__srv__Float64StampedSrv_Event__fini(mrs_msgs__srv__Float64StampedSrv_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mrs_msgs__srv__Float64StampedSrv_Request__Sequence__fini(&msg->request);
  // response
  mrs_msgs__srv__Float64StampedSrv_Response__Sequence__fini(&msg->response);
}

bool
mrs_msgs__srv__Float64StampedSrv_Event__are_equal(const mrs_msgs__srv__Float64StampedSrv_Event * lhs, const mrs_msgs__srv__Float64StampedSrv_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mrs_msgs__srv__Float64StampedSrv_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mrs_msgs__srv__Float64StampedSrv_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__srv__Float64StampedSrv_Event__copy(
  const mrs_msgs__srv__Float64StampedSrv_Event * input,
  mrs_msgs__srv__Float64StampedSrv_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mrs_msgs__srv__Float64StampedSrv_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mrs_msgs__srv__Float64StampedSrv_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mrs_msgs__srv__Float64StampedSrv_Event *
mrs_msgs__srv__Float64StampedSrv_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Event * msg = (mrs_msgs__srv__Float64StampedSrv_Event *)allocator.allocate(sizeof(mrs_msgs__srv__Float64StampedSrv_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__srv__Float64StampedSrv_Event));
  bool success = mrs_msgs__srv__Float64StampedSrv_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__srv__Float64StampedSrv_Event__destroy(mrs_msgs__srv__Float64StampedSrv_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__srv__Float64StampedSrv_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__srv__Float64StampedSrv_Event__Sequence__init(mrs_msgs__srv__Float64StampedSrv_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Event * data = NULL;

  if (size) {
    data = (mrs_msgs__srv__Float64StampedSrv_Event *)allocator.zero_allocate(size, sizeof(mrs_msgs__srv__Float64StampedSrv_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__srv__Float64StampedSrv_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__srv__Float64StampedSrv_Event__fini(&data[i - 1]);
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
mrs_msgs__srv__Float64StampedSrv_Event__Sequence__fini(mrs_msgs__srv__Float64StampedSrv_Event__Sequence * array)
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
      mrs_msgs__srv__Float64StampedSrv_Event__fini(&array->data[i]);
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

mrs_msgs__srv__Float64StampedSrv_Event__Sequence *
mrs_msgs__srv__Float64StampedSrv_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__srv__Float64StampedSrv_Event__Sequence * array = (mrs_msgs__srv__Float64StampedSrv_Event__Sequence *)allocator.allocate(sizeof(mrs_msgs__srv__Float64StampedSrv_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__srv__Float64StampedSrv_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__srv__Float64StampedSrv_Event__Sequence__destroy(mrs_msgs__srv__Float64StampedSrv_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__srv__Float64StampedSrv_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__srv__Float64StampedSrv_Event__Sequence__are_equal(const mrs_msgs__srv__Float64StampedSrv_Event__Sequence * lhs, const mrs_msgs__srv__Float64StampedSrv_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__srv__Float64StampedSrv_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__srv__Float64StampedSrv_Event__Sequence__copy(
  const mrs_msgs__srv__Float64StampedSrv_Event__Sequence * input,
  mrs_msgs__srv__Float64StampedSrv_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__srv__Float64StampedSrv_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__srv__Float64StampedSrv_Event * data =
      (mrs_msgs__srv__Float64StampedSrv_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__srv__Float64StampedSrv_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__srv__Float64StampedSrv_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__srv__Float64StampedSrv_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
