// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from logging_demo:srv/ConfigLogger.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "logging_demo/srv/detail/config_logger__rosidl_typesupport_introspection_c.h"
#include "logging_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "logging_demo/srv/detail/config_logger__functions.h"
#include "logging_demo/srv/detail/config_logger__struct.h"


// Include directives for member types
// Member `logger_name`
// Member `level`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  logging_demo__srv__ConfigLogger_Request__init(message_memory);
}

void ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_fini_function(void * message_memory)
{
  logging_demo__srv__ConfigLogger_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_member_array[2] = {
  {
    "logger_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logging_demo__srv__ConfigLogger_Request, logger_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logging_demo__srv__ConfigLogger_Request, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_members = {
  "logging_demo__srv",  // message namespace
  "ConfigLogger_Request",  // message name
  2,  // number of fields
  sizeof(logging_demo__srv__ConfigLogger_Request),
  ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_member_array,  // message members
  ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_type_support_handle = {
  0,
  &ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_logging_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, logging_demo, srv, ConfigLogger_Request)() {
  if (!ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_type_support_handle.typesupport_identifier) {
    ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfigLogger_Request__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "logging_demo/srv/detail/config_logger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "logging_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "logging_demo/srv/detail/config_logger__functions.h"
// already included above
// #include "logging_demo/srv/detail/config_logger__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  logging_demo__srv__ConfigLogger_Response__init(message_memory);
}

void ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_fini_function(void * message_memory)
{
  logging_demo__srv__ConfigLogger_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(logging_demo__srv__ConfigLogger_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_members = {
  "logging_demo__srv",  // message namespace
  "ConfigLogger_Response",  // message name
  1,  // number of fields
  sizeof(logging_demo__srv__ConfigLogger_Response),
  ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_member_array,  // message members
  ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_type_support_handle = {
  0,
  &ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_logging_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, logging_demo, srv, ConfigLogger_Response)() {
  if (!ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_type_support_handle.typesupport_identifier) {
    ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfigLogger_Response__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "logging_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "logging_demo/srv/detail/config_logger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_service_members = {
  "logging_demo__srv",  // service namespace
  "ConfigLogger",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_Request_message_type_support_handle,
  NULL  // response message
  // logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_Response_message_type_support_handle
};

static rosidl_service_type_support_t logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_service_type_support_handle = {
  0,
  &logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, logging_demo, srv, ConfigLogger_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, logging_demo, srv, ConfigLogger_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_logging_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, logging_demo, srv, ConfigLogger)() {
  if (!logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_service_type_support_handle.typesupport_identifier) {
    logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, logging_demo, srv, ConfigLogger_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, logging_demo, srv, ConfigLogger_Response)()->data;
  }

  return &logging_demo__srv__detail__config_logger__rosidl_typesupport_introspection_c__ConfigLogger_service_type_support_handle;
}
