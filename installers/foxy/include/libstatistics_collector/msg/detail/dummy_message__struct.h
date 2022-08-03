// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from libstatistics_collector:msg/DummyMessage.idl
// generated code does not contain a copyright notice

#ifndef LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__STRUCT_H_
#define LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/DummyMessage in the package libstatistics_collector.
typedef struct libstatistics_collector__msg__DummyMessage
{
  std_msgs__msg__Header header;
} libstatistics_collector__msg__DummyMessage;

// Struct for a sequence of libstatistics_collector__msg__DummyMessage.
typedef struct libstatistics_collector__msg__DummyMessage__Sequence
{
  libstatistics_collector__msg__DummyMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} libstatistics_collector__msg__DummyMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIBSTATISTICS_COLLECTOR__MSG__DETAIL__DUMMY_MESSAGE__STRUCT_H_
