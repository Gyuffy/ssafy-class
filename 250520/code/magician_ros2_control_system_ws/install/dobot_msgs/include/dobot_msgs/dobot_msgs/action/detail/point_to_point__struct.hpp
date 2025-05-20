// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs:action/PointToPoint.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__ACTION__DETAIL__POINT_TO_POINT__STRUCT_HPP_
#define DOBOT_MSGS__ACTION__DETAIL__POINT_TO_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__action__PointToPoint_Goal __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__action__PointToPoint_Goal __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointToPoint_Goal_
{
  using Type = PointToPoint_Goal_<ContainerAllocator>;

  explicit PointToPoint_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->velocity_ratio = 1.0;
      this->acceleration_ratio = 1.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->motion_type = 0;
      std::fill<typename std::array<double, 4>::iterator, double>(this->target_pose.begin(), this->target_pose.end(), 0.0);
      this->velocity_ratio = 0.0;
      this->acceleration_ratio = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_type = 0;
      std::fill<typename std::array<double, 4>::iterator, double>(this->target_pose.begin(), this->target_pose.end(), 0.0);
    }
  }

  explicit PointToPoint_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->velocity_ratio = 1.0;
      this->acceleration_ratio = 1.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->motion_type = 0;
      std::fill<typename std::array<double, 4>::iterator, double>(this->target_pose.begin(), this->target_pose.end(), 0.0);
      this->velocity_ratio = 0.0;
      this->acceleration_ratio = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_type = 0;
      std::fill<typename std::array<double, 4>::iterator, double>(this->target_pose.begin(), this->target_pose.end(), 0.0);
    }
  }

  // field types and members
  using _motion_type_type =
    uint8_t;
  _motion_type_type motion_type;
  using _target_pose_type =
    std::array<double, 4>;
  _target_pose_type target_pose;
  using _velocity_ratio_type =
    double;
  _velocity_ratio_type velocity_ratio;
  using _acceleration_ratio_type =
    double;
  _acceleration_ratio_type acceleration_ratio;

  // setters for named parameter idiom
  Type & set__motion_type(
    const uint8_t & _arg)
  {
    this->motion_type = _arg;
    return *this;
  }
  Type & set__target_pose(
    const std::array<double, 4> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__velocity_ratio(
    const double & _arg)
  {
    this->velocity_ratio = _arg;
    return *this;
  }
  Type & set__acceleration_ratio(
    const double & _arg)
  {
    this->acceleration_ratio = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MOTION_TYPE_MOVJ_XYZ =
    1u;
  static constexpr uint8_t MOTION_TYPE_MOVL_XYZ =
    2u;
  static constexpr uint8_t MOTION_TYPE_MOVJ_ANGLE =
    4u;
  static constexpr uint8_t MOTION_TYPE_MOVL_ANGLE =
    5u;

  // pointer types
  using RawPtr =
    dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_Goal
    std::shared_ptr<dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_Goal
    std::shared_ptr<dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointToPoint_Goal_ & other) const
  {
    if (this->motion_type != other.motion_type) {
      return false;
    }
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->velocity_ratio != other.velocity_ratio) {
      return false;
    }
    if (this->acceleration_ratio != other.acceleration_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointToPoint_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointToPoint_Goal_

// alias to use template instance with default allocator
using PointToPoint_Goal =
  dobot_msgs::action::PointToPoint_Goal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointToPoint_Goal_<ContainerAllocator>::MOTION_TYPE_MOVJ_XYZ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointToPoint_Goal_<ContainerAllocator>::MOTION_TYPE_MOVL_XYZ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointToPoint_Goal_<ContainerAllocator>::MOTION_TYPE_MOVJ_ANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointToPoint_Goal_<ContainerAllocator>::MOTION_TYPE_MOVL_ANGLE;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace dobot_msgs


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__action__PointToPoint_Result __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__action__PointToPoint_Result __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointToPoint_Result_
{
  using Type = PointToPoint_Result_<ContainerAllocator>;

  explicit PointToPoint_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->achieved_pose.begin(), this->achieved_pose.end(), 0.0);
    }
  }

  explicit PointToPoint_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : achieved_pose(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->achieved_pose.begin(), this->achieved_pose.end(), 0.0);
    }
  }

  // field types and members
  using _achieved_pose_type =
    std::array<double, 4>;
  _achieved_pose_type achieved_pose;

  // setters for named parameter idiom
  Type & set__achieved_pose(
    const std::array<double, 4> & _arg)
  {
    this->achieved_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::action::PointToPoint_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::action::PointToPoint_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_Result
    std::shared_ptr<dobot_msgs::action::PointToPoint_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_Result
    std::shared_ptr<dobot_msgs::action::PointToPoint_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointToPoint_Result_ & other) const
  {
    if (this->achieved_pose != other.achieved_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointToPoint_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointToPoint_Result_

// alias to use template instance with default allocator
using PointToPoint_Result =
  dobot_msgs::action::PointToPoint_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dobot_msgs


#ifndef _WIN32
# define DEPRECATED__dobot_msgs__action__PointToPoint_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__action__PointToPoint_Feedback __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointToPoint_Feedback_
{
  using Type = PointToPoint_Feedback_<ContainerAllocator>;

  explicit PointToPoint_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->current_pose.begin(), this->current_pose.end(), 0.0);
    }
  }

  explicit PointToPoint_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->current_pose.begin(), this->current_pose.end(), 0.0);
    }
  }

  // field types and members
  using _current_pose_type =
    std::array<double, 4>;
  _current_pose_type current_pose;

  // setters for named parameter idiom
  Type & set__current_pose(
    const std::array<double, 4> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_Feedback
    std::shared_ptr<dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_Feedback
    std::shared_ptr<dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointToPoint_Feedback_ & other) const
  {
    if (this->current_pose != other.current_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointToPoint_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointToPoint_Feedback_

// alias to use template instance with default allocator
using PointToPoint_Feedback =
  dobot_msgs::action::PointToPoint_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dobot_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "dobot_msgs/action/detail/point_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot_msgs__action__PointToPoint_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__action__PointToPoint_SendGoal_Request __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointToPoint_SendGoal_Request_
{
  using Type = PointToPoint_SendGoal_Request_<ContainerAllocator>;

  explicit PointToPoint_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PointToPoint_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const dobot_msgs::action::PointToPoint_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_SendGoal_Request
    std::shared_ptr<dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_SendGoal_Request
    std::shared_ptr<dobot_msgs::action::PointToPoint_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointToPoint_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointToPoint_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointToPoint_SendGoal_Request_

// alias to use template instance with default allocator
using PointToPoint_SendGoal_Request =
  dobot_msgs::action::PointToPoint_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dobot_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot_msgs__action__PointToPoint_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__action__PointToPoint_SendGoal_Response __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointToPoint_SendGoal_Response_
{
  using Type = PointToPoint_SendGoal_Response_<ContainerAllocator>;

  explicit PointToPoint_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PointToPoint_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_SendGoal_Response
    std::shared_ptr<dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_SendGoal_Response
    std::shared_ptr<dobot_msgs::action::PointToPoint_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointToPoint_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointToPoint_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointToPoint_SendGoal_Response_

// alias to use template instance with default allocator
using PointToPoint_SendGoal_Response =
  dobot_msgs::action::PointToPoint_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dobot_msgs

namespace dobot_msgs
{

namespace action
{

struct PointToPoint_SendGoal
{
  using Request = dobot_msgs::action::PointToPoint_SendGoal_Request;
  using Response = dobot_msgs::action::PointToPoint_SendGoal_Response;
};

}  // namespace action

}  // namespace dobot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot_msgs__action__PointToPoint_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__action__PointToPoint_GetResult_Request __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointToPoint_GetResult_Request_
{
  using Type = PointToPoint_GetResult_Request_<ContainerAllocator>;

  explicit PointToPoint_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PointToPoint_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_GetResult_Request
    std::shared_ptr<dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_GetResult_Request
    std::shared_ptr<dobot_msgs::action::PointToPoint_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointToPoint_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointToPoint_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointToPoint_GetResult_Request_

// alias to use template instance with default allocator
using PointToPoint_GetResult_Request =
  dobot_msgs::action::PointToPoint_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dobot_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot_msgs__action__PointToPoint_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__action__PointToPoint_GetResult_Response __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointToPoint_GetResult_Response_
{
  using Type = PointToPoint_GetResult_Response_<ContainerAllocator>;

  explicit PointToPoint_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PointToPoint_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    dobot_msgs::action::PointToPoint_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const dobot_msgs::action::PointToPoint_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_GetResult_Response
    std::shared_ptr<dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_GetResult_Response
    std::shared_ptr<dobot_msgs::action::PointToPoint_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointToPoint_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointToPoint_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointToPoint_GetResult_Response_

// alias to use template instance with default allocator
using PointToPoint_GetResult_Response =
  dobot_msgs::action::PointToPoint_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dobot_msgs

namespace dobot_msgs
{

namespace action
{

struct PointToPoint_GetResult
{
  using Request = dobot_msgs::action::PointToPoint_GetResult_Request;
  using Response = dobot_msgs::action::PointToPoint_GetResult_Response;
};

}  // namespace action

}  // namespace dobot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "dobot_msgs/action/detail/point_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot_msgs__action__PointToPoint_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs__action__PointToPoint_FeedbackMessage __declspec(deprecated)
#endif

namespace dobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointToPoint_FeedbackMessage_
{
  using Type = PointToPoint_FeedbackMessage_<ContainerAllocator>;

  explicit PointToPoint_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PointToPoint_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const dobot_msgs::action::PointToPoint_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_FeedbackMessage
    std::shared_ptr<dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs__action__PointToPoint_FeedbackMessage
    std::shared_ptr<dobot_msgs::action::PointToPoint_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointToPoint_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointToPoint_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointToPoint_FeedbackMessage_

// alias to use template instance with default allocator
using PointToPoint_FeedbackMessage =
  dobot_msgs::action::PointToPoint_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dobot_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace dobot_msgs
{

namespace action
{

struct PointToPoint
{
  /// The goal message defined in the action definition.
  using Goal = dobot_msgs::action::PointToPoint_Goal;
  /// The result message defined in the action definition.
  using Result = dobot_msgs::action::PointToPoint_Result;
  /// The feedback message defined in the action definition.
  using Feedback = dobot_msgs::action::PointToPoint_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = dobot_msgs::action::PointToPoint_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = dobot_msgs::action::PointToPoint_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = dobot_msgs::action::PointToPoint_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PointToPoint PointToPoint;

}  // namespace action

}  // namespace dobot_msgs

#endif  // DOBOT_MSGS__ACTION__DETAIL__POINT_TO_POINT__STRUCT_HPP_
