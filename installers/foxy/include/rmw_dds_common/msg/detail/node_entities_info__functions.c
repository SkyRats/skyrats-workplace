// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmw_dds_common:msg/NodeEntitiesInfo.idl
// generated code does not contain a copyright notice
#include "rmw_dds_common/msg/detail/node_entities_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `node_namespace`
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `reader_gid_seq`
// Member `writer_gid_seq`
#include "rmw_dds_common/msg/detail/gid__functions.h"

bool
rmw_dds_common__msg__NodeEntitiesInfo__init(rmw_dds_common__msg__NodeEntitiesInfo * msg)
{
  if (!msg) {
    return false;
  }
  // node_namespace
  if (!rosidl_runtime_c__String__init(&msg->node_namespace)) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
    return false;
  }
  // reader_gid_seq
  if (!rmw_dds_common__msg__Gid__Sequence__init(&msg->reader_gid_seq, 0)) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
    return false;
  }
  // writer_gid_seq
  if (!rmw_dds_common__msg__Gid__Sequence__init(&msg->writer_gid_seq, 0)) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
    return false;
  }
  return true;
}

void
rmw_dds_common__msg__NodeEntitiesInfo__fini(rmw_dds_common__msg__NodeEntitiesInfo * msg)
{
  if (!msg) {
    return;
  }
  // node_namespace
  rosidl_runtime_c__String__fini(&msg->node_namespace);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // reader_gid_seq
  rmw_dds_common__msg__Gid__Sequence__fini(&msg->reader_gid_seq);
  // writer_gid_seq
  rmw_dds_common__msg__Gid__Sequence__fini(&msg->writer_gid_seq);
}

rmw_dds_common__msg__NodeEntitiesInfo *
rmw_dds_common__msg__NodeEntitiesInfo__create()
{
  rmw_dds_common__msg__NodeEntitiesInfo * msg = (rmw_dds_common__msg__NodeEntitiesInfo *)malloc(sizeof(rmw_dds_common__msg__NodeEntitiesInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmw_dds_common__msg__NodeEntitiesInfo));
  bool success = rmw_dds_common__msg__NodeEntitiesInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmw_dds_common__msg__NodeEntitiesInfo__destroy(rmw_dds_common__msg__NodeEntitiesInfo * msg)
{
  if (msg) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
  }
  free(msg);
}


bool
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__init(rmw_dds_common__msg__NodeEntitiesInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmw_dds_common__msg__NodeEntitiesInfo * data = NULL;
  if (size) {
    data = (rmw_dds_common__msg__NodeEntitiesInfo *)calloc(size, sizeof(rmw_dds_common__msg__NodeEntitiesInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmw_dds_common__msg__NodeEntitiesInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmw_dds_common__msg__NodeEntitiesInfo__fini(&data[i - 1]);
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
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__fini(rmw_dds_common__msg__NodeEntitiesInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmw_dds_common__msg__NodeEntitiesInfo__fini(&array->data[i]);
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

rmw_dds_common__msg__NodeEntitiesInfo__Sequence *
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__create(size_t size)
{
  rmw_dds_common__msg__NodeEntitiesInfo__Sequence * array = (rmw_dds_common__msg__NodeEntitiesInfo__Sequence *)malloc(sizeof(rmw_dds_common__msg__NodeEntitiesInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmw_dds_common__msg__NodeEntitiesInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__destroy(rmw_dds_common__msg__NodeEntitiesInfo__Sequence * array)
{
  if (array) {
    rmw_dds_common__msg__NodeEntitiesInfo__Sequence__fini(array);
  }
  free(array);
}
