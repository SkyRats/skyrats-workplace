// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
controller_manager_msgs__msg__HardwareInterface__init(controller_manager_msgs__msg__HardwareInterface * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    controller_manager_msgs__msg__HardwareInterface__fini(msg);
    return false;
  }
  // is_claimed
  return true;
}

void
controller_manager_msgs__msg__HardwareInterface__fini(controller_manager_msgs__msg__HardwareInterface * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // is_claimed
}

controller_manager_msgs__msg__HardwareInterface *
controller_manager_msgs__msg__HardwareInterface__create()
{
  controller_manager_msgs__msg__HardwareInterface * msg = (controller_manager_msgs__msg__HardwareInterface *)malloc(sizeof(controller_manager_msgs__msg__HardwareInterface));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__msg__HardwareInterface));
  bool success = controller_manager_msgs__msg__HardwareInterface__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__msg__HardwareInterface__destroy(controller_manager_msgs__msg__HardwareInterface * msg)
{
  if (msg) {
    controller_manager_msgs__msg__HardwareInterface__fini(msg);
  }
  free(msg);
}


bool
controller_manager_msgs__msg__HardwareInterface__Sequence__init(controller_manager_msgs__msg__HardwareInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_manager_msgs__msg__HardwareInterface * data = NULL;
  if (size) {
    data = (controller_manager_msgs__msg__HardwareInterface *)calloc(size, sizeof(controller_manager_msgs__msg__HardwareInterface));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__msg__HardwareInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__msg__HardwareInterface__fini(&data[i - 1]);
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
controller_manager_msgs__msg__HardwareInterface__Sequence__fini(controller_manager_msgs__msg__HardwareInterface__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_manager_msgs__msg__HardwareInterface__fini(&array->data[i]);
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

controller_manager_msgs__msg__HardwareInterface__Sequence *
controller_manager_msgs__msg__HardwareInterface__Sequence__create(size_t size)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * array = (controller_manager_msgs__msg__HardwareInterface__Sequence *)malloc(sizeof(controller_manager_msgs__msg__HardwareInterface__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__msg__HardwareInterface__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__msg__HardwareInterface__Sequence__destroy(controller_manager_msgs__msg__HardwareInterface__Sequence * array)
{
  if (array) {
    controller_manager_msgs__msg__HardwareInterface__Sequence__fini(array);
  }
  free(array);
}
