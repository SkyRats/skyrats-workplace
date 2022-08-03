

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarker_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef InteractiveMarker__102172560_h
#define InteractiveMarker__102172560_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
#include "visualization_msgs/msg/dds_connext/InteractiveMarkerControl_.h"
#include "visualization_msgs/msg/dds_connext/MenuEntry_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *InteractiveMarker_TYPENAME;

            struct InteractiveMarker_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class InteractiveMarker_TypeSupport;
            class InteractiveMarker_DataWriter;
            class InteractiveMarker_DataReader;
            #endif

            class InteractiveMarker_ 
            {
              public:
                typedef struct InteractiveMarker_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef InteractiveMarker_TypeSupport TypeSupport;
                typedef InteractiveMarker_DataWriter DataWriter;
                typedef InteractiveMarker_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                DDS_Char *   name_ ;
                DDS_Char *   description_ ;
                DDS_Float   scale_ ;
                visualization_msgs::msg::dds_::MenuEntry_Seq  menu_entries_ ;
                visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq  controls_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* InteractiveMarker__get_typecode(void); /* Type code */

            DDS_SEQUENCE(InteractiveMarker_Seq, InteractiveMarker_);

            NDDSUSERDllExport
            RTIBool InteractiveMarker__initialize(
                InteractiveMarker_* self);

            NDDSUSERDllExport
            RTIBool InteractiveMarker__initialize_ex(
                InteractiveMarker_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool InteractiveMarker__initialize_w_params(
                InteractiveMarker_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void InteractiveMarker__finalize(
                InteractiveMarker_* self);

            NDDSUSERDllExport
            void InteractiveMarker__finalize_ex(
                InteractiveMarker_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void InteractiveMarker__finalize_w_params(
                InteractiveMarker_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void InteractiveMarker__finalize_optional_members(
                InteractiveMarker_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool InteractiveMarker__copy(
                InteractiveMarker_* dst,
                const InteractiveMarker_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* InteractiveMarker_ */

