// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/KeyValue in the package geographic_msgs.
typedef struct geographic_msgs__msg__KeyValue
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} geographic_msgs__msg__KeyValue;

// Struct for a sequence of geographic_msgs__msg__KeyValue.
typedef struct geographic_msgs__msg__KeyValue__Sequence
{
  geographic_msgs__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__KeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
