

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerPose_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef InteractiveMarkerPose__1856481123_h
#define InteractiveMarkerPose__1856481123_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *InteractiveMarkerPose_TYPENAME;

            struct InteractiveMarkerPose_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class InteractiveMarkerPose_TypeSupport;
            class InteractiveMarkerPose_DataWriter;
            class InteractiveMarkerPose_DataReader;
            #endif

            class InteractiveMarkerPose_ 
            {
              public:
                typedef struct InteractiveMarkerPose_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef InteractiveMarkerPose_TypeSupport TypeSupport;
                typedef InteractiveMarkerPose_DataWriter DataWriter;
                typedef InteractiveMarkerPose_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* InteractiveMarkerPose__get_typecode(void); /* Type code */

            DDS_SEQUENCE(InteractiveMarkerPose_Seq, InteractiveMarkerPose_);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerPose__initialize(
                InteractiveMarkerPose_* self);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerPose__initialize_ex(
                InteractiveMarkerPose_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerPose__initialize_w_params(
                InteractiveMarkerPose_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void InteractiveMarkerPose__finalize(
                InteractiveMarkerPose_* self);

            NDDSUSERDllExport
            void InteractiveMarkerPose__finalize_ex(
                InteractiveMarkerPose_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void InteractiveMarkerPose__finalize_w_params(
                InteractiveMarkerPose_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void InteractiveMarkerPose__finalize_optional_members(
                InteractiveMarkerPose_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool InteractiveMarkerPose__copy(
                InteractiveMarkerPose_* dst,
                const InteractiveMarkerPose_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* InteractiveMarkerPose_ */

