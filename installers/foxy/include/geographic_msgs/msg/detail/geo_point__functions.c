// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/geo_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
geographic_msgs__msg__GeoPoint__init(geographic_msgs__msg__GeoPoint * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  // longitude
  // altitude
  return true;
}

void
geographic_msgs__msg__GeoPoint__fini(geographic_msgs__msg__GeoPoint * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  // longitude
  // altitude
}

geographic_msgs__msg__GeoPoint *
geographic_msgs__msg__GeoPoint__create()
{
  geographic_msgs__msg__GeoPoint * msg = (geographic_msgs__msg__GeoPoint *)malloc(sizeof(geographic_msgs__msg__GeoPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__msg__GeoPoint));
  bool success = geographic_msgs__msg__GeoPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__msg__GeoPoint__destroy(geographic_msgs__msg__GeoPoint * msg)
{
  if (msg) {
    geographic_msgs__msg__GeoPoint__fini(msg);
  }
  free(msg);
}


bool
geographic_msgs__msg__GeoPoint__Sequence__init(geographic_msgs__msg__GeoPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geographic_msgs__msg__GeoPoint * data = NULL;
  if (size) {
    data = (geographic_msgs__msg__GeoPoint *)calloc(size, sizeof(geographic_msgs__msg__GeoPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__msg__GeoPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__msg__GeoPoint__fini(&data[i - 1]);
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
geographic_msgs__msg__GeoPoint__Sequence__fini(geographic_msgs__msg__GeoPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geographic_msgs__msg__GeoPoint__fini(&array->data[i]);
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

geographic_msgs__msg__GeoPoint__Sequence *
geographic_msgs__msg__GeoPoint__Sequence__create(size_t size)
{
  geographic_msgs__msg__GeoPoint__Sequence * array = (geographic_msgs__msg__GeoPoint__Sequence *)malloc(sizeof(geographic_msgs__msg__GeoPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__msg__GeoPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geographic_msgs__msg__GeoPoint__Sequence__destroy(geographic_msgs__msg__GeoPoint__Sequence * array)
{
  if (array) {
    geographic_msgs__msg__GeoPoint__Sequence__fini(array);
  }
  free(array);
}
