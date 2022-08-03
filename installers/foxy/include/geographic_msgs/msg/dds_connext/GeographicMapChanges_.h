

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeographicMapChanges_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GeographicMapChanges__396357374_h
#define GeographicMapChanges__396357374_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeographicMap_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GeographicMapChanges_TYPENAME;

            struct GeographicMapChanges_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GeographicMapChanges_TypeSupport;
            class GeographicMapChanges_DataWriter;
            class GeographicMapChanges_DataReader;
            #endif

            class GeographicMapChanges_ 
            {
              public:
                typedef struct GeographicMapChanges_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GeographicMapChanges_TypeSupport TypeSupport;
                typedef GeographicMapChanges_DataWriter DataWriter;
                typedef GeographicMapChanges_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geographic_msgs::msg::dds_::GeographicMap_   diffs_ ;
                unique_identifier_msgs::msg::dds_::UUID_Seq  deletes_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GeographicMapChanges__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GeographicMapChanges_Seq, GeographicMapChanges_);

            NDDSUSERDllExport
            RTIBool GeographicMapChanges__initialize(
                GeographicMapChanges_* self);

            NDDSUSERDllExport
            RTIBool GeographicMapChanges__initialize_ex(
                GeographicMapChanges_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GeographicMapChanges__initialize_w_params(
                GeographicMapChanges_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GeographicMapChanges__finalize(
                GeographicMapChanges_* self);

            NDDSUSERDllExport
            void GeographicMapChanges__finalize_ex(
                GeographicMapChanges_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GeographicMapChanges__finalize_w_params(
                GeographicMapChanges_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GeographicMapChanges__finalize_optional_members(
                GeographicMapChanges_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GeographicMapChanges__copy(
                GeographicMapChanges_* dst,
                const GeographicMapChanges_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* GeographicMapChanges_ */

