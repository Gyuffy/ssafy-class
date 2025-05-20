// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs:msg/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__STRUCT_HPP_
#define DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot_msgs__msg__GripperStatus __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__msg__GripperStatus __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperStatus_
{
  using Type = GripperStatus_<ContainerAllocator>;

  explicit GripperStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit GripperStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::msg::GripperStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::msg::GripperStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::msg::GripperStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::msg::GripperStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::msg::GripperStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::msg::GripperStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::msg::GripperStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::msg::GripperStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::msg::GripperStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::msg::GripperStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__msg__GripperStatus
    std::shared_ptr<dobot_msgs::msg::GripperStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__msg__GripperStatus
    std::shared_ptr<dobot_msgs::msg::GripperStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperStatus_

// alias to use template instance with default allocator
using GripperStatus =
  dobot_msgs::msg::GripperStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__MSG__DETAIL__GRIPPER_STATUS__STRUCT_HPP_
