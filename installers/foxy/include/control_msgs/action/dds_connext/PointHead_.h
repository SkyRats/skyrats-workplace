

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointHead_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointHead__1037039983_h
#define PointHead__1037039983_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "geometry_msgs/msg/dds_connext/PointStamped_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *PointHead_Goal_TYPENAME;

            struct PointHead_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointHead_Goal_TypeSupport;
            class PointHead_Goal_DataWriter;
            class PointHead_Goal_DataReader;
            #endif

            class PointHead_Goal_ 
            {
              public:
                typedef struct PointHead_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointHead_Goal_TypeSupport TypeSupport;
                typedef PointHead_Goal_DataWriter DataWriter;
                typedef PointHead_Goal_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::PointStamped_   target_ ;
                geometry_msgs::msg::dds_::Vector3_   pointing_axis_ ;
                DDS_Char *   pointing_frame_ ;
                builtin_interfaces::msg::dds_::Duration_   min_duration_ ;
                DDS_Double   max_velocity_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointHead_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointHead_Goal_Seq, PointHead_Goal_);

            NDDSUSERDllExport
            RTIBool PointHead_Goal__initialize(
                PointHead_Goal_* self);

            NDDSUSERDllExport
            RTIBool PointHead_Goal__initialize_ex(
                PointHead_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointHead_Goal__initialize_w_params(
                PointHead_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointHead_Goal__finalize(
                PointHead_Goal_* self);

            NDDSUSERDllExport
            void PointHead_Goal__finalize_ex(
                PointHead_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointHead_Goal__finalize_w_params(
                PointHead_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointHead_Goal__finalize_optional_members(
                PointHead_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointHead_Goal__copy(
                PointHead_Goal_* dst,
                const PointHead_Goal_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *PointHead_SendGoal_Request_TYPENAME;

            struct PointHead_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointHead_SendGoal_Request_TypeSupport;
            class PointHead_SendGoal_Request_DataWriter;
            class PointHead_SendGoal_Request_DataReader;
            #endif

            class PointHead_SendGoal_Request_ 
            {
              public:
                typedef struct PointHead_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointHead_SendGoal_Request_TypeSupport TypeSupport;
                typedef PointHead_SendGoal_Request_DataWriter DataWriter;
                typedef PointHead_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::PointHead_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointHead_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointHead_SendGoal_Request_Seq, PointHead_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool PointHead_SendGoal_Request__initialize(
                PointHead_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool PointHead_SendGoal_Request__initialize_ex(
                PointHead_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointHead_SendGoal_Request__initialize_w_params(
                PointHead_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointHead_SendGoal_Request__finalize(
                PointHead_SendGoal_Request_* self);

            NDDSUSERDllExport
            void PointHead_SendGoal_Request__finalize_ex(
                PointHead_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointHead_SendGoal_Request__finalize_w_params(
                PointHead_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointHead_SendGoal_Request__finalize_optional_members(
                PointHead_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointHead_SendGoal_Request__copy(
                PointHead_SendGoal_Request_* dst,
                const PointHead_SendGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *PointHead_SendGoal_Response_TYPENAME;

            struct PointHead_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointHead_SendGoal_Response_TypeSupport;
            class PointHead_SendGoal_Response_DataWriter;
            class PointHead_SendGoal_Response_DataReader;
            #endif

            class PointHead_SendGoal_Response_ 
            {
              public:
                typedef struct PointHead_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointHead_SendGoal_Response_TypeSupport TypeSupport;
                typedef PointHead_SendGoal_Response_DataWriter DataWriter;
                typedef PointHead_SendGoal_Response_DataReader DataReader;
                #endif

                DDS_Boolean   accepted_ ;
                builtin_interfaces::msg::dds_::Time_   stamp_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointHead_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointHead_SendGoal_Response_Seq, PointHead_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool PointHead_SendGoal_Response__initialize(
                PointHead_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool PointHead_SendGoal_Response__initialize_ex(
                PointHead_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointHead_SendGoal_Response__initialize_w_params(
                PointHead_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointHead_SendGoal_Response__finalize(
                PointHead_SendGoal_Response_* self);

            NDDSUSERDllExport
            void PointHead_SendGoal_Response__finalize_ex(
                PointHead_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointHead_SendGoal_Response__finalize_w_params(
                PointHead_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointHead_SendGoal_Response__finalize_optional_members(
                PointHead_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointHead_SendGoal_Response__copy(
                PointHead_SendGoal_Response_* dst,
                const PointHead_SendGoal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *PointHead_Result_TYPENAME;

            struct PointHead_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointHead_Result_TypeSupport;
            class PointHead_Result_DataWriter;
            class PointHead_Result_DataReader;
            #endif

            class PointHead_Result_ 
            {
              public:
                typedef struct PointHead_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointHead_Result_TypeSupport TypeSupport;
                typedef PointHead_Result_DataWriter DataWriter;
                typedef PointHead_Result_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointHead_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointHead_Result_Seq, PointHead_Result_);

            NDDSUSERDllExport
            RTIBool PointHead_Result__initialize(
                PointHead_Result_* self);

            NDDSUSERDllExport
            RTIBool PointHead_Result__initialize_ex(
                PointHead_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointHead_Result__initialize_w_params(
                PointHead_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointHead_Result__finalize(
                PointHead_Result_* self);

            NDDSUSERDllExport
            void PointHead_Result__finalize_ex(
                PointHead_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointHead_Result__finalize_w_params(
                PointHead_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointHead_Result__finalize_optional_members(
                PointHead_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointHead_Result__copy(
                PointHead_Result_* dst,
                const PointHead_Result_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *PointHead_GetResult_Request_TYPENAME;

            struct PointHead_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointHead_GetResult_Request_TypeSupport;
            class PointHead_GetResult_Request_DataWriter;
            class PointHead_GetResult_Request_DataReader;
            #endif

            class PointHead_GetResult_Request_ 
            {
              public:
                typedef struct PointHead_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointHead_GetResult_Request_TypeSupport TypeSupport;
                typedef PointHead_GetResult_Request_DataWriter DataWriter;
                typedef PointHead_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointHead_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointHead_GetResult_Request_Seq, PointHead_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool PointHead_GetResult_Request__initialize(
                PointHead_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool PointHead_GetResult_Request__initialize_ex(
                PointHead_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointHead_GetResult_Request__initialize_w_params(
                PointHead_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointHead_GetResult_Request__finalize(
                PointHead_GetResult_Request_* self);

            NDDSUSERDllExport
            void PointHead_GetResult_Request__finalize_ex(
                PointHead_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointHead_GetResult_Request__finalize_w_params(
                PointHead_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointHead_GetResult_Request__finalize_optional_members(
                PointHead_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointHead_GetResult_Request__copy(
                PointHead_GetResult_Request_* dst,
                const PointHead_GetResult_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *PointHead_GetResult_Response_TYPENAME;

            struct PointHead_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointHead_GetResult_Response_TypeSupport;
            class PointHead_GetResult_Response_DataWriter;
            class PointHead_GetResult_Response_DataReader;
            #endif

            class PointHead_GetResult_Response_ 
            {
              public:
                typedef struct PointHead_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointHead_GetResult_Response_TypeSupport TypeSupport;
                typedef PointHead_GetResult_Response_DataWriter DataWriter;
                typedef PointHead_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                control_msgs::action::dds_::PointHead_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointHead_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointHead_GetResult_Response_Seq, PointHead_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool PointHead_GetResult_Response__initialize(
                PointHead_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool PointHead_GetResult_Response__initialize_ex(
                PointHead_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointHead_GetResult_Response__initialize_w_params(
                PointHead_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointHead_GetResult_Response__finalize(
                PointHead_GetResult_Response_* self);

            NDDSUSERDllExport
            void PointHead_GetResult_Response__finalize_ex(
                PointHead_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointHead_GetResult_Response__finalize_w_params(
                PointHead_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointHead_GetResult_Response__finalize_optional_members(
                PointHead_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointHead_GetResult_Response__copy(
                PointHead_GetResult_Response_* dst,
                const PointHead_GetResult_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *PointHead_Feedback_TYPENAME;

            struct PointHead_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointHead_Feedback_TypeSupport;
            class PointHead_Feedback_DataWriter;
            class PointHead_Feedback_DataReader;
            #endif

            class PointHead_Feedback_ 
            {
              public:
                typedef struct PointHead_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointHead_Feedback_TypeSupport TypeSupport;
                typedef PointHead_Feedback_DataWriter DataWriter;
                typedef PointHead_Feedback_DataReader DataReader;
                #endif

                DDS_Double   pointing_angle_error_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointHead_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointHead_Feedback_Seq, PointHead_Feedback_);

            NDDSUSERDllExport
            RTIBool PointHead_Feedback__initialize(
                PointHead_Feedback_* self);

            NDDSUSERDllExport
            RTIBool PointHead_Feedback__initialize_ex(
                PointHead_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointHead_Feedback__initialize_w_params(
                PointHead_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointHead_Feedback__finalize(
                PointHead_Feedback_* self);

            NDDSUSERDllExport
            void PointHead_Feedback__finalize_ex(
                PointHead_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointHead_Feedback__finalize_w_params(
                PointHead_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointHead_Feedback__finalize_optional_members(
                PointHead_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointHead_Feedback__copy(
                PointHead_Feedback_* dst,
                const PointHead_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *PointHead_FeedbackMessage_TYPENAME;

            struct PointHead_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointHead_FeedbackMessage_TypeSupport;
            class PointHead_FeedbackMessage_DataWriter;
            class PointHead_FeedbackMessage_DataReader;
            #endif

            class PointHead_FeedbackMessage_ 
            {
              public:
                typedef struct PointHead_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointHead_FeedbackMessage_TypeSupport TypeSupport;
                typedef PointHead_FeedbackMessage_DataWriter DataWriter;
                typedef PointHead_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::PointHead_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointHead_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointHead_FeedbackMessage_Seq, PointHead_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool PointHead_FeedbackMessage__initialize(
                PointHead_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool PointHead_FeedbackMessage__initialize_ex(
                PointHead_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointHead_FeedbackMessage__initialize_w_params(
                PointHead_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointHead_FeedbackMessage__finalize(
                PointHead_FeedbackMessage_* self);

            NDDSUSERDllExport
            void PointHead_FeedbackMessage__finalize_ex(
                PointHead_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointHead_FeedbackMessage__finalize_w_params(
                PointHead_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointHead_FeedbackMessage__finalize_optional_members(
                PointHead_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointHead_FeedbackMessage__copy(
                PointHead_FeedbackMessage_* dst,
                const PointHead_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */

#endif /* PointHead_ */

