// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs:msg/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__BUILDER_HPP_
#define DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs/msg/detail/gripper_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperStatus_status
{
public:
  explicit Init_GripperStatus_status(::dobot_msgs::msg::GripperStatus & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::msg::GripperStatus status(::dobot_msgs::msg::GripperStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::msg::GripperStatus msg_;
};

class Init_GripperStatus_header
{
public:
  Init_GripperStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperStatus_status header(::dobot_msgs::msg::GripperStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GripperStatus_status(msg_);
  }

private:
  ::dobot_msgs::msg::GripperStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::msg::GripperStatus>()
{
  return dobot_msgs::msg::builder::Init_GripperStatus_header();
}

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__BUILDER_HPP_
