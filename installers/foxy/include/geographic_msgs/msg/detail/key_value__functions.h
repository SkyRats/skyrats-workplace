// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from geographic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__KEY_VALUE__FUNCTIONS_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__KEY_VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "geographic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geographic_msgs/msg/detail/key_value__struct.h"

/// Initialize msg/KeyValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * geographic_msgs__msg__KeyValue
 * )) before or use
 * geographic_msgs__msg__KeyValue__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__KeyValue__init(geographic_msgs__msg__KeyValue * msg);

/// Finalize msg/KeyValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__KeyValue__fini(geographic_msgs__msg__KeyValue * msg);

/// Create msg/KeyValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * geographic_msgs__msg__KeyValue__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__msg__KeyValue *
geographic_msgs__msg__KeyValue__create();

/// Destroy msg/KeyValue message.
/**
 * It calls
 * geographic_msgs__msg__KeyValue__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__KeyValue__destroy(geographic_msgs__msg__KeyValue * msg);


/// Initialize array of msg/KeyValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * geographic_msgs__msg__KeyValue__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__KeyValue__Sequence__init(geographic_msgs__msg__KeyValue__Sequence * array, size_t size);

/// Finalize array of msg/KeyValue messages.
/**
 * It calls
 * geographic_msgs__msg__KeyValue__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__KeyValue__Sequence__fini(geographic_msgs__msg__KeyValue__Sequence * array);

/// Create array of msg/KeyValue messages.
/**
 * It allocates the memory for the array and calls
 * geographic_msgs__msg__KeyValue__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__msg__KeyValue__Sequence *
geographic_msgs__msg__KeyValue__Sequence__create(size_t size);

/// Destroy array of msg/KeyValue messages.
/**
 * It calls
 * geographic_msgs__msg__KeyValue__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__KeyValue__Sequence__destroy(geographic_msgs__msg__KeyValue__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__KEY_VALUE__FUNCTIONS_H_
