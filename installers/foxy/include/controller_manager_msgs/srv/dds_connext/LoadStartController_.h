

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadStartController_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LoadStartController__1957939981_h
#define LoadStartController__1957939981_h

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

            extern const char *LoadStartController_Request_TYPENAME;

            struct LoadStartController_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadStartController_Request_TypeSupport;
            class LoadStartController_Request_DataWriter;
            class LoadStartController_Request_DataReader;
            #endif

            class LoadStartController_Request_ 
            {
              public:
                typedef struct LoadStartController_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadStartController_Request_TypeSupport TypeSupport;
                typedef LoadStartController_Request_DataWriter DataWriter;
                typedef LoadStartController_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadStartController_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadStartController_Request_Seq, LoadStartController_Request_);

            NDDSUSERDllExport
            RTIBool LoadStartController_Request__initialize(
                LoadStartController_Request_* self);

            NDDSUSERDllExport
            RTIBool LoadStartController_Request__initialize_ex(
                LoadStartController_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadStartController_Request__initialize_w_params(
                LoadStartController_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadStartController_Request__finalize(
                LoadStartController_Request_* self);

            NDDSUSERDllExport
            void LoadStartController_Request__finalize_ex(
                LoadStartController_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadStartController_Request__finalize_w_params(
                LoadStartController_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadStartController_Request__finalize_optional_members(
                LoadStartController_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadStartController_Request__copy(
                LoadStartController_Request_* dst,
                const LoadStartController_Request_* src);

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

            extern const char *LoadStartController_Response_TYPENAME;

            struct LoadStartController_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadStartController_Response_TypeSupport;
            class LoadStartController_Response_DataWriter;
            class LoadStartController_Response_DataReader;
            #endif

            class LoadStartController_Response_ 
            {
              public:
                typedef struct LoadStartController_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadStartController_Response_TypeSupport TypeSupport;
                typedef LoadStartController_Response_DataWriter DataWriter;
                typedef LoadStartController_Response_DataReader DataReader;
                #endif

                DDS_Boolean   ok_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadStartController_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadStartController_Response_Seq, LoadStartController_Response_);

            NDDSUSERDllExport
            RTIBool LoadStartController_Response__initialize(
                LoadStartController_Response_* self);

            NDDSUSERDllExport
            RTIBool LoadStartController_Response__initialize_ex(
                LoadStartController_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadStartController_Response__initialize_w_params(
                LoadStartController_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadStartController_Response__finalize(
                LoadStartController_Response_* self);

            NDDSUSERDllExport
            void LoadStartController_Response__finalize_ex(
                LoadStartController_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadStartController_Response__finalize_w_params(
                LoadStartController_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadStartController_Response__finalize_optional_members(
                LoadStartController_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadStartController_Response__copy(
                LoadStartController_Response_* dst,
                const LoadStartController_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* LoadStartController_ */

