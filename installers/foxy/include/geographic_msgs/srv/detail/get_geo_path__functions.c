// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:srv/GetGeoPath.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/srv/detail/get_geo_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `start`
// Member `goal`
#include "geographic_msgs/msg/detail/geo_point__functions.h"

bool
geographic_msgs__srv__GetGeoPath_Request__init(geographic_msgs__srv__GetGeoPath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geographic_msgs__msg__GeoPoint__init(&msg->start)) {
    geographic_msgs__srv__GetGeoPath_Request__fini(msg);
    return false;
  }
  // goal
  if (!geographic_msgs__msg__GeoPoint__init(&msg->goal)) {
    geographic_msgs__srv__GetGeoPath_Request__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__srv__GetGeoPath_Request__fini(geographic_msgs__srv__GetGeoPath_Request * msg)
{
  if (!msg) {
    return;
  }
  // start
  geographic_msgs__msg__GeoPoint__fini(&msg->start);
  // goal
  geographic_msgs__msg__GeoPoint__fini(&msg->goal);
}

geographic_msgs__srv__GetGeoPath_Request *
geographic_msgs__srv__GetGeoPath_Request__create()
{
  geographic_msgs__srv__GetGeoPath_Request * msg = (geographic_msgs__srv__GetGeoPath_Request *)malloc(sizeof(geographic_msgs__srv__GetGeoPath_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__srv__GetGeoPath_Request));
  bool success = geographic_msgs__srv__GetGeoPath_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__srv__GetGeoPath_Request__destroy(geographic_msgs__srv__GetGeoPath_Request * msg)
{
  if (msg) {
    geographic_msgs__srv__GetGeoPath_Request__fini(msg);
  }
  free(msg);
}


bool
geographic_msgs__srv__GetGeoPath_Request__Sequence__init(geographic_msgs__srv__GetGeoPath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geographic_msgs__srv__GetGeoPath_Request * data = NULL;
  if (size) {
    data = (geographic_msgs__srv__GetGeoPath_Request *)calloc(size, sizeof(geographic_msgs__srv__GetGeoPath_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__srv__GetGeoPath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__srv__GetGeoPath_Request__fini(&data[i - 1]);
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
geographic_msgs__srv__GetGeoPath_Request__Sequence__fini(geographic_msgs__srv__GetGeoPath_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geographic_msgs__srv__GetGeoPath_Request__fini(&array->data[i]);
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

geographic_msgs__srv__GetGeoPath_Request__Sequence *
geographic_msgs__srv__GetGeoPath_Request__Sequence__create(size_t size)
{
  geographic_msgs__srv__GetGeoPath_Request__Sequence * array = (geographic_msgs__srv__GetGeoPath_Request__Sequence *)malloc(sizeof(geographic_msgs__srv__GetGeoPath_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__srv__GetGeoPath_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geographic_msgs__srv__GetGeoPath_Request__Sequence__destroy(geographic_msgs__srv__GetGeoPath_Request__Sequence * array)
{
  if (array) {
    geographic_msgs__srv__GetGeoPath_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `plan`
#include "geographic_msgs/msg/detail/geo_path__functions.h"
// Member `network`
// Member `start_seg`
// Member `goal_seg`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
geographic_msgs__srv__GetGeoPath_Response__init(geographic_msgs__srv__GetGeoPath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    geographic_msgs__srv__GetGeoPath_Response__fini(msg);
    return false;
  }
  // plan
  if (!geographic_msgs__msg__GeoPath__init(&msg->plan)) {
    geographic_msgs__srv__GetGeoPath_Response__fini(msg);
    return false;
  }
  // network
  if (!unique_identifier_msgs__msg__UUID__init(&msg->network)) {
    geographic_msgs__srv__GetGeoPath_Response__fini(msg);
    return false;
  }
  // start_seg
  if (!unique_identifier_msgs__msg__UUID__init(&msg->start_seg)) {
    geographic_msgs__srv__GetGeoPath_Response__fini(msg);
    return false;
  }
  // goal_seg
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_seg)) {
    geographic_msgs__srv__GetGeoPath_Response__fini(msg);
    return false;
  }
  // distance
  return true;
}

void
geographic_msgs__srv__GetGeoPath_Response__fini(geographic_msgs__srv__GetGeoPath_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // plan
  geographic_msgs__msg__GeoPath__fini(&msg->plan);
  // network
  unique_identifier_msgs__msg__UUID__fini(&msg->network);
  // start_seg
  unique_identifier_msgs__msg__UUID__fini(&msg->start_seg);
  // goal_seg
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_seg);
  // distance
}

geographic_msgs__srv__GetGeoPath_Response *
geographic_msgs__srv__GetGeoPath_Response__create()
{
  geographic_msgs__srv__GetGeoPath_Response * msg = (geographic_msgs__srv__GetGeoPath_Response *)malloc(sizeof(geographic_msgs__srv__GetGeoPath_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__srv__GetGeoPath_Response));
  bool success = geographic_msgs__srv__GetGeoPath_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__srv__GetGeoPath_Response__destroy(geographic_msgs__srv__GetGeoPath_Response * msg)
{
  if (msg) {
    geographic_msgs__srv__GetGeoPath_Response__fini(msg);
  }
  free(msg);
}


bool
geographic_msgs__srv__GetGeoPath_Response__Sequence__init(geographic_msgs__srv__GetGeoPath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geographic_msgs__srv__GetGeoPath_Response * data = NULL;
  if (size) {
    data = (geographic_msgs__srv__GetGeoPath_Response *)calloc(size, sizeof(geographic_msgs__srv__GetGeoPath_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__srv__GetGeoPath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__srv__GetGeoPath_Response__fini(&data[i - 1]);
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
geographic_msgs__srv__GetGeoPath_Response__Sequence__fini(geographic_msgs__srv__GetGeoPath_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geographic_msgs__srv__GetGeoPath_Response__fini(&array->data[i]);
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

geographic_msgs__srv__GetGeoPath_Response__Sequence *
geographic_msgs__srv__GetGeoPath_Response__Sequence__create(size_t size)
{
  geographic_msgs__srv__GetGeoPath_Response__Sequence * array = (geographic_msgs__srv__GetGeoPath_Response__Sequence *)malloc(sizeof(geographic_msgs__srv__GetGeoPath_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__srv__GetGeoPath_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geographic_msgs__srv__GetGeoPath_Response__Sequence__destroy(geographic_msgs__srv__GetGeoPath_Response__Sequence * array)
{
  if (array) {
    geographic_msgs__srv__GetGeoPath_Response__Sequence__fini(array);
  }
  free(array);
}
