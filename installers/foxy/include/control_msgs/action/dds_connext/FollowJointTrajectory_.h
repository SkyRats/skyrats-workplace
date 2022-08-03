

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FollowJointTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FollowJointTrajectory__1305761419_h
#define FollowJointTrajectory__1305761419_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "control_msgs/msg/dds_connext/JointTolerance_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
#include "trajectory_msgs/msg/dds_connext/JointTrajectory_.h"
#include "trajectory_msgs/msg/dds_connext/JointTrajectoryPoint_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace control_msgs {
    namespace action {
        namespace dds_ {

            extern const char *FollowJointTrajectory_Goal_TYPENAME;

            struct FollowJointTrajectory_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FollowJointTrajectory_Goal_TypeSupport;
            class FollowJointTrajectory_Goal_DataWriter;
            class FollowJointTrajectory_Goal_DataReader;
            #endif

            class FollowJointTrajectory_Goal_ 
            {
              public:
                typedef struct FollowJointTrajectory_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FollowJointTrajectory_Goal_TypeSupport TypeSupport;
                typedef FollowJointTrajectory_Goal_DataWriter DataWriter;
                typedef FollowJointTrajectory_Goal_DataReader DataReader;
                #endif

                trajectory_msgs::msg::dds_::JointTrajectory_   trajectory_ ;
                control_msgs::msg::dds_::JointTolerance_Seq  path_tolerance_ ;
                control_msgs::msg::dds_::JointTolerance_Seq  goal_tolerance_ ;
                builtin_interfaces::msg::dds_::Duration_   goal_time_tolerance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FollowJointTrajectory_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FollowJointTrajectory_Goal_Seq, FollowJointTrajectory_Goal_);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Goal__initialize(
                FollowJointTrajectory_Goal_* self);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Goal__initialize_ex(
                FollowJointTrajectory_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Goal__initialize_w_params(
                FollowJointTrajectory_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FollowJointTrajectory_Goal__finalize(
                FollowJointTrajectory_Goal_* self);

            NDDSUSERDllExport
            void FollowJointTrajectory_Goal__finalize_ex(
                FollowJointTrajectory_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FollowJointTrajectory_Goal__finalize_w_params(
                FollowJointTrajectory_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FollowJointTrajectory_Goal__finalize_optional_members(
                FollowJointTrajectory_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Goal__copy(
                FollowJointTrajectory_Goal_* dst,
                const FollowJointTrajectory_Goal_* src);

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

            extern const char *FollowJointTrajectory_SendGoal_Request_TYPENAME;

            struct FollowJointTrajectory_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FollowJointTrajectory_SendGoal_Request_TypeSupport;
            class FollowJointTrajectory_SendGoal_Request_DataWriter;
            class FollowJointTrajectory_SendGoal_Request_DataReader;
            #endif

            class FollowJointTrajectory_SendGoal_Request_ 
            {
              public:
                typedef struct FollowJointTrajectory_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FollowJointTrajectory_SendGoal_Request_TypeSupport TypeSupport;
                typedef FollowJointTrajectory_SendGoal_Request_DataWriter DataWriter;
                typedef FollowJointTrajectory_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::FollowJointTrajectory_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FollowJointTrajectory_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FollowJointTrajectory_SendGoal_Request_Seq, FollowJointTrajectory_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_SendGoal_Request__initialize(
                FollowJointTrajectory_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_SendGoal_Request__initialize_ex(
                FollowJointTrajectory_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_SendGoal_Request__initialize_w_params(
                FollowJointTrajectory_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FollowJointTrajectory_SendGoal_Request__finalize(
                FollowJointTrajectory_SendGoal_Request_* self);

            NDDSUSERDllExport
            void FollowJointTrajectory_SendGoal_Request__finalize_ex(
                FollowJointTrajectory_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FollowJointTrajectory_SendGoal_Request__finalize_w_params(
                FollowJointTrajectory_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FollowJointTrajectory_SendGoal_Request__finalize_optional_members(
                FollowJointTrajectory_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_SendGoal_Request__copy(
                FollowJointTrajectory_SendGoal_Request_* dst,
                const FollowJointTrajectory_SendGoal_Request_* src);

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

            extern const char *FollowJointTrajectory_SendGoal_Response_TYPENAME;

            struct FollowJointTrajectory_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FollowJointTrajectory_SendGoal_Response_TypeSupport;
            class FollowJointTrajectory_SendGoal_Response_DataWriter;
            class FollowJointTrajectory_SendGoal_Response_DataReader;
            #endif

            class FollowJointTrajectory_SendGoal_Response_ 
            {
              public:
                typedef struct FollowJointTrajectory_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FollowJointTrajectory_SendGoal_Response_TypeSupport TypeSupport;
                typedef FollowJointTrajectory_SendGoal_Response_DataWriter DataWriter;
                typedef FollowJointTrajectory_SendGoal_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* FollowJointTrajectory_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FollowJointTrajectory_SendGoal_Response_Seq, FollowJointTrajectory_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_SendGoal_Response__initialize(
                FollowJointTrajectory_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_SendGoal_Response__initialize_ex(
                FollowJointTrajectory_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_SendGoal_Response__initialize_w_params(
                FollowJointTrajectory_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FollowJointTrajectory_SendGoal_Response__finalize(
                FollowJointTrajectory_SendGoal_Response_* self);

            NDDSUSERDllExport
            void FollowJointTrajectory_SendGoal_Response__finalize_ex(
                FollowJointTrajectory_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FollowJointTrajectory_SendGoal_Response__finalize_w_params(
                FollowJointTrajectory_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FollowJointTrajectory_SendGoal_Response__finalize_optional_members(
                FollowJointTrajectory_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_SendGoal_Response__copy(
                FollowJointTrajectory_SendGoal_Response_* dst,
                const FollowJointTrajectory_SendGoal_Response_* src);

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
            namespace FollowJointTrajectory_Result_Constants {
                static const DDS_Long SUCCESSFUL_= 0;
                static const DDS_Long INVALID_GOAL_= -1;
                static const DDS_Long INVALID_JOINTS_= -2;
                static const DDS_Long OLD_HEADER_TIMESTAMP_= -3;
                static const DDS_Long PATH_TOLERANCE_VIOLATED_= -4;
                static const DDS_Long GOAL_TOLERANCE_VIOLATED_= -5;
            } /* namespace FollowJointTrajectory_Result_Constants  */

            extern const char *FollowJointTrajectory_Result_TYPENAME;

            struct FollowJointTrajectory_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FollowJointTrajectory_Result_TypeSupport;
            class FollowJointTrajectory_Result_DataWriter;
            class FollowJointTrajectory_Result_DataReader;
            #endif

            class FollowJointTrajectory_Result_ 
            {
              public:
                typedef struct FollowJointTrajectory_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FollowJointTrajectory_Result_TypeSupport TypeSupport;
                typedef FollowJointTrajectory_Result_DataWriter DataWriter;
                typedef FollowJointTrajectory_Result_DataReader DataReader;
                #endif

                DDS_Long   error_code_ ;
                DDS_Char *   error_string_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FollowJointTrajectory_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FollowJointTrajectory_Result_Seq, FollowJointTrajectory_Result_);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Result__initialize(
                FollowJointTrajectory_Result_* self);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Result__initialize_ex(
                FollowJointTrajectory_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Result__initialize_w_params(
                FollowJointTrajectory_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FollowJointTrajectory_Result__finalize(
                FollowJointTrajectory_Result_* self);

            NDDSUSERDllExport
            void FollowJointTrajectory_Result__finalize_ex(
                FollowJointTrajectory_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FollowJointTrajectory_Result__finalize_w_params(
                FollowJointTrajectory_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FollowJointTrajectory_Result__finalize_optional_members(
                FollowJointTrajectory_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Result__copy(
                FollowJointTrajectory_Result_* dst,
                const FollowJointTrajectory_Result_* src);

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

            extern const char *FollowJointTrajectory_GetResult_Request_TYPENAME;

            struct FollowJointTrajectory_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FollowJointTrajectory_GetResult_Request_TypeSupport;
            class FollowJointTrajectory_GetResult_Request_DataWriter;
            class FollowJointTrajectory_GetResult_Request_DataReader;
            #endif

            class FollowJointTrajectory_GetResult_Request_ 
            {
              public:
                typedef struct FollowJointTrajectory_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FollowJointTrajectory_GetResult_Request_TypeSupport TypeSupport;
                typedef FollowJointTrajectory_GetResult_Request_DataWriter DataWriter;
                typedef FollowJointTrajectory_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FollowJointTrajectory_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FollowJointTrajectory_GetResult_Request_Seq, FollowJointTrajectory_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_GetResult_Request__initialize(
                FollowJointTrajectory_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_GetResult_Request__initialize_ex(
                FollowJointTrajectory_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_GetResult_Request__initialize_w_params(
                FollowJointTrajectory_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FollowJointTrajectory_GetResult_Request__finalize(
                FollowJointTrajectory_GetResult_Request_* self);

            NDDSUSERDllExport
            void FollowJointTrajectory_GetResult_Request__finalize_ex(
                FollowJointTrajectory_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FollowJointTrajectory_GetResult_Request__finalize_w_params(
                FollowJointTrajectory_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FollowJointTrajectory_GetResult_Request__finalize_optional_members(
                FollowJointTrajectory_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_GetResult_Request__copy(
                FollowJointTrajectory_GetResult_Request_* dst,
                const FollowJointTrajectory_GetResult_Request_* src);

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

            extern const char *FollowJointTrajectory_GetResult_Response_TYPENAME;

            struct FollowJointTrajectory_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FollowJointTrajectory_GetResult_Response_TypeSupport;
            class FollowJointTrajectory_GetResult_Response_DataWriter;
            class FollowJointTrajectory_GetResult_Response_DataReader;
            #endif

            class FollowJointTrajectory_GetResult_Response_ 
            {
              public:
                typedef struct FollowJointTrajectory_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FollowJointTrajectory_GetResult_Response_TypeSupport TypeSupport;
                typedef FollowJointTrajectory_GetResult_Response_DataWriter DataWriter;
                typedef FollowJointTrajectory_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                control_msgs::action::dds_::FollowJointTrajectory_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FollowJointTrajectory_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FollowJointTrajectory_GetResult_Response_Seq, FollowJointTrajectory_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_GetResult_Response__initialize(
                FollowJointTrajectory_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_GetResult_Response__initialize_ex(
                FollowJointTrajectory_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_GetResult_Response__initialize_w_params(
                FollowJointTrajectory_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FollowJointTrajectory_GetResult_Response__finalize(
                FollowJointTrajectory_GetResult_Response_* self);

            NDDSUSERDllExport
            void FollowJointTrajectory_GetResult_Response__finalize_ex(
                FollowJointTrajectory_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FollowJointTrajectory_GetResult_Response__finalize_w_params(
                FollowJointTrajectory_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FollowJointTrajectory_GetResult_Response__finalize_optional_members(
                FollowJointTrajectory_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_GetResult_Response__copy(
                FollowJointTrajectory_GetResult_Response_* dst,
                const FollowJointTrajectory_GetResult_Response_* src);

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

            extern const char *FollowJointTrajectory_Feedback_TYPENAME;

            struct FollowJointTrajectory_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FollowJointTrajectory_Feedback_TypeSupport;
            class FollowJointTrajectory_Feedback_DataWriter;
            class FollowJointTrajectory_Feedback_DataReader;
            #endif

            class FollowJointTrajectory_Feedback_ 
            {
              public:
                typedef struct FollowJointTrajectory_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FollowJointTrajectory_Feedback_TypeSupport TypeSupport;
                typedef FollowJointTrajectory_Feedback_DataWriter DataWriter;
                typedef FollowJointTrajectory_Feedback_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  joint_names_ ;
                trajectory_msgs::msg::dds_::JointTrajectoryPoint_   desired_ ;
                trajectory_msgs::msg::dds_::JointTrajectoryPoint_   actual_ ;
                trajectory_msgs::msg::dds_::JointTrajectoryPoint_   error_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FollowJointTrajectory_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FollowJointTrajectory_Feedback_Seq, FollowJointTrajectory_Feedback_);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Feedback__initialize(
                FollowJointTrajectory_Feedback_* self);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Feedback__initialize_ex(
                FollowJointTrajectory_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Feedback__initialize_w_params(
                FollowJointTrajectory_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FollowJointTrajectory_Feedback__finalize(
                FollowJointTrajectory_Feedback_* self);

            NDDSUSERDllExport
            void FollowJointTrajectory_Feedback__finalize_ex(
                FollowJointTrajectory_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FollowJointTrajectory_Feedback__finalize_w_params(
                FollowJointTrajectory_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FollowJointTrajectory_Feedback__finalize_optional_members(
                FollowJointTrajectory_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_Feedback__copy(
                FollowJointTrajectory_Feedback_* dst,
                const FollowJointTrajectory_Feedback_* src);

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

            extern const char *FollowJointTrajectory_FeedbackMessage_TYPENAME;

            struct FollowJointTrajectory_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FollowJointTrajectory_FeedbackMessage_TypeSupport;
            class FollowJointTrajectory_FeedbackMessage_DataWriter;
            class FollowJointTrajectory_FeedbackMessage_DataReader;
            #endif

            class FollowJointTrajectory_FeedbackMessage_ 
            {
              public:
                typedef struct FollowJointTrajectory_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FollowJointTrajectory_FeedbackMessage_TypeSupport TypeSupport;
                typedef FollowJointTrajectory_FeedbackMessage_DataWriter DataWriter;
                typedef FollowJointTrajectory_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                control_msgs::action::dds_::FollowJointTrajectory_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FollowJointTrajectory_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FollowJointTrajectory_FeedbackMessage_Seq, FollowJointTrajectory_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_FeedbackMessage__initialize(
                FollowJointTrajectory_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_FeedbackMessage__initialize_ex(
                FollowJointTrajectory_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_FeedbackMessage__initialize_w_params(
                FollowJointTrajectory_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FollowJointTrajectory_FeedbackMessage__finalize(
                FollowJointTrajectory_FeedbackMessage_* self);

            NDDSUSERDllExport
            void FollowJointTrajectory_FeedbackMessage__finalize_ex(
                FollowJointTrajectory_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FollowJointTrajectory_FeedbackMessage__finalize_w_params(
                FollowJointTrajectory_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FollowJointTrajectory_FeedbackMessage__finalize_optional_members(
                FollowJointTrajectory_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FollowJointTrajectory_FeedbackMessage__copy(
                FollowJointTrajectory_FeedbackMessage_* dst,
                const FollowJointTrajectory_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace control_msgs  */

#endif /* FollowJointTrajectory_ */

