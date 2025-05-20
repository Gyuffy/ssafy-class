// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dobot_msgs:msg/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__FUNCTIONS_H_
#define DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dobot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dobot_msgs/msg/detail/gripper_status__struct.h"

/// Initialize msg/GripperStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_msgs__msg__GripperStatus
 * )) before or use
 * dobot_msgs__msg__GripperStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__GripperStatus__init(dobot_msgs__msg__GripperStatus * msg);

/// Finalize msg/GripperStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__msg__GripperStatus__fini(dobot_msgs__msg__GripperStatus * msg);

/// Create msg/GripperStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_msgs__msg__GripperStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
dobot_msgs__msg__GripperStatus *
dobot_msgs__msg__GripperStatus__create();

/// Destroy msg/GripperStatus message.
/**
 * It calls
 * dobot_msgs__msg__GripperStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__msg__GripperStatus__destroy(dobot_msgs__msg__GripperStatus * msg);

/// Check for msg/GripperStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__GripperStatus__are_equal(const dobot_msgs__msg__GripperStatus * lhs, const dobot_msgs__msg__GripperStatus * rhs);

/// Copy a msg/GripperStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__GripperStatus__copy(
  const dobot_msgs__msg__GripperStatus * input,
  dobot_msgs__msg__GripperStatus * output);

/// Initialize array of msg/GripperStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_msgs__msg__GripperStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__GripperStatus__Sequence__init(dobot_msgs__msg__GripperStatus__Sequence * array, size_t size);

/// Finalize array of msg/GripperStatus messages.
/**
 * It calls
 * dobot_msgs__msg__GripperStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__msg__GripperStatus__Sequence__fini(dobot_msgs__msg__GripperStatus__Sequence * array);

/// Create array of msg/GripperStatus messages.
/**
 * It allocates the memory for the array and calls
 * dobot_msgs__msg__GripperStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
dobot_msgs__msg__GripperStatus__Sequence *
dobot_msgs__msg__GripperStatus__Sequence__create(size_t size);

/// Destroy array of msg/GripperStatus messages.
/**
 * It calls
 * dobot_msgs__msg__GripperStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__msg__GripperStatus__Sequence__destroy(dobot_msgs__msg__GripperStatus__Sequence * array);

/// Check for msg/GripperStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__GripperStatus__Sequence__are_equal(const dobot_msgs__msg__GripperStatus__Sequence * lhs, const dobot_msgs__msg__GripperStatus__Sequence * rhs);

/// Copy an array of msg/GripperStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__GripperStatus__Sequence__copy(
  const dobot_msgs__msg__GripperStatus__Sequence * input,
  dobot_msgs__msg__GripperStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__FUNCTIONS_H_
