// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_msgs:action/SlidingRail.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__ACTION__DETAIL__SLIDING_RAIL__STRUCT_H_
#define DOBOT_MSGS__ACTION__DETAIL__SLIDING_RAIL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SlidingRail in the package dobot_msgs.
typedef struct dobot_msgs__action__SlidingRail_Goal
{
  double target_pose;
} dobot_msgs__action__SlidingRail_Goal;

// Struct for a sequence of dobot_msgs__action__SlidingRail_Goal.
typedef struct dobot_msgs__action__SlidingRail_Goal__Sequence
{
  dobot_msgs__action__SlidingRail_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__action__SlidingRail_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SlidingRail in the package dobot_msgs.
typedef struct dobot_msgs__action__SlidingRail_Result
{
  double achieved_pose;
} dobot_msgs__action__SlidingRail_Result;

// Struct for a sequence of dobot_msgs__action__SlidingRail_Result.
typedef struct dobot_msgs__action__SlidingRail_Result__Sequence
{
  dobot_msgs__action__SlidingRail_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__action__SlidingRail_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SlidingRail in the package dobot_msgs.
typedef struct dobot_msgs__action__SlidingRail_Feedback
{
  double current_pose;
} dobot_msgs__action__SlidingRail_Feedback;

// Struct for a sequence of dobot_msgs__action__SlidingRail_Feedback.
typedef struct dobot_msgs__action__SlidingRail_Feedback__Sequence
{
  dobot_msgs__action__SlidingRail_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__action__SlidingRail_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "dobot_msgs/action/detail/sliding_rail__struct.h"

/// Struct defined in action/SlidingRail in the package dobot_msgs.
typedef struct dobot_msgs__action__SlidingRail_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  dobot_msgs__action__SlidingRail_Goal goal;
} dobot_msgs__action__SlidingRail_SendGoal_Request;

// Struct for a sequence of dobot_msgs__action__SlidingRail_SendGoal_Request.
typedef struct dobot_msgs__action__SlidingRail_SendGoal_Request__Sequence
{
  dobot_msgs__action__SlidingRail_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__action__SlidingRail_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SlidingRail in the package dobot_msgs.
typedef struct dobot_msgs__action__SlidingRail_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} dobot_msgs__action__SlidingRail_SendGoal_Response;

// Struct for a sequence of dobot_msgs__action__SlidingRail_SendGoal_Response.
typedef struct dobot_msgs__action__SlidingRail_SendGoal_Response__Sequence
{
  dobot_msgs__action__SlidingRail_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__action__SlidingRail_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SlidingRail in the package dobot_msgs.
typedef struct dobot_msgs__action__SlidingRail_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} dobot_msgs__action__SlidingRail_GetResult_Request;

// Struct for a sequence of dobot_msgs__action__SlidingRail_GetResult_Request.
typedef struct dobot_msgs__action__SlidingRail_GetResult_Request__Sequence
{
  dobot_msgs__action__SlidingRail_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__action__SlidingRail_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "dobot_msgs/action/detail/sliding_rail__struct.h"

/// Struct defined in action/SlidingRail in the package dobot_msgs.
typedef struct dobot_msgs__action__SlidingRail_GetResult_Response
{
  int8_t status;
  dobot_msgs__action__SlidingRail_Result result;
} dobot_msgs__action__SlidingRail_GetResult_Response;

// Struct for a sequence of dobot_msgs__action__SlidingRail_GetResult_Response.
typedef struct dobot_msgs__action__SlidingRail_GetResult_Response__Sequence
{
  dobot_msgs__action__SlidingRail_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__action__SlidingRail_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "dobot_msgs/action/detail/sliding_rail__struct.h"

/// Struct defined in action/SlidingRail in the package dobot_msgs.
typedef struct dobot_msgs__action__SlidingRail_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  dobot_msgs__action__SlidingRail_Feedback feedback;
} dobot_msgs__action__SlidingRail_FeedbackMessage;

// Struct for a sequence of dobot_msgs__action__SlidingRail_FeedbackMessage.
typedef struct dobot_msgs__action__SlidingRail_FeedbackMessage__Sequence
{
  dobot_msgs__action__SlidingRail_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs__action__SlidingRail_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS__ACTION__DETAIL__SLIDING_RAIL__STRUCT_H_
