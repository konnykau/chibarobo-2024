// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robomas_plugins:msg/RobomasFrame.idl
// generated code does not contain a copyright notice
#include "robomas_plugins/msg/detail/robomas_frame__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robomas_plugins/msg/detail/robomas_frame__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace robomas_plugins
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
cdr_serialize(
  const robomas_plugins::msg::RobomasFrame & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: motor
  cdr << ros_message.motor;
  // Member: c620
  cdr << (ros_message.c620 ? true : false);
  // Member: mode
  cdr << ros_message.mode;
  // Member: temp
  cdr << ros_message.temp;
  // Member: velkp
  cdr << ros_message.velkp;
  // Member: velki
  cdr << ros_message.velki;
  // Member: poskp
  cdr << ros_message.poskp;
  // Member: tyoku_vel_target
  cdr << ros_message.tyoku_vel_target;
  // Member: tyoku_pos_target
  cdr << ros_message.tyoku_pos_target;
  // Member: stable_pos_limit_vel
  cdr << ros_message.stable_pos_limit_vel;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robomas_plugins::msg::RobomasFrame & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: motor
  cdr >> ros_message.motor;

  // Member: c620
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.c620 = tmp ? true : false;
  }

  // Member: mode
  cdr >> ros_message.mode;

  // Member: temp
  cdr >> ros_message.temp;

  // Member: velkp
  cdr >> ros_message.velkp;

  // Member: velki
  cdr >> ros_message.velki;

  // Member: poskp
  cdr >> ros_message.poskp;

  // Member: tyoku_vel_target
  cdr >> ros_message.tyoku_vel_target;

  // Member: tyoku_pos_target
  cdr >> ros_message.tyoku_pos_target;

  // Member: stable_pos_limit_vel
  cdr >> ros_message.stable_pos_limit_vel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
get_serialized_size(
  const robomas_plugins::msg::RobomasFrame & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: motor
  {
    size_t item_size = sizeof(ros_message.motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c620
  {
    size_t item_size = sizeof(ros_message.c620);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp
  {
    size_t item_size = sizeof(ros_message.temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velkp
  {
    size_t item_size = sizeof(ros_message.velkp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velki
  {
    size_t item_size = sizeof(ros_message.velki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: poskp
  {
    size_t item_size = sizeof(ros_message.poskp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tyoku_vel_target
  {
    size_t item_size = sizeof(ros_message.tyoku_vel_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tyoku_pos_target
  {
    size_t item_size = sizeof(ros_message.tyoku_pos_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stable_pos_limit_vel
  {
    size_t item_size = sizeof(ros_message.stable_pos_limit_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomas_plugins
max_serialized_size_RobomasFrame(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: motor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: c620
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: velkp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velki
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: poskp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tyoku_vel_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tyoku_pos_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stable_pos_limit_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RobomasFrame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robomas_plugins::msg::RobomasFrame *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobomasFrame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robomas_plugins::msg::RobomasFrame *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobomasFrame__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robomas_plugins::msg::RobomasFrame *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobomasFrame__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobomasFrame(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobomasFrame__callbacks = {
  "robomas_plugins::msg",
  "RobomasFrame",
  _RobomasFrame__cdr_serialize,
  _RobomasFrame__cdr_deserialize,
  _RobomasFrame__get_serialized_size,
  _RobomasFrame__max_serialized_size
};

static rosidl_message_type_support_t _RobomasFrame__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobomasFrame__callbacks,
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
get_message_type_support_handle<robomas_plugins::msg::RobomasFrame>()
{
  return &robomas_plugins::msg::typesupport_fastrtps_cpp::_RobomasFrame__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomas_plugins, msg, RobomasFrame)() {
  return &robomas_plugins::msg::typesupport_fastrtps_cpp::_RobomasFrame__handle;
}

#ifdef __cplusplus
}
#endif
