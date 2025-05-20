// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__TRAITS_HPP_
#define DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvaluatePTPTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    if (msg.target.size() == 0) {
      out << "target: []";
    } else {
      out << "target: [";
      size_t pending_items = msg.target.size();
      for (auto item : msg.target) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motion_type
  {
    out << "motion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EvaluatePTPTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target.size() == 0) {
      out << "target: []\n";
    } else {
      out << "target:\n";
      for (auto item : msg.target) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motion_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EvaluatePTPTrajectory_Request & msg, bool use_flow_style = false)
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
  const dobot_msgs::srv::EvaluatePTPTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::srv::EvaluatePTPTrajectory_Request & msg)
{
  return dobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::srv::EvaluatePTPTrajectory_Request>()
{
  return "dobot_msgs::srv::EvaluatePTPTrajectory_Request";
}

template<>
inline const char * name<dobot_msgs::srv::EvaluatePTPTrajectory_Request>()
{
  return "dobot_msgs/srv/EvaluatePTPTrajectory_Request";
}

template<>
struct has_fixed_size<dobot_msgs::srv::EvaluatePTPTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs::srv::EvaluatePTPTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs::srv::EvaluatePTPTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvaluatePTPTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EvaluatePTPTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EvaluatePTPTrajectory_Response & msg, bool use_flow_style = false)
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
  const dobot_msgs::srv::EvaluatePTPTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::srv::EvaluatePTPTrajectory_Response & msg)
{
  return dobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::srv::EvaluatePTPTrajectory_Response>()
{
  return "dobot_msgs::srv::EvaluatePTPTrajectory_Response";
}

template<>
inline const char * name<dobot_msgs::srv::EvaluatePTPTrajectory_Response>()
{
  return "dobot_msgs/srv/EvaluatePTPTrajectory_Response";
}

template<>
struct has_fixed_size<dobot_msgs::srv::EvaluatePTPTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot_msgs::srv::EvaluatePTPTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot_msgs::srv::EvaluatePTPTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_msgs::srv::EvaluatePTPTrajectory>()
{
  return "dobot_msgs::srv::EvaluatePTPTrajectory";
}

template<>
inline const char * name<dobot_msgs::srv::EvaluatePTPTrajectory>()
{
  return "dobot_msgs/srv/EvaluatePTPTrajectory";
}

template<>
struct has_fixed_size<dobot_msgs::srv::EvaluatePTPTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_msgs::srv::EvaluatePTPTrajectory_Request>::value &&
    has_fixed_size<dobot_msgs::srv::EvaluatePTPTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_msgs::srv::EvaluatePTPTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_msgs::srv::EvaluatePTPTrajectory_Request>::value &&
    has_bounded_size<dobot_msgs::srv::EvaluatePTPTrajectory_Response>::value
  >
{
};

template<>
struct is_service<dobot_msgs::srv::EvaluatePTPTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_msgs::srv::EvaluatePTPTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_msgs::srv::EvaluatePTPTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__TRAITS_HPP_
