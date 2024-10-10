// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomas_plugins:msg/RobomasFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__STRUCT_H_
#define ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RobomasFrame in the package robomas_plugins.
typedef struct robomas_plugins__msg__RobomasFrame
{
  std_msgs__msg__Header header;
  uint8_t motor;
  bool c620;
  uint8_t mode;
  uint8_t temp;
  float velkp;
  float velki;
  float poskp;
  float tyoku_vel_target;
  float tyoku_pos_target;
  float stable_pos_limit_vel;
} robomas_plugins__msg__RobomasFrame;

// Struct for a sequence of robomas_plugins__msg__RobomasFrame.
typedef struct robomas_plugins__msg__RobomasFrame__Sequence
{
  robomas_plugins__msg__RobomasFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomas_plugins__msg__RobomasFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_FRAME__STRUCT_H_
