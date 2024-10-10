// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomas_plugins:msg/RobomasTarget.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__TRAITS_HPP_
#define ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomas_plugins/msg/detail/robomas_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robomas_plugins
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobomasTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobomasTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobomasTarget & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robomas_plugins

namespace rosidl_generator_traits
{

[[deprecated("use robomas_plugins::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robomas_plugins::msg::RobomasTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomas_plugins::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomas_plugins::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomas_plugins::msg::RobomasTarget & msg)
{
  return robomas_plugins::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomas_plugins::msg::RobomasTarget>()
{
  return "robomas_plugins::msg::RobomasTarget";
}

template<>
inline const char * name<robomas_plugins::msg::RobomasTarget>()
{
  return "robomas_plugins/msg/RobomasTarget";
}

template<>
struct has_fixed_size<robomas_plugins::msg::RobomasTarget>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomas_plugins::msg::RobomasTarget>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomas_plugins::msg::RobomasTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__TRAITS_HPP_
