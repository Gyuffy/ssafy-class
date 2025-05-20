// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot_msgs:action/PointToPoint.idl
// generated code does not contain a copyright notice
#include "dobot_msgs/action/detail/point_to_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dobot_msgs__action__PointToPoint_Goal__init(dobot_msgs__action__PointToPoint_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // motion_type
  // target_pose
  // velocity_ratio
  msg->velocity_ratio = 1.0l;
  // acceleration_ratio
  msg->acceleration_ratio = 1.0l;
  return true;
}

void
dobot_msgs__action__PointToPoint_Goal__fini(dobot_msgs__action__PointToPoint_Goal * msg)
{
  if (!msg) {
    return;
  }
  // motion_type
  // target_pose
  // velocity_ratio
  // acceleration_ratio
}

bool
dobot_msgs__action__PointToPoint_Goal__are_equal(const dobot_msgs__action__PointToPoint_Goal * lhs, const dobot_msgs__action__PointToPoint_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_type
  if (lhs->motion_type != rhs->motion_type) {
    return false;
  }
  // target_pose
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->target_pose[i] != rhs->target_pose[i]) {
      return false;
    }
  }
  // velocity_ratio
  if (lhs->velocity_ratio != rhs->velocity_ratio) {
    return false;
  }
  // acceleration_ratio
  if (lhs->acceleration_ratio != rhs->acceleration_ratio) {
    return false;
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_Goal__copy(
  const dobot_msgs__action__PointToPoint_Goal * input,
  dobot_msgs__action__PointToPoint_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_type
  output->motion_type = input->motion_type;
  // target_pose
  for (size_t i = 0; i < 4; ++i) {
    output->target_pose[i] = input->target_pose[i];
  }
  // velocity_ratio
  output->velocity_ratio = input->velocity_ratio;
  // acceleration_ratio
  output->acceleration_ratio = input->acceleration_ratio;
  return true;
}

dobot_msgs__action__PointToPoint_Goal *
dobot_msgs__action__PointToPoint_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Goal * msg = (dobot_msgs__action__PointToPoint_Goal *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__action__PointToPoint_Goal));
  bool success = dobot_msgs__action__PointToPoint_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__action__PointToPoint_Goal__destroy(dobot_msgs__action__PointToPoint_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__action__PointToPoint_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__action__PointToPoint_Goal__Sequence__init(dobot_msgs__action__PointToPoint_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Goal * data = NULL;

  if (size) {
    data = (dobot_msgs__action__PointToPoint_Goal *)allocator.zero_allocate(size, sizeof(dobot_msgs__action__PointToPoint_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__action__PointToPoint_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__action__PointToPoint_Goal__fini(&data[i - 1]);
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
dobot_msgs__action__PointToPoint_Goal__Sequence__fini(dobot_msgs__action__PointToPoint_Goal__Sequence * array)
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
      dobot_msgs__action__PointToPoint_Goal__fini(&array->data[i]);
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

dobot_msgs__action__PointToPoint_Goal__Sequence *
dobot_msgs__action__PointToPoint_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Goal__Sequence * array = (dobot_msgs__action__PointToPoint_Goal__Sequence *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__action__PointToPoint_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__action__PointToPoint_Goal__Sequence__destroy(dobot_msgs__action__PointToPoint_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__action__PointToPoint_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__action__PointToPoint_Goal__Sequence__are_equal(const dobot_msgs__action__PointToPoint_Goal__Sequence * lhs, const dobot_msgs__action__PointToPoint_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_Goal__Sequence__copy(
  const dobot_msgs__action__PointToPoint_Goal__Sequence * input,
  dobot_msgs__action__PointToPoint_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__action__PointToPoint_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__action__PointToPoint_Goal * data =
      (dobot_msgs__action__PointToPoint_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__action__PointToPoint_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__action__PointToPoint_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dobot_msgs__action__PointToPoint_Result__init(dobot_msgs__action__PointToPoint_Result * msg)
{
  if (!msg) {
    return false;
  }
  // achieved_pose
  return true;
}

void
dobot_msgs__action__PointToPoint_Result__fini(dobot_msgs__action__PointToPoint_Result * msg)
{
  if (!msg) {
    return;
  }
  // achieved_pose
}

bool
dobot_msgs__action__PointToPoint_Result__are_equal(const dobot_msgs__action__PointToPoint_Result * lhs, const dobot_msgs__action__PointToPoint_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // achieved_pose
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->achieved_pose[i] != rhs->achieved_pose[i]) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_Result__copy(
  const dobot_msgs__action__PointToPoint_Result * input,
  dobot_msgs__action__PointToPoint_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // achieved_pose
  for (size_t i = 0; i < 4; ++i) {
    output->achieved_pose[i] = input->achieved_pose[i];
  }
  return true;
}

dobot_msgs__action__PointToPoint_Result *
dobot_msgs__action__PointToPoint_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Result * msg = (dobot_msgs__action__PointToPoint_Result *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__action__PointToPoint_Result));
  bool success = dobot_msgs__action__PointToPoint_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__action__PointToPoint_Result__destroy(dobot_msgs__action__PointToPoint_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__action__PointToPoint_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__action__PointToPoint_Result__Sequence__init(dobot_msgs__action__PointToPoint_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Result * data = NULL;

  if (size) {
    data = (dobot_msgs__action__PointToPoint_Result *)allocator.zero_allocate(size, sizeof(dobot_msgs__action__PointToPoint_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__action__PointToPoint_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__action__PointToPoint_Result__fini(&data[i - 1]);
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
dobot_msgs__action__PointToPoint_Result__Sequence__fini(dobot_msgs__action__PointToPoint_Result__Sequence * array)
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
      dobot_msgs__action__PointToPoint_Result__fini(&array->data[i]);
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

dobot_msgs__action__PointToPoint_Result__Sequence *
dobot_msgs__action__PointToPoint_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Result__Sequence * array = (dobot_msgs__action__PointToPoint_Result__Sequence *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__action__PointToPoint_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__action__PointToPoint_Result__Sequence__destroy(dobot_msgs__action__PointToPoint_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__action__PointToPoint_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__action__PointToPoint_Result__Sequence__are_equal(const dobot_msgs__action__PointToPoint_Result__Sequence * lhs, const dobot_msgs__action__PointToPoint_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_Result__Sequence__copy(
  const dobot_msgs__action__PointToPoint_Result__Sequence * input,
  dobot_msgs__action__PointToPoint_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__action__PointToPoint_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__action__PointToPoint_Result * data =
      (dobot_msgs__action__PointToPoint_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__action__PointToPoint_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__action__PointToPoint_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dobot_msgs__action__PointToPoint_Feedback__init(dobot_msgs__action__PointToPoint_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_pose
  return true;
}

void
dobot_msgs__action__PointToPoint_Feedback__fini(dobot_msgs__action__PointToPoint_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_pose
}

bool
dobot_msgs__action__PointToPoint_Feedback__are_equal(const dobot_msgs__action__PointToPoint_Feedback * lhs, const dobot_msgs__action__PointToPoint_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_pose
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->current_pose[i] != rhs->current_pose[i]) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_Feedback__copy(
  const dobot_msgs__action__PointToPoint_Feedback * input,
  dobot_msgs__action__PointToPoint_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_pose
  for (size_t i = 0; i < 4; ++i) {
    output->current_pose[i] = input->current_pose[i];
  }
  return true;
}

dobot_msgs__action__PointToPoint_Feedback *
dobot_msgs__action__PointToPoint_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Feedback * msg = (dobot_msgs__action__PointToPoint_Feedback *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__action__PointToPoint_Feedback));
  bool success = dobot_msgs__action__PointToPoint_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__action__PointToPoint_Feedback__destroy(dobot_msgs__action__PointToPoint_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__action__PointToPoint_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__action__PointToPoint_Feedback__Sequence__init(dobot_msgs__action__PointToPoint_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Feedback * data = NULL;

  if (size) {
    data = (dobot_msgs__action__PointToPoint_Feedback *)allocator.zero_allocate(size, sizeof(dobot_msgs__action__PointToPoint_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__action__PointToPoint_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__action__PointToPoint_Feedback__fini(&data[i - 1]);
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
dobot_msgs__action__PointToPoint_Feedback__Sequence__fini(dobot_msgs__action__PointToPoint_Feedback__Sequence * array)
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
      dobot_msgs__action__PointToPoint_Feedback__fini(&array->data[i]);
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

dobot_msgs__action__PointToPoint_Feedback__Sequence *
dobot_msgs__action__PointToPoint_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_Feedback__Sequence * array = (dobot_msgs__action__PointToPoint_Feedback__Sequence *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__action__PointToPoint_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__action__PointToPoint_Feedback__Sequence__destroy(dobot_msgs__action__PointToPoint_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__action__PointToPoint_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__action__PointToPoint_Feedback__Sequence__are_equal(const dobot_msgs__action__PointToPoint_Feedback__Sequence * lhs, const dobot_msgs__action__PointToPoint_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_Feedback__Sequence__copy(
  const dobot_msgs__action__PointToPoint_Feedback__Sequence * input,
  dobot_msgs__action__PointToPoint_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__action__PointToPoint_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__action__PointToPoint_Feedback * data =
      (dobot_msgs__action__PointToPoint_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__action__PointToPoint_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__action__PointToPoint_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "dobot_msgs/action/detail/point_to_point__functions.h"

bool
dobot_msgs__action__PointToPoint_SendGoal_Request__init(dobot_msgs__action__PointToPoint_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dobot_msgs__action__PointToPoint_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!dobot_msgs__action__PointToPoint_Goal__init(&msg->goal)) {
    dobot_msgs__action__PointToPoint_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs__action__PointToPoint_SendGoal_Request__fini(dobot_msgs__action__PointToPoint_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  dobot_msgs__action__PointToPoint_Goal__fini(&msg->goal);
}

bool
dobot_msgs__action__PointToPoint_SendGoal_Request__are_equal(const dobot_msgs__action__PointToPoint_SendGoal_Request * lhs, const dobot_msgs__action__PointToPoint_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!dobot_msgs__action__PointToPoint_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_SendGoal_Request__copy(
  const dobot_msgs__action__PointToPoint_SendGoal_Request * input,
  dobot_msgs__action__PointToPoint_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!dobot_msgs__action__PointToPoint_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

dobot_msgs__action__PointToPoint_SendGoal_Request *
dobot_msgs__action__PointToPoint_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_SendGoal_Request * msg = (dobot_msgs__action__PointToPoint_SendGoal_Request *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__action__PointToPoint_SendGoal_Request));
  bool success = dobot_msgs__action__PointToPoint_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__action__PointToPoint_SendGoal_Request__destroy(dobot_msgs__action__PointToPoint_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__action__PointToPoint_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence__init(dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_SendGoal_Request * data = NULL;

  if (size) {
    data = (dobot_msgs__action__PointToPoint_SendGoal_Request *)allocator.zero_allocate(size, sizeof(dobot_msgs__action__PointToPoint_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__action__PointToPoint_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__action__PointToPoint_SendGoal_Request__fini(&data[i - 1]);
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
dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence__fini(dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence * array)
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
      dobot_msgs__action__PointToPoint_SendGoal_Request__fini(&array->data[i]);
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

dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence *
dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence * array = (dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence__destroy(dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence__are_equal(const dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence * lhs, const dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence__copy(
  const dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence * input,
  dobot_msgs__action__PointToPoint_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__action__PointToPoint_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__action__PointToPoint_SendGoal_Request * data =
      (dobot_msgs__action__PointToPoint_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__action__PointToPoint_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__action__PointToPoint_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
dobot_msgs__action__PointToPoint_SendGoal_Response__init(dobot_msgs__action__PointToPoint_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    dobot_msgs__action__PointToPoint_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs__action__PointToPoint_SendGoal_Response__fini(dobot_msgs__action__PointToPoint_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
dobot_msgs__action__PointToPoint_SendGoal_Response__are_equal(const dobot_msgs__action__PointToPoint_SendGoal_Response * lhs, const dobot_msgs__action__PointToPoint_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_SendGoal_Response__copy(
  const dobot_msgs__action__PointToPoint_SendGoal_Response * input,
  dobot_msgs__action__PointToPoint_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

dobot_msgs__action__PointToPoint_SendGoal_Response *
dobot_msgs__action__PointToPoint_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_SendGoal_Response * msg = (dobot_msgs__action__PointToPoint_SendGoal_Response *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__action__PointToPoint_SendGoal_Response));
  bool success = dobot_msgs__action__PointToPoint_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__action__PointToPoint_SendGoal_Response__destroy(dobot_msgs__action__PointToPoint_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__action__PointToPoint_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence__init(dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_SendGoal_Response * data = NULL;

  if (size) {
    data = (dobot_msgs__action__PointToPoint_SendGoal_Response *)allocator.zero_allocate(size, sizeof(dobot_msgs__action__PointToPoint_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__action__PointToPoint_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__action__PointToPoint_SendGoal_Response__fini(&data[i - 1]);
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
dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence__fini(dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence * array)
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
      dobot_msgs__action__PointToPoint_SendGoal_Response__fini(&array->data[i]);
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

dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence *
dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence * array = (dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence__destroy(dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence__are_equal(const dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence * lhs, const dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence__copy(
  const dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence * input,
  dobot_msgs__action__PointToPoint_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__action__PointToPoint_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__action__PointToPoint_SendGoal_Response * data =
      (dobot_msgs__action__PointToPoint_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__action__PointToPoint_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__action__PointToPoint_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
dobot_msgs__action__PointToPoint_GetResult_Request__init(dobot_msgs__action__PointToPoint_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dobot_msgs__action__PointToPoint_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs__action__PointToPoint_GetResult_Request__fini(dobot_msgs__action__PointToPoint_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
dobot_msgs__action__PointToPoint_GetResult_Request__are_equal(const dobot_msgs__action__PointToPoint_GetResult_Request * lhs, const dobot_msgs__action__PointToPoint_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_GetResult_Request__copy(
  const dobot_msgs__action__PointToPoint_GetResult_Request * input,
  dobot_msgs__action__PointToPoint_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

dobot_msgs__action__PointToPoint_GetResult_Request *
dobot_msgs__action__PointToPoint_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_GetResult_Request * msg = (dobot_msgs__action__PointToPoint_GetResult_Request *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__action__PointToPoint_GetResult_Request));
  bool success = dobot_msgs__action__PointToPoint_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__action__PointToPoint_GetResult_Request__destroy(dobot_msgs__action__PointToPoint_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__action__PointToPoint_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__action__PointToPoint_GetResult_Request__Sequence__init(dobot_msgs__action__PointToPoint_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_GetResult_Request * data = NULL;

  if (size) {
    data = (dobot_msgs__action__PointToPoint_GetResult_Request *)allocator.zero_allocate(size, sizeof(dobot_msgs__action__PointToPoint_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__action__PointToPoint_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__action__PointToPoint_GetResult_Request__fini(&data[i - 1]);
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
dobot_msgs__action__PointToPoint_GetResult_Request__Sequence__fini(dobot_msgs__action__PointToPoint_GetResult_Request__Sequence * array)
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
      dobot_msgs__action__PointToPoint_GetResult_Request__fini(&array->data[i]);
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

dobot_msgs__action__PointToPoint_GetResult_Request__Sequence *
dobot_msgs__action__PointToPoint_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_GetResult_Request__Sequence * array = (dobot_msgs__action__PointToPoint_GetResult_Request__Sequence *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__action__PointToPoint_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__action__PointToPoint_GetResult_Request__Sequence__destroy(dobot_msgs__action__PointToPoint_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__action__PointToPoint_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__action__PointToPoint_GetResult_Request__Sequence__are_equal(const dobot_msgs__action__PointToPoint_GetResult_Request__Sequence * lhs, const dobot_msgs__action__PointToPoint_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_GetResult_Request__Sequence__copy(
  const dobot_msgs__action__PointToPoint_GetResult_Request__Sequence * input,
  dobot_msgs__action__PointToPoint_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__action__PointToPoint_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__action__PointToPoint_GetResult_Request * data =
      (dobot_msgs__action__PointToPoint_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__action__PointToPoint_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__action__PointToPoint_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "dobot_msgs/action/detail/point_to_point__functions.h"

bool
dobot_msgs__action__PointToPoint_GetResult_Response__init(dobot_msgs__action__PointToPoint_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!dobot_msgs__action__PointToPoint_Result__init(&msg->result)) {
    dobot_msgs__action__PointToPoint_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs__action__PointToPoint_GetResult_Response__fini(dobot_msgs__action__PointToPoint_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  dobot_msgs__action__PointToPoint_Result__fini(&msg->result);
}

bool
dobot_msgs__action__PointToPoint_GetResult_Response__are_equal(const dobot_msgs__action__PointToPoint_GetResult_Response * lhs, const dobot_msgs__action__PointToPoint_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!dobot_msgs__action__PointToPoint_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_GetResult_Response__copy(
  const dobot_msgs__action__PointToPoint_GetResult_Response * input,
  dobot_msgs__action__PointToPoint_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!dobot_msgs__action__PointToPoint_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

dobot_msgs__action__PointToPoint_GetResult_Response *
dobot_msgs__action__PointToPoint_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_GetResult_Response * msg = (dobot_msgs__action__PointToPoint_GetResult_Response *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__action__PointToPoint_GetResult_Response));
  bool success = dobot_msgs__action__PointToPoint_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__action__PointToPoint_GetResult_Response__destroy(dobot_msgs__action__PointToPoint_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__action__PointToPoint_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__action__PointToPoint_GetResult_Response__Sequence__init(dobot_msgs__action__PointToPoint_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_GetResult_Response * data = NULL;

  if (size) {
    data = (dobot_msgs__action__PointToPoint_GetResult_Response *)allocator.zero_allocate(size, sizeof(dobot_msgs__action__PointToPoint_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__action__PointToPoint_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__action__PointToPoint_GetResult_Response__fini(&data[i - 1]);
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
dobot_msgs__action__PointToPoint_GetResult_Response__Sequence__fini(dobot_msgs__action__PointToPoint_GetResult_Response__Sequence * array)
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
      dobot_msgs__action__PointToPoint_GetResult_Response__fini(&array->data[i]);
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

dobot_msgs__action__PointToPoint_GetResult_Response__Sequence *
dobot_msgs__action__PointToPoint_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_GetResult_Response__Sequence * array = (dobot_msgs__action__PointToPoint_GetResult_Response__Sequence *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__action__PointToPoint_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__action__PointToPoint_GetResult_Response__Sequence__destroy(dobot_msgs__action__PointToPoint_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__action__PointToPoint_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__action__PointToPoint_GetResult_Response__Sequence__are_equal(const dobot_msgs__action__PointToPoint_GetResult_Response__Sequence * lhs, const dobot_msgs__action__PointToPoint_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_GetResult_Response__Sequence__copy(
  const dobot_msgs__action__PointToPoint_GetResult_Response__Sequence * input,
  dobot_msgs__action__PointToPoint_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__action__PointToPoint_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__action__PointToPoint_GetResult_Response * data =
      (dobot_msgs__action__PointToPoint_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__action__PointToPoint_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__action__PointToPoint_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "dobot_msgs/action/detail/point_to_point__functions.h"

bool
dobot_msgs__action__PointToPoint_FeedbackMessage__init(dobot_msgs__action__PointToPoint_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dobot_msgs__action__PointToPoint_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!dobot_msgs__action__PointToPoint_Feedback__init(&msg->feedback)) {
    dobot_msgs__action__PointToPoint_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs__action__PointToPoint_FeedbackMessage__fini(dobot_msgs__action__PointToPoint_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  dobot_msgs__action__PointToPoint_Feedback__fini(&msg->feedback);
}

bool
dobot_msgs__action__PointToPoint_FeedbackMessage__are_equal(const dobot_msgs__action__PointToPoint_FeedbackMessage * lhs, const dobot_msgs__action__PointToPoint_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!dobot_msgs__action__PointToPoint_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_FeedbackMessage__copy(
  const dobot_msgs__action__PointToPoint_FeedbackMessage * input,
  dobot_msgs__action__PointToPoint_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!dobot_msgs__action__PointToPoint_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

dobot_msgs__action__PointToPoint_FeedbackMessage *
dobot_msgs__action__PointToPoint_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_FeedbackMessage * msg = (dobot_msgs__action__PointToPoint_FeedbackMessage *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs__action__PointToPoint_FeedbackMessage));
  bool success = dobot_msgs__action__PointToPoint_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs__action__PointToPoint_FeedbackMessage__destroy(dobot_msgs__action__PointToPoint_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs__action__PointToPoint_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence__init(dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_FeedbackMessage * data = NULL;

  if (size) {
    data = (dobot_msgs__action__PointToPoint_FeedbackMessage *)allocator.zero_allocate(size, sizeof(dobot_msgs__action__PointToPoint_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs__action__PointToPoint_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs__action__PointToPoint_FeedbackMessage__fini(&data[i - 1]);
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
dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence__fini(dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence * array)
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
      dobot_msgs__action__PointToPoint_FeedbackMessage__fini(&array->data[i]);
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

dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence *
dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence * array = (dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence *)allocator.allocate(sizeof(dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence__destroy(dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence__are_equal(const dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence * lhs, const dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence__copy(
  const dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence * input,
  dobot_msgs__action__PointToPoint_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs__action__PointToPoint_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs__action__PointToPoint_FeedbackMessage * data =
      (dobot_msgs__action__PointToPoint_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs__action__PointToPoint_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs__action__PointToPoint_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs__action__PointToPoint_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
