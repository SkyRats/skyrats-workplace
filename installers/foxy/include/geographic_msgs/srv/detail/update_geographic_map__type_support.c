// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:srv/UpdateGeographicMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/srv/detail/update_geographic_map__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/srv/detail/update_geographic_map__functions.h"
#include "geographic_msgs/srv/detail/update_geographic_map__struct.h"


// Include directives for member types
// Member `updates`
#include "geographic_msgs/msg/geographic_map_changes.h"
// Member `updates`
#include "geographic_msgs/msg/detail/geographic_map_changes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__UpdateGeographicMap_Request__init(message_memory);
}

void UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_fini_function(void * message_memory)
{
  geographic_msgs__srv__UpdateGeographicMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_member_array[1] = {
  {
    "updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Request, updates),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_members = {
  "geographic_msgs__srv",  // message namespace
  "UpdateGeographicMap_Request",  // message name
  1,  // number of fields
  sizeof(geographic_msgs__srv__UpdateGeographicMap_Request),
  UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_member_array,  // message members
  UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle = {
  0,
  &UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Request)() {
  UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeographicMapChanges)();
  if (!UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle.typesupport_identifier) {
    UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__UpdateGeographicMap_Response__init(message_memory);
}

void UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_fini_function(void * message_memory)
{
  geographic_msgs__srv__UpdateGeographicMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Response, success),  // bytes offset in struct
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
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_members = {
  "geographic_msgs__srv",  // message namespace
  "UpdateGeographicMap_Response",  // message name
  2,  // number of fields
  sizeof(geographic_msgs__srv__UpdateGeographicMap_Response),
  UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_member_array,  // message members
  UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle = {
  0,
  &UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Response)() {
  if (!UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle.typesupport_identifier) {
    UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_members = {
  "geographic_msgs__srv",  // service namespace
  "UpdateGeographicMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle,
  NULL  // response message
  // geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle = {
  0,
  &geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap)() {
  if (!geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Response)()->data;
  }

  return &geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle;
}
