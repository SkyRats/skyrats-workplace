

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OccupancyGridUpdate_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef OccupancyGridUpdate__1590932733_h
#define OccupancyGridUpdate__1590932733_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace map_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *OccupancyGridUpdate_TYPENAME;

            struct OccupancyGridUpdate_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class OccupancyGridUpdate_TypeSupport;
            class OccupancyGridUpdate_DataWriter;
            class OccupancyGridUpdate_DataReader;
            #endif

            class OccupancyGridUpdate_ 
            {
              public:
                typedef struct OccupancyGridUpdate_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef OccupancyGridUpdate_TypeSupport TypeSupport;
                typedef OccupancyGridUpdate_DataWriter DataWriter;
                typedef OccupancyGridUpdate_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Long   x_ ;
                DDS_Long   y_ ;
                DDS_UnsignedLong   width_ ;
                DDS_UnsignedLong   height_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* OccupancyGridUpdate__get_typecode(void); /* Type code */

            DDS_SEQUENCE(OccupancyGridUpdate_Seq, OccupancyGridUpdate_);

            NDDSUSERDllExport
            RTIBool OccupancyGridUpdate__initialize(
                OccupancyGridUpdate_* self);

            NDDSUSERDllExport
            RTIBool OccupancyGridUpdate__initialize_ex(
                OccupancyGridUpdate_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool OccupancyGridUpdate__initialize_w_params(
                OccupancyGridUpdate_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void OccupancyGridUpdate__finalize(
                OccupancyGridUpdate_* self);

            NDDSUSERDllExport
            void OccupancyGridUpdate__finalize_ex(
                OccupancyGridUpdate_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void OccupancyGridUpdate__finalize_w_params(
                OccupancyGridUpdate_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void OccupancyGridUpdate__finalize_optional_members(
                OccupancyGridUpdate_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool OccupancyGridUpdate__copy(
                OccupancyGridUpdate_* dst,
                const OccupancyGridUpdate_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace map_msgs  */

#endif /* OccupancyGridUpdate_ */

