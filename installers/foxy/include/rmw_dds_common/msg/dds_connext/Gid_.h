

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Gid_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Gid__836212746_h
#define Gid__836212746_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace rmw_dds_common {
    namespace msg {
        namespace dds_ {

            extern const char *Gid_TYPENAME;

            struct Gid_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Gid_TypeSupport;
            class Gid_DataWriter;
            class Gid_DataReader;
            #endif

            class Gid_ 
            {
              public:
                typedef struct Gid_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Gid_TypeSupport TypeSupport;
                typedef Gid_DataWriter DataWriter;
                typedef Gid_DataReader DataReader;
                #endif

                DDS_Octet   data_ [24];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Gid__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Gid_Seq, Gid_);

            NDDSUSERDllExport
            RTIBool Gid__initialize(
                Gid_* self);

            NDDSUSERDllExport
            RTIBool Gid__initialize_ex(
                Gid_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Gid__initialize_w_params(
                Gid_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Gid__finalize(
                Gid_* self);

            NDDSUSERDllExport
            void Gid__finalize_ex(
                Gid_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Gid__finalize_w_params(
                Gid_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Gid__finalize_optional_members(
                Gid_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Gid__copy(
                Gid_* dst,
                const Gid_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rmw_dds_common  */

#endif /* Gid_ */

