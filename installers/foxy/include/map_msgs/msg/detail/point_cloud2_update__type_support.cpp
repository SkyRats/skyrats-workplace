// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from map_msgs:msg/PointCloud2Update.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "map_msgs/msg/detail/point_cloud2_update__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PointCloud2Update_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) map_msgs::msg::PointCloud2Update(_init);
}

void PointCloud2Update_fini_function(void * message_memory)
{
  auto typed_message = static_cast<map_msgs::msg::PointCloud2Update *>(message_memory);
  typed_message->~PointCloud2Update();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointCloud2Update_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs::msg::PointCloud2Update, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs::msg::PointCloud2Update, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs::msg::PointCloud2Update, points),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointCloud2Update_message_members = {
  "map_msgs::msg",  // message namespace
  "PointCloud2Update",  // message name
  3,  // number of fields
  sizeof(map_msgs::msg::PointCloud2Update),
  PointCloud2Update_message_member_array,  // message members
  PointCloud2Update_init_function,  // function to initialize message memory (memory has to be allocated)
  PointCloud2Update_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PointCloud2Update_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PointCloud2Update_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<map_msgs::msg::PointCloud2Update>()
{
  return &::map_msgs::msg::rosidl_typesupport_introspection_cpp::PointCloud2Update_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, map_msgs, msg, PointCloud2Update)() {
  return &::map_msgs::msg::rosidl_typesupport_introspection_cpp::PointCloud2Update_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
