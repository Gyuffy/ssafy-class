// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_msgs:msg/DobotAlarmCodes.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__STRUCT_H_
#define DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__STRUCT_H_

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
// Member 'alarms_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DobotAlarmCodes in the package dobot_msgs.
typedef struct dobot_msgs__msg__DobotAlarmCodes
{
  /// for timestamp
  std_msgs__msg__Header header;
  /// list of alarm codes as hex values
  rosidl_runtime_c__int32__Sequence alarms_list;
} dobot_msgs__msg__DobotAlarmCodes;

// Struct for a sequence of dobot_msgs__msg__DobotAlarmCodes.
typedef struct dobot_msgs__msg__DobotAlarmCodes__Sequence
{
  dobot_msgs__msg__DobotAlarmCodes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__msg__DobotAlarmCodes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__STRUCT_H_
