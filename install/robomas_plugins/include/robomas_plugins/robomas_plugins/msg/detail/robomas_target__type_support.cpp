// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robomas_plugins:msg/RobomasTarget.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robomas_plugins/msg/detail/robomas_target__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robomas_plugins
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobomasTarget_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robomas_plugins::msg::RobomasTarget(_init);
}

void RobomasTarget_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robomas_plugins::msg::RobomasTarget *>(message_memory);
  typed_message->~RobomasTarget();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobomasTarget_message_member_array[1] = {
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomas_plugins::msg::RobomasTarget, target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobomasTarget_message_members = {
  "robomas_plugins::msg",  // message namespace
  "RobomasTarget",  // message name
  1,  // number of fields
  sizeof(robomas_plugins::msg::RobomasTarget),
  RobomasTarget_message_member_array,  // message members
  RobomasTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  RobomasTarget_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobomasTarget_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobomasTarget_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robomas_plugins


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomas_plugins::msg::RobomasTarget>()
{
  return &::robomas_plugins::msg::rosidl_typesupport_introspection_cpp::RobomasTarget_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomas_plugins, msg, RobomasTarget)() {
  return &::robomas_plugins::msg::rosidl_typesupport_introspection_cpp::RobomasTarget_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
