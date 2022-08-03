

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadConfigureController_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LoadConfigureController__819443029_h
#define LoadConfigureController__819443029_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *LoadConfigureController_Request_TYPENAME;

            struct LoadConfigureController_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadConfigureController_Request_TypeSupport;
            class LoadConfigureController_Request_DataWriter;
            class LoadConfigureController_Request_DataReader;
            #endif

            class LoadConfigureController_Request_ 
            {
              public:
                typedef struct LoadConfigureController_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadConfigureController_Request_TypeSupport TypeSupport;
                typedef LoadConfigureController_Request_DataWriter DataWriter;
                typedef LoadConfigureController_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadConfigureController_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadConfigureController_Request_Seq, LoadConfigureController_Request_);

            NDDSUSERDllExport
            RTIBool LoadConfigureController_Request__initialize(
                LoadConfigureController_Request_* self);

            NDDSUSERDllExport
            RTIBool LoadConfigureController_Request__initialize_ex(
                LoadConfigureController_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadConfigureController_Request__initialize_w_params(
                LoadConfigureController_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadConfigureController_Request__finalize(
                LoadConfigureController_Request_* self);

            NDDSUSERDllExport
            void LoadConfigureController_Request__finalize_ex(
                LoadConfigureController_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadConfigureController_Request__finalize_w_params(
                LoadConfigureController_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadConfigureController_Request__finalize_optional_members(
                LoadConfigureController_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadConfigureController_Request__copy(
                LoadConfigureController_Request_* dst,
                const LoadConfigureController_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *LoadConfigureController_Response_TYPENAME;

            struct LoadConfigureController_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadConfigureController_Response_TypeSupport;
            class LoadConfigureController_Response_DataWriter;
            class LoadConfigureController_Response_DataReader;
            #endif

            class LoadConfigureController_Response_ 
            {
              public:
                typedef struct LoadConfigureController_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadConfigureController_Response_TypeSupport TypeSupport;
                typedef LoadConfigureController_Response_DataWriter DataWriter;
                typedef LoadConfigureController_Response_DataReader DataReader;
                #endif

                DDS_Boolean   ok_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadConfigureController_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadConfigureController_Response_Seq, LoadConfigureController_Response_);

            NDDSUSERDllExport
            RTIBool LoadConfigureController_Response__initialize(
                LoadConfigureController_Response_* self);

            NDDSUSERDllExport
            RTIBool LoadConfigureController_Response__initialize_ex(
                LoadConfigureController_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadConfigureController_Response__initialize_w_params(
                LoadConfigureController_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadConfigureController_Response__finalize(
                LoadConfigureController_Response_* self);

            NDDSUSERDllExport
            void LoadConfigureController_Response__finalize_ex(
                LoadConfigureController_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadConfigureController_Response__finalize_w_params(
                LoadConfigureController_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadConfigureController_Response__finalize_optional_members(
                LoadConfigureController_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadConfigureController_Response__copy(
                LoadConfigureController_Response_* dst,
                const LoadConfigureController_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* LoadConfigureController_ */

