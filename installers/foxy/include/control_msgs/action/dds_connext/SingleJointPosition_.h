

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SingleJointPosition_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SingleJointPosition__1831673647_h
#define SingleJointPosition__1831673647_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *SingleJointPosition_Goal_TYPENAME;

            struct SingleJointPosition_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SingleJointPosition_Goal_TypeSupport;
            class SingleJointPosition_Goal_DataWriter;
            class SingleJointPosition_Goal_DataReader;
            #endif

            class SingleJointPosition_Goal_ 
            {
              public:
                typedef struct SingleJointPosition_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SingleJointPosition_Goal_TypeSupport TypeSupport;
                typedef SingleJointPosition_Goal_DataWriter DataWriter;
                typedef SingleJointPosition_Goal_DataReader DataReader;
                #endif

                DDS_Double   position_ ;
                builtin_interfaces::msg::dds_::Duration_   min_duration_ ;
                DDS_Double   max_velocity_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SingleJointPosition_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SingleJointPosition_Goal_Seq, SingleJointPosition_Goal_);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Goal__initialize(
                SingleJointPosition_Goal_* self);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Goal__initialize_ex(
                SingleJointPosition_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Goal__initialize_w_params(
                SingleJointPosition_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SingleJointPosition_Goal__finalize(
                SingleJointPosition_Goal_* self);

            NDDSUSERDllExport
            void SingleJointPosition_Goal__finalize_ex(
                SingleJointPosition_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SingleJointPosition_Goal__finalize_w_params(
                SingleJointPosition_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SingleJointPosition_Goal__finalize_optional_members(
                SingleJointPosition_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Goal__copy(
                SingleJointPosition_Goal_* dst,
                const SingleJointPosition_Goal_* src);

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

            extern const char *SingleJointPosition_SendGoal_Request_TYPENAME;

            struct SingleJointPosition_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SingleJointPosition_SendGoal_Request_TypeSupport;
            class SingleJointPosition_SendGoal_Request_DataWriter;
            class SingleJointPosition_SendGoal_Request_DataReader;
            #endif

            class SingleJointPosition_SendGoal_Request_ 
            {
              public:
                typedef struct SingleJointPosition_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SingleJointPosition_SendGoal_Request_TypeSupport TypeSupport;
                typedef SingleJointPosition_SendGoal_Request_DataWriter DataWriter;
                typedef SingleJointPosition_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::SingleJointPosition_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SingleJointPosition_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SingleJointPosition_SendGoal_Request_Seq, SingleJointPosition_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_SendGoal_Request__initialize(
                SingleJointPosition_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_SendGoal_Request__initialize_ex(
                SingleJointPosition_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_SendGoal_Request__initialize_w_params(
                SingleJointPosition_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SingleJointPosition_SendGoal_Request__finalize(
                SingleJointPosition_SendGoal_Request_* self);

            NDDSUSERDllExport
            void SingleJointPosition_SendGoal_Request__finalize_ex(
                SingleJointPosition_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SingleJointPosition_SendGoal_Request__finalize_w_params(
                SingleJointPosition_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SingleJointPosition_SendGoal_Request__finalize_optional_members(
                SingleJointPosition_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SingleJointPosition_SendGoal_Request__copy(
                SingleJointPosition_SendGoal_Request_* dst,
                const SingleJointPosition_SendGoal_Request_* src);

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

            extern const char *SingleJointPosition_SendGoal_Response_TYPENAME;

            struct SingleJointPosition_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SingleJointPosition_SendGoal_Response_TypeSupport;
            class SingleJointPosition_SendGoal_Response_DataWriter;
            class SingleJointPosition_SendGoal_Response_DataReader;
            #endif

            class SingleJointPosition_SendGoal_Response_ 
            {
              public:
                typedef struct SingleJointPosition_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SingleJointPosition_SendGoal_Response_TypeSupport TypeSupport;
                typedef SingleJointPosition_SendGoal_Response_DataWriter DataWriter;
                typedef SingleJointPosition_SendGoal_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SingleJointPosition_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SingleJointPosition_SendGoal_Response_Seq, SingleJointPosition_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_SendGoal_Response__initialize(
                SingleJointPosition_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_SendGoal_Response__initialize_ex(
                SingleJointPosition_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_SendGoal_Response__initialize_w_params(
                SingleJointPosition_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SingleJointPosition_SendGoal_Response__finalize(
                SingleJointPosition_SendGoal_Response_* self);

            NDDSUSERDllExport
            void SingleJointPosition_SendGoal_Response__finalize_ex(
                SingleJointPosition_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SingleJointPosition_SendGoal_Response__finalize_w_params(
                SingleJointPosition_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SingleJointPosition_SendGoal_Response__finalize_optional_members(
                SingleJointPosition_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SingleJointPosition_SendGoal_Response__copy(
                SingleJointPosition_SendGoal_Response_* dst,
                const SingleJointPosition_SendGoal_Response_* src);

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

            extern const char *SingleJointPosition_Result_TYPENAME;

            struct SingleJointPosition_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SingleJointPosition_Result_TypeSupport;
            class SingleJointPosition_Result_DataWriter;
            class SingleJointPosition_Result_DataReader;
            #endif

            class SingleJointPosition_Result_ 
            {
              public:
                typedef struct SingleJointPosition_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SingleJointPosition_Result_TypeSupport TypeSupport;
                typedef SingleJointPosition_Result_DataWriter DataWriter;
                typedef SingleJointPosition_Result_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SingleJointPosition_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SingleJointPosition_Result_Seq, SingleJointPosition_Result_);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Result__initialize(
                SingleJointPosition_Result_* self);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Result__initialize_ex(
                SingleJointPosition_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Result__initialize_w_params(
                SingleJointPosition_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SingleJointPosition_Result__finalize(
                SingleJointPosition_Result_* self);

            NDDSUSERDllExport
            void SingleJointPosition_Result__finalize_ex(
                SingleJointPosition_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SingleJointPosition_Result__finalize_w_params(
                SingleJointPosition_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SingleJointPosition_Result__finalize_optional_members(
                SingleJointPosition_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Result__copy(
                SingleJointPosition_Result_* dst,
                const SingleJointPosition_Result_* src);

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

            extern const char *SingleJointPosition_GetResult_Request_TYPENAME;

            struct SingleJointPosition_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SingleJointPosition_GetResult_Request_TypeSupport;
            class SingleJointPosition_GetResult_Request_DataWriter;
            class SingleJointPosition_GetResult_Request_DataReader;
            #endif

            class SingleJointPosition_GetResult_Request_ 
            {
              public:
                typedef struct SingleJointPosition_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SingleJointPosition_GetResult_Request_TypeSupport TypeSupport;
                typedef SingleJointPosition_GetResult_Request_DataWriter DataWriter;
                typedef SingleJointPosition_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SingleJointPosition_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SingleJointPosition_GetResult_Request_Seq, SingleJointPosition_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_GetResult_Request__initialize(
                SingleJointPosition_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_GetResult_Request__initialize_ex(
                SingleJointPosition_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_GetResult_Request__initialize_w_params(
                SingleJointPosition_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SingleJointPosition_GetResult_Request__finalize(
                SingleJointPosition_GetResult_Request_* self);

            NDDSUSERDllExport
            void SingleJointPosition_GetResult_Request__finalize_ex(
                SingleJointPosition_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SingleJointPosition_GetResult_Request__finalize_w_params(
                SingleJointPosition_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SingleJointPosition_GetResult_Request__finalize_optional_members(
                SingleJointPosition_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SingleJointPosition_GetResult_Request__copy(
                SingleJointPosition_GetResult_Request_* dst,
                const SingleJointPosition_GetResult_Request_* src);

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

            extern const char *SingleJointPosition_GetResult_Response_TYPENAME;

            struct SingleJointPosition_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SingleJointPosition_GetResult_Response_TypeSupport;
            class SingleJointPosition_GetResult_Response_DataWriter;
            class SingleJointPosition_GetResult_Response_DataReader;
            #endif

            class SingleJointPosition_GetResult_Response_ 
            {
              public:
                typedef struct SingleJointPosition_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SingleJointPosition_GetResult_Response_TypeSupport TypeSupport;
                typedef SingleJointPosition_GetResult_Response_DataWriter DataWriter;
                typedef SingleJointPosition_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                control_msgs::action::dds_::SingleJointPosition_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SingleJointPosition_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SingleJointPosition_GetResult_Response_Seq, SingleJointPosition_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_GetResult_Response__initialize(
                SingleJointPosition_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_GetResult_Response__initialize_ex(
                SingleJointPosition_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_GetResult_Response__initialize_w_params(
                SingleJointPosition_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SingleJointPosition_GetResult_Response__finalize(
                SingleJointPosition_GetResult_Response_* self);

            NDDSUSERDllExport
            void SingleJointPosition_GetResult_Response__finalize_ex(
                SingleJointPosition_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SingleJointPosition_GetResult_Response__finalize_w_params(
                SingleJointPosition_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SingleJointPosition_GetResult_Response__finalize_optional_members(
                SingleJointPosition_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SingleJointPosition_GetResult_Response__copy(
                SingleJointPosition_GetResult_Response_* dst,
                const SingleJointPosition_GetResult_Response_* src);

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

            extern const char *SingleJointPosition_Feedback_TYPENAME;

            struct SingleJointPosition_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SingleJointPosition_Feedback_TypeSupport;
            class SingleJointPosition_Feedback_DataWriter;
            class SingleJointPosition_Feedback_DataReader;
            #endif

            class SingleJointPosition_Feedback_ 
            {
              public:
                typedef struct SingleJointPosition_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SingleJointPosition_Feedback_TypeSupport TypeSupport;
                typedef SingleJointPosition_Feedback_DataWriter DataWriter;
                typedef SingleJointPosition_Feedback_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   position_ ;
                DDS_Double   velocity_ ;
                DDS_Double   error_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SingleJointPosition_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SingleJointPosition_Feedback_Seq, SingleJointPosition_Feedback_);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Feedback__initialize(
                SingleJointPosition_Feedback_* self);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Feedback__initialize_ex(
                SingleJointPosition_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Feedback__initialize_w_params(
                SingleJointPosition_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SingleJointPosition_Feedback__finalize(
                SingleJointPosition_Feedback_* self);

            NDDSUSERDllExport
            void SingleJointPosition_Feedback__finalize_ex(
                SingleJointPosition_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SingleJointPosition_Feedback__finalize_w_params(
                SingleJointPosition_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SingleJointPosition_Feedback__finalize_optional_members(
                SingleJointPosition_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SingleJointPosition_Feedback__copy(
                SingleJointPosition_Feedback_* dst,
                const SingleJointPosition_Feedback_* src);

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

            extern const char *SingleJointPosition_FeedbackMessage_TYPENAME;

            struct SingleJointPosition_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SingleJointPosition_FeedbackMessage_TypeSupport;
            class SingleJointPosition_FeedbackMessage_DataWriter;
            class SingleJointPosition_FeedbackMessage_DataReader;
            #endif

            class SingleJointPosition_FeedbackMessage_ 
            {
              public:
                typedef struct SingleJointPosition_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SingleJointPosition_FeedbackMessage_TypeSupport TypeSupport;
                typedef SingleJointPosition_FeedbackMessage_DataWriter DataWriter;
                typedef SingleJointPosition_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::SingleJointPosition_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SingleJointPosition_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SingleJointPosition_FeedbackMessage_Seq, SingleJointPosition_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_FeedbackMessage__initialize(
                SingleJointPosition_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_FeedbackMessage__initialize_ex(
                SingleJointPosition_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SingleJointPosition_FeedbackMessage__initialize_w_params(
                SingleJointPosition_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SingleJointPosition_FeedbackMessage__finalize(
                SingleJointPosition_FeedbackMessage_* self);

            NDDSUSERDllExport
            void SingleJointPosition_FeedbackMessage__finalize_ex(
                SingleJointPosition_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SingleJointPosition_FeedbackMessage__finalize_w_params(
                SingleJointPosition_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SingleJointPosition_FeedbackMessage__finalize_optional_members(
                SingleJointPosition_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SingleJointPosition_FeedbackMessage__copy(
                SingleJointPosition_FeedbackMessage_* dst,
                const SingleJointPosition_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */

#endif /* SingleJointPosition_ */

