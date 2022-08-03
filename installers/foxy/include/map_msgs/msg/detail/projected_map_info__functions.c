// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from map_msgs:msg/ProjectedMapInfo.idl
// generated code does not contain a copyright notice
#include "map_msgs/msg/detail/projected_map_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
map_msgs__msg__ProjectedMapInfo__init(map_msgs__msg__ProjectedMapInfo * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    map_msgs__msg__ProjectedMapInfo__fini(msg);
    return false;
  }
  // x
  // y
  // width
  // height
  // min_z
  // max_z
  return true;
}

void
map_msgs__msg__ProjectedMapInfo__fini(map_msgs__msg__ProjectedMapInfo * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // x
  // y
  // width
  // height
  // min_z
  // max_z
}

map_msgs__msg__ProjectedMapInfo *
map_msgs__msg__ProjectedMapInfo__create()
{
  map_msgs__msg__ProjectedMapInfo * msg = (map_msgs__msg__ProjectedMapInfo *)malloc(sizeof(map_msgs__msg__ProjectedMapInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(map_msgs__msg__ProjectedMapInfo));
  bool success = map_msgs__msg__ProjectedMapInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
map_msgs__msg__ProjectedMapInfo__destroy(map_msgs__msg__ProjectedMapInfo * msg)
{
  if (msg) {
    map_msgs__msg__ProjectedMapInfo__fini(msg);
  }
  free(msg);
}


bool
map_msgs__msg__ProjectedMapInfo__Sequence__init(map_msgs__msg__ProjectedMapInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  map_msgs__msg__ProjectedMapInfo * data = NULL;
  if (size) {
    data = (map_msgs__msg__ProjectedMapInfo *)calloc(size, sizeof(map_msgs__msg__ProjectedMapInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = map_msgs__msg__ProjectedMapInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        map_msgs__msg__ProjectedMapInfo__fini(&data[i - 1]);
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
map_msgs__msg__ProjectedMapInfo__Sequence__fini(map_msgs__msg__ProjectedMapInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      map_msgs__msg__ProjectedMapInfo__fini(&array->data[i]);
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

map_msgs__msg__ProjectedMapInfo__Sequence *
map_msgs__msg__ProjectedMapInfo__Sequence__create(size_t size)
{
  map_msgs__msg__ProjectedMapInfo__Sequence * array = (map_msgs__msg__ProjectedMapInfo__Sequence *)malloc(sizeof(map_msgs__msg__ProjectedMapInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = map_msgs__msg__ProjectedMapInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
map_msgs__msg__ProjectedMapInfo__Sequence__destroy(map_msgs__msg__ProjectedMapInfo__Sequence * array)
{
  if (array) {
    map_msgs__msg__ProjectedMapInfo__Sequence__fini(array);
  }
  free(array);
}
