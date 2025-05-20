// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs:srv/ExecuteHomingProcedure.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__STRUCT_HPP_
#define DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__srv__ExecuteHomingProcedure_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__srv__ExecuteHomingProcedure_Request __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteHomingProcedure_Request_
{
  using Type = ExecuteHomingProcedure_Request_<ContainerAllocator>;

  explicit ExecuteHomingProcedure_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ExecuteHomingProcedure_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__srv__ExecuteHomingProcedure_Request
    std::shared_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__srv__ExecuteHomingProcedure_Request
    std::shared_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteHomingProcedure_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteHomingProcedure_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteHomingProcedure_Request_

// alias to use template instance with default allocator
using ExecuteHomingProcedure_Request =
  dobot_msgs::srv::ExecuteHomingProcedure_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__srv__ExecuteHomingProcedure_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__srv__ExecuteHomingProcedure_Response __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteHomingProcedure_Response_
{
  using Type = ExecuteHomingProcedure_Response_<ContainerAllocator>;

  explicit ExecuteHomingProcedure_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->instruction = "";
    }
  }

  explicit ExecuteHomingProcedure_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : instruction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->instruction = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _instruction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instruction_type instruction;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__instruction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instruction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__srv__ExecuteHomingProcedure_Response
    std::shared_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__srv__ExecuteHomingProcedure_Response
    std::shared_ptr<dobot_msgs::srv::ExecuteHomingProcedure_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteHomingProcedure_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->instruction != other.instruction) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteHomingProcedure_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteHomingProcedure_Response_

// alias to use template instance with default allocator
using ExecuteHomingProcedure_Response =
  dobot_msgs::srv::ExecuteHomingProcedure_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs

namespace dobot_msgs
{

namespace srv
{

struct ExecuteHomingProcedure
{
  using Request = dobot_msgs::srv::ExecuteHomingProcedure_Request;
  using Response = dobot_msgs::srv::ExecuteHomingProcedure_Response;
};

}  // namespace srv

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__SRV__DETAIL__EXECUTE_HOMING_PROCEDURE__STRUCT_HPP_
