

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConfigureController_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ConfigureController__549276160_h
#define ConfigureController__549276160_h

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

            extern const char *ConfigureController_Request_TYPENAME;

            struct ConfigureController_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ConfigureController_Request_TypeSupport;
            class ConfigureController_Request_DataWriter;
            class ConfigureController_Request_DataReader;
            #endif

            class ConfigureController_Request_ 
            {
              public:
                typedef struct ConfigureController_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ConfigureController_Request_TypeSupport TypeSupport;
                typedef ConfigureController_Request_DataWriter DataWriter;
                typedef ConfigureController_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ConfigureController_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ConfigureController_Request_Seq, ConfigureController_Request_);

            NDDSUSERDllExport
            RTIBool ConfigureController_Request__initialize(
                ConfigureController_Request_* self);

            NDDSUSERDllExport
            RTIBool ConfigureController_Request__initialize_ex(
                ConfigureController_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ConfigureController_Request__initialize_w_params(
                ConfigureController_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ConfigureController_Request__finalize(
                ConfigureController_Request_* self);

            NDDSUSERDllExport
            void ConfigureController_Request__finalize_ex(
                ConfigureController_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ConfigureController_Request__finalize_w_params(
                ConfigureController_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ConfigureController_Request__finalize_optional_members(
                ConfigureController_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ConfigureController_Request__copy(
                ConfigureController_Request_* dst,
                const ConfigureController_Request_* src);

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

            extern const char *ConfigureController_Response_TYPENAME;

            struct ConfigureController_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ConfigureController_Response_TypeSupport;
            class ConfigureController_Response_DataWriter;
            class ConfigureController_Response_DataReader;
            #endif

            class ConfigureController_Response_ 
            {
              public:
                typedef struct ConfigureController_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ConfigureController_Response_TypeSupport TypeSupport;
                typedef ConfigureController_Response_DataWriter DataWriter;
                typedef ConfigureController_Response_DataReader DataReader;
                #endif

                DDS_Boolean   ok_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ConfigureController_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ConfigureController_Response_Seq, ConfigureController_Response_);

            NDDSUSERDllExport
            RTIBool ConfigureController_Response__initialize(
                ConfigureController_Response_* self);

            NDDSUSERDllExport
            RTIBool ConfigureController_Response__initialize_ex(
                ConfigureController_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ConfigureController_Response__initialize_w_params(
                ConfigureController_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ConfigureController_Response__finalize(
                ConfigureController_Response_* self);

            NDDSUSERDllExport
            void ConfigureController_Response__finalize_ex(
                ConfigureController_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ConfigureController_Response__finalize_w_params(
                ConfigureController_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ConfigureController_Response__finalize_optional_members(
                ConfigureController_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ConfigureController_Response__copy(
                ConfigureController_Response_* dst,
                const ConfigureController_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace controller_manager_msgs  */

#endif /* ConfigureController_ */

