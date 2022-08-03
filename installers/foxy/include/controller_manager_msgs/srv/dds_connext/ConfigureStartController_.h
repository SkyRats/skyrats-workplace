

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConfigureStartController_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ConfigureStartController__1857507735_h
#define ConfigureStartController__1857507735_h

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

            extern const char *ConfigureStartController_Request_TYPENAME;

            struct ConfigureStartController_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ConfigureStartController_Request_TypeSupport;
            class ConfigureStartController_Request_DataWriter;
            class ConfigureStartController_Request_DataReader;
            #endif

            class ConfigureStartController_Request_ 
            {
              public:
                typedef struct ConfigureStartController_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ConfigureStartController_Request_TypeSupport TypeSupport;
                typedef ConfigureStartController_Request_DataWriter DataWriter;
                typedef ConfigureStartController_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ConfigureStartController_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ConfigureStartController_Request_Seq, ConfigureStartController_Request_);

            NDDSUSERDllExport
            RTIBool ConfigureStartController_Request__initialize(
                ConfigureStartController_Request_* self);

            NDDSUSERDllExport
            RTIBool ConfigureStartController_Request__initialize_ex(
                ConfigureStartController_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ConfigureStartController_Request__initialize_w_params(
                ConfigureStartController_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ConfigureStartController_Request__finalize(
                ConfigureStartController_Request_* self);

            NDDSUSERDllExport
            void ConfigureStartController_Request__finalize_ex(
                ConfigureStartController_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ConfigureStartController_Request__finalize_w_params(
                ConfigureStartController_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ConfigureStartController_Request__finalize_optional_members(
                ConfigureStartController_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ConfigureStartController_Request__copy(
                ConfigureStartController_Request_* dst,
                const ConfigureStartController_Request_* src);

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

            extern const char *ConfigureStartController_Response_TYPENAME;

            struct ConfigureStartController_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ConfigureStartController_Response_TypeSupport;
            class ConfigureStartController_Response_DataWriter;
            class ConfigureStartController_Response_DataReader;
            #endif

            class ConfigureStartController_Response_ 
            {
              public:
                typedef struct ConfigureStartController_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ConfigureStartController_Response_TypeSupport TypeSupport;
                typedef ConfigureStartController_Response_DataWriter DataWriter;
                typedef ConfigureStartController_Response_DataReader DataReader;
                #endif

                DDS_Boolean   ok_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ConfigureStartController_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ConfigureStartController_Response_Seq, ConfigureStartController_Response_);

            NDDSUSERDllExport
            RTIBool ConfigureStartController_Response__initialize(
                ConfigureStartController_Response_* self);

            NDDSUSERDllExport
            RTIBool ConfigureStartController_Response__initialize_ex(
                ConfigureStartController_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ConfigureStartController_Response__initialize_w_params(
                ConfigureStartController_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ConfigureStartController_Response__finalize(
                ConfigureStartController_Response_* self);

            NDDSUSERDllExport
            void ConfigureStartController_Response__finalize_ex(
                ConfigureStartController_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ConfigureStartController_Response__finalize_w_params(
                ConfigureStartController_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ConfigureStartController_Response__finalize_optional_members(
                ConfigureStartController_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ConfigureStartController_Response__copy(
                ConfigureStartController_Response_* dst,
                const ConfigureStartController_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* ConfigureStartController_ */

