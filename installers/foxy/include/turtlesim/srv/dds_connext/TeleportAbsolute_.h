

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TeleportAbsolute_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TeleportAbsolute__1272891089_h
#define TeleportAbsolute__1272891089_h

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

            extern const char *TeleportAbsolute_Request_TYPENAME;

            struct TeleportAbsolute_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TeleportAbsolute_Request_TypeSupport;
            class TeleportAbsolute_Request_DataWriter;
            class TeleportAbsolute_Request_DataReader;
            #endif

            class TeleportAbsolute_Request_ 
            {
              public:
                typedef struct TeleportAbsolute_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TeleportAbsolute_Request_TypeSupport TypeSupport;
                typedef TeleportAbsolute_Request_DataWriter DataWriter;
                typedef TeleportAbsolute_Request_DataReader DataReader;
                #endif

                DDS_Float   x_ ;
                DDS_Float   y_ ;
                DDS_Float   theta_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TeleportAbsolute_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TeleportAbsolute_Request_Seq, TeleportAbsolute_Request_);

            NDDSUSERDllExport
            RTIBool TeleportAbsolute_Request__initialize(
                TeleportAbsolute_Request_* self);

            NDDSUSERDllExport
            RTIBool TeleportAbsolute_Request__initialize_ex(
                TeleportAbsolute_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TeleportAbsolute_Request__initialize_w_params(
                TeleportAbsolute_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TeleportAbsolute_Request__finalize(
                TeleportAbsolute_Request_* self);

            NDDSUSERDllExport
            void TeleportAbsolute_Request__finalize_ex(
                TeleportAbsolute_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TeleportAbsolute_Request__finalize_w_params(
                TeleportAbsolute_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TeleportAbsolute_Request__finalize_optional_members(
                TeleportAbsolute_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TeleportAbsolute_Request__copy(
                TeleportAbsolute_Request_* dst,
                const TeleportAbsolute_Request_* src);

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

            extern const char *TeleportAbsolute_Response_TYPENAME;

            struct TeleportAbsolute_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TeleportAbsolute_Response_TypeSupport;
            class TeleportAbsolute_Response_DataWriter;
            class TeleportAbsolute_Response_DataReader;
            #endif

            class TeleportAbsolute_Response_ 
            {
              public:
                typedef struct TeleportAbsolute_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TeleportAbsolute_Response_TypeSupport TypeSupport;
                typedef TeleportAbsolute_Response_DataWriter DataWriter;
                typedef TeleportAbsolute_Response_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TeleportAbsolute_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TeleportAbsolute_Response_Seq, TeleportAbsolute_Response_);

            NDDSUSERDllExport
            RTIBool TeleportAbsolute_Response__initialize(
                TeleportAbsolute_Response_* self);

            NDDSUSERDllExport
            RTIBool TeleportAbsolute_Response__initialize_ex(
                TeleportAbsolute_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TeleportAbsolute_Response__initialize_w_params(
                TeleportAbsolute_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TeleportAbsolute_Response__finalize(
                TeleportAbsolute_Response_* self);

            NDDSUSERDllExport
            void TeleportAbsolute_Response__finalize_ex(
                TeleportAbsolute_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TeleportAbsolute_Response__finalize_w_params(
                TeleportAbsolute_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TeleportAbsolute_Response__finalize_optional_members(
                TeleportAbsolute_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TeleportAbsolute_Response__copy(
                TeleportAbsolute_Response_* dst,
                const TeleportAbsolute_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */

#endif /* TeleportAbsolute_ */

