// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/WayPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/way_point__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/way_point__functions.h"
#include "geographic_msgs/msg/detail/way_point__struct.h"


// Include directives for member types
// Member `id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geographic_msgs/msg/geo_point.h"
// Member `position`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"
// Member `props`
#include "geographic_msgs/msg/key_value.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WayPoint__rosidl_typesupport_introspection_c__WayPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__WayPoint__init(message_memory);
}

void WayPoint__rosidl_typesupport_introspection_c__WayPoint_fini_function(void * message_memory)
{
  geographic_msgs__msg__WayPoint__fini(message_memory);
}

size_t WayPoint__rosidl_typesupport_introspection_c__size_function__KeyValue__props(
  const void * untyped_member)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * WayPoint__rosidl_typesupport_introspection_c__get_const_function__KeyValue__props(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * WayPoint__rosidl_typesupport_introspection_c__get_function__KeyValue__props(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool WayPoint__rosidl_typesupport_introspection_c__resize_function__KeyValue__props(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  geographic_msgs__msg__KeyValue__Sequence__fini(member);
  return geographic_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__WayPoint, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__WayPoint, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "props",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__WayPoint, props),  // bytes offset in struct
    NULL,  // default value
    WayPoint__rosidl_typesupport_introspection_c__size_function__KeyValue__props,  // size() function pointer
    WayPoint__rosidl_typesupport_introspection_c__get_const_function__KeyValue__props,  // get_const(index) function pointer
    WayPoint__rosidl_typesupport_introspection_c__get_function__KeyValue__props,  // get(index) function pointer
    WayPoint__rosidl_typesupport_introspection_c__resize_function__KeyValue__props  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_members = {
  "geographic_msgs__msg",  // message namespace
  "WayPoint",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__msg__WayPoint),
  WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array,  // message members
  WayPoint__rosidl_typesupport_introspection_c__WayPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  WayPoint__rosidl_typesupport_introspection_c__WayPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_type_support_handle = {
  0,
  &WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, WayPoint)() {
  WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, KeyValue)();
  if (!WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_type_support_handle.typesupport_identifier) {
    WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
