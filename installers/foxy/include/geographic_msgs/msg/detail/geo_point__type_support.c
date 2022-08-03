// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/geo_point__functions.h"
#include "geographic_msgs/msg/detail/geo_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__GeoPoint__init(message_memory);
}

void GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_fini_function(void * message_memory)
{
  geographic_msgs__msg__GeoPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_message_member_array[3] = {
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPoint, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPoint, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPoint, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_message_members = {
  "geographic_msgs__msg",  // message namespace
  "GeoPoint",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__msg__GeoPoint),
  GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_message_member_array,  // message members
  GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_message_type_support_handle = {
  0,
  &GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)() {
  if (!GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_message_type_support_handle.typesupport_identifier) {
    GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeoPoint__rosidl_typesupport_introspection_c__GeoPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
