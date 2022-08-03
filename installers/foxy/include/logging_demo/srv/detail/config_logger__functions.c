// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from logging_demo:srv/ConfigLogger.idl
// generated code does not contain a copyright notice
#include "logging_demo/srv/detail/config_logger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `logger_name`
// Member `level`
#include "rosidl_runtime_c/string_functions.h"

bool
logging_demo__srv__ConfigLogger_Request__init(logging_demo__srv__ConfigLogger_Request * msg)
{
  if (!msg) {
    return false;
  }
  // logger_name
  if (!rosidl_runtime_c__String__init(&msg->logger_name)) {
    logging_demo__srv__ConfigLogger_Request__fini(msg);
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__init(&msg->level)) {
    logging_demo__srv__ConfigLogger_Request__fini(msg);
    return false;
  }
  return true;
}

void
logging_demo__srv__ConfigLogger_Request__fini(logging_demo__srv__ConfigLogger_Request * msg)
{
  if (!msg) {
    return;
  }
  // logger_name
  rosidl_runtime_c__String__fini(&msg->logger_name);
  // level
  rosidl_runtime_c__String__fini(&msg->level);
}

logging_demo__srv__ConfigLogger_Request *
logging_demo__srv__ConfigLogger_Request__create()
{
  logging_demo__srv__ConfigLogger_Request * msg = (logging_demo__srv__ConfigLogger_Request *)malloc(sizeof(logging_demo__srv__ConfigLogger_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(logging_demo__srv__ConfigLogger_Request));
  bool success = logging_demo__srv__ConfigLogger_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
logging_demo__srv__ConfigLogger_Request__destroy(logging_demo__srv__ConfigLogger_Request * msg)
{
  if (msg) {
    logging_demo__srv__ConfigLogger_Request__fini(msg);
  }
  free(msg);
}


bool
logging_demo__srv__ConfigLogger_Request__Sequence__init(logging_demo__srv__ConfigLogger_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  logging_demo__srv__ConfigLogger_Request * data = NULL;
  if (size) {
    data = (logging_demo__srv__ConfigLogger_Request *)calloc(size, sizeof(logging_demo__srv__ConfigLogger_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = logging_demo__srv__ConfigLogger_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        logging_demo__srv__ConfigLogger_Request__fini(&data[i - 1]);
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
logging_demo__srv__ConfigLogger_Request__Sequence__fini(logging_demo__srv__ConfigLogger_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      logging_demo__srv__ConfigLogger_Request__fini(&array->data[i]);
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

logging_demo__srv__ConfigLogger_Request__Sequence *
logging_demo__srv__ConfigLogger_Request__Sequence__create(size_t size)
{
  logging_demo__srv__ConfigLogger_Request__Sequence * array = (logging_demo__srv__ConfigLogger_Request__Sequence *)malloc(sizeof(logging_demo__srv__ConfigLogger_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = logging_demo__srv__ConfigLogger_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
logging_demo__srv__ConfigLogger_Request__Sequence__destroy(logging_demo__srv__ConfigLogger_Request__Sequence * array)
{
  if (array) {
    logging_demo__srv__ConfigLogger_Request__Sequence__fini(array);
  }
  free(array);
}


bool
logging_demo__srv__ConfigLogger_Response__init(logging_demo__srv__ConfigLogger_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
logging_demo__srv__ConfigLogger_Response__fini(logging_demo__srv__ConfigLogger_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

logging_demo__srv__ConfigLogger_Response *
logging_demo__srv__ConfigLogger_Response__create()
{
  logging_demo__srv__ConfigLogger_Response * msg = (logging_demo__srv__ConfigLogger_Response *)malloc(sizeof(logging_demo__srv__ConfigLogger_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(logging_demo__srv__ConfigLogger_Response));
  bool success = logging_demo__srv__ConfigLogger_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
logging_demo__srv__ConfigLogger_Response__destroy(logging_demo__srv__ConfigLogger_Response * msg)
{
  if (msg) {
    logging_demo__srv__ConfigLogger_Response__fini(msg);
  }
  free(msg);
}


bool
logging_demo__srv__ConfigLogger_Response__Sequence__init(logging_demo__srv__ConfigLogger_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  logging_demo__srv__ConfigLogger_Response * data = NULL;
  if (size) {
    data = (logging_demo__srv__ConfigLogger_Response *)calloc(size, sizeof(logging_demo__srv__ConfigLogger_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = logging_demo__srv__ConfigLogger_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        logging_demo__srv__ConfigLogger_Response__fini(&data[i - 1]);
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
logging_demo__srv__ConfigLogger_Response__Sequence__fini(logging_demo__srv__ConfigLogger_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      logging_demo__srv__ConfigLogger_Response__fini(&array->data[i]);
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

logging_demo__srv__ConfigLogger_Response__Sequence *
logging_demo__srv__ConfigLogger_Response__Sequence__create(size_t size)
{
  logging_demo__srv__ConfigLogger_Response__Sequence * array = (logging_demo__srv__ConfigLogger_Response__Sequence *)malloc(sizeof(logging_demo__srv__ConfigLogger_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = logging_demo__srv__ConfigLogger_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
logging_demo__srv__ConfigLogger_Response__Sequence__destroy(logging_demo__srv__ConfigLogger_Response__Sequence * array)
{
  if (array) {
    logging_demo__srv__ConfigLogger_Response__Sequence__fini(array);
  }
  free(array);
}
