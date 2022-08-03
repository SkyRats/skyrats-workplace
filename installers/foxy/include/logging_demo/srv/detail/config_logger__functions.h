// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from logging_demo:srv/ConfigLogger.idl
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__FUNCTIONS_H_
#define LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "logging_demo/msg/rosidl_generator_c__visibility_control.h"

#include "logging_demo/srv/detail/config_logger__struct.h"

/// Initialize srv/ConfigLogger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * logging_demo__srv__ConfigLogger_Request
 * )) before or use
 * logging_demo__srv__ConfigLogger_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
bool
logging_demo__srv__ConfigLogger_Request__init(logging_demo__srv__ConfigLogger_Request * msg);

/// Finalize srv/ConfigLogger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
void
logging_demo__srv__ConfigLogger_Request__fini(logging_demo__srv__ConfigLogger_Request * msg);

/// Create srv/ConfigLogger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * logging_demo__srv__ConfigLogger_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
logging_demo__srv__ConfigLogger_Request *
logging_demo__srv__ConfigLogger_Request__create();

/// Destroy srv/ConfigLogger message.
/**
 * It calls
 * logging_demo__srv__ConfigLogger_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
void
logging_demo__srv__ConfigLogger_Request__destroy(logging_demo__srv__ConfigLogger_Request * msg);


/// Initialize array of srv/ConfigLogger messages.
/**
 * It allocates the memory for the number of elements and calls
 * logging_demo__srv__ConfigLogger_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
bool
logging_demo__srv__ConfigLogger_Request__Sequence__init(logging_demo__srv__ConfigLogger_Request__Sequence * array, size_t size);

/// Finalize array of srv/ConfigLogger messages.
/**
 * It calls
 * logging_demo__srv__ConfigLogger_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
void
logging_demo__srv__ConfigLogger_Request__Sequence__fini(logging_demo__srv__ConfigLogger_Request__Sequence * array);

/// Create array of srv/ConfigLogger messages.
/**
 * It allocates the memory for the array and calls
 * logging_demo__srv__ConfigLogger_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
logging_demo__srv__ConfigLogger_Request__Sequence *
logging_demo__srv__ConfigLogger_Request__Sequence__create(size_t size);

/// Destroy array of srv/ConfigLogger messages.
/**
 * It calls
 * logging_demo__srv__ConfigLogger_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
void
logging_demo__srv__ConfigLogger_Request__Sequence__destroy(logging_demo__srv__ConfigLogger_Request__Sequence * array);

/// Initialize srv/ConfigLogger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * logging_demo__srv__ConfigLogger_Response
 * )) before or use
 * logging_demo__srv__ConfigLogger_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
bool
logging_demo__srv__ConfigLogger_Response__init(logging_demo__srv__ConfigLogger_Response * msg);

/// Finalize srv/ConfigLogger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
void
logging_demo__srv__ConfigLogger_Response__fini(logging_demo__srv__ConfigLogger_Response * msg);

/// Create srv/ConfigLogger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * logging_demo__srv__ConfigLogger_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
logging_demo__srv__ConfigLogger_Response *
logging_demo__srv__ConfigLogger_Response__create();

/// Destroy srv/ConfigLogger message.
/**
 * It calls
 * logging_demo__srv__ConfigLogger_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
void
logging_demo__srv__ConfigLogger_Response__destroy(logging_demo__srv__ConfigLogger_Response * msg);


/// Initialize array of srv/ConfigLogger messages.
/**
 * It allocates the memory for the number of elements and calls
 * logging_demo__srv__ConfigLogger_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
bool
logging_demo__srv__ConfigLogger_Response__Sequence__init(logging_demo__srv__ConfigLogger_Response__Sequence * array, size_t size);

/// Finalize array of srv/ConfigLogger messages.
/**
 * It calls
 * logging_demo__srv__ConfigLogger_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
void
logging_demo__srv__ConfigLogger_Response__Sequence__fini(logging_demo__srv__ConfigLogger_Response__Sequence * array);

/// Create array of srv/ConfigLogger messages.
/**
 * It allocates the memory for the array and calls
 * logging_demo__srv__ConfigLogger_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
logging_demo__srv__ConfigLogger_Response__Sequence *
logging_demo__srv__ConfigLogger_Response__Sequence__create(size_t size);

/// Destroy array of srv/ConfigLogger messages.
/**
 * It calls
 * logging_demo__srv__ConfigLogger_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_logging_demo
void
logging_demo__srv__ConfigLogger_Response__Sequence__destroy(logging_demo__srv__ConfigLogger_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LOGGING_DEMO__SRV__DETAIL__CONFIG_LOGGER__FUNCTIONS_H_
