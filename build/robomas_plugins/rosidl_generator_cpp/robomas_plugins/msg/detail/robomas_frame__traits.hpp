// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomas_plugins:msg/RobomasFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__TRAITS_HPP_
#define ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomas_plugins/msg/detail/robomas_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace robomas_plugins
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobomasFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: motor
  {
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << ", ";
  }

  // member: c620
  {
    out << "c620: ";
    rosidl_generator_traits::value_to_yaml(msg.c620, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: velkp
  {
    out << "velkp: ";
    rosidl_generator_traits::value_to_yaml(msg.velkp, out);
    out << ", ";
  }

  // member: velki
  {
    out << "velki: ";
    rosidl_generator_traits::value_to_yaml(msg.velki, out);
    out << ", ";
  }

  // member: poskp
  {
    out << "poskp: ";
    rosidl_generator_traits::value_to_yaml(msg.poskp, out);
    out << ", ";
  }

  // member: tyoku_vel_target
  {
    out << "tyoku_vel_target: ";
    rosidl_generator_traits::value_to_yaml(msg.tyoku_vel_target, out);
    out << ", ";
  }

  // member: tyoku_pos_target
  {
    out << "tyoku_pos_target: ";
    rosidl_generator_traits::value_to_yaml(msg.tyoku_pos_target, out);
    out << ", ";
  }

  // member: stable_pos_limit_vel
  {
    out << "stable_pos_limit_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.stable_pos_limit_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobomasFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << "\n";
  }

  // member: c620
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c620: ";
    rosidl_generator_traits::value_to_yaml(msg.c620, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: velkp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velkp: ";
    rosidl_generator_traits::value_to_yaml(msg.velkp, out);
    out << "\n";
  }

  // member: velki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velki: ";
    rosidl_generator_traits::value_to_yaml(msg.velki, out);
    out << "\n";
  }

  // member: poskp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poskp: ";
    rosidl_generator_traits::value_to_yaml(msg.poskp, out);
    out << "\n";
  }

  // member: tyoku_vel_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tyoku_vel_target: ";
    rosidl_generator_traits::value_to_yaml(msg.tyoku_vel_target, out);
    out << "\n";
  }

  // member: tyoku_pos_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tyoku_pos_target: ";
    rosidl_generator_traits::value_to_yaml(msg.tyoku_pos_target, out);
    out << "\n";
  }

  // member: stable_pos_limit_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stable_pos_limit_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.stable_pos_limit_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobomasFrame & msg, bool use_flow_style = false)
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
  const robomas_plugins::msg::RobomasFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomas_plugins::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomas_plugins::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomas_plugins::msg::RobomasFrame & msg)
{
  return robomas_plugins::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomas_plugins::msg::RobomasFrame>()
{
  return "robomas_plugins::msg::RobomasFrame";
}

template<>
inline const char * name<robomas_plugins::msg::RobomasFrame>()
{
  return "robomas_plugins/msg/RobomasFrame";
}

template<>
struct has_fixed_size<robomas_plugins::msg::RobomasFrame>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<robomas_plugins::msg::RobomasFrame>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<robomas_plugins::msg::RobomasFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__TRAITS_HPP_
