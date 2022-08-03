

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPath_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GeoPath__757610005_h
#define GeoPath__757610005_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoseStamped_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GeoPath_TYPENAME;

            struct GeoPath_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GeoPath_TypeSupport;
            class GeoPath_DataWriter;
            class GeoPath_DataReader;
            #endif

            class GeoPath_ 
            {
              public:
                typedef struct GeoPath_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GeoPath_TypeSupport TypeSupport;
                typedef GeoPath_DataWriter DataWriter;
                typedef GeoPath_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geographic_msgs::msg::dds_::GeoPoseStamped_Seq  poses_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GeoPath__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GeoPath_Seq, GeoPath_);

            NDDSUSERDllExport
            RTIBool GeoPath__initialize(
                GeoPath_* self);

            NDDSUSERDllExport
            RTIBool GeoPath__initialize_ex(
                GeoPath_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GeoPath__initialize_w_params(
                GeoPath_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GeoPath__finalize(
                GeoPath_* self);

            NDDSUSERDllExport
            void GeoPath__finalize_ex(
                GeoPath_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GeoPath__finalize_w_params(
                GeoPath_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GeoPath__finalize_optional_members(
                GeoPath_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GeoPath__copy(
                GeoPath_* dst,
                const GeoPath_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* GeoPath_ */

