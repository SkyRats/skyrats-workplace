// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:srv/GetGeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_H_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'url'
#include "rosidl_runtime_c/string.h"
// Member 'bounds'
#include "geographic_msgs/msg/detail/bounding_box__struct.h"

// Struct defined in srv/GetGeographicMap in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeographicMap_Request
{
  rosidl_runtime_c__String url;
  geographic_msgs__msg__BoundingBox bounds;
} geographic_msgs__srv__GetGeographicMap_Request;

// Struct for a sequence of geographic_msgs__srv__GetGeographicMap_Request.
typedef struct geographic_msgs__srv__GetGeographicMap_Request__Sequence
{
  geographic_msgs__srv__GetGeographicMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeographicMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'map'
#include "geographic_msgs/msg/detail/geographic_map__struct.h"

// Struct defined in srv/GetGeographicMap in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeographicMap_Response
{
  bool success;
  rosidl_runtime_c__String status;
  geographic_msgs__msg__GeographicMap map;
} geographic_msgs__srv__GetGeographicMap_Response;

// Struct for a sequence of geographic_msgs__srv__GetGeographicMap_Response.
typedef struct geographic_msgs__srv__GetGeographicMap_Response__Sequence
{
  geographic_msgs__srv__GetGeographicMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeographicMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_H_
