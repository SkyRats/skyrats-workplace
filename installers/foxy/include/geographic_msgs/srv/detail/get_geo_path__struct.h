// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:srv/GetGeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_H_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geographic_msgs/msg/detail/geo_point__struct.h"

// Struct defined in srv/GetGeoPath in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeoPath_Request
{
  geographic_msgs__msg__GeoPoint start;
  geographic_msgs__msg__GeoPoint goal;
} geographic_msgs__srv__GetGeoPath_Request;

// Struct for a sequence of geographic_msgs__srv__GetGeoPath_Request.
typedef struct geographic_msgs__srv__GetGeoPath_Request__Sequence
{
  geographic_msgs__srv__GetGeoPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeoPath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"
// Member 'plan'
#include "geographic_msgs/msg/detail/geo_path__struct.h"
// Member 'network'
// Member 'start_seg'
// Member 'goal_seg'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in srv/GetGeoPath in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeoPath_Response
{
  bool success;
  rosidl_runtime_c__String status;
  geographic_msgs__msg__GeoPath plan;
  unique_identifier_msgs__msg__UUID network;
  unique_identifier_msgs__msg__UUID start_seg;
  unique_identifier_msgs__msg__UUID goal_seg;
  double distance;
} geographic_msgs__srv__GetGeoPath_Response;

// Struct for a sequence of geographic_msgs__srv__GetGeoPath_Response.
typedef struct geographic_msgs__srv__GetGeoPath_Response__Sequence
{
  geographic_msgs__srv__GetGeoPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeoPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_H_
