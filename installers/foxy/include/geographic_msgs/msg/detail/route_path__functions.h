// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from geographic_msgs:msg/RoutePath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__FUNCTIONS_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "geographic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geographic_msgs/msg/detail/route_path__struct.h"

/// Initialize msg/RoutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * geographic_msgs__msg__RoutePath
 * )) before or use
 * geographic_msgs__msg__RoutePath__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__RoutePath__init(geographic_msgs__msg__RoutePath * msg);

/// Finalize msg/RoutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__RoutePath__fini(geographic_msgs__msg__RoutePath * msg);

/// Create msg/RoutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * geographic_msgs__msg__RoutePath__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__msg__RoutePath *
geographic_msgs__msg__RoutePath__create();

/// Destroy msg/RoutePath message.
/**
 * It calls
 * geographic_msgs__msg__RoutePath__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__RoutePath__destroy(geographic_msgs__msg__RoutePath * msg);


/// Initialize array of msg/RoutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * geographic_msgs__msg__RoutePath__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__RoutePath__Sequence__init(geographic_msgs__msg__RoutePath__Sequence * array, size_t size);

/// Finalize array of msg/RoutePath messages.
/**
 * It calls
 * geographic_msgs__msg__RoutePath__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__RoutePath__Sequence__fini(geographic_msgs__msg__RoutePath__Sequence * array);

/// Create array of msg/RoutePath messages.
/**
 * It allocates the memory for the array and calls
 * geographic_msgs__msg__RoutePath__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__msg__RoutePath__Sequence *
geographic_msgs__msg__RoutePath__Sequence__create(size_t size);

/// Destroy array of msg/RoutePath messages.
/**
 * It calls
 * geographic_msgs__msg__RoutePath__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__RoutePath__Sequence__destroy(geographic_msgs__msg__RoutePath__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__FUNCTIONS_H_
