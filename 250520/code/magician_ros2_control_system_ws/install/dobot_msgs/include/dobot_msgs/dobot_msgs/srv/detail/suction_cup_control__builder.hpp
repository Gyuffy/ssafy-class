// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs:srv/SuctionCupControl.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__SUCTION_CUP_CONTROL__BUILDER_HPP_
#define DOBOT_MSGS__SRV__DETAIL__SUCTION_CUP_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs/srv/detail/suction_cup_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs
{

namespace srv
{

namespace builder
{

class Init_SuctionCupControl_Request_enable_suction
{
public:
  Init_SuctionCupControl_Request_enable_suction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs::srv::SuctionCupControl_Request enable_suction(::dobot_msgs::srv::SuctionCupControl_Request::_enable_suction_type arg)
  {
    msg_.enable_suction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::srv::SuctionCupControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::srv::SuctionCupControl_Request>()
{
  return dobot_msgs::srv::builder::Init_SuctionCupControl_Request_enable_suction();
}

}  // namespace dobot_msgs


namespace dobot_msgs
{

namespace srv
{

namespace builder
{

class Init_SuctionCupControl_Response_message
{
public:
  explicit Init_SuctionCupControl_Response_message(::dobot_msgs::srv::SuctionCupControl_Response & msg)
  : msg_(msg)
  {}
  ::dobot_msgs::srv::SuctionCupControl_Response message(::dobot_msgs::srv::SuctionCupControl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs::srv::SuctionCupControl_Response msg_;
};

class Init_SuctionCupControl_Response_success
{
public:
  Init_SuctionCupControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SuctionCupControl_Response_message success(::dobot_msgs::srv::SuctionCupControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SuctionCupControl_Response_message(msg_);
  }

private:
  ::dobot_msgs::srv::SuctionCupControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs::srv::SuctionCupControl_Response>()
{
  return dobot_msgs::srv::builder::Init_SuctionCupControl_Response_success();
}

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__SRV__DETAIL__SUCTION_CUP_CONTROL__BUILDER_HPP_
