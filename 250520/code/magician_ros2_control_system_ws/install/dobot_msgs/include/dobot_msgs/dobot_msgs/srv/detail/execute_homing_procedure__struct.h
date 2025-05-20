// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_msgs:srv/ExecuteHomingProcedure.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__STRUCT_H_
#define DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ExecuteHomingProcedure in the package dobot_msgs.
typedef struct dobot_msgs__srv__ExecuteHomingProcedure_Request
{
  uint8_t structure_needs_at_least_one_member;
} dobot_msgs__srv__ExecuteHomingProcedure_Request;

// Struct for a sequence of dobot_msgs__srv__ExecuteHomingProcedure_Request.
typedef struct dobot_msgs__srv__ExecuteHomingProcedure_Request__Sequence
{
  dobot_msgs__srv__ExecuteHomingProcedure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__srv__ExecuteHomingProcedure_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'instruction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecuteHomingProcedure in the package dobot_msgs.
typedef struct dobot_msgs__srv__ExecuteHomingProcedure_Response
{
  bool success;
  /// description of homing procedure
  rosidl_runtime_c__String instruction;
} dobot_msgs__srv__ExecuteHomingProcedure_Response;

// Struct for a sequence of dobot_msgs__srv__ExecuteHomingProcedure_Response.
typedef struct dobot_msgs__srv__ExecuteHomingProcedure_Response__Sequence
{
  dobot_msgs__srv__ExecuteHomingProcedure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__srv__ExecuteHomingProcedure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__STRUCT_H_
