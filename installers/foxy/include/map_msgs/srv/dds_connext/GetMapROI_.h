

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetMapROI_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetMapROI__1940832301_h
#define GetMapROI__1940832301_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "nav_msgs/msg/dds_connext/OccupancyGrid_.h"
namespace map_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetMapROI_Request_TYPENAME;

            struct GetMapROI_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetMapROI_Request_TypeSupport;
            class GetMapROI_Request_DataWriter;
            class GetMapROI_Request_DataReader;
            #endif

            class GetMapROI_Request_ 
            {
              public:
                typedef struct GetMapROI_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetMapROI_Request_TypeSupport TypeSupport;
                typedef GetMapROI_Request_DataWriter DataWriter;
                typedef GetMapROI_Request_DataReader DataReader;
                #endif

                DDS_Double   x_ ;
                DDS_Double   y_ ;
                DDS_Double   l_x_ ;
                DDS_Double   l_y_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetMapROI_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetMapROI_Request_Seq, GetMapROI_Request_);

            NDDSUSERDllExport
            RTIBool GetMapROI_Request__initialize(
                GetMapROI_Request_* self);

            NDDSUSERDllExport
            RTIBool GetMapROI_Request__initialize_ex(
                GetMapROI_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetMapROI_Request__initialize_w_params(
                GetMapROI_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetMapROI_Request__finalize(
                GetMapROI_Request_* self);

            NDDSUSERDllExport
            void GetMapROI_Request__finalize_ex(
                GetMapROI_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetMapROI_Request__finalize_w_params(
                GetMapROI_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetMapROI_Request__finalize_optional_members(
                GetMapROI_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetMapROI_Request__copy(
                GetMapROI_Request_* dst,
                const GetMapROI_Request_* src);

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

            extern const char *GetMapROI_Response_TYPENAME;

            struct GetMapROI_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetMapROI_Response_TypeSupport;
            class GetMapROI_Response_DataWriter;
            class GetMapROI_Response_DataReader;
            #endif

            class GetMapROI_Response_ 
            {
              public:
                typedef struct GetMapROI_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetMapROI_Response_TypeSupport TypeSupport;
                typedef GetMapROI_Response_DataWriter DataWriter;
                typedef GetMapROI_Response_DataReader DataReader;
                #endif

                nav_msgs::msg::dds_::OccupancyGrid_   sub_map_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetMapROI_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetMapROI_Response_Seq, GetMapROI_Response_);

            NDDSUSERDllExport
            RTIBool GetMapROI_Response__initialize(
                GetMapROI_Response_* self);

            NDDSUSERDllExport
            RTIBool GetMapROI_Response__initialize_ex(
                GetMapROI_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetMapROI_Response__initialize_w_params(
                GetMapROI_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetMapROI_Response__finalize(
                GetMapROI_Response_* self);

            NDDSUSERDllExport
            void GetMapROI_Response__finalize_ex(
                GetMapROI_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetMapROI_Response__finalize_w_params(
                GetMapROI_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetMapROI_Response__finalize_optional_members(
                GetMapROI_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetMapROI_Response__copy(
                GetMapROI_Response_* dst,
                const GetMapROI_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* GetMapROI_ */

