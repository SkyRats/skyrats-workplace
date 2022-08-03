// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:msg/GeographicMap.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "geographic_msgs/msg/detail/geographic_map__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geographic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GeographicMap_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geographic_msgs::msg::GeographicMap(_init);
}

void GeographicMap_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geographic_msgs::msg::GeographicMap *>(message_memory);
  typed_message->~GeographicMap();
}

size_t size_function__GeographicMap__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geographic_msgs::msg::WayPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeographicMap__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geographic_msgs::msg::WayPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__GeographicMap__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geographic_msgs::msg::WayPoint> *>(untyped_member);
  return &member[index];
}

void resize_function__GeographicMap__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geographic_msgs::msg::WayPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GeographicMap__features(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geographic_msgs::msg::MapFeature> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeographicMap__features(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geographic_msgs::msg::MapFeature> *>(untyped_member);
  return &member[index];
}

void * get_function__GeographicMap__features(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geographic_msgs::msg::MapFeature> *>(untyped_member);
  return &member[index];
}

void resize_function__GeographicMap__features(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geographic_msgs::msg::MapFeature> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GeographicMap__props(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geographic_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeographicMap__props(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geographic_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__GeographicMap__props(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geographic_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void resize_function__GeographicMap__props(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geographic_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GeographicMap_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::GeographicMap, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::GeographicMap, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::BoundingBox>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::GeographicMap, bounds),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::WayPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::GeographicMap, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeographicMap__points,  // size() function pointer
    get_const_function__GeographicMap__points,  // get_const(index) function pointer
    get_function__GeographicMap__points,  // get(index) function pointer
    resize_function__GeographicMap__points  // resize(index) function pointer
  },
  {
    "features",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::MapFeature>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::GeographicMap, features),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeographicMap__features,  // size() function pointer
    get_const_function__GeographicMap__features,  // get_const(index) function pointer
    get_function__GeographicMap__features,  // get(index) function pointer
    resize_function__GeographicMap__features  // resize(index) function pointer
  },
  {
    "props",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::GeographicMap, props),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeographicMap__props,  // size() function pointer
    get_const_function__GeographicMap__props,  // get_const(index) function pointer
    get_function__GeographicMap__props,  // get(index) function pointer
    resize_function__GeographicMap__props  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GeographicMap_message_members = {
  "geographic_msgs::msg",  // message namespace
  "GeographicMap",  // message name
  6,  // number of fields
  sizeof(geographic_msgs::msg::GeographicMap),
  GeographicMap_message_member_array,  // message members
  GeographicMap_init_function,  // function to initialize message memory (memory has to be allocated)
  GeographicMap_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GeographicMap_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GeographicMap_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace geographic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::msg::GeographicMap>()
{
  return &::geographic_msgs::msg::rosidl_typesupport_introspection_cpp::GeographicMap_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, msg, GeographicMap)() {
  return &::geographic_msgs::msg::rosidl_typesupport_introspection_cpp::GeographicMap_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
