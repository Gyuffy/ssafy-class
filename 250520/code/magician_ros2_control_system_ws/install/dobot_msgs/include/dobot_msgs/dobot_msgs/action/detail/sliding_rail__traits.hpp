// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_msgs:action/SlidingRail.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__ACTION__DETAIL__SLIDING_RAIL__TRAITS_HPP_
#define DOBOT_MSGS__ACTION__DETAIL__SLIDING_RAIL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_msgs/action/detail/sliding_rail__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SlidingRail_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_pose
  {
    out << "target_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlidingRail_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlidingRail_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::action::SlidingRail_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::action::SlidingRail_Goal & msg)
{
  return dobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_Goal>()
{
  return "dobot_msgs::action::SlidingRail_Goal";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_Goal>()
{
  return "dobot_msgs/action/SlidingRail_Goal";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs::action::SlidingRail_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SlidingRail_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: achieved_pose
  {
    out << "achieved_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.achieved_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlidingRail_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: achieved_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "achieved_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.achieved_pose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlidingRail_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::action::SlidingRail_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::action::SlidingRail_Result & msg)
{
  return dobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_Result>()
{
  return "dobot_msgs::action::SlidingRail_Result";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_Result>()
{
  return "dobot_msgs/action/SlidingRail_Result";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs::action::SlidingRail_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SlidingRail_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_pose
  {
    out << "current_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.current_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlidingRail_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.current_pose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlidingRail_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::action::SlidingRail_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::action::SlidingRail_Feedback & msg)
{
  return dobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_Feedback>()
{
  return "dobot_msgs::action::SlidingRail_Feedback";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_Feedback>()
{
  return "dobot_msgs/action/SlidingRail_Feedback";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs::action::SlidingRail_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "dobot_msgs/action/detail/sliding_rail__traits.hpp"

namespace dobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SlidingRail_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlidingRail_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlidingRail_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::action::SlidingRail_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::action::SlidingRail_SendGoal_Request & msg)
{
  return dobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_SendGoal_Request>()
{
  return "dobot_msgs::action::SlidingRail_SendGoal_Request";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_SendGoal_Request>()
{
  return "dobot_msgs/action/SlidingRail_SendGoal_Request";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<dobot_msgs::action::SlidingRail_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<dobot_msgs::action::SlidingRail_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dobot_msgs::action::SlidingRail_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace dobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SlidingRail_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlidingRail_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlidingRail_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::action::SlidingRail_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::action::SlidingRail_SendGoal_Response & msg)
{
  return dobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_SendGoal_Response>()
{
  return "dobot_msgs::action::SlidingRail_SendGoal_Response";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_SendGoal_Response>()
{
  return "dobot_msgs/action/SlidingRail_SendGoal_Response";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<dobot_msgs::action::SlidingRail_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_SendGoal>()
{
  return "dobot_msgs::action::SlidingRail_SendGoal";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_SendGoal>()
{
  return "dobot_msgs/action/SlidingRail_SendGoal";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_msgs::action::SlidingRail_SendGoal_Request>::value &&
    has_fixed_size<dobot_msgs::action::SlidingRail_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_msgs::action::SlidingRail_SendGoal_Request>::value &&
    has_bounded_size<dobot_msgs::action::SlidingRail_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<dobot_msgs::action::SlidingRail_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_msgs::action::SlidingRail_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_msgs::action::SlidingRail_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace dobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SlidingRail_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlidingRail_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlidingRail_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::action::SlidingRail_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::action::SlidingRail_GetResult_Request & msg)
{
  return dobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_GetResult_Request>()
{
  return "dobot_msgs::action::SlidingRail_GetResult_Request";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_GetResult_Request>()
{
  return "dobot_msgs/action/SlidingRail_GetResult_Request";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dobot_msgs::action::SlidingRail_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "dobot_msgs/action/detail/sliding_rail__traits.hpp"

namespace dobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SlidingRail_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlidingRail_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlidingRail_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::action::SlidingRail_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::action::SlidingRail_GetResult_Response & msg)
{
  return dobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_GetResult_Response>()
{
  return "dobot_msgs::action::SlidingRail_GetResult_Response";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_GetResult_Response>()
{
  return "dobot_msgs/action/SlidingRail_GetResult_Response";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<dobot_msgs::action::SlidingRail_Result>::value> {};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<dobot_msgs::action::SlidingRail_Result>::value> {};

template<>
struct is_message<dobot_msgs::action::SlidingRail_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_GetResult>()
{
  return "dobot_msgs::action::SlidingRail_GetResult";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_GetResult>()
{
  return "dobot_msgs/action/SlidingRail_GetResult";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_msgs::action::SlidingRail_GetResult_Request>::value &&
    has_fixed_size<dobot_msgs::action::SlidingRail_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_msgs::action::SlidingRail_GetResult_Request>::value &&
    has_bounded_size<dobot_msgs::action::SlidingRail_GetResult_Response>::value
  >
{
};

template<>
struct is_service<dobot_msgs::action::SlidingRail_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_msgs::action::SlidingRail_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_msgs::action::SlidingRail_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "dobot_msgs/action/detail/sliding_rail__traits.hpp"

namespace dobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SlidingRail_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlidingRail_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlidingRail_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs::action::SlidingRail_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs::action::SlidingRail_FeedbackMessage & msg)
{
  return dobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs::action::SlidingRail_FeedbackMessage>()
{
  return "dobot_msgs::action::SlidingRail_FeedbackMessage";
}

template<>
inline const char * name<dobot_msgs::action::SlidingRail_FeedbackMessage>()
{
  return "dobot_msgs/action/SlidingRail_FeedbackMessage";
}

template<>
struct has_fixed_size<dobot_msgs::action::SlidingRail_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<dobot_msgs::action::SlidingRail_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dobot_msgs::action::SlidingRail_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<dobot_msgs::action::SlidingRail_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dobot_msgs::action::SlidingRail_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<dobot_msgs::action::SlidingRail>
  : std::true_type
{
};

template<>
struct is_action_goal<dobot_msgs::action::SlidingRail_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<dobot_msgs::action::SlidingRail_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<dobot_msgs::action::SlidingRail_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DOBOT_MSGS__ACTION__DETAIL__SLIDING_RAIL__TRAITS_HPP_
