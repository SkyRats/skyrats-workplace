

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ApplyLinkWrench_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ApplyLinkWrench__616114456_h
#define ApplyLinkWrench__616114456_h

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

            extern const char *ApplyLinkWrench_Request_TYPENAME;

            struct ApplyLinkWrench_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ApplyLinkWrench_Request_TypeSupport;
            class ApplyLinkWrench_Request_DataWriter;
            class ApplyLinkWrench_Request_DataReader;
            #endif

            class ApplyLinkWrench_Request_ 
            {
              public:
                typedef struct ApplyLinkWrench_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ApplyLinkWrench_Request_TypeSupport TypeSupport;
                typedef ApplyLinkWrench_Request_DataWriter DataWriter;
                typedef ApplyLinkWrench_Request_DataReader DataReader;
                #endif

                DDS_Char *   link_name_ ;
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

            NDDSUSERDllExport DDS_TypeCode* ApplyLinkWrench_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ApplyLinkWrench_Request_Seq, ApplyLinkWrench_Request_);

            NDDSUSERDllExport
            RTIBool ApplyLinkWrench_Request__initialize(
                ApplyLinkWrench_Request_* self);

            NDDSUSERDllExport
            RTIBool ApplyLinkWrench_Request__initialize_ex(
                ApplyLinkWrench_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ApplyLinkWrench_Request__initialize_w_params(
                ApplyLinkWrench_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ApplyLinkWrench_Request__finalize(
                ApplyLinkWrench_Request_* self);

            NDDSUSERDllExport
            void ApplyLinkWrench_Request__finalize_ex(
                ApplyLinkWrench_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ApplyLinkWrench_Request__finalize_w_params(
                ApplyLinkWrench_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ApplyLinkWrench_Request__finalize_optional_members(
                ApplyLinkWrench_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ApplyLinkWrench_Request__copy(
                ApplyLinkWrench_Request_* dst,
                const ApplyLinkWrench_Request_* src);

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

            extern const char *ApplyLinkWrench_Response_TYPENAME;

            struct ApplyLinkWrench_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ApplyLinkWrench_Response_TypeSupport;
            class ApplyLinkWrench_Response_DataWriter;
            class ApplyLinkWrench_Response_DataReader;
            #endif

            class ApplyLinkWrench_Response_ 
            {
              public:
                typedef struct ApplyLinkWrench_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ApplyLinkWrench_Response_TypeSupport TypeSupport;
                typedef ApplyLinkWrench_Response_DataWriter DataWriter;
                typedef ApplyLinkWrench_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* ApplyLinkWrench_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ApplyLinkWrench_Response_Seq, ApplyLinkWrench_Response_);

            NDDSUSERDllExport
            RTIBool ApplyLinkWrench_Response__initialize(
                ApplyLinkWrench_Response_* self);

            NDDSUSERDllExport
            RTIBool ApplyLinkWrench_Response__initialize_ex(
                ApplyLinkWrench_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ApplyLinkWrench_Response__initialize_w_params(
                ApplyLinkWrench_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ApplyLinkWrench_Response__finalize(
                ApplyLinkWrench_Response_* self);

            NDDSUSERDllExport
            void ApplyLinkWrench_Response__finalize_ex(
                ApplyLinkWrench_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ApplyLinkWrench_Response__finalize_w_params(
                ApplyLinkWrench_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ApplyLinkWrench_Response__finalize_optional_members(
                ApplyLinkWrench_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ApplyLinkWrench_Response__copy(
                ApplyLinkWrench_Response_* dst,
                const ApplyLinkWrench_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* ApplyLinkWrench_ */

