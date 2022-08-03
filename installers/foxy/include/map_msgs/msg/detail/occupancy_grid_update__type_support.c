// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_msgs:msg/OccupancyGridUpdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_msgs/msg/detail/occupancy_grid_update__rosidl_typesupport_introspection_c.h"
#include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_msgs/msg/detail/occupancy_grid_update__functions.h"
#include "map_msgs/msg/detail/occupancy_grid_update__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__msg__OccupancyGridUpdate__init(message_memory);
}

void OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_fini_function(void * message_memory)
{
  map_msgs__msg__OccupancyGridUpdate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__OccupancyGridUpdate, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__OccupancyGridUpdate, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__OccupancyGridUpdate, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__OccupancyGridUpdate, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__OccupancyGridUpdate, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__OccupancyGridUpdate, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_members = {
  "map_msgs__msg",  // message namespace
  "OccupancyGridUpdate",  // message name
  6,  // number of fields
  sizeof(map_msgs__msg__OccupancyGridUpdate),
  OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_member_array,  // message members
  OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_type_support_handle = {
  0,
  &OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, msg, OccupancyGridUpdate)() {
  OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_type_support_handle.typesupport_identifier) {
    OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OccupancyGridUpdate__rosidl_typesupport_introspection_c__OccupancyGridUpdate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
