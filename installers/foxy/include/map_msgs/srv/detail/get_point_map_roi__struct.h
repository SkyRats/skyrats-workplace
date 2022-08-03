// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from map_msgs:srv/GetPointMapROI.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__GET_POINT_MAP_ROI__STRUCT_H_
#define MAP_MSGS__SRV__DETAIL__GET_POINT_MAP_ROI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetPointMapROI in the package map_msgs.
typedef struct map_msgs__srv__GetPointMapROI_Request
{
  double x;
  double y;
  double z;
  double r;
  double l_x;
  double l_y;
  double l_z;
} map_msgs__srv__GetPointMapROI_Request;

// Struct for a sequence of map_msgs__srv__GetPointMapROI_Request.
typedef struct map_msgs__srv__GetPointMapROI_Request__Sequence
{
  map_msgs__srv__GetPointMapROI_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__GetPointMapROI_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sub_map'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in srv/GetPointMapROI in the package map_msgs.
typedef struct map_msgs__srv__GetPointMapROI_Response
{
  sensor_msgs__msg__PointCloud2 sub_map;
} map_msgs__srv__GetPointMapROI_Response;

// Struct for a sequence of map_msgs__srv__GetPointMapROI_Response.
typedef struct map_msgs__srv__GetPointMapROI_Response__Sequence
{
  map_msgs__srv__GetPointMapROI_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__GetPointMapROI_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__DETAIL__GET_POINT_MAP_ROI__STRUCT_H_
