// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from map_msgs:srv/GetPointMapROI.idl
// generated code does not contain a copyright notice
#include "map_msgs/srv/detail/get_point_map_roi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
map_msgs__srv__GetPointMapROI_Request__init(map_msgs__srv__GetPointMapROI_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // r
  // l_x
  // l_y
  // l_z
  return true;
}

void
map_msgs__srv__GetPointMapROI_Request__fini(map_msgs__srv__GetPointMapROI_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // r
  // l_x
  // l_y
  // l_z
}

map_msgs__srv__GetPointMapROI_Request *
map_msgs__srv__GetPointMapROI_Request__create()
{
  map_msgs__srv__GetPointMapROI_Request * msg = (map_msgs__srv__GetPointMapROI_Request *)malloc(sizeof(map_msgs__srv__GetPointMapROI_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(map_msgs__srv__GetPointMapROI_Request));
  bool success = map_msgs__srv__GetPointMapROI_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
map_msgs__srv__GetPointMapROI_Request__destroy(map_msgs__srv__GetPointMapROI_Request * msg)
{
  if (msg) {
    map_msgs__srv__GetPointMapROI_Request__fini(msg);
  }
  free(msg);
}


bool
map_msgs__srv__GetPointMapROI_Request__Sequence__init(map_msgs__srv__GetPointMapROI_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  map_msgs__srv__GetPointMapROI_Request * data = NULL;
  if (size) {
    data = (map_msgs__srv__GetPointMapROI_Request *)calloc(size, sizeof(map_msgs__srv__GetPointMapROI_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = map_msgs__srv__GetPointMapROI_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        map_msgs__srv__GetPointMapROI_Request__fini(&data[i - 1]);
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
map_msgs__srv__GetPointMapROI_Request__Sequence__fini(map_msgs__srv__GetPointMapROI_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      map_msgs__srv__GetPointMapROI_Request__fini(&array->data[i]);
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

map_msgs__srv__GetPointMapROI_Request__Sequence *
map_msgs__srv__GetPointMapROI_Request__Sequence__create(size_t size)
{
  map_msgs__srv__GetPointMapROI_Request__Sequence * array = (map_msgs__srv__GetPointMapROI_Request__Sequence *)malloc(sizeof(map_msgs__srv__GetPointMapROI_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = map_msgs__srv__GetPointMapROI_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
map_msgs__srv__GetPointMapROI_Request__Sequence__destroy(map_msgs__srv__GetPointMapROI_Request__Sequence * array)
{
  if (array) {
    map_msgs__srv__GetPointMapROI_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `sub_map`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
map_msgs__srv__GetPointMapROI_Response__init(map_msgs__srv__GetPointMapROI_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sub_map
  if (!sensor_msgs__msg__PointCloud2__init(&msg->sub_map)) {
    map_msgs__srv__GetPointMapROI_Response__fini(msg);
    return false;
  }
  return true;
}

void
map_msgs__srv__GetPointMapROI_Response__fini(map_msgs__srv__GetPointMapROI_Response * msg)
{
  if (!msg) {
    return;
  }
  // sub_map
  sensor_msgs__msg__PointCloud2__fini(&msg->sub_map);
}

map_msgs__srv__GetPointMapROI_Response *
map_msgs__srv__GetPointMapROI_Response__create()
{
  map_msgs__srv__GetPointMapROI_Response * msg = (map_msgs__srv__GetPointMapROI_Response *)malloc(sizeof(map_msgs__srv__GetPointMapROI_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(map_msgs__srv__GetPointMapROI_Response));
  bool success = map_msgs__srv__GetPointMapROI_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
map_msgs__srv__GetPointMapROI_Response__destroy(map_msgs__srv__GetPointMapROI_Response * msg)
{
  if (msg) {
    map_msgs__srv__GetPointMapROI_Response__fini(msg);
  }
  free(msg);
}


bool
map_msgs__srv__GetPointMapROI_Response__Sequence__init(map_msgs__srv__GetPointMapROI_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  map_msgs__srv__GetPointMapROI_Response * data = NULL;
  if (size) {
    data = (map_msgs__srv__GetPointMapROI_Response *)calloc(size, sizeof(map_msgs__srv__GetPointMapROI_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = map_msgs__srv__GetPointMapROI_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        map_msgs__srv__GetPointMapROI_Response__fini(&data[i - 1]);
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
map_msgs__srv__GetPointMapROI_Response__Sequence__fini(map_msgs__srv__GetPointMapROI_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      map_msgs__srv__GetPointMapROI_Response__fini(&array->data[i]);
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

map_msgs__srv__GetPointMapROI_Response__Sequence *
map_msgs__srv__GetPointMapROI_Response__Sequence__create(size_t size)
{
  map_msgs__srv__GetPointMapROI_Response__Sequence * array = (map_msgs__srv__GetPointMapROI_Response__Sequence *)malloc(sizeof(map_msgs__srv__GetPointMapROI_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = map_msgs__srv__GetPointMapROI_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
map_msgs__srv__GetPointMapROI_Response__Sequence__destroy(map_msgs__srv__GetPointMapROI_Response__Sequence * array)
{
  if (array) {
    map_msgs__srv__GetPointMapROI_Response__Sequence__fini(array);
  }
  free(array);
}
