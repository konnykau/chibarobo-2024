// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomas_plugins:msg/RobomasTarget.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__STRUCT_H_
#define ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobomasTarget in the package robomas_plugins.
typedef struct robomas_plugins__msg__RobomasTarget
{
  float target;
} robomas_plugins__msg__RobomasTarget;

// Struct for a sequence of robomas_plugins__msg__RobomasTarget.
typedef struct robomas_plugins__msg__RobomasTarget__Sequence
{
  robomas_plugins__msg__RobomasTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomas_plugins__msg__RobomasTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__ROBOMAS_TARGET__STRUCT_H_
