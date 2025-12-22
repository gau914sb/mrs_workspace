// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrs_msgs:msg/GpsInfo.idl
// generated code does not contain a copyright notice
#include "mrs_msgs/msg/detail/gps_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mrs_msgs__msg__GpsInfo__init(mrs_msgs__msg__GpsInfo * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mrs_msgs__msg__GpsInfo__fini(msg);
    return false;
  }
  // fix_type
  // lat
  // lon
  // alt
  // eph
  // epv
  // vel
  // cog
  // satellites_visible
  // alt_ellipsoid
  // h_acc
  // v_acc
  // vel_acc
  // hdg_acc
  // yaw
  // dgps_num_sats
  // dgps_age
  // baseline_dist
  return true;
}

void
mrs_msgs__msg__GpsInfo__fini(mrs_msgs__msg__GpsInfo * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // fix_type
  // lat
  // lon
  // alt
  // eph
  // epv
  // vel
  // cog
  // satellites_visible
  // alt_ellipsoid
  // h_acc
  // v_acc
  // vel_acc
  // hdg_acc
  // yaw
  // dgps_num_sats
  // dgps_age
  // baseline_dist
}

bool
mrs_msgs__msg__GpsInfo__are_equal(const mrs_msgs__msg__GpsInfo * lhs, const mrs_msgs__msg__GpsInfo * rhs)
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
  // fix_type
  if (lhs->fix_type != rhs->fix_type) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  // eph
  if (lhs->eph != rhs->eph) {
    return false;
  }
  // epv
  if (lhs->epv != rhs->epv) {
    return false;
  }
  // vel
  if (lhs->vel != rhs->vel) {
    return false;
  }
  // cog
  if (lhs->cog != rhs->cog) {
    return false;
  }
  // satellites_visible
  if (lhs->satellites_visible != rhs->satellites_visible) {
    return false;
  }
  // alt_ellipsoid
  if (lhs->alt_ellipsoid != rhs->alt_ellipsoid) {
    return false;
  }
  // h_acc
  if (lhs->h_acc != rhs->h_acc) {
    return false;
  }
  // v_acc
  if (lhs->v_acc != rhs->v_acc) {
    return false;
  }
  // vel_acc
  if (lhs->vel_acc != rhs->vel_acc) {
    return false;
  }
  // hdg_acc
  if (lhs->hdg_acc != rhs->hdg_acc) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // dgps_num_sats
  if (lhs->dgps_num_sats != rhs->dgps_num_sats) {
    return false;
  }
  // dgps_age
  if (lhs->dgps_age != rhs->dgps_age) {
    return false;
  }
  // baseline_dist
  if (lhs->baseline_dist != rhs->baseline_dist) {
    return false;
  }
  return true;
}

bool
mrs_msgs__msg__GpsInfo__copy(
  const mrs_msgs__msg__GpsInfo * input,
  mrs_msgs__msg__GpsInfo * output)
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
  // fix_type
  output->fix_type = input->fix_type;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // alt
  output->alt = input->alt;
  // eph
  output->eph = input->eph;
  // epv
  output->epv = input->epv;
  // vel
  output->vel = input->vel;
  // cog
  output->cog = input->cog;
  // satellites_visible
  output->satellites_visible = input->satellites_visible;
  // alt_ellipsoid
  output->alt_ellipsoid = input->alt_ellipsoid;
  // h_acc
  output->h_acc = input->h_acc;
  // v_acc
  output->v_acc = input->v_acc;
  // vel_acc
  output->vel_acc = input->vel_acc;
  // hdg_acc
  output->hdg_acc = input->hdg_acc;
  // yaw
  output->yaw = input->yaw;
  // dgps_num_sats
  output->dgps_num_sats = input->dgps_num_sats;
  // dgps_age
  output->dgps_age = input->dgps_age;
  // baseline_dist
  output->baseline_dist = input->baseline_dist;
  return true;
}

mrs_msgs__msg__GpsInfo *
mrs_msgs__msg__GpsInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GpsInfo * msg = (mrs_msgs__msg__GpsInfo *)allocator.allocate(sizeof(mrs_msgs__msg__GpsInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrs_msgs__msg__GpsInfo));
  bool success = mrs_msgs__msg__GpsInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrs_msgs__msg__GpsInfo__destroy(mrs_msgs__msg__GpsInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrs_msgs__msg__GpsInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrs_msgs__msg__GpsInfo__Sequence__init(mrs_msgs__msg__GpsInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GpsInfo * data = NULL;

  if (size) {
    data = (mrs_msgs__msg__GpsInfo *)allocator.zero_allocate(size, sizeof(mrs_msgs__msg__GpsInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrs_msgs__msg__GpsInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrs_msgs__msg__GpsInfo__fini(&data[i - 1]);
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
mrs_msgs__msg__GpsInfo__Sequence__fini(mrs_msgs__msg__GpsInfo__Sequence * array)
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
      mrs_msgs__msg__GpsInfo__fini(&array->data[i]);
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

mrs_msgs__msg__GpsInfo__Sequence *
mrs_msgs__msg__GpsInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrs_msgs__msg__GpsInfo__Sequence * array = (mrs_msgs__msg__GpsInfo__Sequence *)allocator.allocate(sizeof(mrs_msgs__msg__GpsInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrs_msgs__msg__GpsInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrs_msgs__msg__GpsInfo__Sequence__destroy(mrs_msgs__msg__GpsInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrs_msgs__msg__GpsInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrs_msgs__msg__GpsInfo__Sequence__are_equal(const mrs_msgs__msg__GpsInfo__Sequence * lhs, const mrs_msgs__msg__GpsInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrs_msgs__msg__GpsInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrs_msgs__msg__GpsInfo__Sequence__copy(
  const mrs_msgs__msg__GpsInfo__Sequence * input,
  mrs_msgs__msg__GpsInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrs_msgs__msg__GpsInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrs_msgs__msg__GpsInfo * data =
      (mrs_msgs__msg__GpsInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrs_msgs__msg__GpsInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrs_msgs__msg__GpsInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrs_msgs__msg__GpsInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
