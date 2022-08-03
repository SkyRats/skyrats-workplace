// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from map_msgs:srv/ProjectedMapsInfo.idl
// generated code does not contain a copyright notice
#include "map_msgs/srv/detail/projected_maps_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `projected_maps_info`
#include "map_msgs/msg/detail/projected_map_info__functions.h"

bool
map_msgs__srv__ProjectedMapsInfo_Request__init(map_msgs__srv__ProjectedMapsInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // projected_maps_info
  if (!map_msgs__msg__ProjectedMapInfo__Sequence__init(&msg->projected_maps_info, 0)) {
    map_msgs__srv__ProjectedMapsInfo_Request__fini(msg);
    return false;
  }
  return true;
}

void
map_msgs__srv__ProjectedMapsInfo_Request__fini(map_msgs__srv__ProjectedMapsInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // projected_maps_info
  map_msgs__msg__ProjectedMapInfo__Sequence__fini(&msg->projected_maps_info);
}

map_msgs__srv__ProjectedMapsInfo_Request *
map_msgs__srv__ProjectedMapsInfo_Request__create()
{
  map_msgs__srv__ProjectedMapsInfo_Request * msg = (map_msgs__srv__ProjectedMapsInfo_Request *)malloc(sizeof(map_msgs__srv__ProjectedMapsInfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(map_msgs__srv__ProjectedMapsInfo_Request));
  bool success = map_msgs__srv__ProjectedMapsInfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
map_msgs__srv__ProjectedMapsInfo_Request__destroy(map_msgs__srv__ProjectedMapsInfo_Request * msg)
{
  if (msg) {
    map_msgs__srv__ProjectedMapsInfo_Request__fini(msg);
  }
  free(msg);
}


bool
map_msgs__srv__ProjectedMapsInfo_Request__Sequence__init(map_msgs__srv__ProjectedMapsInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  map_msgs__srv__ProjectedMapsInfo_Request * data = NULL;
  if (size) {
    data = (map_msgs__srv__ProjectedMapsInfo_Request *)calloc(size, sizeof(map_msgs__srv__ProjectedMapsInfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = map_msgs__srv__ProjectedMapsInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        map_msgs__srv__ProjectedMapsInfo_Request__fini(&data[i - 1]);
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
map_msgs__srv__ProjectedMapsInfo_Request__Sequence__fini(map_msgs__srv__ProjectedMapsInfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      map_msgs__srv__ProjectedMapsInfo_Request__fini(&array->data[i]);
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

map_msgs__srv__ProjectedMapsInfo_Request__Sequence *
map_msgs__srv__ProjectedMapsInfo_Request__Sequence__create(size_t size)
{
  map_msgs__srv__ProjectedMapsInfo_Request__Sequence * array = (map_msgs__srv__ProjectedMapsInfo_Request__Sequence *)malloc(sizeof(map_msgs__srv__ProjectedMapsInfo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = map_msgs__srv__ProjectedMapsInfo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
map_msgs__srv__ProjectedMapsInfo_Request__Sequence__destroy(map_msgs__srv__ProjectedMapsInfo_Request__Sequence * array)
{
  if (array) {
    map_msgs__srv__ProjectedMapsInfo_Request__Sequence__fini(array);
  }
  free(array);
}


bool
map_msgs__srv__ProjectedMapsInfo_Response__init(map_msgs__srv__ProjectedMapsInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
map_msgs__srv__ProjectedMapsInfo_Response__fini(map_msgs__srv__ProjectedMapsInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

map_msgs__srv__ProjectedMapsInfo_Response *
map_msgs__srv__ProjectedMapsInfo_Response__create()
{
  map_msgs__srv__ProjectedMapsInfo_Response * msg = (map_msgs__srv__ProjectedMapsInfo_Response *)malloc(sizeof(map_msgs__srv__ProjectedMapsInfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(map_msgs__srv__ProjectedMapsInfo_Response));
  bool success = map_msgs__srv__ProjectedMapsInfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
map_msgs__srv__ProjectedMapsInfo_Response__destroy(map_msgs__srv__ProjectedMapsInfo_Response * msg)
{
  if (msg) {
    map_msgs__srv__ProjectedMapsInfo_Response__fini(msg);
  }
  free(msg);
}


bool
map_msgs__srv__ProjectedMapsInfo_Response__Sequence__init(map_msgs__srv__ProjectedMapsInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  map_msgs__srv__ProjectedMapsInfo_Response * data = NULL;
  if (size) {
    data = (map_msgs__srv__ProjectedMapsInfo_Response *)calloc(size, sizeof(map_msgs__srv__ProjectedMapsInfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = map_msgs__srv__ProjectedMapsInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        map_msgs__srv__ProjectedMapsInfo_Response__fini(&data[i - 1]);
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
map_msgs__srv__ProjectedMapsInfo_Response__Sequence__fini(map_msgs__srv__ProjectedMapsInfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      map_msgs__srv__ProjectedMapsInfo_Response__fini(&array->data[i]);
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

map_msgs__srv__ProjectedMapsInfo_Response__Sequence *
map_msgs__srv__ProjectedMapsInfo_Response__Sequence__create(size_t size)
{
  map_msgs__srv__ProjectedMapsInfo_Response__Sequence * array = (map_msgs__srv__ProjectedMapsInfo_Response__Sequence *)malloc(sizeof(map_msgs__srv__ProjectedMapsInfo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = map_msgs__srv__ProjectedMapsInfo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
map_msgs__srv__ProjectedMapsInfo_Response__Sequence__destroy(map_msgs__srv__ProjectedMapsInfo_Response__Sequence * array)
{
  if (array) {
    map_msgs__srv__ProjectedMapsInfo_Response__Sequence__fini(array);
  }
  free(array);
}
