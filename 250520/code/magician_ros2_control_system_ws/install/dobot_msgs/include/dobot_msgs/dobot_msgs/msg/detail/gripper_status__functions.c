// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot_msgs:msg/GripperStatus.idl
// generated code does not contain a copyright notice
#include "dobot_msgs/msg/detail/gripper_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
dobot_msgs__msg__GripperStatus__init(dobot_msgs__msg__GripperStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dobot_msgs__msg__GripperStatus__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    dobot_msgs__msg__GripperStatus__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs__msg__GripperStatus__fini(dobot_msgs__msg__GripperStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
dobot_msgs__msg__GripperStatus__are_equal(const dobot_msgs__msg__GripperStatus * lhs, const dobot_msgs__msg__GripperStatus * rhs)
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
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs__msg__GripperStatus__copy(
  const dobot_msgs__msg__GripperStatus * input,
  dobot_msgs__msg__GripperStatus * output)
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
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

dobot_msgs__msg__GripperStatus *
dobot_msgs__msg__GripperStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__msg__GripperStatus * msg = (dobot_msgs__msg__GripperStatus *)allocator.allocate(sizeof(dobot_msgs__msg__GripperStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__msg__GripperStatus));
  bool success = dobot_msgs__msg__GripperStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__msg__GripperStatus__destroy(dobot_msgs__msg__GripperStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__msg__GripperStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__msg__GripperStatus__Sequence__init(dobot_msgs__msg__GripperStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__msg__GripperStatus * data = NULL;

  if (size) {
    data = (dobot_msgs__msg__GripperStatus *)allocator.zero_allocate(size, sizeof(dobot_msgs__msg__GripperStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__msg__GripperStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__msg__GripperStatus__fini(&data[i - 1]);
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
dobot_msgs__msg__GripperStatus__Sequence__fini(dobot_msgs__msg__GripperStatus__Sequence * array)
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
      dobot_msgs__msg__GripperStatus__fini(&array->data[i]);
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

dobot_msgs__msg__GripperStatus__Sequence *
dobot_msgs__msg__GripperStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__msg__GripperStatus__Sequence * array = (dobot_msgs__msg__GripperStatus__Sequence *)allocator.allocate(sizeof(dobot_msgs__msg__GripperStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__msg__GripperStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__msg__GripperStatus__Sequence__destroy(dobot_msgs__msg__GripperStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__msg__GripperStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__msg__GripperStatus__Sequence__are_equal(const dobot_msgs__msg__GripperStatus__Sequence * lhs, const dobot_msgs__msg__GripperStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__msg__GripperStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__msg__GripperStatus__Sequence__copy(
  const dobot_msgs__msg__GripperStatus__Sequence * input,
  dobot_msgs__msg__GripperStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__msg__GripperStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__msg__GripperStatus * data =
      (dobot_msgs__msg__GripperStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__msg__GripperStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__msg__GripperStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__msg__GripperStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
