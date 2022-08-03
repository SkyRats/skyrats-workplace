

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GeoPoint__2134751982_h
#define GeoPoint__2134751982_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GeoPoint_TYPENAME;

            struct GeoPoint_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GeoPoint_TypeSupport;
            class GeoPoint_DataWriter;
            class GeoPoint_DataReader;
            #endif

            class GeoPoint_ 
            {
              public:
                typedef struct GeoPoint_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GeoPoint_TypeSupport TypeSupport;
                typedef GeoPoint_DataWriter DataWriter;
                typedef GeoPoint_DataReader DataReader;
                #endif

                DDS_Double   latitude_ ;
                DDS_Double   longitude_ ;
                DDS_Double   altitude_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GeoPoint__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GeoPoint_Seq, GeoPoint_);

            NDDSUSERDllExport
            RTIBool GeoPoint__initialize(
                GeoPoint_* self);

            NDDSUSERDllExport
            RTIBool GeoPoint__initialize_ex(
                GeoPoint_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GeoPoint__initialize_w_params(
                GeoPoint_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GeoPoint__finalize(
                GeoPoint_* self);

            NDDSUSERDllExport
            void GeoPoint__finalize_ex(
                GeoPoint_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GeoPoint__finalize_w_params(
                GeoPoint_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GeoPoint__finalize_optional_members(
                GeoPoint_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GeoPoint__copy(
                GeoPoint_* dst,
                const GeoPoint_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* GeoPoint_ */

