

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerUpdate_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef InteractiveMarkerUpdate__1532886488_h
#define InteractiveMarkerUpdate__1532886488_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "visualization_msgs/msg/dds_connext/InteractiveMarker_.h"
#include "visualization_msgs/msg/dds_connext/InteractiveMarkerPose_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace InteractiveMarkerUpdate_Constants {
                static const DDS_Octet KEEP_ALIVE_= 0;
                static const DDS_Octet UPDATE_= 1;
            } /* namespace InteractiveMarkerUpdate_Constants  */

            extern const char *InteractiveMarkerUpdate_TYPENAME;

            struct InteractiveMarkerUpdate_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class InteractiveMarkerUpdate_TypeSupport;
            class InteractiveMarkerUpdate_DataWriter;
            class InteractiveMarkerUpdate_DataReader;
            #endif

            class InteractiveMarkerUpdate_ 
            {
              public:
                typedef struct InteractiveMarkerUpdate_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef InteractiveMarkerUpdate_TypeSupport TypeSupport;
                typedef InteractiveMarkerUpdate_DataWriter DataWriter;
                typedef InteractiveMarkerUpdate_DataReader DataReader;
                #endif

                DDS_Char *   server_id_ ;
                DDS_UnsignedLongLong   seq_num_ ;
                DDS_Octet   type_ ;
                visualization_msgs::msg::dds_::InteractiveMarker_Seq  markers_ ;
                visualization_msgs::msg::dds_::InteractiveMarkerPose_Seq  poses_ ;
                DDS_StringSeq  erases_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* InteractiveMarkerUpdate__get_typecode(void); /* Type code */

            DDS_SEQUENCE(InteractiveMarkerUpdate_Seq, InteractiveMarkerUpdate_);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerUpdate__initialize(
                InteractiveMarkerUpdate_* self);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerUpdate__initialize_ex(
                InteractiveMarkerUpdate_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerUpdate__initialize_w_params(
                InteractiveMarkerUpdate_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void InteractiveMarkerUpdate__finalize(
                InteractiveMarkerUpdate_* self);

            NDDSUSERDllExport
            void InteractiveMarkerUpdate__finalize_ex(
                InteractiveMarkerUpdate_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void InteractiveMarkerUpdate__finalize_w_params(
                InteractiveMarkerUpdate_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void InteractiveMarkerUpdate__finalize_optional_members(
                InteractiveMarkerUpdate_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool InteractiveMarkerUpdate__copy(
                InteractiveMarkerUpdate_* dst,
                const InteractiveMarkerUpdate_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* InteractiveMarkerUpdate_ */

