// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomas_plugins:msg/Frame.idl
// generated code does not contain a copyright notice
#include "robomas_plugins/msg/detail/frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
robomas_plugins__msg__Frame__init(robomas_plugins__msg__Frame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robomas_plugins__msg__Frame__fini(msg);
    return false;
  }
  // id
  // is_rtr
  // is_extended
  // is_error
  // dlc
  // data
  return true;
}

void
robomas_plugins__msg__Frame__fini(robomas_plugins__msg__Frame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // is_rtr
  // is_extended
  // is_error
  // dlc
  // data
}

bool
robomas_plugins__msg__Frame__are_equal(const robomas_plugins__msg__Frame * lhs, const robomas_plugins__msg__Frame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // is_rtr
  if (lhs->is_rtr != rhs->is_rtr) {
    return false;
  }
  // is_extended
  if (lhs->is_extended != rhs->is_extended) {
    return false;
  }
  // is_error
  if (lhs->is_error != rhs->is_error) {
    return false;
  }
  // dlc
  if (lhs->dlc != rhs->dlc) {
    return false;
  }
  // data
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
robomas_plugins__msg__Frame__copy(
  const robomas_plugins__msg__Frame * input,
  robomas_plugins__msg__Frame * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // is_rtr
  output->is_rtr = input->is_rtr;
  // is_extended
  output->is_extended = input->is_extended;
  // is_error
  output->is_error = input->is_error;
  // dlc
  output->dlc = input->dlc;
  // data
  for (size_t i = 0; i < 8; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

robomas_plugins__msg__Frame *
robomas_plugins__msg__Frame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__Frame * msg = (robomas_plugins__msg__Frame *)allocator.allocate(sizeof(robomas_plugins__msg__Frame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomas_plugins__msg__Frame));
  bool success = robomas_plugins__msg__Frame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomas_plugins__msg__Frame__destroy(robomas_plugins__msg__Frame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomas_plugins__msg__Frame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomas_plugins__msg__Frame__Sequence__init(robomas_plugins__msg__Frame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__Frame * data = NULL;

  if (size) {
    data = (robomas_plugins__msg__Frame *)allocator.zero_allocate(size, sizeof(robomas_plugins__msg__Frame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomas_plugins__msg__Frame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomas_plugins__msg__Frame__fini(&data[i - 1]);
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
robomas_plugins__msg__Frame__Sequence__fini(robomas_plugins__msg__Frame__Sequence * array)
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
      robomas_plugins__msg__Frame__fini(&array->data[i]);
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

robomas_plugins__msg__Frame__Sequence *
robomas_plugins__msg__Frame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__Frame__Sequence * array = (robomas_plugins__msg__Frame__Sequence *)allocator.allocate(sizeof(robomas_plugins__msg__Frame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomas_plugins__msg__Frame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomas_plugins__msg__Frame__Sequence__destroy(robomas_plugins__msg__Frame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomas_plugins__msg__Frame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomas_plugins__msg__Frame__Sequence__are_equal(const robomas_plugins__msg__Frame__Sequence * lhs, const robomas_plugins__msg__Frame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomas_plugins__msg__Frame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomas_plugins__msg__Frame__Sequence__copy(
  const robomas_plugins__msg__Frame__Sequence * input,
  robomas_plugins__msg__Frame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomas_plugins__msg__Frame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomas_plugins__msg__Frame * data =
      (robomas_plugins__msg__Frame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomas_plugins__msg__Frame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomas_plugins__msg__Frame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomas_plugins__msg__Frame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
