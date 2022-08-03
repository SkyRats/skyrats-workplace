

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPose_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GeoPose__1586241580_h
#define GeoPose__1586241580_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GeoPose_TYPENAME;

            struct GeoPose_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GeoPose_TypeSupport;
            class GeoPose_DataWriter;
            class GeoPose_DataReader;
            #endif

            class GeoPose_ 
            {
              public:
                typedef struct GeoPose_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GeoPose_TypeSupport TypeSupport;
                typedef GeoPose_DataWriter DataWriter;
                typedef GeoPose_DataReader DataReader;
                #endif

                geographic_msgs::msg::dds_::GeoPoint_   position_ ;
                geometry_msgs::msg::dds_::Quaternion_   orientation_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GeoPose__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GeoPose_Seq, GeoPose_);

            NDDSUSERDllExport
            RTIBool GeoPose__initialize(
                GeoPose_* self);

            NDDSUSERDllExport
            RTIBool GeoPose__initialize_ex(
                GeoPose_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GeoPose__initialize_w_params(
                GeoPose_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GeoPose__finalize(
                GeoPose_* self);

            NDDSUSERDllExport
            void GeoPose__finalize_ex(
                GeoPose_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GeoPose__finalize_w_params(
                GeoPose_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GeoPose__finalize_optional_members(
                GeoPose_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GeoPose__copy(
                GeoPose_* dst,
                const GeoPose_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* GeoPose_ */

