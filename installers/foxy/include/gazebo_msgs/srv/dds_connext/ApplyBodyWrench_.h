

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ApplyBodyWrench_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ApplyBodyWrench__133334640_h
#define ApplyBodyWrench__133334640_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "geometry_msgs/msg/dds_connext/Wrench_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ApplyBodyWrench_Request_TYPENAME;

            struct ApplyBodyWrench_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ApplyBodyWrench_Request_TypeSupport;
            class ApplyBodyWrench_Request_DataWriter;
            class ApplyBodyWrench_Request_DataReader;
            #endif

            class ApplyBodyWrench_Request_ 
            {
              public:
                typedef struct ApplyBodyWrench_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ApplyBodyWrench_Request_TypeSupport TypeSupport;
                typedef ApplyBodyWrench_Request_DataWriter DataWriter;
                typedef ApplyBodyWrench_Request_DataReader DataReader;
                #endif

                DDS_Char *   body_name_ ;
                DDS_Char *   reference_frame_ ;
                geometry_msgs::msg::dds_::Point_   reference_point_ ;
                geometry_msgs::msg::dds_::Wrench_   wrench_ ;
                builtin_interfaces::msg::dds_::Time_   start_time_ ;
                builtin_interfaces::msg::dds_::Duration_   duration_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ApplyBodyWrench_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ApplyBodyWrench_Request_Seq, ApplyBodyWrench_Request_);

            NDDSUSERDllExport
            RTIBool ApplyBodyWrench_Request__initialize(
                ApplyBodyWrench_Request_* self);

            NDDSUSERDllExport
            RTIBool ApplyBodyWrench_Request__initialize_ex(
                ApplyBodyWrench_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ApplyBodyWrench_Request__initialize_w_params(
                ApplyBodyWrench_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ApplyBodyWrench_Request__finalize(
                ApplyBodyWrench_Request_* self);

            NDDSUSERDllExport
            void ApplyBodyWrench_Request__finalize_ex(
                ApplyBodyWrench_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ApplyBodyWrench_Request__finalize_w_params(
                ApplyBodyWrench_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ApplyBodyWrench_Request__finalize_optional_members(
                ApplyBodyWrench_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ApplyBodyWrench_Request__copy(
                ApplyBodyWrench_Request_* dst,
                const ApplyBodyWrench_Request_* src);

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

            extern const char *ApplyBodyWrench_Response_TYPENAME;

            struct ApplyBodyWrench_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ApplyBodyWrench_Response_TypeSupport;
            class ApplyBodyWrench_Response_DataWriter;
            class ApplyBodyWrench_Response_DataReader;
            #endif

            class ApplyBodyWrench_Response_ 
            {
              public:
                typedef struct ApplyBodyWrench_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ApplyBodyWrench_Response_TypeSupport TypeSupport;
                typedef ApplyBodyWrench_Response_DataWriter DataWriter;
                typedef ApplyBodyWrench_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* ApplyBodyWrench_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ApplyBodyWrench_Response_Seq, ApplyBodyWrench_Response_);

            NDDSUSERDllExport
            RTIBool ApplyBodyWrench_Response__initialize(
                ApplyBodyWrench_Response_* self);

            NDDSUSERDllExport
            RTIBool ApplyBodyWrench_Response__initialize_ex(
                ApplyBodyWrench_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ApplyBodyWrench_Response__initialize_w_params(
                ApplyBodyWrench_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ApplyBodyWrench_Response__finalize(
                ApplyBodyWrench_Response_* self);

            NDDSUSERDllExport
            void ApplyBodyWrench_Response__finalize_ex(
                ApplyBodyWrench_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ApplyBodyWrench_Response__finalize_w_params(
                ApplyBodyWrench_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ApplyBodyWrench_Response__finalize_optional_members(
                ApplyBodyWrench_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ApplyBodyWrench_Response__copy(
                ApplyBodyWrench_Response_* dst,
                const ApplyBodyWrench_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* ApplyBodyWrench_ */

