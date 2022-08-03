

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPointMapROI_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPointMapROI__2032036791_h
#define GetPointMapROI__2032036791_h

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

            extern const char *GetPointMapROI_Request_TYPENAME;

            struct GetPointMapROI_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPointMapROI_Request_TypeSupport;
            class GetPointMapROI_Request_DataWriter;
            class GetPointMapROI_Request_DataReader;
            #endif

            class GetPointMapROI_Request_ 
            {
              public:
                typedef struct GetPointMapROI_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPointMapROI_Request_TypeSupport TypeSupport;
                typedef GetPointMapROI_Request_DataWriter DataWriter;
                typedef GetPointMapROI_Request_DataReader DataReader;
                #endif

                DDS_Double   x_ ;
                DDS_Double   y_ ;
                DDS_Double   z_ ;
                DDS_Double   r_ ;
                DDS_Double   l_x_ ;
                DDS_Double   l_y_ ;
                DDS_Double   l_z_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPointMapROI_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPointMapROI_Request_Seq, GetPointMapROI_Request_);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Request__initialize(
                GetPointMapROI_Request_* self);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Request__initialize_ex(
                GetPointMapROI_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Request__initialize_w_params(
                GetPointMapROI_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPointMapROI_Request__finalize(
                GetPointMapROI_Request_* self);

            NDDSUSERDllExport
            void GetPointMapROI_Request__finalize_ex(
                GetPointMapROI_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPointMapROI_Request__finalize_w_params(
                GetPointMapROI_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPointMapROI_Request__finalize_optional_members(
                GetPointMapROI_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Request__copy(
                GetPointMapROI_Request_* dst,
                const GetPointMapROI_Request_* src);

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

            extern const char *GetPointMapROI_Response_TYPENAME;

            struct GetPointMapROI_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPointMapROI_Response_TypeSupport;
            class GetPointMapROI_Response_DataWriter;
            class GetPointMapROI_Response_DataReader;
            #endif

            class GetPointMapROI_Response_ 
            {
              public:
                typedef struct GetPointMapROI_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPointMapROI_Response_TypeSupport TypeSupport;
                typedef GetPointMapROI_Response_DataWriter DataWriter;
                typedef GetPointMapROI_Response_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::PointCloud2_   sub_map_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPointMapROI_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPointMapROI_Response_Seq, GetPointMapROI_Response_);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Response__initialize(
                GetPointMapROI_Response_* self);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Response__initialize_ex(
                GetPointMapROI_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Response__initialize_w_params(
                GetPointMapROI_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPointMapROI_Response__finalize(
                GetPointMapROI_Response_* self);

            NDDSUSERDllExport
            void GetPointMapROI_Response__finalize_ex(
                GetPointMapROI_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPointMapROI_Response__finalize_w_params(
                GetPointMapROI_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPointMapROI_Response__finalize_optional_members(
                GetPointMapROI_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Response__copy(
                GetPointMapROI_Response_* dst,
                const GetPointMapROI_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* GetPointMapROI_ */

