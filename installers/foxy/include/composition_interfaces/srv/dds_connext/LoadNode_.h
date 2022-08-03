

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadNode_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LoadNode__1889884899_h
#define LoadNode__1889884899_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/Parameter_.h"
namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *LoadNode_Request_TYPENAME;

            struct LoadNode_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadNode_Request_TypeSupport;
            class LoadNode_Request_DataWriter;
            class LoadNode_Request_DataReader;
            #endif

            class LoadNode_Request_ 
            {
              public:
                typedef struct LoadNode_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadNode_Request_TypeSupport TypeSupport;
                typedef LoadNode_Request_DataWriter DataWriter;
                typedef LoadNode_Request_DataReader DataReader;
                #endif

                DDS_Char *   package_name_ ;
                DDS_Char *   plugin_name_ ;
                DDS_Char *   node_name_ ;
                DDS_Char *   node_namespace_ ;
                DDS_Octet   log_level_ ;
                DDS_StringSeq  remap_rules_ ;
                rcl_interfaces::msg::dds_::Parameter_Seq  parameters_ ;
                rcl_interfaces::msg::dds_::Parameter_Seq  extra_arguments_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadNode_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadNode_Request_Seq, LoadNode_Request_);

            NDDSUSERDllExport
            RTIBool LoadNode_Request__initialize(
                LoadNode_Request_* self);

            NDDSUSERDllExport
            RTIBool LoadNode_Request__initialize_ex(
                LoadNode_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadNode_Request__initialize_w_params(
                LoadNode_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadNode_Request__finalize(
                LoadNode_Request_* self);

            NDDSUSERDllExport
            void LoadNode_Request__finalize_ex(
                LoadNode_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadNode_Request__finalize_w_params(
                LoadNode_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadNode_Request__finalize_optional_members(
                LoadNode_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadNode_Request__copy(
                LoadNode_Request_* dst,
                const LoadNode_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace composition_interfaces  */
namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *LoadNode_Response_TYPENAME;

            struct LoadNode_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadNode_Response_TypeSupport;
            class LoadNode_Response_DataWriter;
            class LoadNode_Response_DataReader;
            #endif

            class LoadNode_Response_ 
            {
              public:
                typedef struct LoadNode_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadNode_Response_TypeSupport TypeSupport;
                typedef LoadNode_Response_DataWriter DataWriter;
                typedef LoadNode_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   error_message_ ;
                DDS_Char *   full_node_name_ ;
                DDS_UnsignedLongLong   unique_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadNode_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadNode_Response_Seq, LoadNode_Response_);

            NDDSUSERDllExport
            RTIBool LoadNode_Response__initialize(
                LoadNode_Response_* self);

            NDDSUSERDllExport
            RTIBool LoadNode_Response__initialize_ex(
                LoadNode_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadNode_Response__initialize_w_params(
                LoadNode_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadNode_Response__finalize(
                LoadNode_Response_* self);

            NDDSUSERDllExport
            void LoadNode_Response__finalize_ex(
                LoadNode_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadNode_Response__finalize_w_params(
                LoadNode_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadNode_Response__finalize_optional_members(
                LoadNode_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadNode_Response__copy(
                LoadNode_Response_* dst,
                const LoadNode_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace composition_interfaces  */

#endif /* LoadNode_ */

