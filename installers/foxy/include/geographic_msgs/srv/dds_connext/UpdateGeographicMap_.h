

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UpdateGeographicMap_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UpdateGeographicMap__1090509969_h
#define UpdateGeographicMap__1090509969_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeographicMapChanges_.h"
namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *UpdateGeographicMap_Request_TYPENAME;

            struct UpdateGeographicMap_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UpdateGeographicMap_Request_TypeSupport;
            class UpdateGeographicMap_Request_DataWriter;
            class UpdateGeographicMap_Request_DataReader;
            #endif

            class UpdateGeographicMap_Request_ 
            {
              public:
                typedef struct UpdateGeographicMap_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UpdateGeographicMap_Request_TypeSupport TypeSupport;
                typedef UpdateGeographicMap_Request_DataWriter DataWriter;
                typedef UpdateGeographicMap_Request_DataReader DataReader;
                #endif

                geographic_msgs::msg::dds_::GeographicMapChanges_   updates_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UpdateGeographicMap_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UpdateGeographicMap_Request_Seq, UpdateGeographicMap_Request_);

            NDDSUSERDllExport
            RTIBool UpdateGeographicMap_Request__initialize(
                UpdateGeographicMap_Request_* self);

            NDDSUSERDllExport
            RTIBool UpdateGeographicMap_Request__initialize_ex(
                UpdateGeographicMap_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UpdateGeographicMap_Request__initialize_w_params(
                UpdateGeographicMap_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UpdateGeographicMap_Request__finalize(
                UpdateGeographicMap_Request_* self);

            NDDSUSERDllExport
            void UpdateGeographicMap_Request__finalize_ex(
                UpdateGeographicMap_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UpdateGeographicMap_Request__finalize_w_params(
                UpdateGeographicMap_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UpdateGeographicMap_Request__finalize_optional_members(
                UpdateGeographicMap_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UpdateGeographicMap_Request__copy(
                UpdateGeographicMap_Request_* dst,
                const UpdateGeographicMap_Request_* src);

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

            extern const char *UpdateGeographicMap_Response_TYPENAME;

            struct UpdateGeographicMap_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UpdateGeographicMap_Response_TypeSupport;
            class UpdateGeographicMap_Response_DataWriter;
            class UpdateGeographicMap_Response_DataReader;
            #endif

            class UpdateGeographicMap_Response_ 
            {
              public:
                typedef struct UpdateGeographicMap_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UpdateGeographicMap_Response_TypeSupport TypeSupport;
                typedef UpdateGeographicMap_Response_DataWriter DataWriter;
                typedef UpdateGeographicMap_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UpdateGeographicMap_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UpdateGeographicMap_Response_Seq, UpdateGeographicMap_Response_);

            NDDSUSERDllExport
            RTIBool UpdateGeographicMap_Response__initialize(
                UpdateGeographicMap_Response_* self);

            NDDSUSERDllExport
            RTIBool UpdateGeographicMap_Response__initialize_ex(
                UpdateGeographicMap_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UpdateGeographicMap_Response__initialize_w_params(
                UpdateGeographicMap_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UpdateGeographicMap_Response__finalize(
                UpdateGeographicMap_Response_* self);

            NDDSUSERDllExport
            void UpdateGeographicMap_Response__finalize_ex(
                UpdateGeographicMap_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UpdateGeographicMap_Response__finalize_w_params(
                UpdateGeographicMap_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UpdateGeographicMap_Response__finalize_optional_members(
                UpdateGeographicMap_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UpdateGeographicMap_Response__copy(
                UpdateGeographicMap_Response_* dst,
                const UpdateGeographicMap_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace geographic_msgs  */

#endif /* UpdateGeographicMap_ */

