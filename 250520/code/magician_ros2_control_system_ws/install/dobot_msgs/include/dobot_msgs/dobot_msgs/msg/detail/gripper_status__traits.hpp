// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_msgs:msg/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__TRAITS_HPP_
#define DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_msgs/msg/detail/gripper_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::msg::GripperStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::msg::GripperStatus & msg)
{
  return dobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::msg::GripperStatus>()
{
  return "dobot_msgs::msg::GripperStatus";
}

template<>
inline const char * name<dobot_msgs::msg::GripperStatus>()
{
  return "dobot_msgs/msg/GripperStatus";
}

template<>
struct has_fixed_size<dobot_msgs::msg::GripperStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot_msgs::msg::GripperStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot_msgs::msg::GripperStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__TRAITS_HPP_
