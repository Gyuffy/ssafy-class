// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__STRUCT_H_
#define DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EvaluatePTPTrajectory in the package dobot_msgs.
typedef struct dobot_msgs__srv__EvaluatePTPTrajectory_Request
{
  double target[4];
  uint8_t motion_type;
} dobot_msgs__srv__EvaluatePTPTrajectory_Request;

// Struct for a sequence of dobot_msgs__srv__EvaluatePTPTrajectory_Request.
typedef struct dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence
{
  dobot_msgs__srv__EvaluatePTPTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EvaluatePTPTrajectory in the package dobot_msgs.
typedef struct dobot_msgs__srv__EvaluatePTPTrajectory_Response
{
  bool is_valid;
  /// if it is not feasible then why
  rosidl_runtime_c__String message;
} dobot_msgs__srv__EvaluatePTPTrajectory_Response;

// Struct for a sequence of dobot_msgs__srv__EvaluatePTPTrajectory_Response.
typedef struct dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence
{
  dobot_msgs__srv__EvaluatePTPTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__STRUCT_H_
