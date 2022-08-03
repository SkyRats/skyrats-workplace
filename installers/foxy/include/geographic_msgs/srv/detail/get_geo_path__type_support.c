// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:srv/GetGeoPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/srv/detail/get_geo_path__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/srv/detail/get_geo_path__functions.h"
#include "geographic_msgs/srv/detail/get_geo_path__struct.h"


// Include directives for member types
// Member `start`
// Member `goal`
#include "geographic_msgs/msg/geo_point.h"
// Member `start`
// Member `goal`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__GetGeoPath_Request__init(message_memory);
}

void GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_fini_function(void * message_memory)
{
  geographic_msgs__srv__GetGeoPath_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_member_array[2] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Request, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_members = {
  "geographic_msgs__srv",  // message namespace
  "GetGeoPath_Request",  // message name
  2,  // number of fields
  sizeof(geographic_msgs__srv__GetGeoPath_Request),
  GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_member_array,  // message members
  GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_type_support_handle = {
  0,
  &GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetGeoPath_Request)() {
  GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  if (!GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_type_support_handle.typesupport_identifier) {
    GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetGeoPath_Request__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "geographic_msgs/srv/detail/get_geo_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "geographic_msgs/srv/detail/get_geo_path__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/get_geo_path__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `plan`
#include "geographic_msgs/msg/geo_path.h"
// Member `plan`
#include "geographic_msgs/msg/detail/geo_path__rosidl_typesupport_introspection_c.h"
// Member `network`
// Member `start_seg`
// Member `goal_seg`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `network`
// Member `start_seg`
// Member `goal_seg`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__GetGeoPath_Response__init(message_memory);
}

void GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_fini_function(void * message_memory)
{
  geographic_msgs__srv__GetGeoPath_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_member_array[7] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Response, plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "network",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Response, network),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_seg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Response, start_seg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_seg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Response, goal_seg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetGeoPath_Response, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_members = {
  "geographic_msgs__srv",  // message namespace
  "GetGeoPath_Response",  // message name
  7,  // number of fields
  sizeof(geographic_msgs__srv__GetGeoPath_Response),
  GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_member_array,  // message members
  GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_type_support_handle = {
  0,
  &GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetGeoPath_Response)() {
  GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPath)();
  GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_type_support_handle.typesupport_identifier) {
    GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetGeoPath_Response__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "geographic_msgs/srv/detail/get_geo_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_service_members = {
  "geographic_msgs__srv",  // service namespace
  "GetGeoPath",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_Request_message_type_support_handle,
  NULL  // response message
  // geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_Response_message_type_support_handle
};

static rosidl_service_type_support_t geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_service_type_support_handle = {
  0,
  &geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetGeoPath_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetGeoPath_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetGeoPath)() {
  if (!geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_service_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetGeoPath_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetGeoPath_Response)()->data;
  }

  return &geographic_msgs__srv__detail__get_geo_path__rosidl_typesupport_introspection_c__GetGeoPath_service_type_support_handle;
}
