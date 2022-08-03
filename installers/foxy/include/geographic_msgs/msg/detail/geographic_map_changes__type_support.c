// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/GeographicMapChanges.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/geographic_map_changes__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/geographic_map_changes__functions.h"
#include "geographic_msgs/msg/detail/geographic_map_changes__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `diffs`
#include "geographic_msgs/msg/geographic_map.h"
// Member `diffs`
#include "geographic_msgs/msg/detail/geographic_map__rosidl_typesupport_introspection_c.h"
// Member `deletes`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `deletes`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__GeographicMapChanges__init(message_memory);
}

void GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_fini_function(void * message_memory)
{
  geographic_msgs__msg__GeographicMapChanges__fini(message_memory);
}

size_t GeographicMapChanges__rosidl_typesupport_introspection_c__size_function__UUID__deletes(
  const void * untyped_member)
{
  const unique_identifier_msgs__msg__UUID__Sequence * member =
    (const unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return member->size;
}

const void * GeographicMapChanges__rosidl_typesupport_introspection_c__get_const_function__UUID__deletes(
  const void * untyped_member, size_t index)
{
  const unique_identifier_msgs__msg__UUID__Sequence * member =
    (const unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeographicMapChanges__rosidl_typesupport_introspection_c__get_function__UUID__deletes(
  void * untyped_member, size_t index)
{
  unique_identifier_msgs__msg__UUID__Sequence * member =
    (unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeographicMapChanges__rosidl_typesupport_introspection_c__resize_function__UUID__deletes(
  void * untyped_member, size_t size)
{
  unique_identifier_msgs__msg__UUID__Sequence * member =
    (unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  unique_identifier_msgs__msg__UUID__Sequence__fini(member);
  return unique_identifier_msgs__msg__UUID__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMapChanges, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diffs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMapChanges, diffs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deletes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMapChanges, deletes),  // bytes offset in struct
    NULL,  // default value
    GeographicMapChanges__rosidl_typesupport_introspection_c__size_function__UUID__deletes,  // size() function pointer
    GeographicMapChanges__rosidl_typesupport_introspection_c__get_const_function__UUID__deletes,  // get_const(index) function pointer
    GeographicMapChanges__rosidl_typesupport_introspection_c__get_function__UUID__deletes,  // get(index) function pointer
    GeographicMapChanges__rosidl_typesupport_introspection_c__resize_function__UUID__deletes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_members = {
  "geographic_msgs__msg",  // message namespace
  "GeographicMapChanges",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__msg__GeographicMapChanges),
  GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_member_array,  // message members
  GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_init_function,  // function to initialize message memory (memory has to be allocated)
  GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_type_support_handle = {
  0,
  &GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeographicMapChanges)() {
  GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeographicMap)();
  GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_type_support_handle.typesupport_identifier) {
    GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeographicMapChanges__rosidl_typesupport_introspection_c__GeographicMapChanges_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
