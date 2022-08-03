// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pendulum_msgs:msg/RttestResults.idl
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__FUNCTIONS_H_
#define PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pendulum_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pendulum_msgs/msg/detail/rttest_results__struct.h"

/// Initialize msg/RttestResults message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pendulum_msgs__msg__RttestResults
 * )) before or use
 * pendulum_msgs__msg__RttestResults__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
bool
pendulum_msgs__msg__RttestResults__init(pendulum_msgs__msg__RttestResults * msg);

/// Finalize msg/RttestResults message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
void
pendulum_msgs__msg__RttestResults__fini(pendulum_msgs__msg__RttestResults * msg);

/// Create msg/RttestResults message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pendulum_msgs__msg__RttestResults__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
pendulum_msgs__msg__RttestResults *
pendulum_msgs__msg__RttestResults__create();

/// Destroy msg/RttestResults message.
/**
 * It calls
 * pendulum_msgs__msg__RttestResults__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
void
pendulum_msgs__msg__RttestResults__destroy(pendulum_msgs__msg__RttestResults * msg);


/// Initialize array of msg/RttestResults messages.
/**
 * It allocates the memory for the number of elements and calls
 * pendulum_msgs__msg__RttestResults__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
bool
pendulum_msgs__msg__RttestResults__Sequence__init(pendulum_msgs__msg__RttestResults__Sequence * array, size_t size);

/// Finalize array of msg/RttestResults messages.
/**
 * It calls
 * pendulum_msgs__msg__RttestResults__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
void
pendulum_msgs__msg__RttestResults__Sequence__fini(pendulum_msgs__msg__RttestResults__Sequence * array);

/// Create array of msg/RttestResults messages.
/**
 * It allocates the memory for the array and calls
 * pendulum_msgs__msg__RttestResults__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
pendulum_msgs__msg__RttestResults__Sequence *
pendulum_msgs__msg__RttestResults__Sequence__create(size_t size);

/// Destroy array of msg/RttestResults messages.
/**
 * It calls
 * pendulum_msgs__msg__RttestResults__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pendulum_msgs
void
pendulum_msgs__msg__RttestResults__Sequence__destroy(pendulum_msgs__msg__RttestResults__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__FUNCTIONS_H_
