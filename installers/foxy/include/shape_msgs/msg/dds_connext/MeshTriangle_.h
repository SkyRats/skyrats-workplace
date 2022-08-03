

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MeshTriangle_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MeshTriangle__920017024_h
#define MeshTriangle__920017024_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace shape_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MeshTriangle_TYPENAME;

            struct MeshTriangle_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MeshTriangle_TypeSupport;
            class MeshTriangle_DataWriter;
            class MeshTriangle_DataReader;
            #endif

            class MeshTriangle_ 
            {
              public:
                typedef struct MeshTriangle_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MeshTriangle_TypeSupport TypeSupport;
                typedef MeshTriangle_DataWriter DataWriter;
                typedef MeshTriangle_DataReader DataReader;
                #endif

                DDS_UnsignedLong   vertex_indices_ [3];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MeshTriangle__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MeshTriangle_Seq, MeshTriangle_);

            NDDSUSERDllExport
            RTIBool MeshTriangle__initialize(
                MeshTriangle_* self);

            NDDSUSERDllExport
            RTIBool MeshTriangle__initialize_ex(
                MeshTriangle_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MeshTriangle__initialize_w_params(
                MeshTriangle_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MeshTriangle__finalize(
                MeshTriangle_* self);

            NDDSUSERDllExport
            void MeshTriangle__finalize_ex(
                MeshTriangle_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MeshTriangle__finalize_w_params(
                MeshTriangle_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MeshTriangle__finalize_optional_members(
                MeshTriangle_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MeshTriangle__copy(
                MeshTriangle_* dst,
                const MeshTriangle_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace shape_msgs  */

#endif /* MeshTriangle_ */

