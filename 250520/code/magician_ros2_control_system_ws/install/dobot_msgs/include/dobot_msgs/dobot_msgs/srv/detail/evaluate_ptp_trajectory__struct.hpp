// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__STRUCT_HPP_
#define DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__srv__EvaluatePTPTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__srv__EvaluatePTPTrajectory_Request __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EvaluatePTPTrajectory_Request_
{
  using Type = EvaluatePTPTrajectory_Request_<ContainerAllocator>;

  explicit EvaluatePTPTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->target.begin(), this->target.end(), 0.0);
      this->motion_type = 0;
    }
  }

  explicit EvaluatePTPTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->target.begin(), this->target.end(), 0.0);
      this->motion_type = 0;
    }
  }

  // field types and members
  using _target_type =
    std::array<double, 4>;
  _target_type target;
  using _motion_type_type =
    uint8_t;
  _motion_type_type motion_type;

  // setters for named parameter idiom
  Type & set__target(
    const std::array<double, 4> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__motion_type(
    const uint8_t & _arg)
  {
    this->motion_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__srv__EvaluatePTPTrajectory_Request
    std::shared_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__srv__EvaluatePTPTrajectory_Request
    std::shared_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EvaluatePTPTrajectory_Request_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    if (this->motion_type != other.motion_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const EvaluatePTPTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EvaluatePTPTrajectory_Request_

// alias to use template instance with default allocator
using EvaluatePTPTrajectory_Request =
  dobot_msgs::srv::EvaluatePTPTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__srv__EvaluatePTPTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__srv__EvaluatePTPTrajectory_Response __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EvaluatePTPTrajectory_Response_
{
  using Type = EvaluatePTPTrajectory_Response_<ContainerAllocator>;

  explicit EvaluatePTPTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
      this->message = "";
    }
  }

  explicit EvaluatePTPTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
      this->message = "";
    }
  }

  // field types and members
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__srv__EvaluatePTPTrajectory_Response
    std::shared_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__srv__EvaluatePTPTrajectory_Response
    std::shared_ptr<dobot_msgs::srv::EvaluatePTPTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EvaluatePTPTrajectory_Response_ & other) const
  {
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const EvaluatePTPTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EvaluatePTPTrajectory_Response_

// alias to use template instance with default allocator
using EvaluatePTPTrajectory_Response =
  dobot_msgs::srv::EvaluatePTPTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs

namespace dobot_msgs
{

namespace srv
{

struct EvaluatePTPTrajectory
{
  using Request = dobot_msgs::srv::EvaluatePTPTrajectory_Request;
  using Response = dobot_msgs::srv::EvaluatePTPTrajectory_Response;
};

}  // namespace srv

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__STRUCT_HPP_
