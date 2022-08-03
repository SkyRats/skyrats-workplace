

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetRoutePlan_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetRoutePlan__710885278_h
#define GetRoutePlan__710885278_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/RoutePath_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetRoutePlan_Request_TYPENAME;

            struct GetRoutePlan_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetRoutePlan_Request_TypeSupport;
            class GetRoutePlan_Request_DataWriter;
            class GetRoutePlan_Request_DataReader;
            #endif

            class GetRoutePlan_Request_ 
            {
              public:
                typedef struct GetRoutePlan_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetRoutePlan_Request_TypeSupport TypeSupport;
                typedef GetRoutePlan_Request_DataWriter DataWriter;
                typedef GetRoutePlan_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   network_ ;
                unique_identifier_msgs::msg::dds_::UUID_   start_ ;
                unique_identifier_msgs::msg::dds_::UUID_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetRoutePlan_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetRoutePlan_Request_Seq, GetRoutePlan_Request_);

            NDDSUSERDllExport
            RTIBool GetRoutePlan_Request__initialize(
                GetRoutePlan_Request_* self);

            NDDSUSERDllExport
            RTIBool GetRoutePlan_Request__initialize_ex(
                GetRoutePlan_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetRoutePlan_Request__initialize_w_params(
                GetRoutePlan_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetRoutePlan_Request__finalize(
                GetRoutePlan_Request_* self);

            NDDSUSERDllExport
            void GetRoutePlan_Request__finalize_ex(
                GetRoutePlan_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetRoutePlan_Request__finalize_w_params(
                GetRoutePlan_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetRoutePlan_Request__finalize_optional_members(
                GetRoutePlan_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetRoutePlan_Request__copy(
                GetRoutePlan_Request_* dst,
                const GetRoutePlan_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace geographic_msgs  */
namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetRoutePlan_Response_TYPENAME;

            struct GetRoutePlan_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetRoutePlan_Response_TypeSupport;
            class GetRoutePlan_Response_DataWriter;
            class GetRoutePlan_Response_DataReader;
            #endif

            class GetRoutePlan_Response_ 
            {
              public:
                typedef struct GetRoutePlan_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetRoutePlan_Response_TypeSupport TypeSupport;
                typedef GetRoutePlan_Response_DataWriter DataWriter;
                typedef GetRoutePlan_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_ ;
                geographic_msgs::msg::dds_::RoutePath_   plan_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetRoutePlan_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetRoutePlan_Response_Seq, GetRoutePlan_Response_);

            NDDSUSERDllExport
            RTIBool GetRoutePlan_Response__initialize(
                GetRoutePlan_Response_* self);

            NDDSUSERDllExport
            RTIBool GetRoutePlan_Response__initialize_ex(
                GetRoutePlan_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetRoutePlan_Response__initialize_w_params(
                GetRoutePlan_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetRoutePlan_Response__finalize(
                GetRoutePlan_Response_* self);

            NDDSUSERDllExport
            void GetRoutePlan_Response__finalize_ex(
                GetRoutePlan_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetRoutePlan_Response__finalize_w_params(
                GetRoutePlan_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetRoutePlan_Response__finalize_optional_members(
                GetRoutePlan_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetRoutePlan_Response__copy(
                GetRoutePlan_Response_* dst,
                const GetRoutePlan_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace geographic_msgs  */

#endif /* GetRoutePlan_ */

