// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robomas_plugins:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__FUNCTIONS_H_
#define ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robomas_plugins/msg/rosidl_generator_c__visibility_control.h"

#include "robomas_plugins/msg/detail/frame__struct.h"

/// Initialize msg/Frame message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomas_plugins__msg__Frame
 * )) before or use
 * robomas_plugins__msg__Frame__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
bool
robomas_plugins__msg__Frame__init(robomas_plugins__msg__Frame * msg);

/// Finalize msg/Frame message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
void
robomas_plugins__msg__Frame__fini(robomas_plugins__msg__Frame * msg);

/// Create msg/Frame message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomas_plugins__msg__Frame__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
robomas_plugins__msg__Frame *
robomas_plugins__msg__Frame__create();

/// Destroy msg/Frame message.
/**
 * It calls
 * robomas_plugins__msg__Frame__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
void
robomas_plugins__msg__Frame__destroy(robomas_plugins__msg__Frame * msg);

/// Check for msg/Frame message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
bool
robomas_plugins__msg__Frame__are_equal(const robomas_plugins__msg__Frame * lhs, const robomas_plugins__msg__Frame * rhs);

/// Copy a msg/Frame message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
bool
robomas_plugins__msg__Frame__copy(
  const robomas_plugins__msg__Frame * input,
  robomas_plugins__msg__Frame * output);

/// Initialize array of msg/Frame messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomas_plugins__msg__Frame__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
bool
robomas_plugins__msg__Frame__Sequence__init(robomas_plugins__msg__Frame__Sequence * array, size_t size);

/// Finalize array of msg/Frame messages.
/**
 * It calls
 * robomas_plugins__msg__Frame__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
void
robomas_plugins__msg__Frame__Sequence__fini(robomas_plugins__msg__Frame__Sequence * array);

/// Create array of msg/Frame messages.
/**
 * It allocates the memory for the array and calls
 * robomas_plugins__msg__Frame__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
robomas_plugins__msg__Frame__Sequence *
robomas_plugins__msg__Frame__Sequence__create(size_t size);

/// Destroy array of msg/Frame messages.
/**
 * It calls
 * robomas_plugins__msg__Frame__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
void
robomas_plugins__msg__Frame__Sequence__destroy(robomas_plugins__msg__Frame__Sequence * array);

/// Check for msg/Frame message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
bool
robomas_plugins__msg__Frame__Sequence__are_equal(const robomas_plugins__msg__Frame__Sequence * lhs, const robomas_plugins__msg__Frame__Sequence * rhs);

/// Copy an array of msg/Frame messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomas_plugins
bool
robomas_plugins__msg__Frame__Sequence__copy(
  const robomas_plugins__msg__Frame__Sequence * input,
  robomas_plugins__msg__Frame__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOMAS_PLUGINS__MSG__DETAIL__FRAME__FUNCTIONS_H_
