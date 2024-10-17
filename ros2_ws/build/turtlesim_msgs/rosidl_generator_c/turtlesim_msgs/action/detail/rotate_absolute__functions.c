// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_msgs:action/RotateAbsolute.idl
// generated code does not contain a copyright notice
#include "turtlesim_msgs/action/detail/rotate_absolute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
turtlesim_msgs__action__RotateAbsolute_Goal__init(turtlesim_msgs__action__RotateAbsolute_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // theta
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_Goal__fini(turtlesim_msgs__action__RotateAbsolute_Goal * msg)
{
  if (!msg) {
    return;
  }
  // theta
}

bool
turtlesim_msgs__action__RotateAbsolute_Goal__are_equal(const turtlesim_msgs__action__RotateAbsolute_Goal * lhs, const turtlesim_msgs__action__RotateAbsolute_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_Goal__copy(
  const turtlesim_msgs__action__RotateAbsolute_Goal * input,
  turtlesim_msgs__action__RotateAbsolute_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // theta
  output->theta = input->theta;
  return true;
}

turtlesim_msgs__action__RotateAbsolute_Goal *
turtlesim_msgs__action__RotateAbsolute_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Goal * msg = (turtlesim_msgs__action__RotateAbsolute_Goal *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_Goal));
  bool success = turtlesim_msgs__action__RotateAbsolute_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_Goal__destroy(turtlesim_msgs__action__RotateAbsolute_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_Goal__Sequence__init(turtlesim_msgs__action__RotateAbsolute_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Goal * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_Goal *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_Goal__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_Goal__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_Goal__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_Goal__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_Goal__Sequence *
turtlesim_msgs__action__RotateAbsolute_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Goal__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_Goal__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_Goal__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_Goal__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_Goal__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_Goal__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_Goal__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_Goal * data =
      (turtlesim_msgs__action__RotateAbsolute_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtlesim_msgs__action__RotateAbsolute_Result__init(turtlesim_msgs__action__RotateAbsolute_Result * msg)
{
  if (!msg) {
    return false;
  }
  // delta
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_Result__fini(turtlesim_msgs__action__RotateAbsolute_Result * msg)
{
  if (!msg) {
    return;
  }
  // delta
}

bool
turtlesim_msgs__action__RotateAbsolute_Result__are_equal(const turtlesim_msgs__action__RotateAbsolute_Result * lhs, const turtlesim_msgs__action__RotateAbsolute_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // delta
  if (lhs->delta != rhs->delta) {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_Result__copy(
  const turtlesim_msgs__action__RotateAbsolute_Result * input,
  turtlesim_msgs__action__RotateAbsolute_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // delta
  output->delta = input->delta;
  return true;
}

turtlesim_msgs__action__RotateAbsolute_Result *
turtlesim_msgs__action__RotateAbsolute_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Result * msg = (turtlesim_msgs__action__RotateAbsolute_Result *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_Result));
  bool success = turtlesim_msgs__action__RotateAbsolute_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_Result__destroy(turtlesim_msgs__action__RotateAbsolute_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_Result__Sequence__init(turtlesim_msgs__action__RotateAbsolute_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Result * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_Result *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_Result__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_Result__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_Result__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_Result__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_Result__Sequence *
turtlesim_msgs__action__RotateAbsolute_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Result__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_Result__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_Result__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_Result__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_Result__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_Result__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_Result__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_Result * data =
      (turtlesim_msgs__action__RotateAbsolute_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtlesim_msgs__action__RotateAbsolute_Feedback__init(turtlesim_msgs__action__RotateAbsolute_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remaining
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_Feedback__fini(turtlesim_msgs__action__RotateAbsolute_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remaining
}

bool
turtlesim_msgs__action__RotateAbsolute_Feedback__are_equal(const turtlesim_msgs__action__RotateAbsolute_Feedback * lhs, const turtlesim_msgs__action__RotateAbsolute_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remaining
  if (lhs->remaining != rhs->remaining) {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_Feedback__copy(
  const turtlesim_msgs__action__RotateAbsolute_Feedback * input,
  turtlesim_msgs__action__RotateAbsolute_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // remaining
  output->remaining = input->remaining;
  return true;
}

turtlesim_msgs__action__RotateAbsolute_Feedback *
turtlesim_msgs__action__RotateAbsolute_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Feedback * msg = (turtlesim_msgs__action__RotateAbsolute_Feedback *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_Feedback));
  bool success = turtlesim_msgs__action__RotateAbsolute_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_Feedback__destroy(turtlesim_msgs__action__RotateAbsolute_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence__init(turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Feedback * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_Feedback *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_Feedback__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_Feedback__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence *
turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_Feedback * data =
      (turtlesim_msgs__action__RotateAbsolute_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "turtlesim_msgs/action/detail/rotate_absolute__functions.h"

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__init(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!turtlesim_msgs__action__RotateAbsolute_Goal__init(&msg->goal)) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__fini(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  turtlesim_msgs__action__RotateAbsolute_Goal__fini(&msg->goal);
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__are_equal(const turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * lhs, const turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!turtlesim_msgs__action__RotateAbsolute_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__copy(
  const turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * input,
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!turtlesim_msgs__action__RotateAbsolute_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

turtlesim_msgs__action__RotateAbsolute_SendGoal_Request *
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * msg = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Request *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request));
  bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__destroy(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__init(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Request *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence *
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Request * data =
      (turtlesim_msgs__action__RotateAbsolute_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__init(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__fini(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__are_equal(const turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * lhs, const turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__copy(
  const turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * input,
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

turtlesim_msgs__action__RotateAbsolute_SendGoal_Response *
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * msg = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Response *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response));
  bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__destroy(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__init(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Response *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence *
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Response * data =
      (turtlesim_msgs__action__RotateAbsolute_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "turtlesim_msgs/action/detail/rotate_absolute__functions.h"

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__init(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__fini(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__are_equal(const turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * lhs, const turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__copy(
  const turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * input,
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

turtlesim_msgs__action__RotateAbsolute_SendGoal_Event *
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * msg = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Event *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event));
  bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__destroy(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence__init(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Event *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence *
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_SendGoal_Event * data =
      (turtlesim_msgs__action__RotateAbsolute_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__init(turtlesim_msgs__action__RotateAbsolute_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__fini(turtlesim_msgs__action__RotateAbsolute_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__are_equal(const turtlesim_msgs__action__RotateAbsolute_GetResult_Request * lhs, const turtlesim_msgs__action__RotateAbsolute_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__copy(
  const turtlesim_msgs__action__RotateAbsolute_GetResult_Request * input,
  turtlesim_msgs__action__RotateAbsolute_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

turtlesim_msgs__action__RotateAbsolute_GetResult_Request *
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Request * msg = (turtlesim_msgs__action__RotateAbsolute_GetResult_Request *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Request));
  bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__destroy(turtlesim_msgs__action__RotateAbsolute_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__init(turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Request * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_GetResult_Request *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_GetResult_Request__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_GetResult_Request__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence *
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_GetResult_Request * data =
      (turtlesim_msgs__action__RotateAbsolute_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "turtlesim_msgs/action/detail/rotate_absolute__functions.h"

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__init(turtlesim_msgs__action__RotateAbsolute_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!turtlesim_msgs__action__RotateAbsolute_Result__init(&msg->result)) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__fini(turtlesim_msgs__action__RotateAbsolute_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  turtlesim_msgs__action__RotateAbsolute_Result__fini(&msg->result);
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__are_equal(const turtlesim_msgs__action__RotateAbsolute_GetResult_Response * lhs, const turtlesim_msgs__action__RotateAbsolute_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!turtlesim_msgs__action__RotateAbsolute_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__copy(
  const turtlesim_msgs__action__RotateAbsolute_GetResult_Response * input,
  turtlesim_msgs__action__RotateAbsolute_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!turtlesim_msgs__action__RotateAbsolute_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

turtlesim_msgs__action__RotateAbsolute_GetResult_Response *
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Response * msg = (turtlesim_msgs__action__RotateAbsolute_GetResult_Response *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Response));
  bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__destroy(turtlesim_msgs__action__RotateAbsolute_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__init(turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Response * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_GetResult_Response *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_GetResult_Response__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_GetResult_Response__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence *
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_GetResult_Response * data =
      (turtlesim_msgs__action__RotateAbsolute_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "turtlesim_msgs/action/detail/rotate_absolute__functions.h"

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__init(turtlesim_msgs__action__RotateAbsolute_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__init(&msg->request, 0)) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__init(&msg->response, 0)) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__fini(turtlesim_msgs__action__RotateAbsolute_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__fini(&msg->request);
  // response
  turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__fini(&msg->response);
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__are_equal(const turtlesim_msgs__action__RotateAbsolute_GetResult_Event * lhs, const turtlesim_msgs__action__RotateAbsolute_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__copy(
  const turtlesim_msgs__action__RotateAbsolute_GetResult_Event * input,
  turtlesim_msgs__action__RotateAbsolute_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

turtlesim_msgs__action__RotateAbsolute_GetResult_Event *
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Event * msg = (turtlesim_msgs__action__RotateAbsolute_GetResult_Event *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Event));
  bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__destroy(turtlesim_msgs__action__RotateAbsolute_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence__init(turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Event * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_GetResult_Event *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_GetResult_Event__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_GetResult_Event__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence *
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_GetResult_Event * data =
      (turtlesim_msgs__action__RotateAbsolute_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "turtlesim_msgs/action/detail/rotate_absolute__functions.h"

bool
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__init(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!turtlesim_msgs__action__RotateAbsolute_Feedback__init(&msg->feedback)) {
    turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__fini(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  turtlesim_msgs__action__RotateAbsolute_Feedback__fini(&msg->feedback);
}

bool
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__are_equal(const turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * lhs, const turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!turtlesim_msgs__action__RotateAbsolute_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__copy(
  const turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * input,
  turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!turtlesim_msgs__action__RotateAbsolute_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

turtlesim_msgs__action__RotateAbsolute_FeedbackMessage *
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * msg = (turtlesim_msgs__action__RotateAbsolute_FeedbackMessage *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage));
  bool success = turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__destroy(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence__init(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * data = NULL;

  if (size) {
    data = (turtlesim_msgs__action__RotateAbsolute_FeedbackMessage *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__fini(&data[i - 1]);
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
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence__fini(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence * array)
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
      turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__fini(&array->data[i]);
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

turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence *
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence * array = (turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence__destroy(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence__are_equal(const turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence * lhs, const turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence__copy(
  const turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence * input,
  turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__action__RotateAbsolute_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__action__RotateAbsolute_FeedbackMessage * data =
      (turtlesim_msgs__action__RotateAbsolute_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__action__RotateAbsolute_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
