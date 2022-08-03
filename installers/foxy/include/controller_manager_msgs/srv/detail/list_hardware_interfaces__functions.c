// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
controller_manager_msgs__srv__ListHardwareInterfaces_Request__init(controller_manager_msgs__srv__ListHardwareInterfaces_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
controller_manager_msgs__srv__ListHardwareInterfaces_Request__fini(controller_manager_msgs__srv__ListHardwareInterfaces_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

controller_manager_msgs__srv__ListHardwareInterfaces_Request *
controller_manager_msgs__srv__ListHardwareInterfaces_Request__create()
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Request * msg = (controller_manager_msgs__srv__ListHardwareInterfaces_Request *)malloc(sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Request));
  bool success = controller_manager_msgs__srv__ListHardwareInterfaces_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__srv__ListHardwareInterfaces_Request__destroy(controller_manager_msgs__srv__ListHardwareInterfaces_Request * msg)
{
  if (msg) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Request__fini(msg);
  }
  free(msg);
}


bool
controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence__init(controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_manager_msgs__srv__ListHardwareInterfaces_Request * data = NULL;
  if (size) {
    data = (controller_manager_msgs__srv__ListHardwareInterfaces_Request *)calloc(size, sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__srv__ListHardwareInterfaces_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__srv__ListHardwareInterfaces_Request__fini(&data[i - 1]);
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
controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence__fini(controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_manager_msgs__srv__ListHardwareInterfaces_Request__fini(&array->data[i]);
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

controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence *
controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence__create(size_t size)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence * array = (controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence *)malloc(sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence__destroy(controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence * array)
{
  if (array) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"

bool
controller_manager_msgs__srv__ListHardwareInterfaces_Response__init(controller_manager_msgs__srv__ListHardwareInterfaces_Response * msg)
{
  if (!msg) {
    return false;
  }
  // command_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__init(&msg->command_interfaces, 0)) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__fini(msg);
    return false;
  }
  // state_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__init(&msg->state_interfaces, 0)) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__fini(msg);
    return false;
  }
  return true;
}

void
controller_manager_msgs__srv__ListHardwareInterfaces_Response__fini(controller_manager_msgs__srv__ListHardwareInterfaces_Response * msg)
{
  if (!msg) {
    return;
  }
  // command_interfaces
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(&msg->command_interfaces);
  // state_interfaces
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(&msg->state_interfaces);
}

controller_manager_msgs__srv__ListHardwareInterfaces_Response *
controller_manager_msgs__srv__ListHardwareInterfaces_Response__create()
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Response * msg = (controller_manager_msgs__srv__ListHardwareInterfaces_Response *)malloc(sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Response));
  bool success = controller_manager_msgs__srv__ListHardwareInterfaces_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__srv__ListHardwareInterfaces_Response__destroy(controller_manager_msgs__srv__ListHardwareInterfaces_Response * msg)
{
  if (msg) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__fini(msg);
  }
  free(msg);
}


bool
controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence__init(controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_manager_msgs__srv__ListHardwareInterfaces_Response * data = NULL;
  if (size) {
    data = (controller_manager_msgs__srv__ListHardwareInterfaces_Response *)calloc(size, sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__srv__ListHardwareInterfaces_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__srv__ListHardwareInterfaces_Response__fini(&data[i - 1]);
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
controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence__fini(controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_manager_msgs__srv__ListHardwareInterfaces_Response__fini(&array->data[i]);
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

controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence *
controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence__create(size_t size)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence * array = (controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence *)malloc(sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence__destroy(controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence * array)
{
  if (array) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence__fini(array);
  }
  free(array);
}
