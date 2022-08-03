

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetInteractiveMarkers_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetInteractiveMarkers__1123577982_h
#define GetInteractiveMarkers__1123577982_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "visualization_msgs/msg/dds_connext/InteractiveMarker_.h"
namespace visualization_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetInteractiveMarkers_Request_TYPENAME;

            struct GetInteractiveMarkers_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetInteractiveMarkers_Request_TypeSupport;
            class GetInteractiveMarkers_Request_DataWriter;
            class GetInteractiveMarkers_Request_DataReader;
            #endif

            class GetInteractiveMarkers_Request_ 
            {
              public:
                typedef struct GetInteractiveMarkers_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetInteractiveMarkers_Request_TypeSupport TypeSupport;
                typedef GetInteractiveMarkers_Request_DataWriter DataWriter;
                typedef GetInteractiveMarkers_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetInteractiveMarkers_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetInteractiveMarkers_Request_Seq, GetInteractiveMarkers_Request_);

            NDDSUSERDllExport
            RTIBool GetInteractiveMarkers_Request__initialize(
                GetInteractiveMarkers_Request_* self);

            NDDSUSERDllExport
            RTIBool GetInteractiveMarkers_Request__initialize_ex(
                GetInteractiveMarkers_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetInteractiveMarkers_Request__initialize_w_params(
                GetInteractiveMarkers_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetInteractiveMarkers_Request__finalize(
                GetInteractiveMarkers_Request_* self);

            NDDSUSERDllExport
            void GetInteractiveMarkers_Request__finalize_ex(
                GetInteractiveMarkers_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetInteractiveMarkers_Request__finalize_w_params(
                GetInteractiveMarkers_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetInteractiveMarkers_Request__finalize_optional_members(
                GetInteractiveMarkers_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetInteractiveMarkers_Request__copy(
                GetInteractiveMarkers_Request_* dst,
                const GetInteractiveMarkers_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace visualization_msgs  */
namespace visualization_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetInteractiveMarkers_Response_TYPENAME;

            struct GetInteractiveMarkers_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetInteractiveMarkers_Response_TypeSupport;
            class GetInteractiveMarkers_Response_DataWriter;
            class GetInteractiveMarkers_Response_DataReader;
            #endif

            class GetInteractiveMarkers_Response_ 
            {
              public:
                typedef struct GetInteractiveMarkers_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetInteractiveMarkers_Response_TypeSupport TypeSupport;
                typedef GetInteractiveMarkers_Response_DataWriter DataWriter;
                typedef GetInteractiveMarkers_Response_DataReader DataReader;
                #endif

                DDS_UnsignedLongLong   sequence_number_ ;
                visualization_msgs::msg::dds_::InteractiveMarker_Seq  markers_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetInteractiveMarkers_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetInteractiveMarkers_Response_Seq, GetInteractiveMarkers_Response_);

            NDDSUSERDllExport
            RTIBool GetInteractiveMarkers_Response__initialize(
                GetInteractiveMarkers_Response_* self);

            NDDSUSERDllExport
            RTIBool GetInteractiveMarkers_Response__initialize_ex(
                GetInteractiveMarkers_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetInteractiveMarkers_Response__initialize_w_params(
                GetInteractiveMarkers_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetInteractiveMarkers_Response__finalize(
                GetInteractiveMarkers_Response_* self);

            NDDSUSERDllExport
            void GetInteractiveMarkers_Response__finalize_ex(
                GetInteractiveMarkers_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetInteractiveMarkers_Response__finalize_w_params(
                GetInteractiveMarkers_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetInteractiveMarkers_Response__finalize_optional_members(
                GetInteractiveMarkers_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetInteractiveMarkers_Response__copy(
                GetInteractiveMarkers_Response_* dst,
                const GetInteractiveMarkers_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace visualization_msgs  */

#endif /* GetInteractiveMarkers_ */

