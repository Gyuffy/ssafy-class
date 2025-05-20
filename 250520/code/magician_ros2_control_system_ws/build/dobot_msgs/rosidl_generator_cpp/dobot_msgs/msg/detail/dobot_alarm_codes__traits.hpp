// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_msgs:msg/DobotAlarmCodes.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__TRAITS_HPP_
#define DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_msgs/msg/detail/dobot_alarm_codes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DobotAlarmCodes & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: alarms_list
  {
    if (msg.alarms_list.size() == 0) {
      out << "alarms_list: []";
    } else {
      out << "alarms_list: [";
      size_t pending_items = msg.alarms_list.size();
      for (auto item : msg.alarms_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DobotAlarmCodes & msg,
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

  // member: alarms_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alarms_list.size() == 0) {
      out << "alarms_list: []\n";
    } else {
      out << "alarms_list:\n";
      for (auto item : msg.alarms_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DobotAlarmCodes & msg, bool use_flow_style = false)
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
  const dobot_msgs::msg::DobotAlarmCodes & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::msg::DobotAlarmCodes & msg)
{
  return dobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::msg::DobotAlarmCodes>()
{
  return "dobot_msgs::msg::DobotAlarmCodes";
}

template<>
inline const char * name<dobot_msgs::msg::DobotAlarmCodes>()
{
  return "dobot_msgs/msg/DobotAlarmCodes";
}

template<>
struct has_fixed_size<dobot_msgs::msg::DobotAlarmCodes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot_msgs::msg::DobotAlarmCodes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot_msgs::msg::DobotAlarmCodes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__TRAITS_HPP_
