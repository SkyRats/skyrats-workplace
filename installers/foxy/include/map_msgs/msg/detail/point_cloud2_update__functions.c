// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from map_msgs:msg/PointCloud2Update.idl
// generated code does not contain a copyright notice
#include "map_msgs/msg/detail/point_cloud2_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
map_msgs__msg__PointCloud2Update__init(map_msgs__msg__PointCloud2Update * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    map_msgs__msg__PointCloud2Update__fini(msg);
    return false;
  }
  // type
  // points
  if (!sensor_msgs__msg__PointCloud2__init(&msg->points)) {
    map_msgs__msg__PointCloud2Update__fini(msg);
    return false;
  }
  return true;
}

void
map_msgs__msg__PointCloud2Update__fini(map_msgs__msg__PointCloud2Update * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type
  // points
  sensor_msgs__msg__PointCloud2__fini(&msg->points);
}

map_msgs__msg__PointCloud2Update *
map_msgs__msg__PointCloud2Update__create()
{
  map_msgs__msg__PointCloud2Update * msg = (map_msgs__msg__PointCloud2Update *)malloc(sizeof(map_msgs__msg__PointCloud2Update));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(map_msgs__msg__PointCloud2Update));
  bool success = map_msgs__msg__PointCloud2Update__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
map_msgs__msg__PointCloud2Update__destroy(map_msgs__msg__PointCloud2Update * msg)
{
  if (msg) {
    map_msgs__msg__PointCloud2Update__fini(msg);
  }
  free(msg);
}


bool
map_msgs__msg__PointCloud2Update__Sequence__init(map_msgs__msg__PointCloud2Update__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  map_msgs__msg__PointCloud2Update * data = NULL;
  if (size) {
    data = (map_msgs__msg__PointCloud2Update *)calloc(size, sizeof(map_msgs__msg__PointCloud2Update));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = map_msgs__msg__PointCloud2Update__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        map_msgs__msg__PointCloud2Update__fini(&data[i - 1]);
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
map_msgs__msg__PointCloud2Update__Sequence__fini(map_msgs__msg__PointCloud2Update__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      map_msgs__msg__PointCloud2Update__fini(&array->data[i]);
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

map_msgs__msg__PointCloud2Update__Sequence *
map_msgs__msg__PointCloud2Update__Sequence__create(size_t size)
{
  map_msgs__msg__PointCloud2Update__Sequence * array = (map_msgs__msg__PointCloud2Update__Sequence *)malloc(sizeof(map_msgs__msg__PointCloud2Update__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = map_msgs__msg__PointCloud2Update__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
map_msgs__msg__PointCloud2Update__Sequence__destroy(map_msgs__msg__PointCloud2Update__Sequence * array)
{
  if (array) {
    map_msgs__msg__PointCloud2Update__Sequence__fini(array);
  }
  free(array);
}
