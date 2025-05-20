// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot_msgs:msg/DobotAlarmCodes.idl
// generated code does not contain a copyright notice
#include "dobot_msgs/msg/detail/dobot_alarm_codes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `alarms_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dobot_msgs__msg__DobotAlarmCodes__init(dobot_msgs__msg__DobotAlarmCodes * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dobot_msgs__msg__DobotAlarmCodes__fini(msg);
    return false;
  }
  // alarms_list
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->alarms_list, 0)) {
    dobot_msgs__msg__DobotAlarmCodes__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs__msg__DobotAlarmCodes__fini(dobot_msgs__msg__DobotAlarmCodes * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // alarms_list
  rosidl_runtime_c__int32__Sequence__fini(&msg->alarms_list);
}

bool
dobot_msgs__msg__DobotAlarmCodes__are_equal(const dobot_msgs__msg__DobotAlarmCodes * lhs, const dobot_msgs__msg__DobotAlarmCodes * rhs)
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
  // alarms_list
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->alarms_list), &(rhs->alarms_list)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs__msg__DobotAlarmCodes__copy(
  const dobot_msgs__msg__DobotAlarmCodes * input,
  dobot_msgs__msg__DobotAlarmCodes * output)
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
  // alarms_list
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->alarms_list), &(output->alarms_list)))
  {
    return false;
  }
  return true;
}

dobot_msgs__msg__DobotAlarmCodes *
dobot_msgs__msg__DobotAlarmCodes__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__msg__DobotAlarmCodes * msg = (dobot_msgs__msg__DobotAlarmCodes *)allocator.allocate(sizeof(dobot_msgs__msg__DobotAlarmCodes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__msg__DobotAlarmCodes));
  bool success = dobot_msgs__msg__DobotAlarmCodes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__msg__DobotAlarmCodes__destroy(dobot_msgs__msg__DobotAlarmCodes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__msg__DobotAlarmCodes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__msg__DobotAlarmCodes__Sequence__init(dobot_msgs__msg__DobotAlarmCodes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__msg__DobotAlarmCodes * data = NULL;

  if (size) {
    data = (dobot_msgs__msg__DobotAlarmCodes *)allocator.zero_allocate(size, sizeof(dobot_msgs__msg__DobotAlarmCodes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__msg__DobotAlarmCodes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__msg__DobotAlarmCodes__fini(&data[i - 1]);
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
dobot_msgs__msg__DobotAlarmCodes__Sequence__fini(dobot_msgs__msg__DobotAlarmCodes__Sequence * array)
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
      dobot_msgs__msg__DobotAlarmCodes__fini(&array->data[i]);
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

dobot_msgs__msg__DobotAlarmCodes__Sequence *
dobot_msgs__msg__DobotAlarmCodes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__msg__DobotAlarmCodes__Sequence * array = (dobot_msgs__msg__DobotAlarmCodes__Sequence *)allocator.allocate(sizeof(dobot_msgs__msg__DobotAlarmCodes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__msg__DobotAlarmCodes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__msg__DobotAlarmCodes__Sequence__destroy(dobot_msgs__msg__DobotAlarmCodes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__msg__DobotAlarmCodes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__msg__DobotAlarmCodes__Sequence__are_equal(const dobot_msgs__msg__DobotAlarmCodes__Sequence * lhs, const dobot_msgs__msg__DobotAlarmCodes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__msg__DobotAlarmCodes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__msg__DobotAlarmCodes__Sequence__copy(
  const dobot_msgs__msg__DobotAlarmCodes__Sequence * input,
  dobot_msgs__msg__DobotAlarmCodes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__msg__DobotAlarmCodes);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__msg__DobotAlarmCodes * data =
      (dobot_msgs__msg__DobotAlarmCodes *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__msg__DobotAlarmCodes__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__msg__DobotAlarmCodes__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__msg__DobotAlarmCodes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
