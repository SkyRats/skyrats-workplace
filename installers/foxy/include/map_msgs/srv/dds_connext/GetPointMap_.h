

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPointMap_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPointMap__2126334991_h
#define GetPointMap__2126334991_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/PointCloud2_.h"
namespace map_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetPointMap_Request_TYPENAME;

            struct GetPointMap_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPointMap_Request_TypeSupport;
            class GetPointMap_Request_DataWriter;
            class GetPointMap_Request_DataReader;
            #endif

            class GetPointMap_Request_ 
            {
              public:
                typedef struct GetPointMap_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPointMap_Request_TypeSupport TypeSupport;
                typedef GetPointMap_Request_DataWriter DataWriter;
                typedef GetPointMap_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPointMap_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPointMap_Request_Seq, GetPointMap_Request_);

            NDDSUSERDllExport
            RTIBool GetPointMap_Request__initialize(
                GetPointMap_Request_* self);

            NDDSUSERDllExport
            RTIBool GetPointMap_Request__initialize_ex(
                GetPointMap_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPointMap_Request__initialize_w_params(
                GetPointMap_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPointMap_Request__finalize(
                GetPointMap_Request_* self);

            NDDSUSERDllExport
            void GetPointMap_Request__finalize_ex(
                GetPointMap_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPointMap_Request__finalize_w_params(
                GetPointMap_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPointMap_Request__finalize_optional_members(
                GetPointMap_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPointMap_Request__copy(
                GetPointMap_Request_* dst,
                const GetPointMap_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */
namespace map_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetPointMap_Response_TYPENAME;

            struct GetPointMap_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPointMap_Response_TypeSupport;
            class GetPointMap_Response_DataWriter;
            class GetPointMap_Response_DataReader;
            #endif

            class GetPointMap_Response_ 
            {
              public:
                typedef struct GetPointMap_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPointMap_Response_TypeSupport TypeSupport;
                typedef GetPointMap_Response_DataWriter DataWriter;
                typedef GetPointMap_Response_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::PointCloud2_   map_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPointMap_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPointMap_Response_Seq, GetPointMap_Response_);

            NDDSUSERDllExport
            RTIBool GetPointMap_Response__initialize(
                GetPointMap_Response_* self);

            NDDSUSERDllExport
            RTIBool GetPointMap_Response__initialize_ex(
                GetPointMap_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPointMap_Response__initialize_w_params(
                GetPointMap_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPointMap_Response__finalize(
                GetPointMap_Response_* self);

            NDDSUSERDllExport
            void GetPointMap_Response__finalize_ex(
                GetPointMap_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPointMap_Response__finalize_w_params(
                GetPointMap_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPointMap_Response__finalize_optional_members(
                GetPointMap_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPointMap_Response__copy(
                GetPointMap_Response_* dst,
                const GetPointMap_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* GetPointMap_ */

