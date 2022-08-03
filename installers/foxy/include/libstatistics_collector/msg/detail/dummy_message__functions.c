// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from libstatistics_collector:msg/DummyMessage.idl
// generated code does not contain a copyright notice
#include "libstatistics_collector/msg/detail/dummy_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
libstatistics_collector__msg__DummyMessage__init(libstatistics_collector__msg__DummyMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    libstatistics_collector__msg__DummyMessage__fini(msg);
    return false;
  }
  return true;
}

void
libstatistics_collector__msg__DummyMessage__fini(libstatistics_collector__msg__DummyMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
}

libstatistics_collector__msg__DummyMessage *
libstatistics_collector__msg__DummyMessage__create()
{
  libstatistics_collector__msg__DummyMessage * msg = (libstatistics_collector__msg__DummyMessage *)malloc(sizeof(libstatistics_collector__msg__DummyMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(libstatistics_collector__msg__DummyMessage));
  bool success = libstatistics_collector__msg__DummyMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
libstatistics_collector__msg__DummyMessage__destroy(libstatistics_collector__msg__DummyMessage * msg)
{
  if (msg) {
    libstatistics_collector__msg__DummyMessage__fini(msg);
  }
  free(msg);
}


bool
libstatistics_collector__msg__DummyMessage__Sequence__init(libstatistics_collector__msg__DummyMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  libstatistics_collector__msg__DummyMessage * data = NULL;
  if (size) {
    data = (libstatistics_collector__msg__DummyMessage *)calloc(size, sizeof(libstatistics_collector__msg__DummyMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = libstatistics_collector__msg__DummyMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        libstatistics_collector__msg__DummyMessage__fini(&data[i - 1]);
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
libstatistics_collector__msg__DummyMessage__Sequence__fini(libstatistics_collector__msg__DummyMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      libstatistics_collector__msg__DummyMessage__fini(&array->data[i]);
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

libstatistics_collector__msg__DummyMessage__Sequence *
libstatistics_collector__msg__DummyMessage__Sequence__create(size_t size)
{
  libstatistics_collector__msg__DummyMessage__Sequence * array = (libstatistics_collector__msg__DummyMessage__Sequence *)malloc(sizeof(libstatistics_collector__msg__DummyMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = libstatistics_collector__msg__DummyMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
libstatistics_collector__msg__DummyMessage__Sequence__destroy(libstatistics_collector__msg__DummyMessage__Sequence * array)
{
  if (array) {
    libstatistics_collector__msg__DummyMessage__Sequence__fini(array);
  }
  free(array);
}
