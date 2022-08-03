// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice


#ifndef TURTLESIM__ACTION__ROTATE_ABSOLUTE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define TURTLESIM__ACTION__ROTATE_ABSOLUTE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "turtlesim/action/dds_connext/RotateAbsolute_Support.h"
#include "turtlesim/action/dds_connext/RotateAbsolute_Plugin.h"
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


namespace turtlesim
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RotateAbsolute_Goal();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_Goal & ros_message,
  turtlesim::action::dds_::RotateAbsolute_Goal_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_Goal_ & dds_message,
  turtlesim::action::RotateAbsolute_Goal & ros_message);

bool
to_cdr_stream__RotateAbsolute_Goal(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RotateAbsolute_Goal(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_Goal)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Support.h"
// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Plugin.h"
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


namespace turtlesim
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RotateAbsolute_Result();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_Result & ros_message,
  turtlesim::action::dds_::RotateAbsolute_Result_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_Result_ & dds_message,
  turtlesim::action::RotateAbsolute_Result & ros_message);

bool
to_cdr_stream__RotateAbsolute_Result(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RotateAbsolute_Result(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_Result)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Support.h"
// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Plugin.h"
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


namespace turtlesim
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RotateAbsolute_Feedback();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_Feedback & ros_message,
  turtlesim::action::dds_::RotateAbsolute_Feedback_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_Feedback_ & dds_message,
  turtlesim::action::RotateAbsolute_Feedback & ros_message);

bool
to_cdr_stream__RotateAbsolute_Feedback(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RotateAbsolute_Feedback(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_Feedback)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Support.h"
// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Plugin.h"
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


namespace turtlesim
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RotateAbsolute_SendGoal_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_SendGoal_Request & ros_message,
  turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_ & dds_message,
  turtlesim::action::RotateAbsolute_SendGoal_Request & ros_message);

bool
to_cdr_stream__RotateAbsolute_SendGoal_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RotateAbsolute_SendGoal_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_SendGoal_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Support.h"
// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Plugin.h"
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


namespace turtlesim
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RotateAbsolute_SendGoal_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_SendGoal_Response & ros_message,
  turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_ & dds_message,
  turtlesim::action::RotateAbsolute_SendGoal_Response & ros_message);

bool
to_cdr_stream__RotateAbsolute_SendGoal_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RotateAbsolute_SendGoal_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_SendGoal_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace turtlesim
{
namespace action
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
create_requester__RotateAbsolute_SendGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const char *
destroy_requester__RotateAbsolute_SendGoal(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
int64_t
send_request__RotateAbsolute_SendGoal(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
create_replier__RotateAbsolute_SendGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const char *
destroy_replier__RotateAbsolute_SendGoal(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
bool
take_request__RotateAbsolute_SendGoal(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
bool
take_response__RotateAbsolute_SendGoal(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
bool
send_response__RotateAbsolute_SendGoal(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
get_request_datawriter__RotateAbsolute_SendGoal(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
get_reply_datareader__RotateAbsolute_SendGoal(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
get_request_datareader__RotateAbsolute_SendGoal(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
get_reply_datawriter__RotateAbsolute_SendGoal(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace action
}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_SendGoal)();

#ifdef __cplusplus
}
#endif
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Support.h"
// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Plugin.h"
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


namespace turtlesim
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RotateAbsolute_GetResult_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_GetResult_Request & ros_message,
  turtlesim::action::dds_::RotateAbsolute_GetResult_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_GetResult_Request_ & dds_message,
  turtlesim::action::RotateAbsolute_GetResult_Request & ros_message);

bool
to_cdr_stream__RotateAbsolute_GetResult_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RotateAbsolute_GetResult_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_GetResult_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Support.h"
// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Plugin.h"
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


namespace turtlesim
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RotateAbsolute_GetResult_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_GetResult_Response & ros_message,
  turtlesim::action::dds_::RotateAbsolute_GetResult_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_GetResult_Response_ & dds_message,
  turtlesim::action::RotateAbsolute_GetResult_Response & ros_message);

bool
to_cdr_stream__RotateAbsolute_GetResult_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RotateAbsolute_GetResult_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_GetResult_Response)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rmw/types.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace turtlesim
{
namespace action
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
create_requester__RotateAbsolute_GetResult(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const char *
destroy_requester__RotateAbsolute_GetResult(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
int64_t
send_request__RotateAbsolute_GetResult(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
create_replier__RotateAbsolute_GetResult(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const char *
destroy_replier__RotateAbsolute_GetResult(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
bool
take_request__RotateAbsolute_GetResult(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
bool
take_response__RotateAbsolute_GetResult(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
bool
send_response__RotateAbsolute_GetResult(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
get_request_datawriter__RotateAbsolute_GetResult(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
get_reply_datareader__RotateAbsolute_GetResult(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
get_request_datareader__RotateAbsolute_GetResult(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
void *
get_reply_datawriter__RotateAbsolute_GetResult(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace action
}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_GetResult)();

#ifdef __cplusplus
}
#endif
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Support.h"
// already included above
// #include "turtlesim/action/dds_connext/RotateAbsolute_Plugin.h"
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


namespace turtlesim
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RotateAbsolute_FeedbackMessage();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_ros_message_to_dds(
  const turtlesim::action::RotateAbsolute_FeedbackMessage & ros_message,
  turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
convert_dds_message_to_ros(
  const turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_ & dds_message,
  turtlesim::action::RotateAbsolute_FeedbackMessage & ros_message);

bool
to_cdr_stream__RotateAbsolute_FeedbackMessage(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RotateAbsolute_FeedbackMessage(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace turtlesim


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  turtlesim, action,
  RotateAbsolute_FeedbackMessage)();

#ifdef __cplusplus
}
#endif


#endif  // TURTLESIM__ACTION__ROTATE_ABSOLUTE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
