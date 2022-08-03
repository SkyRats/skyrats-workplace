// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from map_msgs:srv/SetMapProjections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "map_msgs/srv/detail/set_map_projections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace map_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetMapProjections_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) map_msgs::srv::SetMapProjections_Request(_init);
}

void SetMapProjections_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<map_msgs::srv::SetMapProjections_Request *>(message_memory);
  typed_message->~SetMapProjections_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetMapProjections_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs::srv::SetMapProjections_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetMapProjections_Request_message_members = {
  "map_msgs::srv",  // message namespace
  "SetMapProjections_Request",  // message name
  1,  // number of fields
  sizeof(map_msgs::srv::SetMapProjections_Request),
  SetMapProjections_Request_message_member_array,  // message members
  SetMapProjections_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMapProjections_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetMapProjections_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetMapProjections_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<map_msgs::srv::SetMapProjections_Request>()
{
  return &::map_msgs::srv::rosidl_typesupport_introspection_cpp::SetMapProjections_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, map_msgs, srv, SetMapProjections_Request)() {
  return &::map_msgs::srv::rosidl_typesupport_introspection_cpp::SetMapProjections_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "map_msgs/srv/detail/set_map_projections__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace map_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetMapProjections_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) map_msgs::srv::SetMapProjections_Response(_init);
}

void SetMapProjections_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<map_msgs::srv::SetMapProjections_Response *>(message_memory);
  typed_message->~SetMapProjections_Response();
}

size_t size_function__SetMapProjections_Response__projected_maps_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<map_msgs::msg::ProjectedMapInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetMapProjections_Response__projected_maps_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<map_msgs::msg::ProjectedMapInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__SetMapProjections_Response__projected_maps_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<map_msgs::msg::ProjectedMapInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__SetMapProjections_Response__projected_maps_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<map_msgs::msg::ProjectedMapInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetMapProjections_Response_message_member_array[1] = {
  {
    "projected_maps_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<map_msgs::msg::ProjectedMapInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs::srv::SetMapProjections_Response, projected_maps_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetMapProjections_Response__projected_maps_info,  // size() function pointer
    get_const_function__SetMapProjections_Response__projected_maps_info,  // get_const(index) function pointer
    get_function__SetMapProjections_Response__projected_maps_info,  // get(index) function pointer
    resize_function__SetMapProjections_Response__projected_maps_info  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetMapProjections_Response_message_members = {
  "map_msgs::srv",  // message namespace
  "SetMapProjections_Response",  // message name
  1,  // number of fields
  sizeof(map_msgs::srv::SetMapProjections_Response),
  SetMapProjections_Response_message_member_array,  // message members
  SetMapProjections_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMapProjections_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetMapProjections_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetMapProjections_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<map_msgs::srv::SetMapProjections_Response>()
{
  return &::map_msgs::srv::rosidl_typesupport_introspection_cpp::SetMapProjections_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, map_msgs, srv, SetMapProjections_Response)() {
  return &::map_msgs::srv::rosidl_typesupport_introspection_cpp::SetMapProjections_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "map_msgs/srv/detail/set_map_projections__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace map_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetMapProjections_service_members = {
  "map_msgs::srv",  // service namespace
  "SetMapProjections",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<map_msgs::srv::SetMapProjections>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetMapProjections_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetMapProjections_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<map_msgs::srv::SetMapProjections>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::map_msgs::srv::rosidl_typesupport_introspection_cpp::SetMapProjections_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::map_msgs::srv::SetMapProjections_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::map_msgs::srv::SetMapProjections_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, map_msgs, srv, SetMapProjections)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<map_msgs::srv::SetMapProjections>();
}

#ifdef __cplusplus
}
#endif
