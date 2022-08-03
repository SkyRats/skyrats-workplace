// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:srv/GetRoutePlan.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__STRUCT_H_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'network'
// Member 'start'
// Member 'goal'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in srv/GetRoutePlan in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetRoutePlan_Request
{
  unique_identifier_msgs__msg__UUID network;
  unique_identifier_msgs__msg__UUID start;
  unique_identifier_msgs__msg__UUID goal;
} geographic_msgs__srv__GetRoutePlan_Request;

// Struct for a sequence of geographic_msgs__srv__GetRoutePlan_Request.
typedef struct geographic_msgs__srv__GetRoutePlan_Request__Sequence
{
  geographic_msgs__srv__GetRoutePlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetRoutePlan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"
// Member 'plan'
#include "geographic_msgs/msg/detail/route_path__struct.h"

// Struct defined in srv/GetRoutePlan in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetRoutePlan_Response
{
  bool success;
  rosidl_runtime_c__String status;
  geographic_msgs__msg__RoutePath plan;
} geographic_msgs__srv__GetRoutePlan_Response;

// Struct for a sequence of geographic_msgs__srv__GetRoutePlan_Response.
typedef struct geographic_msgs__srv__GetRoutePlan_Response__Sequence
{
  geographic_msgs__srv__GetRoutePlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetRoutePlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_ROUTE_PLAN__STRUCT_H_
