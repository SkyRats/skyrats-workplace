// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/msg/detail/controller_state__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/msg/detail/controller_state__functions.h"
#include "controller_manager_msgs/msg/detail/controller_state__struct.h"


// Include directives for member types
// Member `name`
// Member `state`
// Member `type`
// Member `claimed_interfaces`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ControllerState__rosidl_typesupport_introspection_c__ControllerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__msg__ControllerState__init(message_memory);
}

void ControllerState__rosidl_typesupport_introspection_c__ControllerState_fini_function(void * message_memory)
{
  controller_manager_msgs__msg__ControllerState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__ControllerState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__ControllerState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__ControllerState, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "claimed_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__ControllerState, claimed_interfaces),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_members = {
  "controller_manager_msgs__msg",  // message namespace
  "ControllerState",  // message name
  4,  // number of fields
  sizeof(controller_manager_msgs__msg__ControllerState),
  ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array,  // message members
  ControllerState__rosidl_typesupport_introspection_c__ControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerState__rosidl_typesupport_introspection_c__ControllerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle = {
  0,
  &ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, ControllerState)() {
  if (!ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle.typesupport_identifier) {
    ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
