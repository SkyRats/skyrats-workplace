// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BEST_EFFORT'.
enum
{
  controller_manager_msgs__srv__SwitchController_Request__BEST_EFFORT = 1l
};

/// Constant 'STRICT'.
enum
{
  controller_manager_msgs__srv__SwitchController_Request__STRICT = 2l
};

// Include directives for member types
// Member 'start_controllers'
// Member 'stop_controllers'
#include "rosidl_runtime_c/string.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in srv/SwitchController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__SwitchController_Request
{
  rosidl_runtime_c__String__Sequence start_controllers;
  rosidl_runtime_c__String__Sequence stop_controllers;
  int32_t strictness;
  bool start_asap;
  builtin_interfaces__msg__Duration timeout;
} controller_manager_msgs__srv__SwitchController_Request;

// Struct for a sequence of controller_manager_msgs__srv__SwitchController_Request.
typedef struct controller_manager_msgs__srv__SwitchController_Request__Sequence
{
  controller_manager_msgs__srv__SwitchController_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__SwitchController_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SwitchController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__SwitchController_Response
{
  bool ok;
} controller_manager_msgs__srv__SwitchController_Response;

// Struct for a sequence of controller_manager_msgs__srv__SwitchController_Response.
typedef struct controller_manager_msgs__srv__SwitchController_Response__Sequence
{
  controller_manager_msgs__srv__SwitchController_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__SwitchController_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_
