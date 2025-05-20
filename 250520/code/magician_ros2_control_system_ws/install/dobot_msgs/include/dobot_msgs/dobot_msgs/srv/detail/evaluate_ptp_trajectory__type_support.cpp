// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void EvaluatePTPTrajectory_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot_msgs::srv::EvaluatePTPTrajectory_Request(_init);
}

void EvaluatePTPTrajectory_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot_msgs::srv::EvaluatePTPTrajectory_Request *>(message_memory);
  typed_message->~EvaluatePTPTrajectory_Request();
}

size_t size_function__EvaluatePTPTrajectory_Request__target(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__EvaluatePTPTrajectory_Request__target(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__EvaluatePTPTrajectory_Request__target(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__EvaluatePTPTrajectory_Request__target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__EvaluatePTPTrajectory_Request__target(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__EvaluatePTPTrajectory_Request__target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__EvaluatePTPTrajectory_Request__target(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EvaluatePTPTrajectory_Request_message_member_array[2] = {
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs::srv::EvaluatePTPTrajectory_Request, target),  // bytes offset in struct
    nullptr,  // default value
    size_function__EvaluatePTPTrajectory_Request__target,  // size() function pointer
    get_const_function__EvaluatePTPTrajectory_Request__target,  // get_const(index) function pointer
    get_function__EvaluatePTPTrajectory_Request__target,  // get(index) function pointer
    fetch_function__EvaluatePTPTrajectory_Request__target,  // fetch(index, &value) function pointer
    assign_function__EvaluatePTPTrajectory_Request__target,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motion_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs::srv::EvaluatePTPTrajectory_Request, motion_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EvaluatePTPTrajectory_Request_message_members = {
  "dobot_msgs::srv",  // message namespace
  "EvaluatePTPTrajectory_Request",  // message name
  2,  // number of fields
  sizeof(dobot_msgs::srv::EvaluatePTPTrajectory_Request),
  EvaluatePTPTrajectory_Request_message_member_array,  // message members
  EvaluatePTPTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  EvaluatePTPTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EvaluatePTPTrajectory_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EvaluatePTPTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::srv::EvaluatePTPTrajectory_Request>()
{
  return &::dobot_msgs::srv::rosidl_typesupport_introspection_cpp::EvaluatePTPTrajectory_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, srv, EvaluatePTPTrajectory_Request)() {
  return &::dobot_msgs::srv::rosidl_typesupport_introspection_cpp::EvaluatePTPTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void EvaluatePTPTrajectory_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot_msgs::srv::EvaluatePTPTrajectory_Response(_init);
}

void EvaluatePTPTrajectory_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot_msgs::srv::EvaluatePTPTrajectory_Response *>(message_memory);
  typed_message->~EvaluatePTPTrajectory_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EvaluatePTPTrajectory_Response_message_member_array[2] = {
  {
    "is_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs::srv::EvaluatePTPTrajectory_Response, is_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs::srv::EvaluatePTPTrajectory_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EvaluatePTPTrajectory_Response_message_members = {
  "dobot_msgs::srv",  // message namespace
  "EvaluatePTPTrajectory_Response",  // message name
  2,  // number of fields
  sizeof(dobot_msgs::srv::EvaluatePTPTrajectory_Response),
  EvaluatePTPTrajectory_Response_message_member_array,  // message members
  EvaluatePTPTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  EvaluatePTPTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EvaluatePTPTrajectory_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EvaluatePTPTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::srv::EvaluatePTPTrajectory_Response>()
{
  return &::dobot_msgs::srv::rosidl_typesupport_introspection_cpp::EvaluatePTPTrajectory_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, srv, EvaluatePTPTrajectory_Response)() {
  return &::dobot_msgs::srv::rosidl_typesupport_introspection_cpp::EvaluatePTPTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace dobot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers EvaluatePTPTrajectory_service_members = {
  "dobot_msgs::srv",  // service namespace
  "EvaluatePTPTrajectory",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<dobot_msgs::srv::EvaluatePTPTrajectory>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t EvaluatePTPTrajectory_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EvaluatePTPTrajectory_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_msgs::srv::EvaluatePTPTrajectory>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::dobot_msgs::srv::rosidl_typesupport_introspection_cpp::EvaluatePTPTrajectory_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dobot_msgs::srv::EvaluatePTPTrajectory_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dobot_msgs::srv::EvaluatePTPTrajectory_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, srv, EvaluatePTPTrajectory)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<dobot_msgs::srv::EvaluatePTPTrajectory>();
}

#ifdef __cplusplus
}
#endif
