

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointTrajectory__321039193_h
#define JointTrajectory__321039193_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "trajectory_msgs/msg/dds_connext/JointTrajectory_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *JointTrajectory_Goal_TYPENAME;

            struct JointTrajectory_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_Goal_TypeSupport;
            class JointTrajectory_Goal_DataWriter;
            class JointTrajectory_Goal_DataReader;
            #endif

            class JointTrajectory_Goal_ 
            {
              public:
                typedef struct JointTrajectory_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_Goal_TypeSupport TypeSupport;
                typedef JointTrajectory_Goal_DataWriter DataWriter;
                typedef JointTrajectory_Goal_DataReader DataReader;
                #endif

                trajectory_msgs::msg::dds_::JointTrajectory_   trajectory_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_Goal_Seq, JointTrajectory_Goal_);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Goal__initialize(
                JointTrajectory_Goal_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Goal__initialize_ex(
                JointTrajectory_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Goal__initialize_w_params(
                JointTrajectory_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory_Goal__finalize(
                JointTrajectory_Goal_* self);

            NDDSUSERDllExport
            void JointTrajectory_Goal__finalize_ex(
                JointTrajectory_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory_Goal__finalize_w_params(
                JointTrajectory_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory_Goal__finalize_optional_members(
                JointTrajectory_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory_Goal__copy(
                JointTrajectory_Goal_* dst,
                const JointTrajectory_Goal_* src);

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

            extern const char *JointTrajectory_SendGoal_Request_TYPENAME;

            struct JointTrajectory_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_SendGoal_Request_TypeSupport;
            class JointTrajectory_SendGoal_Request_DataWriter;
            class JointTrajectory_SendGoal_Request_DataReader;
            #endif

            class JointTrajectory_SendGoal_Request_ 
            {
              public:
                typedef struct JointTrajectory_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_SendGoal_Request_TypeSupport TypeSupport;
                typedef JointTrajectory_SendGoal_Request_DataWriter DataWriter;
                typedef JointTrajectory_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::JointTrajectory_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_SendGoal_Request_Seq, JointTrajectory_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool JointTrajectory_SendGoal_Request__initialize(
                JointTrajectory_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory_SendGoal_Request__initialize_ex(
                JointTrajectory_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory_SendGoal_Request__initialize_w_params(
                JointTrajectory_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory_SendGoal_Request__finalize(
                JointTrajectory_SendGoal_Request_* self);

            NDDSUSERDllExport
            void JointTrajectory_SendGoal_Request__finalize_ex(
                JointTrajectory_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory_SendGoal_Request__finalize_w_params(
                JointTrajectory_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory_SendGoal_Request__finalize_optional_members(
                JointTrajectory_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory_SendGoal_Request__copy(
                JointTrajectory_SendGoal_Request_* dst,
                const JointTrajectory_SendGoal_Request_* src);

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

            extern const char *JointTrajectory_SendGoal_Response_TYPENAME;

            struct JointTrajectory_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_SendGoal_Response_TypeSupport;
            class JointTrajectory_SendGoal_Response_DataWriter;
            class JointTrajectory_SendGoal_Response_DataReader;
            #endif

            class JointTrajectory_SendGoal_Response_ 
            {
              public:
                typedef struct JointTrajectory_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_SendGoal_Response_TypeSupport TypeSupport;
                typedef JointTrajectory_SendGoal_Response_DataWriter DataWriter;
                typedef JointTrajectory_SendGoal_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_SendGoal_Response_Seq, JointTrajectory_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool JointTrajectory_SendGoal_Response__initialize(
                JointTrajectory_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory_SendGoal_Response__initialize_ex(
                JointTrajectory_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory_SendGoal_Response__initialize_w_params(
                JointTrajectory_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory_SendGoal_Response__finalize(
                JointTrajectory_SendGoal_Response_* self);

            NDDSUSERDllExport
            void JointTrajectory_SendGoal_Response__finalize_ex(
                JointTrajectory_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory_SendGoal_Response__finalize_w_params(
                JointTrajectory_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory_SendGoal_Response__finalize_optional_members(
                JointTrajectory_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory_SendGoal_Response__copy(
                JointTrajectory_SendGoal_Response_* dst,
                const JointTrajectory_SendGoal_Response_* src);

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

            extern const char *JointTrajectory_Result_TYPENAME;

            struct JointTrajectory_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_Result_TypeSupport;
            class JointTrajectory_Result_DataWriter;
            class JointTrajectory_Result_DataReader;
            #endif

            class JointTrajectory_Result_ 
            {
              public:
                typedef struct JointTrajectory_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_Result_TypeSupport TypeSupport;
                typedef JointTrajectory_Result_DataWriter DataWriter;
                typedef JointTrajectory_Result_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_Result_Seq, JointTrajectory_Result_);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Result__initialize(
                JointTrajectory_Result_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Result__initialize_ex(
                JointTrajectory_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Result__initialize_w_params(
                JointTrajectory_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory_Result__finalize(
                JointTrajectory_Result_* self);

            NDDSUSERDllExport
            void JointTrajectory_Result__finalize_ex(
                JointTrajectory_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory_Result__finalize_w_params(
                JointTrajectory_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory_Result__finalize_optional_members(
                JointTrajectory_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory_Result__copy(
                JointTrajectory_Result_* dst,
                const JointTrajectory_Result_* src);

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

            extern const char *JointTrajectory_GetResult_Request_TYPENAME;

            struct JointTrajectory_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_GetResult_Request_TypeSupport;
            class JointTrajectory_GetResult_Request_DataWriter;
            class JointTrajectory_GetResult_Request_DataReader;
            #endif

            class JointTrajectory_GetResult_Request_ 
            {
              public:
                typedef struct JointTrajectory_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_GetResult_Request_TypeSupport TypeSupport;
                typedef JointTrajectory_GetResult_Request_DataWriter DataWriter;
                typedef JointTrajectory_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_GetResult_Request_Seq, JointTrajectory_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool JointTrajectory_GetResult_Request__initialize(
                JointTrajectory_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory_GetResult_Request__initialize_ex(
                JointTrajectory_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory_GetResult_Request__initialize_w_params(
                JointTrajectory_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory_GetResult_Request__finalize(
                JointTrajectory_GetResult_Request_* self);

            NDDSUSERDllExport
            void JointTrajectory_GetResult_Request__finalize_ex(
                JointTrajectory_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory_GetResult_Request__finalize_w_params(
                JointTrajectory_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory_GetResult_Request__finalize_optional_members(
                JointTrajectory_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory_GetResult_Request__copy(
                JointTrajectory_GetResult_Request_* dst,
                const JointTrajectory_GetResult_Request_* src);

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

            extern const char *JointTrajectory_GetResult_Response_TYPENAME;

            struct JointTrajectory_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_GetResult_Response_TypeSupport;
            class JointTrajectory_GetResult_Response_DataWriter;
            class JointTrajectory_GetResult_Response_DataReader;
            #endif

            class JointTrajectory_GetResult_Response_ 
            {
              public:
                typedef struct JointTrajectory_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_GetResult_Response_TypeSupport TypeSupport;
                typedef JointTrajectory_GetResult_Response_DataWriter DataWriter;
                typedef JointTrajectory_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                control_msgs::action::dds_::JointTrajectory_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_GetResult_Response_Seq, JointTrajectory_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool JointTrajectory_GetResult_Response__initialize(
                JointTrajectory_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory_GetResult_Response__initialize_ex(
                JointTrajectory_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory_GetResult_Response__initialize_w_params(
                JointTrajectory_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory_GetResult_Response__finalize(
                JointTrajectory_GetResult_Response_* self);

            NDDSUSERDllExport
            void JointTrajectory_GetResult_Response__finalize_ex(
                JointTrajectory_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory_GetResult_Response__finalize_w_params(
                JointTrajectory_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory_GetResult_Response__finalize_optional_members(
                JointTrajectory_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory_GetResult_Response__copy(
                JointTrajectory_GetResult_Response_* dst,
                const JointTrajectory_GetResult_Response_* src);

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

            extern const char *JointTrajectory_Feedback_TYPENAME;

            struct JointTrajectory_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_Feedback_TypeSupport;
            class JointTrajectory_Feedback_DataWriter;
            class JointTrajectory_Feedback_DataReader;
            #endif

            class JointTrajectory_Feedback_ 
            {
              public:
                typedef struct JointTrajectory_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_Feedback_TypeSupport TypeSupport;
                typedef JointTrajectory_Feedback_DataWriter DataWriter;
                typedef JointTrajectory_Feedback_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_Feedback_Seq, JointTrajectory_Feedback_);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Feedback__initialize(
                JointTrajectory_Feedback_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Feedback__initialize_ex(
                JointTrajectory_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory_Feedback__initialize_w_params(
                JointTrajectory_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory_Feedback__finalize(
                JointTrajectory_Feedback_* self);

            NDDSUSERDllExport
            void JointTrajectory_Feedback__finalize_ex(
                JointTrajectory_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory_Feedback__finalize_w_params(
                JointTrajectory_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory_Feedback__finalize_optional_members(
                JointTrajectory_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory_Feedback__copy(
                JointTrajectory_Feedback_* dst,
                const JointTrajectory_Feedback_* src);

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

            extern const char *JointTrajectory_FeedbackMessage_TYPENAME;

            struct JointTrajectory_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_FeedbackMessage_TypeSupport;
            class JointTrajectory_FeedbackMessage_DataWriter;
            class JointTrajectory_FeedbackMessage_DataReader;
            #endif

            class JointTrajectory_FeedbackMessage_ 
            {
              public:
                typedef struct JointTrajectory_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_FeedbackMessage_TypeSupport TypeSupport;
                typedef JointTrajectory_FeedbackMessage_DataWriter DataWriter;
                typedef JointTrajectory_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::JointTrajectory_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_FeedbackMessage_Seq, JointTrajectory_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool JointTrajectory_FeedbackMessage__initialize(
                JointTrajectory_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory_FeedbackMessage__initialize_ex(
                JointTrajectory_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory_FeedbackMessage__initialize_w_params(
                JointTrajectory_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory_FeedbackMessage__finalize(
                JointTrajectory_FeedbackMessage_* self);

            NDDSUSERDllExport
            void JointTrajectory_FeedbackMessage__finalize_ex(
                JointTrajectory_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory_FeedbackMessage__finalize_w_params(
                JointTrajectory_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory_FeedbackMessage__finalize_optional_members(
                JointTrajectory_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory_FeedbackMessage__copy(
                JointTrajectory_FeedbackMessage_* dst,
                const JointTrajectory_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */

#endif /* JointTrajectory_ */

