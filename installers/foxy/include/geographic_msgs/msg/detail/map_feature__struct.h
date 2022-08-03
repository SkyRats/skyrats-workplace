// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/MapFeature.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'components'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__struct.h"

// Struct defined in msg/MapFeature in the package geographic_msgs.
typedef struct geographic_msgs__msg__MapFeature
{
  unique_identifier_msgs__msg__UUID id;
  unique_identifier_msgs__msg__UUID__Sequence components;
  geographic_msgs__msg__KeyValue__Sequence props;
} geographic_msgs__msg__MapFeature;

// Struct for a sequence of geographic_msgs__msg__MapFeature.
typedef struct geographic_msgs__msg__MapFeature__Sequence
{
  geographic_msgs__msg__MapFeature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__MapFeature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__STRUCT_H_
