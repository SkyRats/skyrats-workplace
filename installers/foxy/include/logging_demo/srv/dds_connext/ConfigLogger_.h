

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConfigLogger_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ConfigLogger__1424006761_h
#define ConfigLogger__1424006761_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace logging_demo {
    namespace srv {
        namespace dds_ {

            extern const char *ConfigLogger_Request_TYPENAME;

            struct ConfigLogger_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ConfigLogger_Request_TypeSupport;
            class ConfigLogger_Request_DataWriter;
            class ConfigLogger_Request_DataReader;
            #endif

            class ConfigLogger_Request_ 
            {
              public:
                typedef struct ConfigLogger_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ConfigLogger_Request_TypeSupport TypeSupport;
                typedef ConfigLogger_Request_DataWriter DataWriter;
                typedef ConfigLogger_Request_DataReader DataReader;
                #endif

                DDS_Char *   logger_name_ ;
                DDS_Char *   level_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ConfigLogger_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ConfigLogger_Request_Seq, ConfigLogger_Request_);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Request__initialize(
                ConfigLogger_Request_* self);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Request__initialize_ex(
                ConfigLogger_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Request__initialize_w_params(
                ConfigLogger_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ConfigLogger_Request__finalize(
                ConfigLogger_Request_* self);

            NDDSUSERDllExport
            void ConfigLogger_Request__finalize_ex(
                ConfigLogger_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ConfigLogger_Request__finalize_w_params(
                ConfigLogger_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ConfigLogger_Request__finalize_optional_members(
                ConfigLogger_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ConfigLogger_Request__copy(
                ConfigLogger_Request_* dst,
                const ConfigLogger_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace logging_demo  */
namespace logging_demo {
    namespace srv {
        namespace dds_ {

            extern const char *ConfigLogger_Response_TYPENAME;

            struct ConfigLogger_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ConfigLogger_Response_TypeSupport;
            class ConfigLogger_Response_DataWriter;
            class ConfigLogger_Response_DataReader;
            #endif

            class ConfigLogger_Response_ 
            {
              public:
                typedef struct ConfigLogger_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ConfigLogger_Response_TypeSupport TypeSupport;
                typedef ConfigLogger_Response_DataWriter DataWriter;
                typedef ConfigLogger_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ConfigLogger_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ConfigLogger_Response_Seq, ConfigLogger_Response_);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Response__initialize(
                ConfigLogger_Response_* self);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Response__initialize_ex(
                ConfigLogger_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Response__initialize_w_params(
                ConfigLogger_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ConfigLogger_Response__finalize(
                ConfigLogger_Response_* self);

            NDDSUSERDllExport
            void ConfigLogger_Response__finalize_ex(
                ConfigLogger_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ConfigLogger_Response__finalize_w_params(
                ConfigLogger_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ConfigLogger_Response__finalize_optional_members(
                ConfigLogger_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ConfigLogger_Response__copy(
                ConfigLogger_Response_* dst,
                const ConfigLogger_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace logging_demo  */

#endif /* ConfigLogger_ */

