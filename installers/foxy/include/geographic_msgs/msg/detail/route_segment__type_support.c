// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/route_segment__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/route_segment__functions.h"
#include "geographic_msgs/msg/detail/route_segment__struct.h"


// Include directives for member types
// Member `id`
// Member `start`
// Member `end`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `id`
// Member `start`
// Member `end`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `props`
#include "geographic_msgs/msg/key_value.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__RouteSegment__init(message_memory);
}

void RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_fini_function(void * message_memory)
{
  geographic_msgs__msg__RouteSegment__fini(message_memory);
}

size_t RouteSegment__rosidl_typesupport_introspection_c__size_function__KeyValue__props(
  const void * untyped_member)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * RouteSegment__rosidl_typesupport_introspection_c__get_const_function__KeyValue__props(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RouteSegment__rosidl_typesupport_introspection_c__get_function__KeyValue__props(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RouteSegment__rosidl_typesupport_introspection_c__resize_function__KeyValue__props(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  geographic_msgs__msg__KeyValue__Sequence__fini(member);
  return geographic_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__RouteSegment, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__RouteSegment, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__RouteSegment, end),  // bytes offset in struct
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
    offsetof(geographic_msgs__msg__RouteSegment, props),  // bytes offset in struct
    NULL,  // default value
    RouteSegment__rosidl_typesupport_introspection_c__size_function__KeyValue__props,  // size() function pointer
    RouteSegment__rosidl_typesupport_introspection_c__get_const_function__KeyValue__props,  // get_const(index) function pointer
    RouteSegment__rosidl_typesupport_introspection_c__get_function__KeyValue__props,  // get(index) function pointer
    RouteSegment__rosidl_typesupport_introspection_c__resize_function__KeyValue__props  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_members = {
  "geographic_msgs__msg",  // message namespace
  "RouteSegment",  // message name
  4,  // number of fields
  sizeof(geographic_msgs__msg__RouteSegment),
  RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_member_array,  // message members
  RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_type_support_handle = {
  0,
  &RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, RouteSegment)() {
  RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, KeyValue)();
  if (!RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_type_support_handle.typesupport_identifier) {
    RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RouteSegment__rosidl_typesupport_introspection_c__RouteSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
