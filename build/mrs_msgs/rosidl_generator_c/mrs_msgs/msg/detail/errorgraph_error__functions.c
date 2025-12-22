// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/ErrorgraphError.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/errorgraph_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `type`
// Member `waited_for_topic`
#include "rosidl_runtime_c/string_functions.h"
// Member `waited_for_node`
#include "mrs_msgs/msg/detail/errorgraph_node_id__functions.h"

bool
mrs_msgs__msg__ErrorgraphError__init(mrs_msgs__msg__ErrorgraphError * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__ErrorgraphError__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    mrs_msgs__msg__ErrorgraphError__fini(msg);
    return false;
  }
  // waited_for_topic
  if (!rosidl_runtime_c__String__init(&msg->waited_for_topic)) {
    mrs_msgs__msg__ErrorgraphError__fini(msg);
    return false;
  }
  // waited_for_node
  if (!mrs_msgs__msg__ErrorgraphNodeID__init(&msg->waited_for_node)) {
    mrs_msgs__msg__ErrorgraphError__fini(msg);
    return false;
  }
  return true;
}

void
mrs_msgs__msg__ErrorgraphError__fini(mrs_msgs__msg__ErrorgraphError * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // waited_for_topic
  rosidl_runtime_c__String__fini(&msg->waited_for_topic);
  // waited_for_node
  mrs_msgs__msg__ErrorgraphNodeID__fini(&msg->waited_for_node);
}

bool
mrs_msgs__msg__ErrorgraphError__are_equal(const mrs_msgs__msg__ErrorgraphError * lhs, const mrs_msgs__msg__ErrorgraphError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // waited_for_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waited_for_topic), &(rhs->waited_for_topic)))
  {
    return false;
  }
  // waited_for_node
  if (!mrs_msgs__msg__ErrorgraphNodeID__are_equal(
      &(lhs->waited_for_node), &(rhs->waited_for_node)))
  {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__ErrorgraphError__copy(
  const mrs_msgs__msg__ErrorgraphError * input,
  mrs_msgs__msg__ErrorgraphError * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // waited_for_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->waited_for_topic), &(output->waited_for_topic)))
  {
    return false;
  }
  // waited_for_node
  if (!mrs_msgs__msg__ErrorgraphNodeID__copy(
      &(input->waited_for_node), &(output->waited_for_node)))
  {
    return false;
  }
  return true;
}

mrs_msgs__msg__ErrorgraphError *
mrs_msgs__msg__ErrorgraphError__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ErrorgraphError * msg = (mrs_msgs__msg__ErrorgraphError *)allocator.allocate(sizeof(mrs_msgs__msg__ErrorgraphError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__ErrorgraphError));
  bool success = mrs_msgs__msg__ErrorgraphError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__ErrorgraphError__destroy(mrs_msgs__msg__ErrorgraphError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__ErrorgraphError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__ErrorgraphError__Sequence__init(mrs_msgs__msg__ErrorgraphError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ErrorgraphError * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__ErrorgraphError *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__ErrorgraphError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__ErrorgraphError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__ErrorgraphError__fini(&data[i - 1]);
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
mrs_msgs__msg__ErrorgraphError__Sequence__fini(mrs_msgs__msg__ErrorgraphError__Sequence * array)
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
      mrs_msgs__msg__ErrorgraphError__fini(&array->data[i]);
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

mrs_msgs__msg__ErrorgraphError__Sequence *
mrs_msgs__msg__ErrorgraphError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__ErrorgraphError__Sequence * array = (mrs_msgs__msg__ErrorgraphError__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__ErrorgraphError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__ErrorgraphError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__ErrorgraphError__Sequence__destroy(mrs_msgs__msg__ErrorgraphError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__ErrorgraphError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__ErrorgraphError__Sequence__are_equal(const mrs_msgs__msg__ErrorgraphError__Sequence * lhs, const mrs_msgs__msg__ErrorgraphError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__ErrorgraphError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__ErrorgraphError__Sequence__copy(
  const mrs_msgs__msg__ErrorgraphError__Sequence * input,
  mrs_msgs__msg__ErrorgraphError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__ErrorgraphError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__ErrorgraphError * data =
      (mrs_msgs__msg__ErrorgraphError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__ErrorgraphError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__ErrorgraphError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__ErrorgraphError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
