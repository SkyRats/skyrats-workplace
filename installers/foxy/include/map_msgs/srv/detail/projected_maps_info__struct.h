// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from map_msgs:srv/ProjectedMapsInfo.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__STRUCT_H_
#define MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'projected_maps_info'
#include "map_msgs/msg/detail/projected_map_info__struct.h"

// Struct defined in srv/ProjectedMapsInfo in the package map_msgs.
typedef struct map_msgs__srv__ProjectedMapsInfo_Request
{
  map_msgs__msg__ProjectedMapInfo__Sequence projected_maps_info;
} map_msgs__srv__ProjectedMapsInfo_Request;

// Struct for a sequence of map_msgs__srv__ProjectedMapsInfo_Request.
typedef struct map_msgs__srv__ProjectedMapsInfo_Request__Sequence
{
  map_msgs__srv__ProjectedMapsInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__ProjectedMapsInfo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ProjectedMapsInfo in the package map_msgs.
typedef struct map_msgs__srv__ProjectedMapsInfo_Response
{
  uint8_t structure_needs_at_least_one_member;
} map_msgs__srv__ProjectedMapsInfo_Response;

// Struct for a sequence of map_msgs__srv__ProjectedMapsInfo_Response.
typedef struct map_msgs__srv__ProjectedMapsInfo_Response__Sequence
{
  map_msgs__srv__ProjectedMapsInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__ProjectedMapsInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__STRUCT_H_
