// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/GeographicMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/geographic_map__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/geographic_map__functions.h"
#include "geographic_msgs/msg/detail/geographic_map__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `bounds`
#include "geographic_msgs/msg/bounding_box.h"
// Member `bounds`
#include "geographic_msgs/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "geographic_msgs/msg/way_point.h"
// Member `points`
#include "geographic_msgs/msg/detail/way_point__rosidl_typesupport_introspection_c.h"
// Member `features`
#include "geographic_msgs/msg/map_feature.h"
// Member `features`
#include "geographic_msgs/msg/detail/map_feature__rosidl_typesupport_introspection_c.h"
// Member `props`
#include "geographic_msgs/msg/key_value.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__GeographicMap__init(message_memory);
}

void GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_fini_function(void * message_memory)
{
  geographic_msgs__msg__GeographicMap__fini(message_memory);
}

size_t GeographicMap__rosidl_typesupport_introspection_c__size_function__WayPoint__points(
  const void * untyped_member)
{
  const geographic_msgs__msg__WayPoint__Sequence * member =
    (const geographic_msgs__msg__WayPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * GeographicMap__rosidl_typesupport_introspection_c__get_const_function__WayPoint__points(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__WayPoint__Sequence * member =
    (const geographic_msgs__msg__WayPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeographicMap__rosidl_typesupport_introspection_c__get_function__WayPoint__points(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__WayPoint__Sequence * member =
    (geographic_msgs__msg__WayPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeographicMap__rosidl_typesupport_introspection_c__resize_function__WayPoint__points(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__WayPoint__Sequence * member =
    (geographic_msgs__msg__WayPoint__Sequence *)(untyped_member);
  geographic_msgs__msg__WayPoint__Sequence__fini(member);
  return geographic_msgs__msg__WayPoint__Sequence__init(member, size);
}

size_t GeographicMap__rosidl_typesupport_introspection_c__size_function__MapFeature__features(
  const void * untyped_member)
{
  const geographic_msgs__msg__MapFeature__Sequence * member =
    (const geographic_msgs__msg__MapFeature__Sequence *)(untyped_member);
  return member->size;
}

const void * GeographicMap__rosidl_typesupport_introspection_c__get_const_function__MapFeature__features(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__MapFeature__Sequence * member =
    (const geographic_msgs__msg__MapFeature__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeographicMap__rosidl_typesupport_introspection_c__get_function__MapFeature__features(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__MapFeature__Sequence * member =
    (geographic_msgs__msg__MapFeature__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeographicMap__rosidl_typesupport_introspection_c__resize_function__MapFeature__features(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__MapFeature__Sequence * member =
    (geographic_msgs__msg__MapFeature__Sequence *)(untyped_member);
  geographic_msgs__msg__MapFeature__Sequence__fini(member);
  return geographic_msgs__msg__MapFeature__Sequence__init(member, size);
}

size_t GeographicMap__rosidl_typesupport_introspection_c__size_function__KeyValue__props(
  const void * untyped_member)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * GeographicMap__rosidl_typesupport_introspection_c__get_const_function__KeyValue__props(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeographicMap__rosidl_typesupport_introspection_c__get_function__KeyValue__props(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeographicMap__rosidl_typesupport_introspection_c__resize_function__KeyValue__props(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  geographic_msgs__msg__KeyValue__Sequence__fini(member);
  return geographic_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMap, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMap, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMap, bounds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMap, points),  // bytes offset in struct
    NULL,  // default value
    GeographicMap__rosidl_typesupport_introspection_c__size_function__WayPoint__points,  // size() function pointer
    GeographicMap__rosidl_typesupport_introspection_c__get_const_function__WayPoint__points,  // get_const(index) function pointer
    GeographicMap__rosidl_typesupport_introspection_c__get_function__WayPoint__points,  // get(index) function pointer
    GeographicMap__rosidl_typesupport_introspection_c__resize_function__WayPoint__points  // resize(index) function pointer
  },
  {
    "features",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMap, features),  // bytes offset in struct
    NULL,  // default value
    GeographicMap__rosidl_typesupport_introspection_c__size_function__MapFeature__features,  // size() function pointer
    GeographicMap__rosidl_typesupport_introspection_c__get_const_function__MapFeature__features,  // get_const(index) function pointer
    GeographicMap__rosidl_typesupport_introspection_c__get_function__MapFeature__features,  // get(index) function pointer
    GeographicMap__rosidl_typesupport_introspection_c__resize_function__MapFeature__features  // resize(index) function pointer
  },
  {
    "props",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeographicMap, props),  // bytes offset in struct
    NULL,  // default value
    GeographicMap__rosidl_typesupport_introspection_c__size_function__KeyValue__props,  // size() function pointer
    GeographicMap__rosidl_typesupport_introspection_c__get_const_function__KeyValue__props,  // get_const(index) function pointer
    GeographicMap__rosidl_typesupport_introspection_c__get_function__KeyValue__props,  // get(index) function pointer
    GeographicMap__rosidl_typesupport_introspection_c__resize_function__KeyValue__props  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_members = {
  "geographic_msgs__msg",  // message namespace
  "GeographicMap",  // message name
  6,  // number of fields
  sizeof(geographic_msgs__msg__GeographicMap),
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_member_array,  // message members
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_init_function,  // function to initialize message memory (memory has to be allocated)
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_type_support_handle = {
  0,
  &GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeographicMap)() {
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, BoundingBox)();
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, WayPoint)();
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, MapFeature)();
  GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, KeyValue)();
  if (!GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_type_support_handle.typesupport_identifier) {
    GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeographicMap__rosidl_typesupport_introspection_c__GeographicMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
