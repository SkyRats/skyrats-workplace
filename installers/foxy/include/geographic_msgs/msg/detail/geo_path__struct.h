// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/GeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__STRUCT_H_

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
// Member 'poses'
#include "geographic_msgs/msg/detail/geo_pose_stamped__struct.h"

// Struct defined in msg/GeoPath in the package geographic_msgs.
typedef struct geographic_msgs__msg__GeoPath
{
  std_msgs__msg__Header header;
  geographic_msgs__msg__GeoPoseStamped__Sequence poses;
} geographic_msgs__msg__GeoPath;

// Struct for a sequence of geographic_msgs__msg__GeoPath.
typedef struct geographic_msgs__msg__GeoPath__Sequence
{
  geographic_msgs__msg__GeoPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__GeoPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_PATH__STRUCT_H_
