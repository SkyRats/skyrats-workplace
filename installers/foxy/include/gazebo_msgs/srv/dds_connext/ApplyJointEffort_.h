

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ApplyJointEffort_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ApplyJointEffort__1202491256_h
#define ApplyJointEffort__1202491256_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ApplyJointEffort_Request_TYPENAME;

            struct ApplyJointEffort_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ApplyJointEffort_Request_TypeSupport;
            class ApplyJointEffort_Request_DataWriter;
            class ApplyJointEffort_Request_DataReader;
            #endif

            class ApplyJointEffort_Request_ 
            {
              public:
                typedef struct ApplyJointEffort_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ApplyJointEffort_Request_TypeSupport TypeSupport;
                typedef ApplyJointEffort_Request_DataWriter DataWriter;
                typedef ApplyJointEffort_Request_DataReader DataReader;
                #endif

                DDS_Char *   joint_name_ ;
                DDS_Double   effort_ ;
                builtin_interfaces::msg::dds_::Time_   start_time_ ;
                builtin_interfaces::msg::dds_::Duration_   duration_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ApplyJointEffort_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ApplyJointEffort_Request_Seq, ApplyJointEffort_Request_);

            NDDSUSERDllExport
            RTIBool ApplyJointEffort_Request__initialize(
                ApplyJointEffort_Request_* self);

            NDDSUSERDllExport
            RTIBool ApplyJointEffort_Request__initialize_ex(
                ApplyJointEffort_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ApplyJointEffort_Request__initialize_w_params(
                ApplyJointEffort_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ApplyJointEffort_Request__finalize(
                ApplyJointEffort_Request_* self);

            NDDSUSERDllExport
            void ApplyJointEffort_Request__finalize_ex(
                ApplyJointEffort_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ApplyJointEffort_Request__finalize_w_params(
                ApplyJointEffort_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ApplyJointEffort_Request__finalize_optional_members(
                ApplyJointEffort_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ApplyJointEffort_Request__copy(
                ApplyJointEffort_Request_* dst,
                const ApplyJointEffort_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ApplyJointEffort_Response_TYPENAME;

            struct ApplyJointEffort_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ApplyJointEffort_Response_TypeSupport;
            class ApplyJointEffort_Response_DataWriter;
            class ApplyJointEffort_Response_DataReader;
            #endif

            class ApplyJointEffort_Response_ 
            {
              public:
                typedef struct ApplyJointEffort_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ApplyJointEffort_Response_TypeSupport TypeSupport;
                typedef ApplyJointEffort_Response_DataWriter DataWriter;
                typedef ApplyJointEffort_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ApplyJointEffort_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ApplyJointEffort_Response_Seq, ApplyJointEffort_Response_);

            NDDSUSERDllExport
            RTIBool ApplyJointEffort_Response__initialize(
                ApplyJointEffort_Response_* self);

            NDDSUSERDllExport
            RTIBool ApplyJointEffort_Response__initialize_ex(
                ApplyJointEffort_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ApplyJointEffort_Response__initialize_w_params(
                ApplyJointEffort_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ApplyJointEffort_Response__finalize(
                ApplyJointEffort_Response_* self);

            NDDSUSERDllExport
            void ApplyJointEffort_Response__finalize_ex(
                ApplyJointEffort_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ApplyJointEffort_Response__finalize_w_params(
                ApplyJointEffort_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ApplyJointEffort_Response__finalize_optional_members(
                ApplyJointEffort_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ApplyJointEffort_Response__copy(
                ApplyJointEffort_Response_* dst,
                const ApplyJointEffort_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* ApplyJointEffort_ */

