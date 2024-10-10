// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robomas_plugins:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robomas_plugins/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robomas_plugins/msg/detail/frame__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robomas_plugins
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
cdr_serialize(
  const robomas_plugins::msg::Frame & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robomas_plugins::msg::Frame & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
get_serialized_size(
  const robomas_plugins::msg::Frame & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
max_serialized_size_Frame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robomas_plugins

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomas_plugins, msg, Frame)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
