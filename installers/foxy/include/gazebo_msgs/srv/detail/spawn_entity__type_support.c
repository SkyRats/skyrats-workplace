// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/srv/detail/spawn_entity__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/srv/detail/spawn_entity__functions.h"
#include "gazebo_msgs/srv/detail/spawn_entity__struct.h"


// Include directives for member types
// Member `name`
// Member `xml`
// Member `robot_namespace`
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `initial_pose`
#include "geometry_msgs/msg/pose.h"
// Member `initial_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__srv__SpawnEntity_Request__init(message_memory);
}

void SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_fini_function(void * message_memory)
{
  gazebo_msgs__srv__SpawnEntity_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SpawnEntity_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xml",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SpawnEntity_Request, xml),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_namespace",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SpawnEntity_Request, robot_namespace),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SpawnEntity_Request, initial_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SpawnEntity_Request, reference_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "SpawnEntity_Request",  // message name
  5,  // number of fields
  sizeof(gazebo_msgs__srv__SpawnEntity_Request),
  SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_member_array,  // message members
  SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle = {
  0,
  &SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SpawnEntity_Request)() {
  SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle.typesupport_identifier) {
    SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnEntity_Request__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gazebo_msgs/srv/detail/spawn_entity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gazebo_msgs/srv/detail/spawn_entity__functions.h"
// already included above
// #include "gazebo_msgs/srv/detail/spawn_entity__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__srv__SpawnEntity_Response__init(message_memory);
}

void SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_fini_function(void * message_memory)
{
  gazebo_msgs__srv__SpawnEntity_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SpawnEntity_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SpawnEntity_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "SpawnEntity_Response",  // message name
  2,  // number of fields
  sizeof(gazebo_msgs__srv__SpawnEntity_Response),
  SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_member_array,  // message members
  SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle = {
  0,
  &SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SpawnEntity_Response)() {
  if (!SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle.typesupport_identifier) {
    SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnEntity_Response__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/detail/spawn_entity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_members = {
  "gazebo_msgs__srv",  // service namespace
  "SpawnEntity",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_Request_message_type_support_handle,
  NULL  // response message
  // gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_Response_message_type_support_handle
};

static rosidl_service_type_support_t gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle = {
  0,
  &gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SpawnEntity_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SpawnEntity_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SpawnEntity)() {
  if (!gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SpawnEntity_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SpawnEntity_Response)()->data;
  }

  return &gazebo_msgs__srv__detail__spawn_entity__rosidl_typesupport_introspection_c__SpawnEntity_service_type_support_handle;
}
