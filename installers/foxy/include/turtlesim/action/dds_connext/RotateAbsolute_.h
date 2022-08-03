

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RotateAbsolute_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RotateAbsolute__174138592_h
#define RotateAbsolute__174138592_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace turtlesim {
    namespace action {
        namespace dds_ {

            extern const char *RotateAbsolute_Goal_TYPENAME;

            struct RotateAbsolute_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RotateAbsolute_Goal_TypeSupport;
            class RotateAbsolute_Goal_DataWriter;
            class RotateAbsolute_Goal_DataReader;
            #endif

            class RotateAbsolute_Goal_ 
            {
              public:
                typedef struct RotateAbsolute_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RotateAbsolute_Goal_TypeSupport TypeSupport;
                typedef RotateAbsolute_Goal_DataWriter DataWriter;
                typedef RotateAbsolute_Goal_DataReader DataReader;
                #endif

                DDS_Float   theta_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RotateAbsolute_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RotateAbsolute_Goal_Seq, RotateAbsolute_Goal_);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Goal__initialize(
                RotateAbsolute_Goal_* self);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Goal__initialize_ex(
                RotateAbsolute_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Goal__initialize_w_params(
                RotateAbsolute_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RotateAbsolute_Goal__finalize(
                RotateAbsolute_Goal_* self);

            NDDSUSERDllExport
            void RotateAbsolute_Goal__finalize_ex(
                RotateAbsolute_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RotateAbsolute_Goal__finalize_w_params(
                RotateAbsolute_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RotateAbsolute_Goal__finalize_optional_members(
                RotateAbsolute_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Goal__copy(
                RotateAbsolute_Goal_* dst,
                const RotateAbsolute_Goal_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            extern const char *RotateAbsolute_SendGoal_Request_TYPENAME;

            struct RotateAbsolute_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RotateAbsolute_SendGoal_Request_TypeSupport;
            class RotateAbsolute_SendGoal_Request_DataWriter;
            class RotateAbsolute_SendGoal_Request_DataReader;
            #endif

            class RotateAbsolute_SendGoal_Request_ 
            {
              public:
                typedef struct RotateAbsolute_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RotateAbsolute_SendGoal_Request_TypeSupport TypeSupport;
                typedef RotateAbsolute_SendGoal_Request_DataWriter DataWriter;
                typedef RotateAbsolute_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                turtlesim::action::dds_::RotateAbsolute_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RotateAbsolute_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RotateAbsolute_SendGoal_Request_Seq, RotateAbsolute_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_SendGoal_Request__initialize(
                RotateAbsolute_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_SendGoal_Request__initialize_ex(
                RotateAbsolute_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_SendGoal_Request__initialize_w_params(
                RotateAbsolute_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RotateAbsolute_SendGoal_Request__finalize(
                RotateAbsolute_SendGoal_Request_* self);

            NDDSUSERDllExport
            void RotateAbsolute_SendGoal_Request__finalize_ex(
                RotateAbsolute_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RotateAbsolute_SendGoal_Request__finalize_w_params(
                RotateAbsolute_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RotateAbsolute_SendGoal_Request__finalize_optional_members(
                RotateAbsolute_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RotateAbsolute_SendGoal_Request__copy(
                RotateAbsolute_SendGoal_Request_* dst,
                const RotateAbsolute_SendGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            extern const char *RotateAbsolute_SendGoal_Response_TYPENAME;

            struct RotateAbsolute_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RotateAbsolute_SendGoal_Response_TypeSupport;
            class RotateAbsolute_SendGoal_Response_DataWriter;
            class RotateAbsolute_SendGoal_Response_DataReader;
            #endif

            class RotateAbsolute_SendGoal_Response_ 
            {
              public:
                typedef struct RotateAbsolute_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RotateAbsolute_SendGoal_Response_TypeSupport TypeSupport;
                typedef RotateAbsolute_SendGoal_Response_DataWriter DataWriter;
                typedef RotateAbsolute_SendGoal_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* RotateAbsolute_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RotateAbsolute_SendGoal_Response_Seq, RotateAbsolute_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_SendGoal_Response__initialize(
                RotateAbsolute_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_SendGoal_Response__initialize_ex(
                RotateAbsolute_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_SendGoal_Response__initialize_w_params(
                RotateAbsolute_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RotateAbsolute_SendGoal_Response__finalize(
                RotateAbsolute_SendGoal_Response_* self);

            NDDSUSERDllExport
            void RotateAbsolute_SendGoal_Response__finalize_ex(
                RotateAbsolute_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RotateAbsolute_SendGoal_Response__finalize_w_params(
                RotateAbsolute_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RotateAbsolute_SendGoal_Response__finalize_optional_members(
                RotateAbsolute_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RotateAbsolute_SendGoal_Response__copy(
                RotateAbsolute_SendGoal_Response_* dst,
                const RotateAbsolute_SendGoal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            extern const char *RotateAbsolute_Result_TYPENAME;

            struct RotateAbsolute_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RotateAbsolute_Result_TypeSupport;
            class RotateAbsolute_Result_DataWriter;
            class RotateAbsolute_Result_DataReader;
            #endif

            class RotateAbsolute_Result_ 
            {
              public:
                typedef struct RotateAbsolute_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RotateAbsolute_Result_TypeSupport TypeSupport;
                typedef RotateAbsolute_Result_DataWriter DataWriter;
                typedef RotateAbsolute_Result_DataReader DataReader;
                #endif

                DDS_Float   delta_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RotateAbsolute_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RotateAbsolute_Result_Seq, RotateAbsolute_Result_);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Result__initialize(
                RotateAbsolute_Result_* self);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Result__initialize_ex(
                RotateAbsolute_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Result__initialize_w_params(
                RotateAbsolute_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RotateAbsolute_Result__finalize(
                RotateAbsolute_Result_* self);

            NDDSUSERDllExport
            void RotateAbsolute_Result__finalize_ex(
                RotateAbsolute_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RotateAbsolute_Result__finalize_w_params(
                RotateAbsolute_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RotateAbsolute_Result__finalize_optional_members(
                RotateAbsolute_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Result__copy(
                RotateAbsolute_Result_* dst,
                const RotateAbsolute_Result_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            extern const char *RotateAbsolute_GetResult_Request_TYPENAME;

            struct RotateAbsolute_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RotateAbsolute_GetResult_Request_TypeSupport;
            class RotateAbsolute_GetResult_Request_DataWriter;
            class RotateAbsolute_GetResult_Request_DataReader;
            #endif

            class RotateAbsolute_GetResult_Request_ 
            {
              public:
                typedef struct RotateAbsolute_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RotateAbsolute_GetResult_Request_TypeSupport TypeSupport;
                typedef RotateAbsolute_GetResult_Request_DataWriter DataWriter;
                typedef RotateAbsolute_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RotateAbsolute_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RotateAbsolute_GetResult_Request_Seq, RotateAbsolute_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_GetResult_Request__initialize(
                RotateAbsolute_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_GetResult_Request__initialize_ex(
                RotateAbsolute_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_GetResult_Request__initialize_w_params(
                RotateAbsolute_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RotateAbsolute_GetResult_Request__finalize(
                RotateAbsolute_GetResult_Request_* self);

            NDDSUSERDllExport
            void RotateAbsolute_GetResult_Request__finalize_ex(
                RotateAbsolute_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RotateAbsolute_GetResult_Request__finalize_w_params(
                RotateAbsolute_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RotateAbsolute_GetResult_Request__finalize_optional_members(
                RotateAbsolute_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RotateAbsolute_GetResult_Request__copy(
                RotateAbsolute_GetResult_Request_* dst,
                const RotateAbsolute_GetResult_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            extern const char *RotateAbsolute_GetResult_Response_TYPENAME;

            struct RotateAbsolute_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RotateAbsolute_GetResult_Response_TypeSupport;
            class RotateAbsolute_GetResult_Response_DataWriter;
            class RotateAbsolute_GetResult_Response_DataReader;
            #endif

            class RotateAbsolute_GetResult_Response_ 
            {
              public:
                typedef struct RotateAbsolute_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RotateAbsolute_GetResult_Response_TypeSupport TypeSupport;
                typedef RotateAbsolute_GetResult_Response_DataWriter DataWriter;
                typedef RotateAbsolute_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                turtlesim::action::dds_::RotateAbsolute_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RotateAbsolute_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RotateAbsolute_GetResult_Response_Seq, RotateAbsolute_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_GetResult_Response__initialize(
                RotateAbsolute_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_GetResult_Response__initialize_ex(
                RotateAbsolute_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_GetResult_Response__initialize_w_params(
                RotateAbsolute_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RotateAbsolute_GetResult_Response__finalize(
                RotateAbsolute_GetResult_Response_* self);

            NDDSUSERDllExport
            void RotateAbsolute_GetResult_Response__finalize_ex(
                RotateAbsolute_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RotateAbsolute_GetResult_Response__finalize_w_params(
                RotateAbsolute_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RotateAbsolute_GetResult_Response__finalize_optional_members(
                RotateAbsolute_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RotateAbsolute_GetResult_Response__copy(
                RotateAbsolute_GetResult_Response_* dst,
                const RotateAbsolute_GetResult_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            extern const char *RotateAbsolute_Feedback_TYPENAME;

            struct RotateAbsolute_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RotateAbsolute_Feedback_TypeSupport;
            class RotateAbsolute_Feedback_DataWriter;
            class RotateAbsolute_Feedback_DataReader;
            #endif

            class RotateAbsolute_Feedback_ 
            {
              public:
                typedef struct RotateAbsolute_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RotateAbsolute_Feedback_TypeSupport TypeSupport;
                typedef RotateAbsolute_Feedback_DataWriter DataWriter;
                typedef RotateAbsolute_Feedback_DataReader DataReader;
                #endif

                DDS_Float   remaining_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RotateAbsolute_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RotateAbsolute_Feedback_Seq, RotateAbsolute_Feedback_);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Feedback__initialize(
                RotateAbsolute_Feedback_* self);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Feedback__initialize_ex(
                RotateAbsolute_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Feedback__initialize_w_params(
                RotateAbsolute_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RotateAbsolute_Feedback__finalize(
                RotateAbsolute_Feedback_* self);

            NDDSUSERDllExport
            void RotateAbsolute_Feedback__finalize_ex(
                RotateAbsolute_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RotateAbsolute_Feedback__finalize_w_params(
                RotateAbsolute_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RotateAbsolute_Feedback__finalize_optional_members(
                RotateAbsolute_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RotateAbsolute_Feedback__copy(
                RotateAbsolute_Feedback_* dst,
                const RotateAbsolute_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            extern const char *RotateAbsolute_FeedbackMessage_TYPENAME;

            struct RotateAbsolute_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RotateAbsolute_FeedbackMessage_TypeSupport;
            class RotateAbsolute_FeedbackMessage_DataWriter;
            class RotateAbsolute_FeedbackMessage_DataReader;
            #endif

            class RotateAbsolute_FeedbackMessage_ 
            {
              public:
                typedef struct RotateAbsolute_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RotateAbsolute_FeedbackMessage_TypeSupport TypeSupport;
                typedef RotateAbsolute_FeedbackMessage_DataWriter DataWriter;
                typedef RotateAbsolute_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                turtlesim::action::dds_::RotateAbsolute_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RotateAbsolute_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RotateAbsolute_FeedbackMessage_Seq, RotateAbsolute_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_FeedbackMessage__initialize(
                RotateAbsolute_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_FeedbackMessage__initialize_ex(
                RotateAbsolute_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RotateAbsolute_FeedbackMessage__initialize_w_params(
                RotateAbsolute_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RotateAbsolute_FeedbackMessage__finalize(
                RotateAbsolute_FeedbackMessage_* self);

            NDDSUSERDllExport
            void RotateAbsolute_FeedbackMessage__finalize_ex(
                RotateAbsolute_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RotateAbsolute_FeedbackMessage__finalize_w_params(
                RotateAbsolute_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RotateAbsolute_FeedbackMessage__finalize_optional_members(
                RotateAbsolute_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RotateAbsolute_FeedbackMessage__copy(
                RotateAbsolute_FeedbackMessage_* dst,
                const RotateAbsolute_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace turtlesim  */

#endif /* RotateAbsolute_ */

