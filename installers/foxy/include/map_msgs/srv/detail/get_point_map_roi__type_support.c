// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_msgs:srv/GetPointMapROI.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_msgs/srv/detail/get_point_map_roi__rosidl_typesupport_introspection_c.h"
#include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_msgs/srv/detail/get_point_map_roi__functions.h"
#include "map_msgs/srv/detail/get_point_map_roi__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__GetPointMapROI_Request__init(message_memory);
}

void GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_fini_function(void * message_memory)
{
  map_msgs__srv__GetPointMapROI_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_member_array[7] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMapROI_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMapROI_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMapROI_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMapROI_Request, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMapROI_Request, l_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMapROI_Request, l_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMapROI_Request, l_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_members = {
  "map_msgs__srv",  // message namespace
  "GetPointMapROI_Request",  // message name
  7,  // number of fields
  sizeof(map_msgs__srv__GetPointMapROI_Request),
  GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_member_array,  // message members
  GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_type_support_handle = {
  0,
  &GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMapROI_Request)() {
  if (!GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_type_support_handle.typesupport_identifier) {
    GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPointMapROI_Request__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "map_msgs/srv/detail/get_point_map_roi__rosidl_typesupport_introspection_c.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "map_msgs/srv/detail/get_point_map_roi__functions.h"
// already included above
// #include "map_msgs/srv/detail/get_point_map_roi__struct.h"


// Include directives for member types
// Member `sub_map`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `sub_map`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__GetPointMapROI_Response__init(message_memory);
}

void GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_fini_function(void * message_memory)
{
  map_msgs__srv__GetPointMapROI_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_member_array[1] = {
  {
    "sub_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__GetPointMapROI_Response, sub_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_members = {
  "map_msgs__srv",  // message namespace
  "GetPointMapROI_Response",  // message name
  1,  // number of fields
  sizeof(map_msgs__srv__GetPointMapROI_Response),
  GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_member_array,  // message members
  GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_type_support_handle = {
  0,
  &GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMapROI_Response)() {
  GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_type_support_handle.typesupport_identifier) {
    GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPointMapROI_Response__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "map_msgs/srv/detail/get_point_map_roi__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_service_members = {
  "map_msgs__srv",  // service namespace
  "GetPointMapROI",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_Request_message_type_support_handle,
  NULL  // response message
  // map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_Response_message_type_support_handle
};

static rosidl_service_type_support_t map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_service_type_support_handle = {
  0,
  &map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMapROI_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMapROI_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMapROI)() {
  if (!map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_service_type_support_handle.typesupport_identifier) {
    map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMapROI_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, GetPointMapROI_Response)()->data;
  }

  return &map_msgs__srv__detail__get_point_map_roi__rosidl_typesupport_introspection_c__GetPointMapROI_service_type_support_handle;
}
