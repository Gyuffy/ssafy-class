// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__BUILDER_HPP_
#define DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs
{

namespace srv
{

namespace builder
{

class Init_EvaluatePTPTrajectory_Request_motion_type
{
public:
  explicit Init_EvaluatePTPTrajectory_Request_motion_type(::dobot_msgs::srv::EvaluatePTPTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::srv::EvaluatePTPTrajectory_Request motion_type(::dobot_msgs::srv::EvaluatePTPTrajectory_Request::_motion_type_type arg)
  {
    msg_.motion_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::srv::EvaluatePTPTrajectory_Request msg_;
};

class Init_EvaluatePTPTrajectory_Request_target
{
public:
  Init_EvaluatePTPTrajectory_Request_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EvaluatePTPTrajectory_Request_motion_type target(::dobot_msgs::srv::EvaluatePTPTrajectory_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_EvaluatePTPTrajectory_Request_motion_type(msg_);
  }

private:
  ::dobot_msgs::srv::EvaluatePTPTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::srv::EvaluatePTPTrajectory_Request>()
{
  return dobot_msgs::srv::builder::Init_EvaluatePTPTrajectory_Request_target();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace srv
{

namespace builder
{

class Init_EvaluatePTPTrajectory_Response_message
{
public:
  explicit Init_EvaluatePTPTrajectory_Response_message(::dobot_msgs::srv::EvaluatePTPTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::srv::EvaluatePTPTrajectory_Response message(::dobot_msgs::srv::EvaluatePTPTrajectory_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::srv::EvaluatePTPTrajectory_Response msg_;
};

class Init_EvaluatePTPTrajectory_Response_is_valid
{
public:
  Init_EvaluatePTPTrajectory_Response_is_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EvaluatePTPTrajectory_Response_message is_valid(::dobot_msgs::srv::EvaluatePTPTrajectory_Response::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_EvaluatePTPTrajectory_Response_message(msg_);
  }

private:
  ::dobot_msgs::srv::EvaluatePTPTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::srv::EvaluatePTPTrajectory_Response>()
{
  return dobot_msgs::srv::builder::Init_EvaluatePTPTrajectory_Response_is_valid();
}

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__BUILDER_HPP_
