// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/controller_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `state`
// Member `type`
// Member `claimed_interfaces`
#include "rosidl_runtime_c/string_functions.h"

bool
controller_manager_msgs__msg__ControllerState__init(controller_manager_msgs__msg__ControllerState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // claimed_interfaces
  if (!rosidl_runtime_c__String__Sequence__init(&msg->claimed_interfaces, 0)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  return true;
}

void
controller_manager_msgs__msg__ControllerState__fini(controller_manager_msgs__msg__ControllerState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // claimed_interfaces
  rosidl_runtime_c__String__Sequence__fini(&msg->claimed_interfaces);
}

controller_manager_msgs__msg__ControllerState *
controller_manager_msgs__msg__ControllerState__create()
{
  controller_manager_msgs__msg__ControllerState * msg = (controller_manager_msgs__msg__ControllerState *)malloc(sizeof(controller_manager_msgs__msg__ControllerState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__msg__ControllerState));
  bool success = controller_manager_msgs__msg__ControllerState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__msg__ControllerState__destroy(controller_manager_msgs__msg__ControllerState * msg)
{
  if (msg) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
  }
  free(msg);
}


bool
controller_manager_msgs__msg__ControllerState__Sequence__init(controller_manager_msgs__msg__ControllerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_manager_msgs__msg__ControllerState * data = NULL;
  if (size) {
    data = (controller_manager_msgs__msg__ControllerState *)calloc(size, sizeof(controller_manager_msgs__msg__ControllerState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__msg__ControllerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__msg__ControllerState__fini(&data[i - 1]);
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
controller_manager_msgs__msg__ControllerState__Sequence__fini(controller_manager_msgs__msg__ControllerState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_manager_msgs__msg__ControllerState__fini(&array->data[i]);
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

controller_manager_msgs__msg__ControllerState__Sequence *
controller_manager_msgs__msg__ControllerState__Sequence__create(size_t size)
{
  controller_manager_msgs__msg__ControllerState__Sequence * array = (controller_manager_msgs__msg__ControllerState__Sequence *)malloc(sizeof(controller_manager_msgs__msg__ControllerState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__msg__ControllerState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__msg__ControllerState__Sequence__destroy(controller_manager_msgs__msg__ControllerState__Sequence * array)
{
  if (array) {
    controller_manager_msgs__msg__ControllerState__Sequence__fini(array);
  }
  free(array);
}
