// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from theora_image_transport:msg/Packet.idl
// generated code does not contain a copyright notice

#ifndef THEORA_IMAGE_TRANSPORT__MSG__DETAIL__PACKET__FUNCTIONS_H_
#define THEORA_IMAGE_TRANSPORT__MSG__DETAIL__PACKET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "theora_image_transport/msg/rosidl_generator_c__visibility_control.h"

#include "theora_image_transport/msg/detail/packet__struct.h"

/// Initialize msg/Packet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * theora_image_transport__msg__Packet
 * )) before or use
 * theora_image_transport__msg__Packet__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_image_transport
bool
theora_image_transport__msg__Packet__init(theora_image_transport__msg__Packet * msg);

/// Finalize msg/Packet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_image_transport
void
theora_image_transport__msg__Packet__fini(theora_image_transport__msg__Packet * msg);

/// Create msg/Packet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * theora_image_transport__msg__Packet__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_image_transport
theora_image_transport__msg__Packet *
theora_image_transport__msg__Packet__create();

/// Destroy msg/Packet message.
/**
 * It calls
 * theora_image_transport__msg__Packet__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_image_transport
void
theora_image_transport__msg__Packet__destroy(theora_image_transport__msg__Packet * msg);


/// Initialize array of msg/Packet messages.
/**
 * It allocates the memory for the number of elements and calls
 * theora_image_transport__msg__Packet__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_image_transport
bool
theora_image_transport__msg__Packet__Sequence__init(theora_image_transport__msg__Packet__Sequence * array, size_t size);

/// Finalize array of msg/Packet messages.
/**
 * It calls
 * theora_image_transport__msg__Packet__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_image_transport
void
theora_image_transport__msg__Packet__Sequence__fini(theora_image_transport__msg__Packet__Sequence * array);

/// Create array of msg/Packet messages.
/**
 * It allocates the memory for the array and calls
 * theora_image_transport__msg__Packet__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_image_transport
theora_image_transport__msg__Packet__Sequence *
theora_image_transport__msg__Packet__Sequence__create(size_t size);

/// Destroy array of msg/Packet messages.
/**
 * It calls
 * theora_image_transport__msg__Packet__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_image_transport
void
theora_image_transport__msg__Packet__Sequence__destroy(theora_image_transport__msg__Packet__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // THEORA_IMAGE_TRANSPORT__MSG__DETAIL__PACKET__FUNCTIONS_H_
