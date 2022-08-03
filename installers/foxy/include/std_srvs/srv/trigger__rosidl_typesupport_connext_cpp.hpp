// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice


#ifndef STD_SRVS__SRV__TRIGGER__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define STD_SRVS__SRV__TRIGGER__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "std_srvs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "std_srvs/srv/detail/trigger__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "std_srvs/srv/dds_connext/Trigger_Support.h"
#include "std_srvs/srv/dds_connext/Trigger_Plugin.h"
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


namespace std_srvs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Trigger_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
convert_ros_message_to_dds(
  const std_srvs::srv::Trigger_Request & ros_message,
  std_srvs::srv::dds_::Trigger_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
convert_dds_message_to_ros(
  const std_srvs::srv::dds_::Trigger_Request_ & dds_message,
  std_srvs::srv::Trigger_Request & ros_message);

bool
to_cdr_stream__Trigger_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Trigger_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace std_srvs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  std_srvs, srv,
  Trigger_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "std_srvs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "std_srvs/srv/detail/trigger__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "std_srvs/srv/dds_connext/Trigger_Support.h"
// already included above
// #include "std_srvs/srv/dds_connext/Trigger_Plugin.h"
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


namespace std_srvs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Trigger_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
convert_ros_message_to_dds(
  const std_srvs::srv::Trigger_Response & ros_message,
  std_srvs::srv::dds_::Trigger_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
convert_dds_message_to_ros(
  const std_srvs::srv::dds_::Trigger_Response_ & dds_message,
  std_srvs::srv::Trigger_Response & ros_message);

bool
to_cdr_stream__Trigger_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Trigger_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace std_srvs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  std_srvs, srv,
  Trigger_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "std_srvs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace std_srvs
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
create_requester__Trigger(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const char *
destroy_requester__Trigger(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
int64_t
send_request__Trigger(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
create_replier__Trigger(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const char *
destroy_replier__Trigger(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
bool
take_request__Trigger(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
bool
take_response__Trigger(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
bool
send_response__Trigger(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
get_request_datawriter__Trigger(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
get_reply_datareader__Trigger(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
get_request_datareader__Trigger(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
void *
get_reply_datawriter__Trigger(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace std_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  std_srvs, srv,
  Trigger)();

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__TRIGGER__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
