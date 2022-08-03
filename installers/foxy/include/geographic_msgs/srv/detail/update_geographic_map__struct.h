// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:srv/UpdateGeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__STRUCT_H_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'updates'
#include "geographic_msgs/msg/detail/geographic_map_changes__struct.h"

// Struct defined in srv/UpdateGeographicMap in the package geographic_msgs.
typedef struct geographic_msgs__srv__UpdateGeographicMap_Request
{
  geographic_msgs__msg__GeographicMapChanges updates;
} geographic_msgs__srv__UpdateGeographicMap_Request;

// Struct for a sequence of geographic_msgs__srv__UpdateGeographicMap_Request.
typedef struct geographic_msgs__srv__UpdateGeographicMap_Request__Sequence
{
  geographic_msgs__srv__UpdateGeographicMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__UpdateGeographicMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/UpdateGeographicMap in the package geographic_msgs.
typedef struct geographic_msgs__srv__UpdateGeographicMap_Response
{
  bool success;
  rosidl_runtime_c__String status;
} geographic_msgs__srv__UpdateGeographicMap_Response;

// Struct for a sequence of geographic_msgs__srv__UpdateGeographicMap_Response.
typedef struct geographic_msgs__srv__UpdateGeographicMap_Response__Sequence
{
  geographic_msgs__srv__UpdateGeographicMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__UpdateGeographicMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__STRUCT_H_
