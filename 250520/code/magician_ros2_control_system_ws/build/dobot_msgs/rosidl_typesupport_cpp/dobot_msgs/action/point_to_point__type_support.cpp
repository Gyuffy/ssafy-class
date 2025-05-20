// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dobot_msgs:action/PointToPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dobot_msgs/action/detail/point_to_point__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_Goal_type_support_ids_t;

static const _PointToPoint_Goal_type_support_ids_t _PointToPoint_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_Goal_type_support_symbol_names_t _PointToPoint_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_Goal)),
  }
};

typedef struct _PointToPoint_Goal_type_support_data_t
{
  void * data[2];
} _PointToPoint_Goal_type_support_data_t;

static _PointToPoint_Goal_type_support_data_t _PointToPoint_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_Goal_message_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointToPoint_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::action::PointToPoint_Goal>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_Goal)() {
  return get_message_type_support_handle<dobot_msgs::action::PointToPoint_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_Result_type_support_ids_t;

static const _PointToPoint_Result_type_support_ids_t _PointToPoint_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_Result_type_support_symbol_names_t _PointToPoint_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_Result)),
  }
};

typedef struct _PointToPoint_Result_type_support_data_t
{
  void * data[2];
} _PointToPoint_Result_type_support_data_t;

static _PointToPoint_Result_type_support_data_t _PointToPoint_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_Result_message_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointToPoint_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::action::PointToPoint_Result>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_Result)() {
  return get_message_type_support_handle<dobot_msgs::action::PointToPoint_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_Feedback_type_support_ids_t;

static const _PointToPoint_Feedback_type_support_ids_t _PointToPoint_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_Feedback_type_support_symbol_names_t _PointToPoint_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_Feedback)),
  }
};

typedef struct _PointToPoint_Feedback_type_support_data_t
{
  void * data[2];
} _PointToPoint_Feedback_type_support_data_t;

static _PointToPoint_Feedback_type_support_data_t _PointToPoint_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_Feedback_message_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointToPoint_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::action::PointToPoint_Feedback>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_Feedback)() {
  return get_message_type_support_handle<dobot_msgs::action::PointToPoint_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_SendGoal_Request_type_support_ids_t;

static const _PointToPoint_SendGoal_Request_type_support_ids_t _PointToPoint_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_SendGoal_Request_type_support_symbol_names_t _PointToPoint_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_SendGoal_Request)),
  }
};

typedef struct _PointToPoint_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PointToPoint_SendGoal_Request_type_support_data_t;

static _PointToPoint_SendGoal_Request_type_support_data_t _PointToPoint_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_SendGoal_Request_message_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointToPoint_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::action::PointToPoint_SendGoal_Request>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_SendGoal_Request)() {
  return get_message_type_support_handle<dobot_msgs::action::PointToPoint_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_SendGoal_Response_type_support_ids_t;

static const _PointToPoint_SendGoal_Response_type_support_ids_t _PointToPoint_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_SendGoal_Response_type_support_symbol_names_t _PointToPoint_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_SendGoal_Response)),
  }
};

typedef struct _PointToPoint_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PointToPoint_SendGoal_Response_type_support_data_t;

static _PointToPoint_SendGoal_Response_type_support_data_t _PointToPoint_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_SendGoal_Response_message_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointToPoint_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::action::PointToPoint_SendGoal_Response>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_SendGoal_Response)() {
  return get_message_type_support_handle<dobot_msgs::action::PointToPoint_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_SendGoal_type_support_ids_t;

static const _PointToPoint_SendGoal_type_support_ids_t _PointToPoint_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_SendGoal_type_support_symbol_names_t _PointToPoint_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_SendGoal)),
  }
};

typedef struct _PointToPoint_SendGoal_type_support_data_t
{
  void * data[2];
} _PointToPoint_SendGoal_type_support_data_t;

static _PointToPoint_SendGoal_type_support_data_t _PointToPoint_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_SendGoal_service_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PointToPoint_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_msgs::action::PointToPoint_SendGoal>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dobot_msgs::action::PointToPoint_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_GetResult_Request_type_support_ids_t;

static const _PointToPoint_GetResult_Request_type_support_ids_t _PointToPoint_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_GetResult_Request_type_support_symbol_names_t _PointToPoint_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_GetResult_Request)),
  }
};

typedef struct _PointToPoint_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PointToPoint_GetResult_Request_type_support_data_t;

static _PointToPoint_GetResult_Request_type_support_data_t _PointToPoint_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_GetResult_Request_message_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointToPoint_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::action::PointToPoint_GetResult_Request>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_GetResult_Request)() {
  return get_message_type_support_handle<dobot_msgs::action::PointToPoint_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_GetResult_Response_type_support_ids_t;

static const _PointToPoint_GetResult_Response_type_support_ids_t _PointToPoint_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_GetResult_Response_type_support_symbol_names_t _PointToPoint_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_GetResult_Response)),
  }
};

typedef struct _PointToPoint_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PointToPoint_GetResult_Response_type_support_data_t;

static _PointToPoint_GetResult_Response_type_support_data_t _PointToPoint_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_GetResult_Response_message_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointToPoint_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::action::PointToPoint_GetResult_Response>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_GetResult_Response)() {
  return get_message_type_support_handle<dobot_msgs::action::PointToPoint_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_GetResult_type_support_ids_t;

static const _PointToPoint_GetResult_type_support_ids_t _PointToPoint_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_GetResult_type_support_symbol_names_t _PointToPoint_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_GetResult)),
  }
};

typedef struct _PointToPoint_GetResult_type_support_data_t
{
  void * data[2];
} _PointToPoint_GetResult_type_support_data_t;

static _PointToPoint_GetResult_type_support_data_t _PointToPoint_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_GetResult_service_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PointToPoint_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_msgs::action::PointToPoint_GetResult>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dobot_msgs::action::PointToPoint_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointToPoint_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointToPoint_FeedbackMessage_type_support_ids_t;

static const _PointToPoint_FeedbackMessage_type_support_ids_t _PointToPoint_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointToPoint_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointToPoint_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointToPoint_FeedbackMessage_type_support_symbol_names_t _PointToPoint_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs, action, PointToPoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs, action, PointToPoint_FeedbackMessage)),
  }
};

typedef struct _PointToPoint_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PointToPoint_FeedbackMessage_type_support_data_t;

static _PointToPoint_FeedbackMessage_type_support_data_t _PointToPoint_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointToPoint_FeedbackMessage_message_typesupport_map = {
  2,
  "dobot_msgs",
  &_PointToPoint_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PointToPoint_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PointToPoint_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointToPoint_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointToPoint_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs::action::PointToPoint_FeedbackMessage>()
{
  return &::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint_FeedbackMessage)() {
  return get_message_type_support_handle<dobot_msgs::action::PointToPoint_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace dobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PointToPoint_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<dobot_msgs::action::PointToPoint>()
{
  using ::dobot_msgs::action::rosidl_typesupport_cpp::PointToPoint_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PointToPoint_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::dobot_msgs::action::PointToPoint::Impl::SendGoalService>();
  PointToPoint_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::dobot_msgs::action::PointToPoint::Impl::GetResultService>();
  PointToPoint_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::dobot_msgs::action::PointToPoint::Impl::CancelGoalService>();
  PointToPoint_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::dobot_msgs::action::PointToPoint::Impl::FeedbackMessage>();
  PointToPoint_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::dobot_msgs::action::PointToPoint::Impl::GoalStatusMessage>();
  return &PointToPoint_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs, action, PointToPoint)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<dobot_msgs::action::PointToPoint>();
}

#ifdef __cplusplus
}
#endif
