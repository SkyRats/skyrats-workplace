// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/GeographicMapChanges.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__STRUCT_H_

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
// Member 'diffs'
#include "geographic_msgs/msg/detail/geographic_map__struct.h"
// Member 'deletes'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in msg/GeographicMapChanges in the package geographic_msgs.
typedef struct geographic_msgs__msg__GeographicMapChanges
{
  std_msgs__msg__Header header;
  geographic_msgs__msg__GeographicMap diffs;
  unique_identifier_msgs__msg__UUID__Sequence deletes;
} geographic_msgs__msg__GeographicMapChanges;

// Struct for a sequence of geographic_msgs__msg__GeographicMapChanges.
typedef struct geographic_msgs__msg__GeographicMapChanges__Sequence
{
  geographic_msgs__msg__GeographicMapChanges * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__GeographicMapChanges__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__STRUCT_H_
