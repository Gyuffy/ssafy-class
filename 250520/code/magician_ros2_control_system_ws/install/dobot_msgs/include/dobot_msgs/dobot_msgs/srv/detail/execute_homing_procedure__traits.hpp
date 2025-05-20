// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_msgs:srv/ExecuteHomingProcedure.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__TRAITS_HPP_
#define DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_msgs/srv/detail/execute_homing_procedure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteHomingProcedure_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteHomingProcedure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteHomingProcedure_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::srv::ExecuteHomingProcedure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::srv::ExecuteHomingProcedure_Request & msg)
{
  return dobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::srv::ExecuteHomingProcedure_Request>()
{
  return "dobot_msgs::srv::ExecuteHomingProcedure_Request";
}

template<>
inline const char * name<dobot_msgs::srv::ExecuteHomingProcedure_Request>()
{
  return "dobot_msgs/srv/ExecuteHomingProcedure_Request";
}

template<>
struct has_fixed_size<dobot_msgs::srv::ExecuteHomingProcedure_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs::srv::ExecuteHomingProcedure_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs::srv::ExecuteHomingProcedure_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteHomingProcedure_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: instruction
  {
    out << "instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteHomingProcedure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: instruction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteHomingProcedure_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::srv::ExecuteHomingProcedure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::srv::ExecuteHomingProcedure_Response & msg)
{
  return dobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::srv::ExecuteHomingProcedure_Response>()
{
  return "dobot_msgs::srv::ExecuteHomingProcedure_Response";
}

template<>
inline const char * name<dobot_msgs::srv::ExecuteHomingProcedure_Response>()
{
  return "dobot_msgs/srv/ExecuteHomingProcedure_Response";
}

template<>
struct has_fixed_size<dobot_msgs::srv::ExecuteHomingProcedure_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot_msgs::srv::ExecuteHomingProcedure_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot_msgs::srv::ExecuteHomingProcedure_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_msgs::srv::ExecuteHomingProcedure>()
{
  return "dobot_msgs::srv::ExecuteHomingProcedure";
}

template<>
inline const char * name<dobot_msgs::srv::ExecuteHomingProcedure>()
{
  return "dobot_msgs/srv/ExecuteHomingProcedure";
}

template<>
struct has_fixed_size<dobot_msgs::srv::ExecuteHomingProcedure>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_msgs::srv::ExecuteHomingProcedure_Request>::value &&
    has_fixed_size<dobot_msgs::srv::ExecuteHomingProcedure_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_msgs::srv::ExecuteHomingProcedure>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_msgs::srv::ExecuteHomingProcedure_Request>::value &&
    has_bounded_size<dobot_msgs::srv::ExecuteHomingProcedure_Response>::value
  >
{
};

template<>
struct is_service<dobot_msgs::srv::ExecuteHomingProcedure>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_msgs::srv::ExecuteHomingProcedure_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_msgs::srv::ExecuteHomingProcedure_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__TRAITS_HPP_
