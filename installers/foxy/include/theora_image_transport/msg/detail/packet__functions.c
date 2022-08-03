// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from theora_image_transport:msg/Packet.idl
// generated code does not contain a copyright notice
#include "theora_image_transport/msg/detail/packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
theora_image_transport__msg__Packet__init(theora_image_transport__msg__Packet * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    theora_image_transport__msg__Packet__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    theora_image_transport__msg__Packet__fini(msg);
    return false;
  }
  // b_o_s
  // e_o_s
  // granulepos
  // packetno
  return true;
}

void
theora_image_transport__msg__Packet__fini(theora_image_transport__msg__Packet * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // b_o_s
  // e_o_s
  // granulepos
  // packetno
}

theora_image_transport__msg__Packet *
theora_image_transport__msg__Packet__create()
{
  theora_image_transport__msg__Packet * msg = (theora_image_transport__msg__Packet *)malloc(sizeof(theora_image_transport__msg__Packet));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(theora_image_transport__msg__Packet));
  bool success = theora_image_transport__msg__Packet__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
theora_image_transport__msg__Packet__destroy(theora_image_transport__msg__Packet * msg)
{
  if (msg) {
    theora_image_transport__msg__Packet__fini(msg);
  }
  free(msg);
}


bool
theora_image_transport__msg__Packet__Sequence__init(theora_image_transport__msg__Packet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  theora_image_transport__msg__Packet * data = NULL;
  if (size) {
    data = (theora_image_transport__msg__Packet *)calloc(size, sizeof(theora_image_transport__msg__Packet));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = theora_image_transport__msg__Packet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        theora_image_transport__msg__Packet__fini(&data[i - 1]);
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
theora_image_transport__msg__Packet__Sequence__fini(theora_image_transport__msg__Packet__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      theora_image_transport__msg__Packet__fini(&array->data[i]);
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

theora_image_transport__msg__Packet__Sequence *
theora_image_transport__msg__Packet__Sequence__create(size_t size)
{
  theora_image_transport__msg__Packet__Sequence * array = (theora_image_transport__msg__Packet__Sequence *)malloc(sizeof(theora_image_transport__msg__Packet__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = theora_image_transport__msg__Packet__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
theora_image_transport__msg__Packet__Sequence__destroy(theora_image_transport__msg__Packet__Sequence * array)
{
  if (array) {
    theora_image_transport__msg__Packet__Sequence__fini(array);
  }
  free(array);
}
