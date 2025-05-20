// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
// generated code does not contain a copyright notice
#include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__init(dobot_msgs__srv__EvaluatePTPTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target
  // motion_type
  return true;
}

void
dobot_msgs__srv__EvaluatePTPTrajectory_Request__fini(dobot_msgs__srv__EvaluatePTPTrajectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // target
  // motion_type
}

bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__are_equal(const dobot_msgs__srv__EvaluatePTPTrajectory_Request * lhs, const dobot_msgs__srv__EvaluatePTPTrajectory_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->target[i] != rhs->target[i]) {
      return false;
    }
  }
  // motion_type
  if (lhs->motion_type != rhs->motion_type) {
    return false;
  }
  return true;
}

bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__copy(
  const dobot_msgs__srv__EvaluatePTPTrajectory_Request * input,
  dobot_msgs__srv__EvaluatePTPTrajectory_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  for (size_t i = 0; i < 4; ++i) {
    output->target[i] = input->target[i];
  }
  // motion_type
  output->motion_type = input->motion_type;
  return true;
}

dobot_msgs__srv__EvaluatePTPTrajectory_Request *
dobot_msgs__srv__EvaluatePTPTrajectory_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__srv__EvaluatePTPTrajectory_Request * msg = (dobot_msgs__srv__EvaluatePTPTrajectory_Request *)allocator.allocate(sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Request));
  bool success = dobot_msgs__srv__EvaluatePTPTrajectory_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__srv__EvaluatePTPTrajectory_Request__destroy(dobot_msgs__srv__EvaluatePTPTrajectory_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__srv__EvaluatePTPTrajectory_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__init(dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__srv__EvaluatePTPTrajectory_Request * data = NULL;

  if (size) {
    data = (dobot_msgs__srv__EvaluatePTPTrajectory_Request *)allocator.zero_allocate(size, sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__srv__EvaluatePTPTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__srv__EvaluatePTPTrajectory_Request__fini(&data[i - 1]);
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
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__fini(dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * array)
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
      dobot_msgs__srv__EvaluatePTPTrajectory_Request__fini(&array->data[i]);
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

dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence *
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * array = (dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence *)allocator.allocate(sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__destroy(dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__are_equal(const dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * lhs, const dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__srv__EvaluatePTPTrajectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__copy(
  const dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * input,
  dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__srv__EvaluatePTPTrajectory_Request * data =
      (dobot_msgs__srv__EvaluatePTPTrajectory_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__srv__EvaluatePTPTrajectory_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__srv__EvaluatePTPTrajectory_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__srv__EvaluatePTPTrajectory_Request__copy(
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
dobot_msgs__srv__EvaluatePTPTrajectory_Response__init(dobot_msgs__srv__EvaluatePTPTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_valid
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini(dobot_msgs__srv__EvaluatePTPTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_valid
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__are_equal(const dobot_msgs__srv__EvaluatePTPTrajectory_Response * lhs, const dobot_msgs__srv__EvaluatePTPTrajectory_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
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
dobot_msgs__srv__EvaluatePTPTrajectory_Response__copy(
  const dobot_msgs__srv__EvaluatePTPTrajectory_Response * input,
  dobot_msgs__srv__EvaluatePTPTrajectory_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_valid
  output->is_valid = input->is_valid;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

dobot_msgs__srv__EvaluatePTPTrajectory_Response *
dobot_msgs__srv__EvaluatePTPTrajectory_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__srv__EvaluatePTPTrajectory_Response * msg = (dobot_msgs__srv__EvaluatePTPTrajectory_Response *)allocator.allocate(sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Response));
  bool success = dobot_msgs__srv__EvaluatePTPTrajectory_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__srv__EvaluatePTPTrajectory_Response__destroy(dobot_msgs__srv__EvaluatePTPTrajectory_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__init(dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__srv__EvaluatePTPTrajectory_Response * data = NULL;

  if (size) {
    data = (dobot_msgs__srv__EvaluatePTPTrajectory_Response *)allocator.zero_allocate(size, sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__srv__EvaluatePTPTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini(&data[i - 1]);
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
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__fini(dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * array)
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
      dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini(&array->data[i]);
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

dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence *
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * array = (dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence *)allocator.allocate(sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__destroy(dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__are_equal(const dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * lhs, const dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__srv__EvaluatePTPTrajectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__copy(
  const dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * input,
  dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__srv__EvaluatePTPTrajectory_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__srv__EvaluatePTPTrajectory_Response * data =
      (dobot_msgs__srv__EvaluatePTPTrajectory_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__srv__EvaluatePTPTrajectory_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__srv__EvaluatePTPTrajectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
