// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_modules_msgs:msg/Bestpos.idl
// generated code does not contain a copyright notice
#include "mrs_modules_msgs/msg/detail/bestpos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tersus_msg_header`
#include "mrs_modules_msgs/msg/detail/tersus_message_header__functions.h"
// Member `solution_status`
// Member `position_type`
// Member `datum_id`
// Member `base_station_id`
#include "rosidl_runtime_c/string_functions.h"

bool
mrs_modules_msgs__msg__Bestpos__init(mrs_modules_msgs__msg__Bestpos * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrs_modules_msgs__msg__Bestpos__fini(msg);
    return false;
  }
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__init(&msg->tersus_msg_header)) {
    mrs_modules_msgs__msg__Bestpos__fini(msg);
    return false;
  }
  // solution_status
  if (!rosidl_runtime_c__String__init(&msg->solution_status)) {
    mrs_modules_msgs__msg__Bestpos__fini(msg);
    return false;
  }
  // position_type
  if (!rosidl_runtime_c__String__init(&msg->position_type)) {
    mrs_modules_msgs__msg__Bestpos__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // height
  // undulation
  // datum_id
  if (!rosidl_runtime_c__String__init(&msg->datum_id)) {
    mrs_modules_msgs__msg__Bestpos__fini(msg);
    return false;
  }
  // latitude_std
  // longitude_std
  // height_std
  // base_station_id
  if (!rosidl_runtime_c__String__init(&msg->base_station_id)) {
    mrs_modules_msgs__msg__Bestpos__fini(msg);
    return false;
  }
  // diff_age
  // solution_age
  // num_satellites_tracked
  // num_satellites_used_in_solution
  // num_gps_and_glonass_l1_used_in_solution
  // num_gps_and_glonass_l1_and_l2_used_in_solution
  return true;
}

void
mrs_modules_msgs__msg__Bestpos__fini(mrs_modules_msgs__msg__Bestpos * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tersus_msg_header
  mrs_modules_msgs__msg__TersusMessageHeader__fini(&msg->tersus_msg_header);
  // solution_status
  rosidl_runtime_c__String__fini(&msg->solution_status);
  // position_type
  rosidl_runtime_c__String__fini(&msg->position_type);
  // latitude
  // longitude
  // height
  // undulation
  // datum_id
  rosidl_runtime_c__String__fini(&msg->datum_id);
  // latitude_std
  // longitude_std
  // height_std
  // base_station_id
  rosidl_runtime_c__String__fini(&msg->base_station_id);
  // diff_age
  // solution_age
  // num_satellites_tracked
  // num_satellites_used_in_solution
  // num_gps_and_glonass_l1_used_in_solution
  // num_gps_and_glonass_l1_and_l2_used_in_solution
}

bool
mrs_modules_msgs__msg__Bestpos__are_equal(const mrs_modules_msgs__msg__Bestpos * lhs, const mrs_modules_msgs__msg__Bestpos * rhs)
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
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__are_equal(
      &(lhs->tersus_msg_header), &(rhs->tersus_msg_header)))
  {
    return false;
  }
  // solution_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->solution_status), &(rhs->solution_status)))
  {
    return false;
  }
  // position_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->position_type), &(rhs->position_type)))
  {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // undulation
  if (lhs->undulation != rhs->undulation) {
    return false;
  }
  // datum_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->datum_id), &(rhs->datum_id)))
  {
    return false;
  }
  // latitude_std
  if (lhs->latitude_std != rhs->latitude_std) {
    return false;
  }
  // longitude_std
  if (lhs->longitude_std != rhs->longitude_std) {
    return false;
  }
  // height_std
  if (lhs->height_std != rhs->height_std) {
    return false;
  }
  // base_station_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->base_station_id), &(rhs->base_station_id)))
  {
    return false;
  }
  // diff_age
  if (lhs->diff_age != rhs->diff_age) {
    return false;
  }
  // solution_age
  if (lhs->solution_age != rhs->solution_age) {
    return false;
  }
  // num_satellites_tracked
  if (lhs->num_satellites_tracked != rhs->num_satellites_tracked) {
    return false;
  }
  // num_satellites_used_in_solution
  if (lhs->num_satellites_used_in_solution != rhs->num_satellites_used_in_solution) {
    return false;
  }
  // num_gps_and_glonass_l1_used_in_solution
  if (lhs->num_gps_and_glonass_l1_used_in_solution != rhs->num_gps_and_glonass_l1_used_in_solution) {
    return false;
  }
  // num_gps_and_glonass_l1_and_l2_used_in_solution
  if (lhs->num_gps_and_glonass_l1_and_l2_used_in_solution != rhs->num_gps_and_glonass_l1_and_l2_used_in_solution) {
    return false;
  }
  return true;
}

