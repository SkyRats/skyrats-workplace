// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmw_dds_common:msg/Gid.idl
// generated code does not contain a copyright notice

#ifndef RMW_DDS_COMMON__MSG__DETAIL__GID__FUNCTIONS_H_
#define RMW_DDS_COMMON__MSG__DETAIL__GID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmw_dds_common/msg/rosidl_generator_c__visibility_control.h"

#include "rmw_dds_common/msg/detail/gid__struct.h"

/// Initialize msg/Gid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmw_dds_common__msg__Gid
 * )) before or use
 * rmw_dds_common__msg__Gid__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
bool
rmw_dds_common__msg__Gid__init(rmw_dds_common__msg__Gid * msg);

/// Finalize msg/Gid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
void
rmw_dds_common__msg__Gid__fini(rmw_dds_common__msg__Gid * msg);

/// Create msg/Gid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmw_dds_common__msg__Gid__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
rmw_dds_common__msg__Gid *
rmw_dds_common__msg__Gid__create();

/// Destroy msg/Gid message.
/**
 * It calls
 * rmw_dds_common__msg__Gid__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
void
rmw_dds_common__msg__Gid__destroy(rmw_dds_common__msg__Gid * msg);


/// Initialize array of msg/Gid messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmw_dds_common__msg__Gid__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
bool
rmw_dds_common__msg__Gid__Sequence__init(rmw_dds_common__msg__Gid__Sequence * array, size_t size);

/// Finalize array of msg/Gid messages.
/**
 * It calls
 * rmw_dds_common__msg__Gid__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
void
rmw_dds_common__msg__Gid__Sequence__fini(rmw_dds_common__msg__Gid__Sequence * array);

/// Create array of msg/Gid messages.
/**
 * It allocates the memory for the array and calls
 * rmw_dds_common__msg__Gid__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
rmw_dds_common__msg__Gid__Sequence *
rmw_dds_common__msg__Gid__Sequence__create(size_t size);

/// Destroy array of msg/Gid messages.
/**
 * It calls
 * rmw_dds_common__msg__Gid__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
void
rmw_dds_common__msg__Gid__Sequence__destroy(rmw_dds_common__msg__Gid__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMW_DDS_COMMON__MSG__DETAIL__GID__FUNCTIONS_H_
