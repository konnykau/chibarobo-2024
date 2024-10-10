// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomas_plugins:msg/RobomasTarget.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__STRUCT_HPP_
#define ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomas_plugins__msg__RobomasTarget __attribute__((deprecated))
#else
# define DEPRECATED__robomas_plugins__msg__RobomasTarget __declspec(deprecated)
#endif

namespace robomas_plugins
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobomasTarget_
{
  using Type = RobomasTarget_<ContainerAllocator>;

  explicit RobomasTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = 0.0f;
    }
  }

  explicit RobomasTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = 0.0f;
    }
  }

  // field types and members
  using _target_type =
    float;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const float & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomas_plugins::msg::RobomasTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomas_plugins::msg::RobomasTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomas_plugins::msg::RobomasTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomas_plugins::msg::RobomasTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomas_plugins::msg::RobomasTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomas_plugins::msg::RobomasTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomas_plugins::msg::RobomasTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomas_plugins::msg::RobomasTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomas_plugins::msg::RobomasTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomas_plugins::msg::RobomasTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomas_plugins__msg__RobomasTarget
    std::shared_ptr<robomas_plugins::msg::RobomasTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomas_plugins__msg__RobomasTarget
    std::shared_ptr<robomas_plugins::msg::RobomasTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobomasTarget_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobomasTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobomasTarget_

// alias to use template instance with default allocator
using RobomasTarget =
  robomas_plugins::msg::RobomasTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomas_plugins

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__STRUCT_HPP_
