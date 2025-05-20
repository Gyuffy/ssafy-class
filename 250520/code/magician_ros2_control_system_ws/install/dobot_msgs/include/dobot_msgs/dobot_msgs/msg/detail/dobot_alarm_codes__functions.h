// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dobot_msgs:msg/DobotAlarmCodes.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__FUNCTIONS_H_
#define DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dobot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dobot_msgs/msg/detail/dobot_alarm_codes__struct.h"

/// Initialize msg/DobotAlarmCodes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_msgs__msg__DobotAlarmCodes
 * )) before or use
 * dobot_msgs__msg__DobotAlarmCodes__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__DobotAlarmCodes__init(dobot_msgs__msg__DobotAlarmCodes * msg);

/// Finalize msg/DobotAlarmCodes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__msg__DobotAlarmCodes__fini(dobot_msgs__msg__DobotAlarmCodes * msg);

/// Create msg/DobotAlarmCodes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_msgs__msg__DobotAlarmCodes__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
dobot_msgs__msg__DobotAlarmCodes *
dobot_msgs__msg__DobotAlarmCodes__create();

/// Destroy msg/DobotAlarmCodes message.
/**
 * It calls
 * dobot_msgs__msg__DobotAlarmCodes__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__msg__DobotAlarmCodes__destroy(dobot_msgs__msg__DobotAlarmCodes * msg);

/// Check for msg/DobotAlarmCodes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__DobotAlarmCodes__are_equal(const dobot_msgs__msg__DobotAlarmCodes * lhs, const dobot_msgs__msg__DobotAlarmCodes * rhs);

/// Copy a msg/DobotAlarmCodes message.
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
dobot_msgs__msg__DobotAlarmCodes__copy(
  const dobot_msgs__msg__DobotAlarmCodes * input,
  dobot_msgs__msg__DobotAlarmCodes * output);

/// Initialize array of msg/DobotAlarmCodes messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_msgs__msg__DobotAlarmCodes__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__DobotAlarmCodes__Sequence__init(dobot_msgs__msg__DobotAlarmCodes__Sequence * array, size_t size);

/// Finalize array of msg/DobotAlarmCodes messages.
/**
 * It calls
 * dobot_msgs__msg__DobotAlarmCodes__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__msg__DobotAlarmCodes__Sequence__fini(dobot_msgs__msg__DobotAlarmCodes__Sequence * array);

/// Create array of msg/DobotAlarmCodes messages.
/**
 * It allocates the memory for the array and calls
 * dobot_msgs__msg__DobotAlarmCodes__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
dobot_msgs__msg__DobotAlarmCodes__Sequence *
dobot_msgs__msg__DobotAlarmCodes__Sequence__create(size_t size);

/// Destroy array of msg/DobotAlarmCodes messages.
/**
 * It calls
 * dobot_msgs__msg__DobotAlarmCodes__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__msg__DobotAlarmCodes__Sequence__destroy(dobot_msgs__msg__DobotAlarmCodes__Sequence * array);

/// Check for msg/DobotAlarmCodes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__msg__DobotAlarmCodes__Sequence__are_equal(const dobot_msgs__msg__DobotAlarmCodes__Sequence * lhs, const dobot_msgs__msg__DobotAlarmCodes__Sequence * rhs);

/// Copy an array of msg/DobotAlarmCodes messages.
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
dobot_msgs__msg__DobotAlarmCodes__Sequence__copy(
  const dobot_msgs__msg__DobotAlarmCodes__Sequence * input,
  dobot_msgs__msg__DobotAlarmCodes__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__FUNCTIONS_H_
