// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomas_plugins:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__BUILDER_HPP_
#define ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomas_plugins/msg/detail/frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomas_plugins
{

namespace msg
{

namespace builder
{

class Init_Frame_data
{
public:
  explicit Init_Frame_data(::robomas_plugins::msg::Frame & msg)
  : msg_(msg)
  {}
  ::robomas_plugins::msg::Frame data(::robomas_plugins::msg::Frame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomas_plugins::msg::Frame msg_;
};

class Init_Frame_dlc
{
public:
  explicit Init_Frame_dlc(::robomas_plugins::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_data dlc(::robomas_plugins::msg::Frame::_dlc_type arg)
  {
    msg_.dlc = std::move(arg);
    return Init_Frame_data(msg_);
  }

private:
  ::robomas_plugins::msg::Frame msg_;
};

class Init_Frame_is_error
{
public:
  explicit Init_Frame_is_error(::robomas_plugins::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_dlc is_error(::robomas_plugins::msg::Frame::_is_error_type arg)
  {
    msg_.is_error = std::move(arg);
    return Init_Frame_dlc(msg_);
  }

private:
  ::robomas_plugins::msg::Frame msg_;
};

class Init_Frame_is_extended
{
public:
  explicit Init_Frame_is_extended(::robomas_plugins::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_is_error is_extended(::robomas_plugins::msg::Frame::_is_extended_type arg)
  {
    msg_.is_extended = std::move(arg);
    return Init_Frame_is_error(msg_);
  }

private:
  ::robomas_plugins::msg::Frame msg_;
};

class Init_Frame_is_rtr
{
public:
  explicit Init_Frame_is_rtr(::robomas_plugins::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_is_extended is_rtr(::robomas_plugins::msg::Frame::_is_rtr_type arg)
  {
    msg_.is_rtr = std::move(arg);
    return Init_Frame_is_extended(msg_);
  }

private:
  ::robomas_plugins::msg::Frame msg_;
};

class Init_Frame_id
{
public:
  explicit Init_Frame_id(::robomas_plugins::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_is_rtr id(::robomas_plugins::msg::Frame::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Frame_is_rtr(msg_);
  }

private:
  ::robomas_plugins::msg::Frame msg_;
};

class Init_Frame_header
{
public:
  Init_Frame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Frame_id header(::robomas_plugins::msg::Frame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Frame_id(msg_);
  }

private:
  ::robomas_plugins::msg::Frame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomas_plugins::msg::Frame>()
{
  return robomas_plugins::msg::builder::Init_Frame_header();
}

}  // namespace robomas_plugins

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__BUILDER_HPP_
