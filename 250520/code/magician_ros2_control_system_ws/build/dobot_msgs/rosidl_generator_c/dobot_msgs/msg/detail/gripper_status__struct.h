// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_msgs:msg/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__STRUCT_H_
#define DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GripperStatus in the package dobot_msgs.
typedef struct dobot_msgs__msg__GripperStatus
{
  std_msgs__msg__Header header;
  /// either opened or closed
  rosidl_runtime_c__String status;
} dobot_msgs__msg__GripperStatus;

// Struct for a sequence of dobot_msgs__msg__GripperStatus.
typedef struct dobot_msgs__msg__GripperStatus__Sequence
{
  dobot_msgs__msg__GripperStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__msg__GripperStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__STRUCT_H_
