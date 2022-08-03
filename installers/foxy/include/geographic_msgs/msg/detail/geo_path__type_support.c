// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/GeoPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/geo_path__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/geo_path__functions.h"
#include "geographic_msgs/msg/detail/geo_path__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "geographic_msgs/msg/geo_pose_stamped.h"
// Member `poses`
#include "geographic_msgs/msg/detail/geo_pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GeoPath__rosidl_typesupport_introspection_c__GeoPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__GeoPath__init(message_memory);
}

void GeoPath__rosidl_typesupport_introspection_c__GeoPath_fini_function(void * message_memory)
{
  geographic_msgs__msg__GeoPath__fini(message_memory);
}

size_t GeoPath__rosidl_typesupport_introspection_c__size_function__GeoPoseStamped__poses(
  const void * untyped_member)
{
  const geographic_msgs__msg__GeoPoseStamped__Sequence * member =
    (const geographic_msgs__msg__GeoPoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * GeoPath__rosidl_typesupport_introspection_c__get_const_function__GeoPoseStamped__poses(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__GeoPoseStamped__Sequence * member =
    (const geographic_msgs__msg__GeoPoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeoPath__rosidl_typesupport_introspection_c__get_function__GeoPoseStamped__poses(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__GeoPoseStamped__Sequence * member =
    (geographic_msgs__msg__GeoPoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeoPath__rosidl_typesupport_introspection_c__resize_function__GeoPoseStamped__poses(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__GeoPoseStamped__Sequence * member =
    (geographic_msgs__msg__GeoPoseStamped__Sequence *)(untyped_member);
  geographic_msgs__msg__GeoPoseStamped__Sequence__fini(member);
  return geographic_msgs__msg__GeoPoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPath, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPath, poses),  // bytes offset in struct
    NULL,  // default value
    GeoPath__rosidl_typesupport_introspection_c__size_function__GeoPoseStamped__poses,  // size() function pointer
    GeoPath__rosidl_typesupport_introspection_c__get_const_function__GeoPoseStamped__poses,  // get_const(index) function pointer
    GeoPath__rosidl_typesupport_introspection_c__get_function__GeoPoseStamped__poses,  // get(index) function pointer
    GeoPath__rosidl_typesupport_introspection_c__resize_function__GeoPoseStamped__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_members = {
  "geographic_msgs__msg",  // message namespace
  "GeoPath",  // message name
  2,  // number of fields
  sizeof(geographic_msgs__msg__GeoPath),
  GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_member_array,  // message members
  GeoPath__rosidl_typesupport_introspection_c__GeoPath_init_function,  // function to initialize message memory (memory has to be allocated)
  GeoPath__rosidl_typesupport_introspection_c__GeoPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_type_support_handle = {
  0,
  &GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPath)() {
  GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoseStamped)();
  if (!GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_type_support_handle.typesupport_identifier) {
    GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeoPath__rosidl_typesupport_introspection_c__GeoPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
