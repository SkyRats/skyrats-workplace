

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetGeographicMap_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetGeographicMap__981291407_h
#define GetGeographicMap__981291407_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/BoundingBox_.h"
#include "geographic_msgs/msg/dds_connext/GeographicMap_.h"
namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetGeographicMap_Request_TYPENAME;

            struct GetGeographicMap_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetGeographicMap_Request_TypeSupport;
            class GetGeographicMap_Request_DataWriter;
            class GetGeographicMap_Request_DataReader;
            #endif

            class GetGeographicMap_Request_ 
            {
              public:
                typedef struct GetGeographicMap_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetGeographicMap_Request_TypeSupport TypeSupport;
                typedef GetGeographicMap_Request_DataWriter DataWriter;
                typedef GetGeographicMap_Request_DataReader DataReader;
                #endif

                DDS_Char *   url_ ;
                geographic_msgs::msg::dds_::BoundingBox_   bounds_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetGeographicMap_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetGeographicMap_Request_Seq, GetGeographicMap_Request_);

            NDDSUSERDllExport
            RTIBool GetGeographicMap_Request__initialize(
                GetGeographicMap_Request_* self);

            NDDSUSERDllExport
            RTIBool GetGeographicMap_Request__initialize_ex(
                GetGeographicMap_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetGeographicMap_Request__initialize_w_params(
                GetGeographicMap_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetGeographicMap_Request__finalize(
                GetGeographicMap_Request_* self);

            NDDSUSERDllExport
            void GetGeographicMap_Request__finalize_ex(
                GetGeographicMap_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetGeographicMap_Request__finalize_w_params(
                GetGeographicMap_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetGeographicMap_Request__finalize_optional_members(
                GetGeographicMap_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetGeographicMap_Request__copy(
                GetGeographicMap_Request_* dst,
                const GetGeographicMap_Request_* src);

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

            extern const char *GetGeographicMap_Response_TYPENAME;

            struct GetGeographicMap_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetGeographicMap_Response_TypeSupport;
            class GetGeographicMap_Response_DataWriter;
            class GetGeographicMap_Response_DataReader;
            #endif

            class GetGeographicMap_Response_ 
            {
              public:
                typedef struct GetGeographicMap_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetGeographicMap_Response_TypeSupport TypeSupport;
                typedef GetGeographicMap_Response_DataWriter DataWriter;
                typedef GetGeographicMap_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_ ;
                geographic_msgs::msg::dds_::GeographicMap_   map_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetGeographicMap_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetGeographicMap_Response_Seq, GetGeographicMap_Response_);

            NDDSUSERDllExport
            RTIBool GetGeographicMap_Response__initialize(
                GetGeographicMap_Response_* self);

            NDDSUSERDllExport
            RTIBool GetGeographicMap_Response__initialize_ex(
                GetGeographicMap_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetGeographicMap_Response__initialize_w_params(
                GetGeographicMap_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetGeographicMap_Response__finalize(
                GetGeographicMap_Response_* self);

            NDDSUSERDllExport
            void GetGeographicMap_Response__finalize_ex(
                GetGeographicMap_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetGeographicMap_Response__finalize_w_params(
                GetGeographicMap_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetGeographicMap_Response__finalize_optional_members(
                GetGeographicMap_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetGeographicMap_Response__copy(
                GetGeographicMap_Response_* dst,
                const GetGeographicMap_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace geographic_msgs  */

#endif /* GetGeographicMap_ */

