// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs:msg/DobotAlarmCodes.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__STRUCT_HPP_
#define DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__STRUCT_HPP_

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
# define DEPRECATED__dobot_msgs__msg__DobotAlarmCodes __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__msg__DobotAlarmCodes __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DobotAlarmCodes_
{
  using Type = DobotAlarmCodes_<ContainerAllocator>;

  explicit DobotAlarmCodes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DobotAlarmCodes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _alarms_list_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _alarms_list_type alarms_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__alarms_list(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->alarms_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__msg__DobotAlarmCodes
    std::shared_ptr<dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__msg__DobotAlarmCodes
    std::shared_ptr<dobot_msgs::msg::DobotAlarmCodes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DobotAlarmCodes_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->alarms_list != other.alarms_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const DobotAlarmCodes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DobotAlarmCodes_

// alias to use template instance with default allocator
using DobotAlarmCodes =
  dobot_msgs::msg::DobotAlarmCodes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__MSG__DETAIL__DOBOT_ALARM_CODES__STRUCT_HPP_
