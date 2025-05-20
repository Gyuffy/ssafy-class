// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs:srv/SuctionCupControl.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__SUCTION_CUP_CONTROL__STRUCT_HPP_
#define DOBOT_MSGS__SRV__DETAIL__SUCTION_CUP_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__srv__SuctionCupControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__srv__SuctionCupControl_Request __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SuctionCupControl_Request_
{
  using Type = SuctionCupControl_Request_<ContainerAllocator>;

  explicit SuctionCupControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_suction = false;
    }
  }

  explicit SuctionCupControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_suction = false;
    }
  }

  // field types and members
  using _enable_suction_type =
    bool;
  _enable_suction_type enable_suction;

  // setters for named parameter idiom
  Type & set__enable_suction(
    const bool & _arg)
  {
    this->enable_suction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__srv__SuctionCupControl_Request
    std::shared_ptr<dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__srv__SuctionCupControl_Request
    std::shared_ptr<dobot_msgs::srv::SuctionCupControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SuctionCupControl_Request_ & other) const
  {
    if (this->enable_suction != other.enable_suction) {
      return false;
    }
    return true;
  }
  bool operator!=(const SuctionCupControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SuctionCupControl_Request_

// alias to use template instance with default allocator
using SuctionCupControl_Request =
  dobot_msgs::srv::SuctionCupControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__srv__SuctionCupControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__srv__SuctionCupControl_Response __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SuctionCupControl_Response_
{
  using Type = SuctionCupControl_Response_<ContainerAllocator>;

  explicit SuctionCupControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SuctionCupControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
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
    dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__srv__SuctionCupControl_Response
    std::shared_ptr<dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__srv__SuctionCupControl_Response
    std::shared_ptr<dobot_msgs::srv::SuctionCupControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SuctionCupControl_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SuctionCupControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SuctionCupControl_Response_

// alias to use template instance with default allocator
using SuctionCupControl_Response =
  dobot_msgs::srv::SuctionCupControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs

namespace dobot_msgs
{

namespace srv
{

struct SuctionCupControl
{
  using Request = dobot_msgs::srv::SuctionCupControl_Request;
  using Response = dobot_msgs::srv::SuctionCupControl_Response;
};

}  // namespace srv

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__SRV__DETAIL__SUCTION_CUP_CONTROL__STRUCT_HPP_
