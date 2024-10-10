// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robomas_plugins:msg/RobomasFrame.idl
// generated code does not contain a copyright notice
#include "robomas_plugins/msg/detail/robomas_frame__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robomas_plugins/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robomas_plugins/msg/detail/robomas_frame__struct.h"
#include "robomas_plugins/msg/detail/robomas_frame__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomas_plugins
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomas_plugins
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomas_plugins
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _RobomasFrame__ros_msg_type = robomas_plugins__msg__RobomasFrame;

static bool _RobomasFrame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobomasFrame__ros_msg_type * ros_message = static_cast<const _RobomasFrame__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: motor
  {
    cdr << ros_message->motor;
  }

  // Field name: c620
  {
    cdr << (ros_message->c620 ? true : false);
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: temp
  {
    cdr << ros_message->temp;
  }

  // Field name: velkp
  {
    cdr << ros_message->velkp;
  }

  // Field name: velki
  {
    cdr << ros_message->velki;
  }

  // Field name: poskp
  {
    cdr << ros_message->poskp;
  }

  // Field name: tyoku_vel_target
  {
    cdr << ros_message->tyoku_vel_target;
  }

  // Field name: tyoku_pos_target
  {
    cdr << ros_message->tyoku_pos_target;
  }

  // Field name: stable_pos_limit_vel
  {
    cdr << ros_message->stable_pos_limit_vel;
  }

  return true;
}

static bool _RobomasFrame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobomasFrame__ros_msg_type * ros_message = static_cast<_RobomasFrame__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: motor
  {
    cdr >> ros_message->motor;
  }

  // Field name: c620
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->c620 = tmp ? true : false;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: temp
  {
    cdr >> ros_message->temp;
  }

  // Field name: velkp
  {
    cdr >> ros_message->velkp;
  }

  // Field name: velki
  {
    cdr >> ros_message->velki;
  }

  // Field name: poskp
  {
    cdr >> ros_message->poskp;
  }

  // Field name: tyoku_vel_target
  {
    cdr >> ros_message->tyoku_vel_target;
  }

  // Field name: tyoku_pos_target
  {
    cdr >> ros_message->tyoku_pos_target;
  }

  // Field name: stable_pos_limit_vel
  {
    cdr >> ros_message->stable_pos_limit_vel;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robomas_plugins
size_t get_serialized_size_robomas_plugins__msg__RobomasFrame(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobomasFrame__ros_msg_type * ros_message = static_cast<const _RobomasFrame__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name motor
  {
    size_t item_size = sizeof(ros_message->motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c620
  {
    size_t item_size = sizeof(ros_message->c620);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp
  {
    size_t item_size = sizeof(ros_message->temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velkp
  {
    size_t item_size = sizeof(ros_message->velkp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velki
  {
    size_t item_size = sizeof(ros_message->velki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poskp
  {
    size_t item_size = sizeof(ros_message->poskp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tyoku_vel_target
  {
    size_t item_size = sizeof(ros_message->tyoku_vel_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tyoku_pos_target
  {
    size_t item_size = sizeof(ros_message->tyoku_pos_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stable_pos_limit_vel
  {
    size_t item_size = sizeof(ros_message->stable_pos_limit_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobomasFrame__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robomas_plugins__msg__RobomasFrame(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robomas_plugins
size_t max_serialized_size_robomas_plugins__msg__RobomasFrame(
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

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: motor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: c620
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velkp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velki
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: poskp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tyoku_vel_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tyoku_pos_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stable_pos_limit_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RobomasFrame__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robomas_plugins__msg__RobomasFrame(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobomasFrame = {
  "robomas_plugins::msg",
  "RobomasFrame",
  _RobomasFrame__cdr_serialize,
  _RobomasFrame__cdr_deserialize,
  _RobomasFrame__get_serialized_size,
  _RobomasFrame__max_serialized_size
};

static rosidl_message_type_support_t _RobomasFrame__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobomasFrame,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robomas_plugins, msg, RobomasFrame)() {
  return &_RobomasFrame__type_support;
}

#if defined(__cplusplus)
}
#endif
