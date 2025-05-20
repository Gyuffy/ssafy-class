// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot_msgs:msg/DobotAlarmCodes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot_msgs/msg/detail/dobot_alarm_codes__rosidl_typesupport_introspection_c.h"
#include "dobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot_msgs/msg/detail/dobot_alarm_codes__functions.h"
#include "dobot_msgs/msg/detail/dobot_alarm_codes__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `alarms_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_msgs__msg__DobotAlarmCodes__init(message_memory);
}

void dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_fini_function(void * message_memory)
{
  dobot_msgs__msg__DobotAlarmCodes__fini(message_memory);
}

size_t dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__size_function__DobotAlarmCodes__alarms_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__get_const_function__DobotAlarmCodes__alarms_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__get_function__DobotAlarmCodes__alarms_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__fetch_function__DobotAlarmCodes__alarms_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__get_const_function__DobotAlarmCodes__alarms_list(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__assign_function__DobotAlarmCodes__alarms_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__get_function__DobotAlarmCodes__alarms_list(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__resize_function__DobotAlarmCodes__alarms_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs__msg__DobotAlarmCodes, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alarms_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs__msg__DobotAlarmCodes, alarms_list),  // bytes offset in struct
    NULL,  // default value
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__size_function__DobotAlarmCodes__alarms_list,  // size() function pointer
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__get_const_function__DobotAlarmCodes__alarms_list,  // get_const(index) function pointer
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__get_function__DobotAlarmCodes__alarms_list,  // get(index) function pointer
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__fetch_function__DobotAlarmCodes__alarms_list,  // fetch(index, &value) function pointer
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__assign_function__DobotAlarmCodes__alarms_list,  // assign(index, value) function pointer
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__resize_function__DobotAlarmCodes__alarms_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_members = {
  "dobot_msgs__msg",  // message namespace
  "DobotAlarmCodes",  // message name
  2,  // number of fields
  sizeof(dobot_msgs__msg__DobotAlarmCodes),
  dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_member_array,  // message members
  dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_type_support_handle = {
  0,
  &dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_msgs, msg, DobotAlarmCodes)() {
  dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_type_support_handle.typesupport_identifier) {
    dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_msgs__msg__DobotAlarmCodes__rosidl_typesupport_introspection_c__DobotAlarmCodes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
