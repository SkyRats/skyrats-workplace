

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vertices_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Vertices__859631016_h
#define Vertices__859631016_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace pcl_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Vertices_TYPENAME;

            struct Vertices_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Vertices_TypeSupport;
            class Vertices_DataWriter;
            class Vertices_DataReader;
            #endif

            class Vertices_ 
            {
              public:
                typedef struct Vertices_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Vertices_TypeSupport TypeSupport;
                typedef Vertices_DataWriter DataWriter;
                typedef Vertices_DataReader DataReader;
                #endif

                DDS_UnsignedLongSeq  vertices_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Vertices__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Vertices_Seq, Vertices_);

            NDDSUSERDllExport
            RTIBool Vertices__initialize(
                Vertices_* self);

            NDDSUSERDllExport
            RTIBool Vertices__initialize_ex(
                Vertices_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Vertices__initialize_w_params(
                Vertices_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Vertices__finalize(
                Vertices_* self);

            NDDSUSERDllExport
            void Vertices__finalize_ex(
                Vertices_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Vertices__finalize_w_params(
                Vertices_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Vertices__finalize_optional_members(
                Vertices_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Vertices__copy(
                Vertices_* dst,
                const Vertices_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace pcl_msgs  */

#endif /* Vertices_ */

