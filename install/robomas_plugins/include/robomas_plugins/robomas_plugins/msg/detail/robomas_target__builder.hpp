// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomas_plugins:msg/RobomasTarget.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__BUILDER_HPP_
#define ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomas_plugins/msg/detail/robomas_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomas_plugins
{

namespace msg
{

namespace builder
{

class Init_RobomasTarget_target
{
public:
  Init_RobomasTarget_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomas_plugins::msg::RobomasTarget target(::robomas_plugins::msg::RobomasTarget::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomas_plugins::msg::RobomasTarget>()
{
  return robomas_plugins::msg::builder::Init_RobomasTarget_target();
}

}  // namespace robomas_plugins

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__BUILDER_HPP_
