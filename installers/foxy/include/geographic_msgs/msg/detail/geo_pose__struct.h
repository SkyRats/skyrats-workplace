// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/GeoPose.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geographic_msgs/msg/detail/geo_point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

// Struct defined in msg/GeoPose in the package geographic_msgs.
typedef struct geographic_msgs__msg__GeoPose
{
  geographic_msgs__msg__GeoPoint position;
  geometry_msgs__msg__Quaternion orientation;
} geographic_msgs__msg__GeoPose;

// Struct for a sequence of geographic_msgs__msg__GeoPose.
typedef struct geographic_msgs__msg__GeoPose__Sequence
{
  geographic_msgs__msg__GeoPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__GeoPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__STRUCT_H_
