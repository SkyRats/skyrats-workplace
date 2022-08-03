// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:msg/RouteNetwork.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/route_network__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `bounds`
#include "geographic_msgs/msg/detail/bounding_box__functions.h"
// Member `points`
#include "geographic_msgs/msg/detail/way_point__functions.h"
// Member `segments`
#include "geographic_msgs/msg/detail/route_segment__functions.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__functions.h"

bool
geographic_msgs__msg__RouteNetwork__init(geographic_msgs__msg__RouteNetwork * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geographic_msgs__msg__RouteNetwork__fini(msg);
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->id)) {
    geographic_msgs__msg__RouteNetwork__fini(msg);
    return false;
  }
  // bounds
  if (!geographic_msgs__msg__BoundingBox__init(&msg->bounds)) {
    geographic_msgs__msg__RouteNetwork__fini(msg);
    return false;
  }
  // points
  if (!geographic_msgs__msg__WayPoint__Sequence__init(&msg->points, 0)) {
    geographic_msgs__msg__RouteNetwork__fini(msg);
    return false;
  }
  // segments
  if (!geographic_msgs__msg__RouteSegment__Sequence__init(&msg->segments, 0)) {
    geographic_msgs__msg__RouteNetwork__fini(msg);
    return false;
  }
  // props
  if (!geographic_msgs__msg__KeyValue__Sequence__init(&msg->props, 0)) {
    geographic_msgs__msg__RouteNetwork__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__msg__RouteNetwork__fini(geographic_msgs__msg__RouteNetwork * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  unique_identifier_msgs__msg__UUID__fini(&msg->id);
  // bounds
  geographic_msgs__msg__BoundingBox__fini(&msg->bounds);
  // points
  geographic_msgs__msg__WayPoint__Sequence__fini(&msg->points);
  // segments
  geographic_msgs__msg__RouteSegment__Sequence__fini(&msg->segments);
  // props
  geographic_msgs__msg__KeyValue__Sequence__fini(&msg->props);
}

geographic_msgs__msg__RouteNetwork *
geographic_msgs__msg__RouteNetwork__create()
{
  geographic_msgs__msg__RouteNetwork * msg = (geographic_msgs__msg__RouteNetwork *)malloc(sizeof(geographic_msgs__msg__RouteNetwork));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__msg__RouteNetwork));
  bool success = geographic_msgs__msg__RouteNetwork__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__msg__RouteNetwork__destroy(geographic_msgs__msg__RouteNetwork * msg)
{
  if (msg) {
    geographic_msgs__msg__RouteNetwork__fini(msg);
  }
  free(msg);
}


bool
geographic_msgs__msg__RouteNetwork__Sequence__init(geographic_msgs__msg__RouteNetwork__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geographic_msgs__msg__RouteNetwork * data = NULL;
  if (size) {
    data = (geographic_msgs__msg__RouteNetwork *)calloc(size, sizeof(geographic_msgs__msg__RouteNetwork));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__msg__RouteNetwork__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__msg__RouteNetwork__fini(&data[i - 1]);
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
geographic_msgs__msg__RouteNetwork__Sequence__fini(geographic_msgs__msg__RouteNetwork__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geographic_msgs__msg__RouteNetwork__fini(&array->data[i]);
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

geographic_msgs__msg__RouteNetwork__Sequence *
geographic_msgs__msg__RouteNetwork__Sequence__create(size_t size)
{
  geographic_msgs__msg__RouteNetwork__Sequence * array = (geographic_msgs__msg__RouteNetwork__Sequence *)malloc(sizeof(geographic_msgs__msg__RouteNetwork__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__msg__RouteNetwork__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geographic_msgs__msg__RouteNetwork__Sequence__destroy(geographic_msgs__msg__RouteNetwork__Sequence * array)
{
  if (array) {
    geographic_msgs__msg__RouteNetwork__Sequence__fini(array);
  }
  free(array);
}
