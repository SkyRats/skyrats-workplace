

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GripperCommand_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GripperCommand__2043832846_h
#define GripperCommand__2043832846_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "control_msgs/msg/dds_connext/GripperCommand_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *GripperCommand_Goal_TYPENAME;

            struct GripperCommand_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_Goal_TypeSupport;
            class GripperCommand_Goal_DataWriter;
            class GripperCommand_Goal_DataReader;
            #endif

            class GripperCommand_Goal_ 
            {
              public:
                typedef struct GripperCommand_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_Goal_TypeSupport TypeSupport;
                typedef GripperCommand_Goal_DataWriter DataWriter;
                typedef GripperCommand_Goal_DataReader DataReader;
                #endif

                control_msgs::msg::dds_::GripperCommand_   command_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GripperCommand_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_Goal_Seq, GripperCommand_Goal_);

            NDDSUSERDllExport
            RTIBool GripperCommand_Goal__initialize(
                GripperCommand_Goal_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand_Goal__initialize_ex(
                GripperCommand_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand_Goal__initialize_w_params(
                GripperCommand_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand_Goal__finalize(
                GripperCommand_Goal_* self);

            NDDSUSERDllExport
            void GripperCommand_Goal__finalize_ex(
                GripperCommand_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand_Goal__finalize_w_params(
                GripperCommand_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand_Goal__finalize_optional_members(
                GripperCommand_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand_Goal__copy(
                GripperCommand_Goal_* dst,
                const GripperCommand_Goal_* src);

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

            extern const char *GripperCommand_SendGoal_Request_TYPENAME;

            struct GripperCommand_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_SendGoal_Request_TypeSupport;
            class GripperCommand_SendGoal_Request_DataWriter;
            class GripperCommand_SendGoal_Request_DataReader;
            #endif

            class GripperCommand_SendGoal_Request_ 
            {
              public:
                typedef struct GripperCommand_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_SendGoal_Request_TypeSupport TypeSupport;
                typedef GripperCommand_SendGoal_Request_DataWriter DataWriter;
                typedef GripperCommand_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::GripperCommand_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GripperCommand_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_SendGoal_Request_Seq, GripperCommand_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool GripperCommand_SendGoal_Request__initialize(
                GripperCommand_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand_SendGoal_Request__initialize_ex(
                GripperCommand_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand_SendGoal_Request__initialize_w_params(
                GripperCommand_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand_SendGoal_Request__finalize(
                GripperCommand_SendGoal_Request_* self);

            NDDSUSERDllExport
            void GripperCommand_SendGoal_Request__finalize_ex(
                GripperCommand_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand_SendGoal_Request__finalize_w_params(
                GripperCommand_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand_SendGoal_Request__finalize_optional_members(
                GripperCommand_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand_SendGoal_Request__copy(
                GripperCommand_SendGoal_Request_* dst,
                const GripperCommand_SendGoal_Request_* src);

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

            extern const char *GripperCommand_SendGoal_Response_TYPENAME;

            struct GripperCommand_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_SendGoal_Response_TypeSupport;
            class GripperCommand_SendGoal_Response_DataWriter;
            class GripperCommand_SendGoal_Response_DataReader;
            #endif

            class GripperCommand_SendGoal_Response_ 
            {
              public:
                typedef struct GripperCommand_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_SendGoal_Response_TypeSupport TypeSupport;
                typedef GripperCommand_SendGoal_Response_DataWriter DataWriter;
                typedef GripperCommand_SendGoal_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* GripperCommand_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_SendGoal_Response_Seq, GripperCommand_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool GripperCommand_SendGoal_Response__initialize(
                GripperCommand_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand_SendGoal_Response__initialize_ex(
                GripperCommand_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand_SendGoal_Response__initialize_w_params(
                GripperCommand_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand_SendGoal_Response__finalize(
                GripperCommand_SendGoal_Response_* self);

            NDDSUSERDllExport
            void GripperCommand_SendGoal_Response__finalize_ex(
                GripperCommand_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand_SendGoal_Response__finalize_w_params(
                GripperCommand_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand_SendGoal_Response__finalize_optional_members(
                GripperCommand_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand_SendGoal_Response__copy(
                GripperCommand_SendGoal_Response_* dst,
                const GripperCommand_SendGoal_Response_* src);

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

            extern const char *GripperCommand_Result_TYPENAME;

            struct GripperCommand_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_Result_TypeSupport;
            class GripperCommand_Result_DataWriter;
            class GripperCommand_Result_DataReader;
            #endif

            class GripperCommand_Result_ 
            {
              public:
                typedef struct GripperCommand_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_Result_TypeSupport TypeSupport;
                typedef GripperCommand_Result_DataWriter DataWriter;
                typedef GripperCommand_Result_DataReader DataReader;
                #endif

                DDS_Double   position_ ;
                DDS_Double   effort_ ;
                DDS_Boolean   stalled_ ;
                DDS_Boolean   reached_goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GripperCommand_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_Result_Seq, GripperCommand_Result_);

            NDDSUSERDllExport
            RTIBool GripperCommand_Result__initialize(
                GripperCommand_Result_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand_Result__initialize_ex(
                GripperCommand_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand_Result__initialize_w_params(
                GripperCommand_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand_Result__finalize(
                GripperCommand_Result_* self);

            NDDSUSERDllExport
            void GripperCommand_Result__finalize_ex(
                GripperCommand_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand_Result__finalize_w_params(
                GripperCommand_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand_Result__finalize_optional_members(
                GripperCommand_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand_Result__copy(
                GripperCommand_Result_* dst,
                const GripperCommand_Result_* src);

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

            extern const char *GripperCommand_GetResult_Request_TYPENAME;

            struct GripperCommand_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_GetResult_Request_TypeSupport;
            class GripperCommand_GetResult_Request_DataWriter;
            class GripperCommand_GetResult_Request_DataReader;
            #endif

            class GripperCommand_GetResult_Request_ 
            {
              public:
                typedef struct GripperCommand_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_GetResult_Request_TypeSupport TypeSupport;
                typedef GripperCommand_GetResult_Request_DataWriter DataWriter;
                typedef GripperCommand_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GripperCommand_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_GetResult_Request_Seq, GripperCommand_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool GripperCommand_GetResult_Request__initialize(
                GripperCommand_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand_GetResult_Request__initialize_ex(
                GripperCommand_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand_GetResult_Request__initialize_w_params(
                GripperCommand_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand_GetResult_Request__finalize(
                GripperCommand_GetResult_Request_* self);

            NDDSUSERDllExport
            void GripperCommand_GetResult_Request__finalize_ex(
                GripperCommand_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand_GetResult_Request__finalize_w_params(
                GripperCommand_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand_GetResult_Request__finalize_optional_members(
                GripperCommand_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand_GetResult_Request__copy(
                GripperCommand_GetResult_Request_* dst,
                const GripperCommand_GetResult_Request_* src);

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

            extern const char *GripperCommand_GetResult_Response_TYPENAME;

            struct GripperCommand_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_GetResult_Response_TypeSupport;
            class GripperCommand_GetResult_Response_DataWriter;
            class GripperCommand_GetResult_Response_DataReader;
            #endif

            class GripperCommand_GetResult_Response_ 
            {
              public:
                typedef struct GripperCommand_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_GetResult_Response_TypeSupport TypeSupport;
                typedef GripperCommand_GetResult_Response_DataWriter DataWriter;
                typedef GripperCommand_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                control_msgs::action::dds_::GripperCommand_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GripperCommand_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_GetResult_Response_Seq, GripperCommand_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool GripperCommand_GetResult_Response__initialize(
                GripperCommand_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand_GetResult_Response__initialize_ex(
                GripperCommand_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand_GetResult_Response__initialize_w_params(
                GripperCommand_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand_GetResult_Response__finalize(
                GripperCommand_GetResult_Response_* self);

            NDDSUSERDllExport
            void GripperCommand_GetResult_Response__finalize_ex(
                GripperCommand_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand_GetResult_Response__finalize_w_params(
                GripperCommand_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand_GetResult_Response__finalize_optional_members(
                GripperCommand_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand_GetResult_Response__copy(
                GripperCommand_GetResult_Response_* dst,
                const GripperCommand_GetResult_Response_* src);

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

            extern const char *GripperCommand_Feedback_TYPENAME;

            struct GripperCommand_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_Feedback_TypeSupport;
            class GripperCommand_Feedback_DataWriter;
            class GripperCommand_Feedback_DataReader;
            #endif

            class GripperCommand_Feedback_ 
            {
              public:
                typedef struct GripperCommand_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_Feedback_TypeSupport TypeSupport;
                typedef GripperCommand_Feedback_DataWriter DataWriter;
                typedef GripperCommand_Feedback_DataReader DataReader;
                #endif

                DDS_Double   position_ ;
                DDS_Double   effort_ ;
                DDS_Boolean   stalled_ ;
                DDS_Boolean   reached_goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GripperCommand_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_Feedback_Seq, GripperCommand_Feedback_);

            NDDSUSERDllExport
            RTIBool GripperCommand_Feedback__initialize(
                GripperCommand_Feedback_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand_Feedback__initialize_ex(
                GripperCommand_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand_Feedback__initialize_w_params(
                GripperCommand_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand_Feedback__finalize(
                GripperCommand_Feedback_* self);

            NDDSUSERDllExport
            void GripperCommand_Feedback__finalize_ex(
                GripperCommand_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand_Feedback__finalize_w_params(
                GripperCommand_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand_Feedback__finalize_optional_members(
                GripperCommand_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand_Feedback__copy(
                GripperCommand_Feedback_* dst,
                const GripperCommand_Feedback_* src);

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

            extern const char *GripperCommand_FeedbackMessage_TYPENAME;

            struct GripperCommand_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_FeedbackMessage_TypeSupport;
            class GripperCommand_FeedbackMessage_DataWriter;
            class GripperCommand_FeedbackMessage_DataReader;
            #endif

            class GripperCommand_FeedbackMessage_ 
            {
              public:
                typedef struct GripperCommand_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_FeedbackMessage_TypeSupport TypeSupport;
                typedef GripperCommand_FeedbackMessage_DataWriter DataWriter;
                typedef GripperCommand_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::GripperCommand_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GripperCommand_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_FeedbackMessage_Seq, GripperCommand_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool GripperCommand_FeedbackMessage__initialize(
                GripperCommand_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand_FeedbackMessage__initialize_ex(
                GripperCommand_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand_FeedbackMessage__initialize_w_params(
                GripperCommand_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand_FeedbackMessage__finalize(
                GripperCommand_FeedbackMessage_* self);

            NDDSUSERDllExport
            void GripperCommand_FeedbackMessage__finalize_ex(
                GripperCommand_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand_FeedbackMessage__finalize_w_params(
                GripperCommand_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand_FeedbackMessage__finalize_optional_members(
                GripperCommand_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand_FeedbackMessage__copy(
                GripperCommand_FeedbackMessage_* dst,
                const GripperCommand_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */

#endif /* GripperCommand_ */

