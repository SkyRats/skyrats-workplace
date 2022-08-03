// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pendulum_msgs:msg/RttestResults.idl
// generated code does not contain a copyright notice
#include "pendulum_msgs/msg/detail/rttest_results__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `command`
#include "pendulum_msgs/msg/detail/joint_command__functions.h"
// Member `state`
#include "pendulum_msgs/msg/detail/joint_state__functions.h"

bool
pendulum_msgs__msg__RttestResults__init(pendulum_msgs__msg__RttestResults * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pendulum_msgs__msg__RttestResults__fini(msg);
    return false;
  }
  // command
  if (!pendulum_msgs__msg__JointCommand__init(&msg->command)) {
    pendulum_msgs__msg__RttestResults__fini(msg);
    return false;
  }
  // state
  if (!pendulum_msgs__msg__JointState__init(&msg->state)) {
    pendulum_msgs__msg__RttestResults__fini(msg);
    return false;
  }
  // cur_latency
  // mean_latency
  // min_latency
  // max_latency
  // minor_pagefaults
  // major_pagefaults
  return true;
}

void
pendulum_msgs__msg__RttestResults__fini(pendulum_msgs__msg__RttestResults * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // command
  pendulum_msgs__msg__JointCommand__fini(&msg->command);
  // state
  pendulum_msgs__msg__JointState__fini(&msg->state);
  // cur_latency
  // mean_latency
  // min_latency
  // max_latency
  // minor_pagefaults
  // major_pagefaults
}

pendulum_msgs__msg__RttestResults *
pendulum_msgs__msg__RttestResults__create()
{
  pendulum_msgs__msg__RttestResults * msg = (pendulum_msgs__msg__RttestResults *)malloc(sizeof(pendulum_msgs__msg__RttestResults));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pendulum_msgs__msg__RttestResults));
  bool success = pendulum_msgs__msg__RttestResults__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pendulum_msgs__msg__RttestResults__destroy(pendulum_msgs__msg__RttestResults * msg)
{
  if (msg) {
    pendulum_msgs__msg__RttestResults__fini(msg);
  }
  free(msg);
}


bool
pendulum_msgs__msg__RttestResults__Sequence__init(pendulum_msgs__msg__RttestResults__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pendulum_msgs__msg__RttestResults * data = NULL;
  if (size) {
    data = (pendulum_msgs__msg__RttestResults *)calloc(size, sizeof(pendulum_msgs__msg__RttestResults));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pendulum_msgs__msg__RttestResults__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pendulum_msgs__msg__RttestResults__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pendulum_msgs__msg__RttestResults__Sequence__fini(pendulum_msgs__msg__RttestResults__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pendulum_msgs__msg__RttestResults__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pendulum_msgs__msg__RttestResults__Sequence *
pendulum_msgs__msg__RttestResults__Sequence__create(size_t size)
{
  pendulum_msgs__msg__RttestResults__Sequence * array = (pendulum_msgs__msg__RttestResults__Sequence *)malloc(sizeof(pendulum_msgs__msg__RttestResults__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pendulum_msgs__msg__RttestResults__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pendulum_msgs__msg__RttestResults__Sequence__destroy(pendulum_msgs__msg__RttestResults__Sequence * array)
{
  if (array) {
    pendulum_msgs__msg__RttestResults__Sequence__fini(array);
  }
  free(array);
}
