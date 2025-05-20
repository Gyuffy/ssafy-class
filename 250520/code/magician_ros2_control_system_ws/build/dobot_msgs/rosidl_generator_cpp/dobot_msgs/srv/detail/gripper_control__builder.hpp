// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs:srv/GripperControl.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_
#define DOBOT_MSGS__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs/srv/detail/gripper_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperControl_Request_keep_compressor_running
{
public:
  explicit Init_GripperControl_Request_keep_compressor_running(::dobot_msgs::srv::GripperControl_Request & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::srv::GripperControl_Request keep_compressor_running(::dobot_msgs::srv::GripperControl_Request::_keep_compressor_running_type arg)
  {
    msg_.keep_compressor_running = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::srv::GripperControl_Request msg_;
};

class Init_GripperControl_Request_gripper_state
{
public:
  Init_GripperControl_Request_gripper_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_Request_keep_compressor_running gripper_state(::dobot_msgs::srv::GripperControl_Request::_gripper_state_type arg)
  {
    msg_.gripper_state = std::move(arg);
    return Init_GripperControl_Request_keep_compressor_running(msg_);
  }

private:
  ::dobot_msgs::srv::GripperControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::srv::GripperControl_Request>()
{
  return dobot_msgs::srv::builder::Init_GripperControl_Request_gripper_state();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperControl_Response_message
{
public:
  explicit Init_GripperControl_Response_message(::dobot_msgs::srv::GripperControl_Response & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::srv::GripperControl_Response message(::dobot_msgs::srv::GripperControl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::srv::GripperControl_Response msg_;
};

class Init_GripperControl_Response_success
{
public:
  Init_GripperControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_Response_message success(::dobot_msgs::srv::GripperControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GripperControl_Response_message(msg_);
  }

private:
  ::dobot_msgs::srv::GripperControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::srv::GripperControl_Response>()
{
  return dobot_msgs::srv::builder::Init_GripperControl_Response_success();
}

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_
