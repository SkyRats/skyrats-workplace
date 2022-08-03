

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TeleportRelative_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TeleportRelative__121380611_h
#define TeleportRelative__121380611_h

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

            extern const char *TeleportRelative_Request_TYPENAME;

            struct TeleportRelative_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TeleportRelative_Request_TypeSupport;
            class TeleportRelative_Request_DataWriter;
            class TeleportRelative_Request_DataReader;
            #endif

            class TeleportRelative_Request_ 
            {
              public:
                typedef struct TeleportRelative_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TeleportRelative_Request_TypeSupport TypeSupport;
                typedef TeleportRelative_Request_DataWriter DataWriter;
                typedef TeleportRelative_Request_DataReader DataReader;
                #endif

                DDS_Float   linear_ ;
                DDS_Float   angular_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TeleportRelative_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TeleportRelative_Request_Seq, TeleportRelative_Request_);

            NDDSUSERDllExport
            RTIBool TeleportRelative_Request__initialize(
                TeleportRelative_Request_* self);

            NDDSUSERDllExport
            RTIBool TeleportRelative_Request__initialize_ex(
                TeleportRelative_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TeleportRelative_Request__initialize_w_params(
                TeleportRelative_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TeleportRelative_Request__finalize(
                TeleportRelative_Request_* self);

            NDDSUSERDllExport
            void TeleportRelative_Request__finalize_ex(
                TeleportRelative_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TeleportRelative_Request__finalize_w_params(
                TeleportRelative_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TeleportRelative_Request__finalize_optional_members(
                TeleportRelative_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TeleportRelative_Request__copy(
                TeleportRelative_Request_* dst,
                const TeleportRelative_Request_* src);

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

            extern const char *TeleportRelative_Response_TYPENAME;

            struct TeleportRelative_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TeleportRelative_Response_TypeSupport;
            class TeleportRelative_Response_DataWriter;
            class TeleportRelative_Response_DataReader;
            #endif

            class TeleportRelative_Response_ 
            {
              public:
                typedef struct TeleportRelative_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TeleportRelative_Response_TypeSupport TypeSupport;
                typedef TeleportRelative_Response_DataWriter DataWriter;
                typedef TeleportRelative_Response_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TeleportRelative_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TeleportRelative_Response_Seq, TeleportRelative_Response_);

            NDDSUSERDllExport
            RTIBool TeleportRelative_Response__initialize(
                TeleportRelative_Response_* self);

            NDDSUSERDllExport
            RTIBool TeleportRelative_Response__initialize_ex(
                TeleportRelative_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TeleportRelative_Response__initialize_w_params(
                TeleportRelative_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TeleportRelative_Response__finalize(
                TeleportRelative_Response_* self);

            NDDSUSERDllExport
            void TeleportRelative_Response__finalize_ex(
                TeleportRelative_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TeleportRelative_Response__finalize_w_params(
                TeleportRelative_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TeleportRelative_Response__finalize_optional_members(
                TeleportRelative_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TeleportRelative_Response__copy(
                TeleportRelative_Response_* dst,
                const TeleportRelative_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */

#endif /* TeleportRelative_ */

