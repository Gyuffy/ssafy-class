// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs:action/PointToPoint.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__ACTION__DETAIL__POINT_TO_POINT__BUILDER_HPP_
#define DOBOT_MSGS__ACTION__DETAIL__POINT_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs/action/detail/point_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs
{

namespace action
{

namespace builder
{

class Init_PointToPoint_Goal_acceleration_ratio
{
public:
  explicit Init_PointToPoint_Goal_acceleration_ratio(::dobot_msgs::action::PointToPoint_Goal & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::action::PointToPoint_Goal acceleration_ratio(::dobot_msgs::action::PointToPoint_Goal::_acceleration_ratio_type arg)
  {
    msg_.acceleration_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_Goal msg_;
};

class Init_PointToPoint_Goal_velocity_ratio
{
public:
  explicit Init_PointToPoint_Goal_velocity_ratio(::dobot_msgs::action::PointToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_PointToPoint_Goal_acceleration_ratio velocity_ratio(::dobot_msgs::action::PointToPoint_Goal::_velocity_ratio_type arg)
  {
    msg_.velocity_ratio = std::move(arg);
    return Init_PointToPoint_Goal_acceleration_ratio(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_Goal msg_;
};

class Init_PointToPoint_Goal_target_pose
{
public:
  explicit Init_PointToPoint_Goal_target_pose(::dobot_msgs::action::PointToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_PointToPoint_Goal_velocity_ratio target_pose(::dobot_msgs::action::PointToPoint_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_PointToPoint_Goal_velocity_ratio(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_Goal msg_;
};

class Init_PointToPoint_Goal_motion_type
{
public:
  Init_PointToPoint_Goal_motion_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointToPoint_Goal_target_pose motion_type(::dobot_msgs::action::PointToPoint_Goal::_motion_type_type arg)
  {
    msg_.motion_type = std::move(arg);
    return Init_PointToPoint_Goal_target_pose(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::action::PointToPoint_Goal>()
{
  return dobot_msgs::action::builder::Init_PointToPoint_Goal_motion_type();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace action
{

namespace builder
{

class Init_PointToPoint_Result_achieved_pose
{
public:
  Init_PointToPoint_Result_achieved_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs::action::PointToPoint_Result achieved_pose(::dobot_msgs::action::PointToPoint_Result::_achieved_pose_type arg)
  {
    msg_.achieved_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::action::PointToPoint_Result>()
{
  return dobot_msgs::action::builder::Init_PointToPoint_Result_achieved_pose();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace action
{

namespace builder
{

class Init_PointToPoint_Feedback_current_pose
{
public:
  Init_PointToPoint_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs::action::PointToPoint_Feedback current_pose(::dobot_msgs::action::PointToPoint_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::action::PointToPoint_Feedback>()
{
  return dobot_msgs::action::builder::Init_PointToPoint_Feedback_current_pose();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace action
{

namespace builder
{

class Init_PointToPoint_SendGoal_Request_goal
{
public:
  explicit Init_PointToPoint_SendGoal_Request_goal(::dobot_msgs::action::PointToPoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::action::PointToPoint_SendGoal_Request goal(::dobot_msgs::action::PointToPoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_SendGoal_Request msg_;
};

class Init_PointToPoint_SendGoal_Request_goal_id
{
public:
  Init_PointToPoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointToPoint_SendGoal_Request_goal goal_id(::dobot_msgs::action::PointToPoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PointToPoint_SendGoal_Request_goal(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::action::PointToPoint_SendGoal_Request>()
{
  return dobot_msgs::action::builder::Init_PointToPoint_SendGoal_Request_goal_id();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace action
{

namespace builder
{

class Init_PointToPoint_SendGoal_Response_stamp
{
public:
  explicit Init_PointToPoint_SendGoal_Response_stamp(::dobot_msgs::action::PointToPoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::action::PointToPoint_SendGoal_Response stamp(::dobot_msgs::action::PointToPoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_SendGoal_Response msg_;
};

class Init_PointToPoint_SendGoal_Response_accepted
{
public:
  Init_PointToPoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointToPoint_SendGoal_Response_stamp accepted(::dobot_msgs::action::PointToPoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PointToPoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::action::PointToPoint_SendGoal_Response>()
{
  return dobot_msgs::action::builder::Init_PointToPoint_SendGoal_Response_accepted();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace action
{

namespace builder
{

class Init_PointToPoint_GetResult_Request_goal_id
{
public:
  Init_PointToPoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs::action::PointToPoint_GetResult_Request goal_id(::dobot_msgs::action::PointToPoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::action::PointToPoint_GetResult_Request>()
{
  return dobot_msgs::action::builder::Init_PointToPoint_GetResult_Request_goal_id();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace action
{

namespace builder
{

class Init_PointToPoint_GetResult_Response_result
{
public:
  explicit Init_PointToPoint_GetResult_Response_result(::dobot_msgs::action::PointToPoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::action::PointToPoint_GetResult_Response result(::dobot_msgs::action::PointToPoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_GetResult_Response msg_;
};

class Init_PointToPoint_GetResult_Response_status
{
public:
  Init_PointToPoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointToPoint_GetResult_Response_result status(::dobot_msgs::action::PointToPoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PointToPoint_GetResult_Response_result(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::action::PointToPoint_GetResult_Response>()
{
  return dobot_msgs::action::builder::Init_PointToPoint_GetResult_Response_status();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace action
{

namespace builder
{

class Init_PointToPoint_FeedbackMessage_feedback
{
public:
  explicit Init_PointToPoint_FeedbackMessage_feedback(::dobot_msgs::action::PointToPoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::action::PointToPoint_FeedbackMessage feedback(::dobot_msgs::action::PointToPoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_FeedbackMessage msg_;
};

class Init_PointToPoint_FeedbackMessage_goal_id
{
public:
  Init_PointToPoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointToPoint_FeedbackMessage_feedback goal_id(::dobot_msgs::action::PointToPoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PointToPoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::dobot_msgs::action::PointToPoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::action::PointToPoint_FeedbackMessage>()
{
  return dobot_msgs::action::builder::Init_PointToPoint_FeedbackMessage_goal_id();
}

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__ACTION__DETAIL__POINT_TO_POINT__BUILDER_HPP_
