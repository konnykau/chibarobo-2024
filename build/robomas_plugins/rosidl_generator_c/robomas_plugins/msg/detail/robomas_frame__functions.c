// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomas_plugins:msg/RobomasFrame.idl
// generated code does not contain a copyright notice
#include "robomas_plugins/msg/detail/robomas_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
robomas_plugins__msg__RobomasFrame__init(robomas_plugins__msg__RobomasFrame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robomas_plugins__msg__RobomasFrame__fini(msg);
    return false;
  }
  // motor
  // c620
  // mode
  // temp
  // velkp
  // velki
  // poskp
  // tyoku_vel_target
  // tyoku_pos_target
  // stable_pos_limit_vel
  return true;
}

void
robomas_plugins__msg__RobomasFrame__fini(robomas_plugins__msg__RobomasFrame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // motor
  // c620
  // mode
  // temp
  // velkp
  // velki
  // poskp
  // tyoku_vel_target
  // tyoku_pos_target
  // stable_pos_limit_vel
}

bool
robomas_plugins__msg__RobomasFrame__are_equal(const robomas_plugins__msg__RobomasFrame * lhs, const robomas_plugins__msg__RobomasFrame * rhs)
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
  // motor
  if (lhs->motor != rhs->motor) {
    return false;
  }
  // c620
  if (lhs->c620 != rhs->c620) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // velkp
  if (lhs->velkp != rhs->velkp) {
    return false;
  }
  // velki
  if (lhs->velki != rhs->velki) {
    return false;
  }
  // poskp
  if (lhs->poskp != rhs->poskp) {
    return false;
  }
  // tyoku_vel_target
  if (lhs->tyoku_vel_target != rhs->tyoku_vel_target) {
    return false;
  }
  // tyoku_pos_target
  if (lhs->tyoku_pos_target != rhs->tyoku_pos_target) {
    return false;
  }
  // stable_pos_limit_vel
  if (lhs->stable_pos_limit_vel != rhs->stable_pos_limit_vel) {
    return false;
  }
  return true;
}

bool
robomas_plugins__msg__RobomasFrame__copy(
  const robomas_plugins__msg__RobomasFrame * input,
  robomas_plugins__msg__RobomasFrame * output)
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
  // motor
  output->motor = input->motor;
  // c620
  output->c620 = input->c620;
  // mode
  output->mode = input->mode;
  // temp
  output->temp = input->temp;
  // velkp
  output->velkp = input->velkp;
  // velki
  output->velki = input->velki;
  // poskp
  output->poskp = input->poskp;
  // tyoku_vel_target
  output->tyoku_vel_target = input->tyoku_vel_target;
  // tyoku_pos_target
  output->tyoku_pos_target = input->tyoku_pos_target;
  // stable_pos_limit_vel
  output->stable_pos_limit_vel = input->stable_pos_limit_vel;
  return true;
}

robomas_plugins__msg__RobomasFrame *
robomas_plugins__msg__RobomasFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__RobomasFrame * msg = (robomas_plugins__msg__RobomasFrame *)allocator.allocate(sizeof(robomas_plugins__msg__RobomasFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomas_plugins__msg__RobomasFrame));
  bool success = robomas_plugins__msg__RobomasFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomas_plugins__msg__RobomasFrame__destroy(robomas_plugins__msg__RobomasFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomas_plugins__msg__RobomasFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomas_plugins__msg__RobomasFrame__Sequence__init(robomas_plugins__msg__RobomasFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__RobomasFrame * data = NULL;

  if (size) {
    data = (robomas_plugins__msg__RobomasFrame *)allocator.zero_allocate(size, sizeof(robomas_plugins__msg__RobomasFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomas_plugins__msg__RobomasFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomas_plugins__msg__RobomasFrame__fini(&data[i - 1]);
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
robomas_plugins__msg__RobomasFrame__Sequence__fini(robomas_plugins__msg__RobomasFrame__Sequence * array)
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
      robomas_plugins__msg__RobomasFrame__fini(&array->data[i]);
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

robomas_plugins__msg__RobomasFrame__Sequence *
robomas_plugins__msg__RobomasFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomas_plugins__msg__RobomasFrame__Sequence * array = (robomas_plugins__msg__RobomasFrame__Sequence *)allocator.allocate(sizeof(robomas_plugins__msg__RobomasFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomas_plugins__msg__RobomasFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomas_plugins__msg__RobomasFrame__Sequence__destroy(robomas_plugins__msg__RobomasFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomas_plugins__msg__RobomasFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomas_plugins__msg__RobomasFrame__Sequence__are_equal(const robomas_plugins__msg__RobomasFrame__Sequence * lhs, const robomas_plugins__msg__RobomasFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomas_plugins__msg__RobomasFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomas_plugins__msg__RobomasFrame__Sequence__copy(
  const robomas_plugins__msg__RobomasFrame__Sequence * input,
  robomas_plugins__msg__RobomasFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomas_plugins__msg__RobomasFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomas_plugins__msg__RobomasFrame * data =
      (robomas_plugins__msg__RobomasFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomas_plugins__msg__RobomasFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomas_plugins__msg__RobomasFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomas_plugins__msg__RobomasFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
