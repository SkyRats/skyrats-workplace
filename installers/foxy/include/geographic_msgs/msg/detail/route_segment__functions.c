// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/route_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
// Member `start`
// Member `end`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__functions.h"

bool
geographic_msgs__msg__RouteSegment__init(geographic_msgs__msg__RouteSegment * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->id)) {
    geographic_msgs__msg__RouteSegment__fini(msg);
    return false;
  }
  // start
  if (!unique_identifier_msgs__msg__UUID__init(&msg->start)) {
    geographic_msgs__msg__RouteSegment__fini(msg);
    return false;
  }
  // end
  if (!unique_identifier_msgs__msg__UUID__init(&msg->end)) {
    geographic_msgs__msg__RouteSegment__fini(msg);
    return false;
  }
  // props
  if (!geographic_msgs__msg__KeyValue__Sequence__init(&msg->props, 0)) {
    geographic_msgs__msg__RouteSegment__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__msg__RouteSegment__fini(geographic_msgs__msg__RouteSegment * msg)
{
  if (!msg) {
    return;
  }
  // id
  unique_identifier_msgs__msg__UUID__fini(&msg->id);
  // start
  unique_identifier_msgs__msg__UUID__fini(&msg->start);
  // end
  unique_identifier_msgs__msg__UUID__fini(&msg->end);
  // props
  geographic_msgs__msg__KeyValue__Sequence__fini(&msg->props);
}

geographic_msgs__msg__RouteSegment *
geographic_msgs__msg__RouteSegment__create()
{
  geographic_msgs__msg__RouteSegment * msg = (geographic_msgs__msg__RouteSegment *)malloc(sizeof(geographic_msgs__msg__RouteSegment));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__msg__RouteSegment));
  bool success = geographic_msgs__msg__RouteSegment__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__msg__RouteSegment__destroy(geographic_msgs__msg__RouteSegment * msg)
{
  if (msg) {
    geographic_msgs__msg__RouteSegment__fini(msg);
  }
  free(msg);
}


bool
geographic_msgs__msg__RouteSegment__Sequence__init(geographic_msgs__msg__RouteSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geographic_msgs__msg__RouteSegment * data = NULL;
  if (size) {
    data = (geographic_msgs__msg__RouteSegment *)calloc(size, sizeof(geographic_msgs__msg__RouteSegment));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__msg__RouteSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__msg__RouteSegment__fini(&data[i - 1]);
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
geographic_msgs__msg__RouteSegment__Sequence__fini(geographic_msgs__msg__RouteSegment__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geographic_msgs__msg__RouteSegment__fini(&array->data[i]);
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

geographic_msgs__msg__RouteSegment__Sequence *
geographic_msgs__msg__RouteSegment__Sequence__create(size_t size)
{
  geographic_msgs__msg__RouteSegment__Sequence * array = (geographic_msgs__msg__RouteSegment__Sequence *)malloc(sizeof(geographic_msgs__msg__RouteSegment__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__msg__RouteSegment__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geographic_msgs__msg__RouteSegment__Sequence__destroy(geographic_msgs__msg__RouteSegment__Sequence * array)
{
  if (array) {
    geographic_msgs__msg__RouteSegment__Sequence__fini(array);
  }
  free(array);
}