bool
mrs_modules_msgs__msg__Bestpos__copy(
  const mrs_modules_msgs__msg__Bestpos * input,
  mrs_modules_msgs__msg__Bestpos * output)
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
  // tersus_msg_header
  if (!mrs_modules_msgs__msg__TersusMessageHeader__copy(
      &(input->tersus_msg_header), &(output->tersus_msg_header)))
  {
    return false;
  }
  // solution_status
  if (!rosidl_runtime_c__String__copy(
      &(input->solution_status), &(output->solution_status)))
  {
    return false;
  }
  // position_type
  if (!rosidl_runtime_c__String__copy(
      &(input->position_type), &(output->position_type)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // height
  output->height = input->height;
  // undulation
  output->undulation = input->undulation;
  // datum_id
  if (!rosidl_runtime_c__String__copy(
      &(input->datum_id), &(output->datum_id)))
  {
    return false;
  }
  // latitude_std
  output->latitude_std = input->latitude_std;
  // longitude_std
  output->longitude_std = input->longitude_std;
  // height_std
  output->height_std = input->height_std;
  // base_station_id
  if (!rosidl_runtime_c__String__copy(
      &(input->base_station_id), &(output->base_station_id)))
  {
    return false;
  }
  // diff_age
  output->diff_age = input->diff_age;
  // solution_age
  output->solution_age = input->solution_age;
  // num_satellites_tracked
  output->num_satellites_tracked = input->num_satellites_tracked;
  // num_satellites_used_in_solution
  output->num_satellites_used_in_solution = input->num_satellites_used_in_solution;
  // num_gps_and_glonass_l1_used_in_solution
  output->num_gps_and_glonass_l1_used_in_solution = input->num_gps_and_glonass_l1_used_in_solution;
  // num_gps_and_glonass_l1_and_l2_used_in_solution
  output->num_gps_and_glonass_l1_and_l2_used_in_solution = input->num_gps_and_glonass_l1_and_l2_used_in_solution;
  return true;
}

mrs_modules_msgs__msg__Bestpos *
mrs_modules_msgs__msg__Bestpos__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Bestpos * msg = (mrs_modules_msgs__msg__Bestpos *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Bestpos), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_modules_msgs__msg__Bestpos));
  bool success = mrs_modules_msgs__msg__Bestpos__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_modules_msgs__msg__Bestpos__destroy(mrs_modules_msgs__msg__Bestpos * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_modules_msgs__msg__Bestpos__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_modules_msgs__msg__Bestpos__Sequence__init(mrs_modules_msgs__msg__Bestpos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Bestpos * data = NULL;

  if (size) {
    data = (mrs_modules_msgs__msg__Bestpos *)allocator.zero_allocate(size, sizeof(mrs_modules_msgs__msg__Bestpos), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_modules_msgs__msg__Bestpos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_modules_msgs__msg__Bestpos__fini(&data[i - 1]);
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
mrs_modules_msgs__msg__Bestpos__Sequence__fini(mrs_modules_msgs__msg__Bestpos__Sequence * array)
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
      mrs_modules_msgs__msg__Bestpos__fini(&array->data[i]);
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

mrs_modules_msgs__msg__Bestpos__Sequence *
mrs_modules_msgs__msg__Bestpos__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_modules_msgs__msg__Bestpos__Sequence * array = (mrs_modules_msgs__msg__Bestpos__Sequence *)allocator.allocate(sizeof(mrs_modules_msgs__msg__Bestpos__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_modules_msgs__msg__Bestpos__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_modules_msgs__msg__Bestpos__Sequence__destroy(mrs_modules_msgs__msg__Bestpos__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_modules_msgs__msg__Bestpos__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_modules_msgs__msg__Bestpos__Sequence__are_equal(const mrs_modules_msgs__msg__Bestpos__Sequence * lhs, const mrs_modules_msgs__msg__Bestpos__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_modules_msgs__msg__Bestpos__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_modules_msgs__msg__Bestpos__Sequence__copy(
  const mrs_modules_msgs__msg__Bestpos__Sequence * input,
  mrs_modules_msgs__msg__Bestpos__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_modules_msgs__msg__Bestpos);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_modules_msgs__msg__Bestpos * data =
      (mrs_modules_msgs__msg__Bestpos *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_modules_msgs__msg__Bestpos__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_modules_msgs__msg__Bestpos__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_modules_msgs__msg__Bestpos__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
