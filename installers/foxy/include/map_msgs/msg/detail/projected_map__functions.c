// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from map_msgs:msg/ProjectedMap.idl
// generated code does not contain a copyright notice
#include "map_msgs/msg/detail/projected_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map`
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"

bool
map_msgs__msg__ProjectedMap__init(map_msgs__msg__ProjectedMap * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__init(&msg->map)) {
    map_msgs__msg__ProjectedMap__fini(msg);
    return false;
  }
  // min_z
  // max_z
  return true;
}

void
map_msgs__msg__ProjectedMap__fini(map_msgs__msg__ProjectedMap * msg)
{
  if (!msg) {
    return;
  }
  // map
  nav_msgs__msg__OccupancyGrid__fini(&msg->map);
  // min_z
  // max_z
}

map_msgs__msg__ProjectedMap *
map_msgs__msg__ProjectedMap__create()
{
  map_msgs__msg__ProjectedMap * msg = (map_msgs__msg__ProjectedMap *)malloc(sizeof(map_msgs__msg__ProjectedMap));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(map_msgs__msg__ProjectedMap));
  bool success = map_msgs__msg__ProjectedMap__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
map_msgs__msg__ProjectedMap__destroy(map_msgs__msg__ProjectedMap * msg)
{
  if (msg) {
    map_msgs__msg__ProjectedMap__fini(msg);
  }
  free(msg);
}


bool
map_msgs__msg__ProjectedMap__Sequence__init(map_msgs__msg__ProjectedMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  map_msgs__msg__ProjectedMap * data = NULL;
  if (size) {
    data = (map_msgs__msg__ProjectedMap *)calloc(size, sizeof(map_msgs__msg__ProjectedMap));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = map_msgs__msg__ProjectedMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        map_msgs__msg__ProjectedMap__fini(&data[i - 1]);
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
map_msgs__msg__ProjectedMap__Sequence__fini(map_msgs__msg__ProjectedMap__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      map_msgs__msg__ProjectedMap__fini(&array->data[i]);
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

map_msgs__msg__ProjectedMap__Sequence *
map_msgs__msg__ProjectedMap__Sequence__create(size_t size)
{
  map_msgs__msg__ProjectedMap__Sequence * array = (map_msgs__msg__ProjectedMap__Sequence *)malloc(sizeof(map_msgs__msg__ProjectedMap__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = map_msgs__msg__ProjectedMap__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
map_msgs__msg__ProjectedMap__Sequence__destroy(map_msgs__msg__ProjectedMap__Sequence * array)
{
  if (array) {
    map_msgs__msg__ProjectedMap__Sequence__fini(array);
  }
  free(array);
}
