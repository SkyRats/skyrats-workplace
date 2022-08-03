// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from composition_interfaces:srv/LoadNode.idl
// generated code does not contain a copyright notice


#ifndef COMPOSITION_INTERFACES__SRV__LOAD_NODE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define COMPOSITION_INTERFACES__SRV__LOAD_NODE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "composition_interfaces/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "composition_interfaces/srv/detail/load_node__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "composition_interfaces/srv/dds_connext/LoadNode_Support.h"
#include "composition_interfaces/srv/dds_connext/LoadNode_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace composition_interfaces
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__LoadNode_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
convert_ros_message_to_dds(
  const composition_interfaces::srv::LoadNode_Request & ros_message,
  composition_interfaces::srv::dds_::LoadNode_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
convert_dds_message_to_ros(
  const composition_interfaces::srv::dds_::LoadNode_Request_ & dds_message,
  composition_interfaces::srv::LoadNode_Request & ros_message);

bool
to_cdr_stream__LoadNode_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__LoadNode_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace composition_interfaces


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  composition_interfaces, srv,
  LoadNode_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "composition_interfaces/srv/detail/load_node__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "composition_interfaces/srv/dds_connext/LoadNode_Support.h"
// already included above
// #include "composition_interfaces/srv/dds_connext/LoadNode_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace composition_interfaces
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__LoadNode_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
convert_ros_message_to_dds(
  const composition_interfaces::srv::LoadNode_Response & ros_message,
  composition_interfaces::srv::dds_::LoadNode_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
convert_dds_message_to_ros(
  const composition_interfaces::srv::dds_::LoadNode_Response_ & dds_message,
  composition_interfaces::srv::LoadNode_Response & ros_message);

bool
to_cdr_stream__LoadNode_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__LoadNode_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace composition_interfaces


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  composition_interfaces, srv,
  LoadNode_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace composition_interfaces
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
void *
create_requester__LoadNode(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
const char *
destroy_requester__LoadNode(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
int64_t
send_request__LoadNode(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
void *
create_replier__LoadNode(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
const char *
destroy_replier__LoadNode(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
bool
take_request__LoadNode(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
bool
take_response__LoadNode(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
bool
send_response__LoadNode(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
void *
get_request_datawriter__LoadNode(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
void *
get_reply_datareader__LoadNode(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
void *
get_request_datareader__LoadNode(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
void *
get_reply_datawriter__LoadNode(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace composition_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_composition_interfaces
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  composition_interfaces, srv,
  LoadNode)();

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION_INTERFACES__SRV__LOAD_NODE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
