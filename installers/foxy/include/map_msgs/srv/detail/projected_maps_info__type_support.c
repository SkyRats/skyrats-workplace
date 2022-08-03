// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_msgs:srv/ProjectedMapsInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_msgs/srv/detail/projected_maps_info__rosidl_typesupport_introspection_c.h"
#include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_msgs/srv/detail/projected_maps_info__functions.h"
#include "map_msgs/srv/detail/projected_maps_info__struct.h"


// Include directives for member types
// Member `projected_maps_info`
#include "map_msgs/msg/projected_map_info.h"
// Member `projected_maps_info`
#include "map_msgs/msg/detail/projected_map_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__ProjectedMapsInfo_Request__init(message_memory);
}

void ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_fini_function(void * message_memory)
{
  map_msgs__srv__ProjectedMapsInfo_Request__fini(message_memory);
}

size_t ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__size_function__ProjectedMapInfo__projected_maps_info(
  const void * untyped_member)
{
  const map_msgs__msg__ProjectedMapInfo__Sequence * member =
    (const map_msgs__msg__ProjectedMapInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__get_const_function__ProjectedMapInfo__projected_maps_info(
  const void * untyped_member, size_t index)
{
  const map_msgs__msg__ProjectedMapInfo__Sequence * member =
    (const map_msgs__msg__ProjectedMapInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__get_function__ProjectedMapInfo__projected_maps_info(
  void * untyped_member, size_t index)
{
  map_msgs__msg__ProjectedMapInfo__Sequence * member =
    (map_msgs__msg__ProjectedMapInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__resize_function__ProjectedMapInfo__projected_maps_info(
  void * untyped_member, size_t size)
{
  map_msgs__msg__ProjectedMapInfo__Sequence * member =
    (map_msgs__msg__ProjectedMapInfo__Sequence *)(untyped_member);
  map_msgs__msg__ProjectedMapInfo__Sequence__fini(member);
  return map_msgs__msg__ProjectedMapInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_member_array[1] = {
  {
    "projected_maps_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__ProjectedMapsInfo_Request, projected_maps_info),  // bytes offset in struct
    NULL,  // default value
    ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__size_function__ProjectedMapInfo__projected_maps_info,  // size() function pointer
    ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__get_const_function__ProjectedMapInfo__projected_maps_info,  // get_const(index) function pointer
    ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__get_function__ProjectedMapInfo__projected_maps_info,  // get(index) function pointer
    ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__resize_function__ProjectedMapInfo__projected_maps_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_members = {
  "map_msgs__srv",  // message namespace
  "ProjectedMapsInfo_Request",  // message name
  1,  // number of fields
  sizeof(map_msgs__srv__ProjectedMapsInfo_Request),
  ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_member_array,  // message members
  ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_type_support_handle = {
  0,
  &ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, ProjectedMapsInfo_Request)() {
  ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, msg, ProjectedMapInfo)();
  if (!ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_type_support_handle.typesupport_identifier) {
    ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ProjectedMapsInfo_Request__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "map_msgs/srv/detail/projected_maps_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "map_msgs/srv/detail/projected_maps_info__functions.h"
// already included above
// #include "map_msgs/srv/detail/projected_maps_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__ProjectedMapsInfo_Response__init(message_memory);
}

void ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_fini_function(void * message_memory)
{
  map_msgs__srv__ProjectedMapsInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__ProjectedMapsInfo_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_members = {
  "map_msgs__srv",  // message namespace
  "ProjectedMapsInfo_Response",  // message name
  1,  // number of fields
  sizeof(map_msgs__srv__ProjectedMapsInfo_Response),
  ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_member_array,  // message members
  ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_type_support_handle = {
  0,
  &ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, ProjectedMapsInfo_Response)() {
  if (!ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_type_support_handle.typesupport_identifier) {
    ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ProjectedMapsInfo_Response__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "map_msgs/srv/detail/projected_maps_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_service_members = {
  "map_msgs__srv",  // service namespace
  "ProjectedMapsInfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Request_message_type_support_handle,
  NULL  // response message
  // map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_service_type_support_handle = {
  0,
  &map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, ProjectedMapsInfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, ProjectedMapsInfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, ProjectedMapsInfo)() {
  if (!map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_service_type_support_handle.typesupport_identifier) {
    map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, ProjectedMapsInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, ProjectedMapsInfo_Response)()->data;
  }

  return &map_msgs__srv__detail__projected_maps_info__rosidl_typesupport_introspection_c__ProjectedMapsInfo_service_type_support_handle;
}
