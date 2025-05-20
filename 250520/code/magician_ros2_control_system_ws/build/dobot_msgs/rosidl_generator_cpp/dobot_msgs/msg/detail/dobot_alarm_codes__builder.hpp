// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs:msg/DobotAlarmCodes.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__BUILDER_HPP_
#define DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs/msg/detail/dobot_alarm_codes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs
{

namespace msg
{

namespace builder
{

class Init_DobotAlarmCodes_alarms_list
{
public:
  explicit Init_DobotAlarmCodes_alarms_list(::dobot_msgs::msg::DobotAlarmCodes & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::msg::DobotAlarmCodes alarms_list(::dobot_msgs::msg::DobotAlarmCodes::_alarms_list_type arg)
  {
    msg_.alarms_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::msg::DobotAlarmCodes msg_;
};

class Init_DobotAlarmCodes_header
{
public:
  Init_DobotAlarmCodes_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DobotAlarmCodes_alarms_list header(::dobot_msgs::msg::DobotAlarmCodes::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DobotAlarmCodes_alarms_list(msg_);
  }

private:
  ::dobot_msgs::msg::DobotAlarmCodes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::msg::DobotAlarmCodes>()
{
  return dobot_msgs::msg::builder::Init_DobotAlarmCodes_header();
}

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__BUILDER_HPP_
