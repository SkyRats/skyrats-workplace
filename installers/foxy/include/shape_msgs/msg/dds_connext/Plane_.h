

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Plane_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Plane__1396944342_h
#define Plane__1396944342_h

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

            extern const char *Plane_TYPENAME;

            struct Plane_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Plane_TypeSupport;
            class Plane_DataWriter;
            class Plane_DataReader;
            #endif

            class Plane_ 
            {
              public:
                typedef struct Plane_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Plane_TypeSupport TypeSupport;
                typedef Plane_DataWriter DataWriter;
                typedef Plane_DataReader DataReader;
                #endif

                DDS_Double   coef_ [4];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Plane__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Plane_Seq, Plane_);

            NDDSUSERDllExport
            RTIBool Plane__initialize(
                Plane_* self);

            NDDSUSERDllExport
            RTIBool Plane__initialize_ex(
                Plane_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Plane__initialize_w_params(
                Plane_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Plane__finalize(
                Plane_* self);

            NDDSUSERDllExport
            void Plane__finalize_ex(
                Plane_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Plane__finalize_w_params(
                Plane_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Plane__finalize_optional_members(
                Plane_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Plane__copy(
                Plane_* dst,
                const Plane_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace shape_msgs  */

#endif /* Plane_ */

