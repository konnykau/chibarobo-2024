// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomas_plugins:msg/RobomasTarget.idl
// generated code does not contain a copyright notice
#include "robomas_plugins/msg/detail/robomas_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robomas_plugins__msg__RobomasTarget__init(robomas_plugins__msg__RobomasTarget * msg)
{
  if (!msg) {
    return false;
  }
  // target
  return true;
}

void
robomas_plugins__msg__RobomasTarget__fini(robomas_plugins__msg__RobomasTarget * msg)
{
  if (!msg) {
    return;
  }
  // target
}

bool
robomas_plugins__msg__RobomasTarget__are_equal(const robomas_plugins__msg__RobomasTarget * lhs, const robomas_plugins__msg__RobomasTarget * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  return true;
}

bool
robomas_plugins__msg__RobomasTarget__copy(
  const robomas_plugins__msg__RobomasTarget * input,
  robomas_plugins__msg__RobomasTarget * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  output->target = input->target;
  return true;
}

robomas_plugins__msg__RobomasTarget *
robomas_plugins__msg__RobomasTarget__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__RobomasTarget * msg = (robomas_plugins__msg__RobomasTarget *)allocator.allocate(sizeof(robomas_plugins__msg__RobomasTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomas_plugins__msg__RobomasTarget));
  bool success = robomas_plugins__msg__RobomasTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomas_plugins__msg__RobomasTarget__destroy(robomas_plugins__msg__RobomasTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomas_plugins__msg__RobomasTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomas_plugins__msg__RobomasTarget__Sequence__init(robomas_plugins__msg__RobomasTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__RobomasTarget * data = NULL;

  if (size) {
    data = (robomas_plugins__msg__RobomasTarget *)allocator.zero_allocate(size, sizeof(robomas_plugins__msg__RobomasTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomas_plugins__msg__RobomasTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomas_plugins__msg__RobomasTarget__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robomas_plugins__msg__RobomasTarget__Sequence__fini(robomas_plugins__msg__RobomasTarget__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robomas_plugins__msg__RobomasTarget__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robomas_plugins__msg__RobomasTarget__Sequence *
robomas_plugins__msg__RobomasTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__RobomasTarget__Sequence * array = (robomas_plugins__msg__RobomasTarget__Sequence *)allocator.allocate(sizeof(robomas_plugins__msg__RobomasTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomas_plugins__msg__RobomasTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomas_plugins__msg__RobomasTarget__Sequence__destroy(robomas_plugins__msg__RobomasTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomas_plugins__msg__RobomasTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomas_plugins__msg__RobomasTarget__Sequence__are_equal(const robomas_plugins__msg__RobomasTarget__Sequence * lhs, const robomas_plugins__msg__RobomasTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomas_plugins__msg__RobomasTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomas_plugins__msg__RobomasTarget__Sequence__copy(
  const robomas_plugins__msg__RobomasTarget__Sequence * input,
  robomas_plugins__msg__RobomasTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomas_plugins__msg__RobomasTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomas_plugins__msg__RobomasTarget * data =
      (robomas_plugins__msg__RobomasTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomas_plugins__msg__RobomasTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomas_plugins__msg__RobomasTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomas_plugins__msg__RobomasTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
