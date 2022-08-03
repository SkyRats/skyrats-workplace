

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeographicMap_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GeographicMap__1291274242_h
#define GeographicMap__1291274242_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/BoundingBox_.h"
#include "geographic_msgs/msg/dds_connext/KeyValue_.h"
#include "geographic_msgs/msg/dds_connext/MapFeature_.h"
#include "geographic_msgs/msg/dds_connext/WayPoint_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GeographicMap_TYPENAME;

            struct GeographicMap_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GeographicMap_TypeSupport;
            class GeographicMap_DataWriter;
            class GeographicMap_DataReader;
            #endif

            class GeographicMap_ 
            {
              public:
                typedef struct GeographicMap_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GeographicMap_TypeSupport TypeSupport;
                typedef GeographicMap_DataWriter DataWriter;
                typedef GeographicMap_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                unique_identifier_msgs::msg::dds_::UUID_   id_ ;
                geographic_msgs::msg::dds_::BoundingBox_   bounds_ ;
                geographic_msgs::msg::dds_::WayPoint_Seq  points_ ;
                geographic_msgs::msg::dds_::MapFeature_Seq  features_ ;
                geographic_msgs::msg::dds_::KeyValue_Seq  props_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GeographicMap__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GeographicMap_Seq, GeographicMap_);

            NDDSUSERDllExport
            RTIBool GeographicMap__initialize(
                GeographicMap_* self);

            NDDSUSERDllExport
            RTIBool GeographicMap__initialize_ex(
                GeographicMap_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GeographicMap__initialize_w_params(
                GeographicMap_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GeographicMap__finalize(
                GeographicMap_* self);

            NDDSUSERDllExport
            void GeographicMap__finalize_ex(
                GeographicMap_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GeographicMap__finalize_w_params(
                GeographicMap_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GeographicMap__finalize_optional_members(
                GeographicMap_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GeographicMap__copy(
                GeographicMap_* dst,
                const GeographicMap_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* GeographicMap_ */

