

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetGeoPath_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetGeoPath__1222782520_h
#define GetGeoPath__1222782520_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPath_.h"
#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetGeoPath_Request_TYPENAME;

            struct GetGeoPath_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetGeoPath_Request_TypeSupport;
            class GetGeoPath_Request_DataWriter;
            class GetGeoPath_Request_DataReader;
            #endif

            class GetGeoPath_Request_ 
            {
              public:
                typedef struct GetGeoPath_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetGeoPath_Request_TypeSupport TypeSupport;
                typedef GetGeoPath_Request_DataWriter DataWriter;
                typedef GetGeoPath_Request_DataReader DataReader;
                #endif

                geographic_msgs::msg::dds_::GeoPoint_   start_ ;
                geographic_msgs::msg::dds_::GeoPoint_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetGeoPath_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetGeoPath_Request_Seq, GetGeoPath_Request_);

            NDDSUSERDllExport
            RTIBool GetGeoPath_Request__initialize(
                GetGeoPath_Request_* self);

            NDDSUSERDllExport
            RTIBool GetGeoPath_Request__initialize_ex(
                GetGeoPath_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetGeoPath_Request__initialize_w_params(
                GetGeoPath_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetGeoPath_Request__finalize(
                GetGeoPath_Request_* self);

            NDDSUSERDllExport
            void GetGeoPath_Request__finalize_ex(
                GetGeoPath_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetGeoPath_Request__finalize_w_params(
                GetGeoPath_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetGeoPath_Request__finalize_optional_members(
                GetGeoPath_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetGeoPath_Request__copy(
                GetGeoPath_Request_* dst,
                const GetGeoPath_Request_* src);

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

            extern const char *GetGeoPath_Response_TYPENAME;

            struct GetGeoPath_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetGeoPath_Response_TypeSupport;
            class GetGeoPath_Response_DataWriter;
            class GetGeoPath_Response_DataReader;
            #endif

            class GetGeoPath_Response_ 
            {
              public:
                typedef struct GetGeoPath_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetGeoPath_Response_TypeSupport TypeSupport;
                typedef GetGeoPath_Response_DataWriter DataWriter;
                typedef GetGeoPath_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_ ;
                geographic_msgs::msg::dds_::GeoPath_   plan_ ;
                unique_identifier_msgs::msg::dds_::UUID_   network_ ;
                unique_identifier_msgs::msg::dds_::UUID_   start_seg_ ;
                unique_identifier_msgs::msg::dds_::UUID_   goal_seg_ ;
                DDS_Double   distance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetGeoPath_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetGeoPath_Response_Seq, GetGeoPath_Response_);

            NDDSUSERDllExport
            RTIBool GetGeoPath_Response__initialize(
                GetGeoPath_Response_* self);

            NDDSUSERDllExport
            RTIBool GetGeoPath_Response__initialize_ex(
                GetGeoPath_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetGeoPath_Response__initialize_w_params(
                GetGeoPath_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetGeoPath_Response__finalize(
                GetGeoPath_Response_* self);

            NDDSUSERDllExport
            void GetGeoPath_Response__finalize_ex(
                GetGeoPath_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetGeoPath_Response__finalize_w_params(
                GetGeoPath_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetGeoPath_Response__finalize_optional_members(
                GetGeoPath_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetGeoPath_Response__copy(
                GetGeoPath_Response_* dst,
                const GetGeoPath_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace geographic_msgs  */

#endif /* GetGeoPath_ */

