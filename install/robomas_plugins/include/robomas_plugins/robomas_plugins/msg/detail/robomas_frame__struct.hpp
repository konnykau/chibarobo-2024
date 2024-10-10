// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomas_plugins:msg/RobomasFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__STRUCT_HPP_
#define ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__STRUCT_HPP_

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
# define DEPRECATED__robomas_plugins__msg__RobomasFrame __attribute__((deprecated))
#else
# define DEPRECATED__robomas_plugins__msg__RobomasFrame __declspec(deprecated)
#endif

namespace robomas_plugins
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobomasFrame_
{
  using Type = RobomasFrame_<ContainerAllocator>;

  explicit RobomasFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor = 0;
      this->c620 = false;
      this->mode = 0;
      this->temp = 0;
      this->velkp = 0.0f;
      this->velki = 0.0f;
      this->poskp = 0.0f;
      this->tyoku_vel_target = 0.0f;
      this->tyoku_pos_target = 0.0f;
      this->stable_pos_limit_vel = 0.0f;
    }
  }

  explicit RobomasFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor = 0;
      this->c620 = false;
      this->mode = 0;
      this->temp = 0;
      this->velkp = 0.0f;
      this->velki = 0.0f;
      this->poskp = 0.0f;
      this->tyoku_vel_target = 0.0f;
      this->tyoku_pos_target = 0.0f;
      this->stable_pos_limit_vel = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motor_type =
    uint8_t;
  _motor_type motor;
  using _c620_type =
    bool;
  _c620_type c620;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _temp_type =
    uint8_t;
  _temp_type temp;
  using _velkp_type =
    float;
  _velkp_type velkp;
  using _velki_type =
    float;
  _velki_type velki;
  using _poskp_type =
    float;
  _poskp_type poskp;
  using _tyoku_vel_target_type =
    float;
  _tyoku_vel_target_type tyoku_vel_target;
  using _tyoku_pos_target_type =
    float;
  _tyoku_pos_target_type tyoku_pos_target;
  using _stable_pos_limit_vel_type =
    float;
  _stable_pos_limit_vel_type stable_pos_limit_vel;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motor(
    const uint8_t & _arg)
  {
    this->motor = _arg;
    return *this;
  }
  Type & set__c620(
    const bool & _arg)
  {
    this->c620 = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__temp(
    const uint8_t & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__velkp(
    const float & _arg)
  {
    this->velkp = _arg;
    return *this;
  }
  Type & set__velki(
    const float & _arg)
  {
    this->velki = _arg;
    return *this;
  }
  Type & set__poskp(
    const float & _arg)
  {
    this->poskp = _arg;
    return *this;
  }
  Type & set__tyoku_vel_target(
    const float & _arg)
  {
    this->tyoku_vel_target = _arg;
    return *this;
  }
  Type & set__tyoku_pos_target(
    const float & _arg)
  {
    this->tyoku_pos_target = _arg;
    return *this;
  }
  Type & set__stable_pos_limit_vel(
    const float & _arg)
  {
    this->stable_pos_limit_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomas_plugins::msg::RobomasFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomas_plugins::msg::RobomasFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomas_plugins::msg::RobomasFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomas_plugins::msg::RobomasFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomas_plugins::msg::RobomasFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomas_plugins::msg::RobomasFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomas_plugins::msg::RobomasFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomas_plugins::msg::RobomasFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomas_plugins::msg::RobomasFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomas_plugins::msg::RobomasFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomas_plugins__msg__RobomasFrame
    std::shared_ptr<robomas_plugins::msg::RobomasFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomas_plugins__msg__RobomasFrame
    std::shared_ptr<robomas_plugins::msg::RobomasFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobomasFrame_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motor != other.motor) {
      return false;
    }
    if (this->c620 != other.c620) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->velkp != other.velkp) {
      return false;
    }
    if (this->velki != other.velki) {
      return false;
    }
    if (this->poskp != other.poskp) {
      return false;
    }
    if (this->tyoku_vel_target != other.tyoku_vel_target) {
      return false;
    }
    if (this->tyoku_pos_target != other.tyoku_pos_target) {
      return false;
    }
    if (this->stable_pos_limit_vel != other.stable_pos_limit_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobomasFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobomasFrame_

// alias to use template instance with default allocator
using RobomasFrame =
  robomas_plugins::msg::RobomasFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomas_plugins

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__STRUCT_HPP_
