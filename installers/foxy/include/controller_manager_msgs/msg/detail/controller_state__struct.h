// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'state'
// Member 'type'
// Member 'claimed_interfaces'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ControllerState in the package controller_manager_msgs.
typedef struct controller_manager_msgs__msg__ControllerState
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String__Sequence claimed_interfaces;
} controller_manager_msgs__msg__ControllerState;

// Struct for a sequence of controller_manager_msgs__msg__ControllerState.
typedef struct controller_manager_msgs__msg__ControllerState__Sequence
{
  controller_manager_msgs__msg__ControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__msg__ControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
