// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from libstatistics_collector:msg/DummyMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "libstatistics_collector/msg/detail/dummy_message__rosidl_typesupport_introspection_c.h"
#include "libstatistics_collector/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "libstatistics_collector/msg/detail/dummy_message__functions.h"
#include "libstatistics_collector/msg/detail/dummy_message__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  libstatistics_collector__msg__DummyMessage__init(message_memory);
}

void DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_fini_function(void * message_memory)
{
  libstatistics_collector__msg__DummyMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_member_array[1] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(libstatistics_collector__msg__DummyMessage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_members = {
  "libstatistics_collector__msg",  // message namespace
  "DummyMessage",  // message name
  1,  // number of fields
  sizeof(libstatistics_collector__msg__DummyMessage),
  DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_member_array,  // message members
  DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_type_support_handle = {
  0,
  &DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_libstatistics_collector
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, libstatistics_collector, msg, DummyMessage)() {
  DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_type_support_handle.typesupport_identifier) {
    DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyMessage__rosidl_typesupport_introspection_c__DummyMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
