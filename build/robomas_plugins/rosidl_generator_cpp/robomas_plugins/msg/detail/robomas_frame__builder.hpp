// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomas_plugins:msg/RobomasFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__BUILDER_HPP_
#define ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomas_plugins/msg/detail/robomas_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomas_plugins
{

namespace msg
{

namespace builder
{

class Init_RobomasFrame_stable_pos_limit_vel
{
public:
  explicit Init_RobomasFrame_stable_pos_limit_vel(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  ::robomas_plugins::msg::RobomasFrame stable_pos_limit_vel(::robomas_plugins::msg::RobomasFrame::_stable_pos_limit_vel_type arg)
  {
    msg_.stable_pos_limit_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_tyoku_pos_target
{
public:
  explicit Init_RobomasFrame_tyoku_pos_target(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_stable_pos_limit_vel tyoku_pos_target(::robomas_plugins::msg::RobomasFrame::_tyoku_pos_target_type arg)
  {
    msg_.tyoku_pos_target = std::move(arg);
    return Init_RobomasFrame_stable_pos_limit_vel(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_tyoku_vel_target
{
public:
  explicit Init_RobomasFrame_tyoku_vel_target(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_tyoku_pos_target tyoku_vel_target(::robomas_plugins::msg::RobomasFrame::_tyoku_vel_target_type arg)
  {
    msg_.tyoku_vel_target = std::move(arg);
    return Init_RobomasFrame_tyoku_pos_target(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_poskp
{
public:
  explicit Init_RobomasFrame_poskp(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_tyoku_vel_target poskp(::robomas_plugins::msg::RobomasFrame::_poskp_type arg)
  {
    msg_.poskp = std::move(arg);
    return Init_RobomasFrame_tyoku_vel_target(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_velki
{
public:
  explicit Init_RobomasFrame_velki(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_poskp velki(::robomas_plugins::msg::RobomasFrame::_velki_type arg)
  {
    msg_.velki = std::move(arg);
    return Init_RobomasFrame_poskp(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_velkp
{
public:
  explicit Init_RobomasFrame_velkp(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_velki velkp(::robomas_plugins::msg::RobomasFrame::_velkp_type arg)
  {
    msg_.velkp = std::move(arg);
    return Init_RobomasFrame_velki(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_temp
{
public:
  explicit Init_RobomasFrame_temp(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_velkp temp(::robomas_plugins::msg::RobomasFrame::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_RobomasFrame_velkp(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_mode
{
public:
  explicit Init_RobomasFrame_mode(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_temp mode(::robomas_plugins::msg::RobomasFrame::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RobomasFrame_temp(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_c620
{
public:
  explicit Init_RobomasFrame_c620(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_mode c620(::robomas_plugins::msg::RobomasFrame::_c620_type arg)
  {
    msg_.c620 = std::move(arg);
    return Init_RobomasFrame_mode(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_motor
{
public:
  explicit Init_RobomasFrame_motor(::robomas_plugins::msg::RobomasFrame & msg)
  : msg_(msg)
  {}
  Init_RobomasFrame_c620 motor(::robomas_plugins::msg::RobomasFrame::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return Init_RobomasFrame_c620(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

class Init_RobomasFrame_header
{
public:
  Init_RobomasFrame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobomasFrame_motor header(::robomas_plugins::msg::RobomasFrame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobomasFrame_motor(msg_);
  }

private:
  ::robomas_plugins::msg::RobomasFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomas_plugins::msg::RobomasFrame>()
{
  return robomas_plugins::msg::builder::Init_RobomasFrame_header();
}

}  // namespace robomas_plugins

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__BUILDER_HPP_
