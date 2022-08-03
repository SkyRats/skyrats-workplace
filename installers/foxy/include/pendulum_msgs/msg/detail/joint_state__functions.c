// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pendulum_msgs:msg/JointState.idl
// generated code does not contain a copyright notice
#include "pendulum_msgs/msg/detail/joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
pendulum_msgs__msg__JointState__init(pendulum_msgs__msg__JointState * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // velocity
  // effort
  return true;
}

void
pendulum_msgs__msg__JointState__fini(pendulum_msgs__msg__JointState * msg)
{
  if (!msg) {
    return;
  }
  // position
  // velocity
  // effort
}

pendulum_msgs__msg__JointState *
pendulum_msgs__msg__JointState__create()
{
  pendulum_msgs__msg__JointState * msg = (pendulum_msgs__msg__JointState *)malloc(sizeof(pendulum_msgs__msg__JointState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pendulum_msgs__msg__JointState));
  bool success = pendulum_msgs__msg__JointState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pendulum_msgs__msg__JointState__destroy(pendulum_msgs__msg__JointState * msg)
{
  if (msg) {
    pendulum_msgs__msg__JointState__fini(msg);
  }
  free(msg);
}


bool
pendulum_msgs__msg__JointState__Sequence__init(pendulum_msgs__msg__JointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pendulum_msgs__msg__JointState * data = NULL;
  if (size) {
    data = (pendulum_msgs__msg__JointState *)calloc(size, sizeof(pendulum_msgs__msg__JointState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pendulum_msgs__msg__JointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pendulum_msgs__msg__JointState__fini(&data[i - 1]);
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
pendulum_msgs__msg__JointState__Sequence__fini(pendulum_msgs__msg__JointState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pendulum_msgs__msg__JointState__fini(&array->data[i]);
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

pendulum_msgs__msg__JointState__Sequence *
pendulum_msgs__msg__JointState__Sequence__create(size_t size)
{
  pendulum_msgs__msg__JointState__Sequence * array = (pendulum_msgs__msg__JointState__Sequence *)malloc(sizeof(pendulum_msgs__msg__JointState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pendulum_msgs__msg__JointState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pendulum_msgs__msg__JointState__Sequence__destroy(pendulum_msgs__msg__JointState__Sequence * array)
{
  if (array) {
    pendulum_msgs__msg__JointState__Sequence__fini(array);
  }
  free(array);
}
