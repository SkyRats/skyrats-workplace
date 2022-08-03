

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WayPoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WayPoint__454760545_h
#define WayPoint__454760545_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
#include "geographic_msgs/msg/dds_connext/KeyValue_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *WayPoint_TYPENAME;

            struct WayPoint_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WayPoint_TypeSupport;
            class WayPoint_DataWriter;
            class WayPoint_DataReader;
            #endif

            class WayPoint_ 
            {
              public:
                typedef struct WayPoint_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WayPoint_TypeSupport TypeSupport;
                typedef WayPoint_DataWriter DataWriter;
                typedef WayPoint_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   id_ ;
                geographic_msgs::msg::dds_::GeoPoint_   position_ ;
                geographic_msgs::msg::dds_::KeyValue_Seq  props_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WayPoint__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WayPoint_Seq, WayPoint_);

            NDDSUSERDllExport
            RTIBool WayPoint__initialize(
                WayPoint_* self);

            NDDSUSERDllExport
            RTIBool WayPoint__initialize_ex(
                WayPoint_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WayPoint__initialize_w_params(
                WayPoint_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WayPoint__finalize(
                WayPoint_* self);

            NDDSUSERDllExport
            void WayPoint__finalize_ex(
                WayPoint_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WayPoint__finalize_w_params(
                WayPoint_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WayPoint__finalize_optional_members(
                WayPoint_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WayPoint__copy(
                WayPoint_* dst,
                const WayPoint_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geographic_msgs  */

#endif /* WayPoint_ */

