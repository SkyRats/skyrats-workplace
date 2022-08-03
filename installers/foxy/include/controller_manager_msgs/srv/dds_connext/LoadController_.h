

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadController_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LoadController__1546828386_h
#define LoadController__1546828386_h

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

            extern const char *LoadController_Request_TYPENAME;

            struct LoadController_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadController_Request_TypeSupport;
            class LoadController_Request_DataWriter;
            class LoadController_Request_DataReader;
            #endif

            class LoadController_Request_ 
            {
              public:
                typedef struct LoadController_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadController_Request_TypeSupport TypeSupport;
                typedef LoadController_Request_DataWriter DataWriter;
                typedef LoadController_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadController_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadController_Request_Seq, LoadController_Request_);

            NDDSUSERDllExport
            RTIBool LoadController_Request__initialize(
                LoadController_Request_* self);

            NDDSUSERDllExport
            RTIBool LoadController_Request__initialize_ex(
                LoadController_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadController_Request__initialize_w_params(
                LoadController_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadController_Request__finalize(
                LoadController_Request_* self);

            NDDSUSERDllExport
            void LoadController_Request__finalize_ex(
                LoadController_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadController_Request__finalize_w_params(
                LoadController_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadController_Request__finalize_optional_members(
                LoadController_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadController_Request__copy(
                LoadController_Request_* dst,
                const LoadController_Request_* src);

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

            extern const char *LoadController_Response_TYPENAME;

            struct LoadController_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadController_Response_TypeSupport;
            class LoadController_Response_DataWriter;
            class LoadController_Response_DataReader;
            #endif

            class LoadController_Response_ 
            {
              public:
                typedef struct LoadController_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadController_Response_TypeSupport TypeSupport;
                typedef LoadController_Response_DataWriter DataWriter;
                typedef LoadController_Response_DataReader DataReader;
                #endif

                DDS_Boolean   ok_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadController_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadController_Response_Seq, LoadController_Response_);

            NDDSUSERDllExport
            RTIBool LoadController_Response__initialize(
                LoadController_Response_* self);

            NDDSUSERDllExport
            RTIBool LoadController_Response__initialize_ex(
                LoadController_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadController_Response__initialize_w_params(
                LoadController_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadController_Response__finalize(
                LoadController_Response_* self);

            NDDSUSERDllExport
            void LoadController_Response__finalize_ex(
                LoadController_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadController_Response__finalize_w_params(
                LoadController_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadController_Response__finalize_optional_members(
                LoadController_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadController_Response__copy(
                LoadController_Response_* dst,
                const LoadController_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* LoadController_ */

