// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/GeoPoint in the package geographic_msgs.
typedef struct geographic_msgs__msg__GeoPoint
{
  double latitude;
  double longitude;
  double altitude;
} geographic_msgs__msg__GeoPoint;

// Struct for a sequence of geographic_msgs__msg__GeoPoint.
typedef struct geographic_msgs__msg__GeoPoint__Sequence
{
  geographic_msgs__msg__GeoPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__GeoPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__STRUCT_H_
