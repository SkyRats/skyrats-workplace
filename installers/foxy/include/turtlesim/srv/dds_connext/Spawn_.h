

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Spawn_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Spawn__971107413_h
#define Spawn__971107413_h

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

            extern const char *Spawn_Request_TYPENAME;

            struct Spawn_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Spawn_Request_TypeSupport;
            class Spawn_Request_DataWriter;
            class Spawn_Request_DataReader;
            #endif

            class Spawn_Request_ 
            {
              public:
                typedef struct Spawn_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Spawn_Request_TypeSupport TypeSupport;
                typedef Spawn_Request_DataWriter DataWriter;
                typedef Spawn_Request_DataReader DataReader;
                #endif

                DDS_Float   x_ ;
                DDS_Float   y_ ;
                DDS_Float   theta_ ;
                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Spawn_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Spawn_Request_Seq, Spawn_Request_);

            NDDSUSERDllExport
            RTIBool Spawn_Request__initialize(
                Spawn_Request_* self);

            NDDSUSERDllExport
            RTIBool Spawn_Request__initialize_ex(
                Spawn_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Spawn_Request__initialize_w_params(
                Spawn_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Spawn_Request__finalize(
                Spawn_Request_* self);

            NDDSUSERDllExport
            void Spawn_Request__finalize_ex(
                Spawn_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Spawn_Request__finalize_w_params(
                Spawn_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Spawn_Request__finalize_optional_members(
                Spawn_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Spawn_Request__copy(
                Spawn_Request_* dst,
                const Spawn_Request_* src);

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

            extern const char *Spawn_Response_TYPENAME;

            struct Spawn_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Spawn_Response_TypeSupport;
            class Spawn_Response_DataWriter;
            class Spawn_Response_DataReader;
            #endif

            class Spawn_Response_ 
            {
              public:
                typedef struct Spawn_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Spawn_Response_TypeSupport TypeSupport;
                typedef Spawn_Response_DataWriter DataWriter;
                typedef Spawn_Response_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Spawn_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Spawn_Response_Seq, Spawn_Response_);

            NDDSUSERDllExport
            RTIBool Spawn_Response__initialize(
                Spawn_Response_* self);

            NDDSUSERDllExport
            RTIBool Spawn_Response__initialize_ex(
                Spawn_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Spawn_Response__initialize_w_params(
                Spawn_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Spawn_Response__finalize(
                Spawn_Response_* self);

            NDDSUSERDllExport
            void Spawn_Response__finalize_ex(
                Spawn_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Spawn_Response__finalize_w_params(
                Spawn_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Spawn_Response__finalize_optional_members(
                Spawn_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Spawn_Response__copy(
                Spawn_Response_* dst,
                const Spawn_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */

#endif /* Spawn_ */

