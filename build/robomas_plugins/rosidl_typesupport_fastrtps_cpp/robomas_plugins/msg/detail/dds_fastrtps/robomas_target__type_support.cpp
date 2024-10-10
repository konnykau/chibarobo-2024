// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robomas_plugins:msg/RobomasTarget.idl
// generated code does not contain a copyright notice
#include "robomas_plugins/msg/detail/robomas_target__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robomas_plugins/msg/detail/robomas_target__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robomas_plugins
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
cdr_serialize(
  const robomas_plugins::msg::RobomasTarget & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target
  cdr << ros_message.target;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robomas_plugins::msg::RobomasTarget & ros_message)
{
  // Member: target
  cdr >> ros_message.target;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
get_serialized_size(
  const robomas_plugins::msg::RobomasTarget & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target
  {
    size_t item_size = sizeof(ros_message.target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
max_serialized_size_RobomasTarget(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RobomasTarget__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robomas_plugins::msg::RobomasTarget *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobomasTarget__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robomas_plugins::msg::RobomasTarget *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobomasTarget__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robomas_plugins::msg::RobomasTarget *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobomasTarget__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobomasTarget(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobomasTarget__callbacks = {
  "robomas_plugins::msg",
  "RobomasTarget",
  _RobomasTarget__cdr_serialize,
  _RobomasTarget__cdr_deserialize,
  _RobomasTarget__get_serialized_size,
  _RobomasTarget__max_serialized_size
};

static rosidl_message_type_support_t _RobomasTarget__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobomasTarget__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robomas_plugins

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robomas_plugins
const rosidl_message_type_support_t *
get_message_type_support_handle<robomas_plugins::msg::RobomasTarget>()
{
  return &robomas_plugins::msg::typesupport_fastrtps_cpp::_RobomasTarget__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomas_plugins, msg, RobomasTarget)() {
  return &robomas_plugins::msg::typesupport_fastrtps_cpp::_RobomasTarget__handle;
}

#ifdef __cplusplus
}
#endif
