

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Kill_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Kill__438667862_h
#define Kill__438667862_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace turtlesim {
    namespace srv {
        namespace dds_ {

            extern const char *Kill_Request_TYPENAME;

            struct Kill_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Kill_Request_TypeSupport;
            class Kill_Request_DataWriter;
            class Kill_Request_DataReader;
            #endif

            class Kill_Request_ 
            {
              public:
                typedef struct Kill_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Kill_Request_TypeSupport TypeSupport;
                typedef Kill_Request_DataWriter DataWriter;
                typedef Kill_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Kill_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Kill_Request_Seq, Kill_Request_);

            NDDSUSERDllExport
            RTIBool Kill_Request__initialize(
                Kill_Request_* self);

            NDDSUSERDllExport
            RTIBool Kill_Request__initialize_ex(
                Kill_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Kill_Request__initialize_w_params(
                Kill_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Kill_Request__finalize(
                Kill_Request_* self);

            NDDSUSERDllExport
            void Kill_Request__finalize_ex(
                Kill_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Kill_Request__finalize_w_params(
                Kill_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Kill_Request__finalize_optional_members(
                Kill_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Kill_Request__copy(
                Kill_Request_* dst,
                const Kill_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace srv {
        namespace dds_ {

            extern const char *Kill_Response_TYPENAME;

            struct Kill_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Kill_Response_TypeSupport;
            class Kill_Response_DataWriter;
            class Kill_Response_DataReader;
            #endif

            class Kill_Response_ 
            {
              public:
                typedef struct Kill_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Kill_Response_TypeSupport TypeSupport;
                typedef Kill_Response_DataWriter DataWriter;
                typedef Kill_Response_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Kill_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Kill_Response_Seq, Kill_Response_);

            NDDSUSERDllExport
            RTIBool Kill_Response__initialize(
                Kill_Response_* self);

            NDDSUSERDllExport
            RTIBool Kill_Response__initialize_ex(
                Kill_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Kill_Response__initialize_w_params(
                Kill_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Kill_Response__finalize(
                Kill_Response_* self);

            NDDSUSERDllExport
            void Kill_Response__finalize_ex(
                Kill_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Kill_Response__finalize_w_params(
                Kill_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Kill_Response__finalize_optional_members(
                Kill_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Kill_Response__copy(
                Kill_Response_* dst,
                const Kill_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */

#endif /* Kill_ */

