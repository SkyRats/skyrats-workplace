

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerFeedback_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef InteractiveMarkerFeedback__1449233604_h
#define InteractiveMarkerFeedback__1449233604_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace InteractiveMarkerFeedback_Constants {
                static const DDS_Octet KEEP_ALIVE_= 0;
                static const DDS_Octet POSE_UPDATE_= 1;
                static const DDS_Octet MENU_SELECT_= 2;
                static const DDS_Octet BUTTON_CLICK_= 3;
                static const DDS_Octet MOUSE_DOWN_= 4;
                static const DDS_Octet MOUSE_UP_= 5;
            } /* namespace InteractiveMarkerFeedback_Constants  */

            extern const char *InteractiveMarkerFeedback_TYPENAME;

            struct InteractiveMarkerFeedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class InteractiveMarkerFeedback_TypeSupport;
            class InteractiveMarkerFeedback_DataWriter;
            class InteractiveMarkerFeedback_DataReader;
            #endif

            class InteractiveMarkerFeedback_ 
            {
              public:
                typedef struct InteractiveMarkerFeedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef InteractiveMarkerFeedback_TypeSupport TypeSupport;
                typedef InteractiveMarkerFeedback_DataWriter DataWriter;
                typedef InteractiveMarkerFeedback_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   client_id_ ;
                DDS_Char *   marker_name_ ;
                DDS_Char *   control_name_ ;
                DDS_Octet   event_type_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                DDS_UnsignedLong   menu_entry_id_ ;
                geometry_msgs::msg::dds_::Point_   mouse_point_ ;
                DDS_Boolean   mouse_point_valid_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* InteractiveMarkerFeedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(InteractiveMarkerFeedback_Seq, InteractiveMarkerFeedback_);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerFeedback__initialize(
                InteractiveMarkerFeedback_* self);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerFeedback__initialize_ex(
                InteractiveMarkerFeedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerFeedback__initialize_w_params(
                InteractiveMarkerFeedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void InteractiveMarkerFeedback__finalize(
                InteractiveMarkerFeedback_* self);

            NDDSUSERDllExport
            void InteractiveMarkerFeedback__finalize_ex(
                InteractiveMarkerFeedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void InteractiveMarkerFeedback__finalize_w_params(
                InteractiveMarkerFeedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void InteractiveMarkerFeedback__finalize_optional_members(
                InteractiveMarkerFeedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool InteractiveMarkerFeedback__copy(
                InteractiveMarkerFeedback_* dst,
                const InteractiveMarkerFeedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* InteractiveMarkerFeedback_ */

