// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/GeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP__STRUCT_H_

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
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'bounds'
#include "geographic_msgs/msg/detail/bounding_box__struct.h"
// Member 'points'
#include "geographic_msgs/msg/detail/way_point__struct.h"
// Member 'features'
#include "geographic_msgs/msg/detail/map_feature__struct.h"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__struct.h"

// Struct defined in msg/GeographicMap in the package geographic_msgs.
typedef struct geographic_msgs__msg__GeographicMap
{
  std_msgs__msg__Header header;
  unique_identifier_msgs__msg__UUID id;
  geographic_msgs__msg__BoundingBox bounds;
  geographic_msgs__msg__WayPoint__Sequence points;
  geographic_msgs__msg__MapFeature__Sequence features;
  geographic_msgs__msg__KeyValue__Sequence props;
} geographic_msgs__msg__GeographicMap;

// Struct for a sequence of geographic_msgs__msg__GeographicMap.
typedef struct geographic_msgs__msg__GeographicMap__Sequence
{
  geographic_msgs__msg__GeographicMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__GeographicMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP__STRUCT_H_
