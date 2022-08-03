

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Marker_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Marker__1893984056_h
#define Marker__1893984056_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/ColorRGBA_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace Marker_Constants {
                static const DDS_Long ARROW_= 0;
                static const DDS_Long CUBE_= 1;
                static const DDS_Long SPHERE_= 2;
                static const DDS_Long CYLINDER_= 3;
                static const DDS_Long LINE_STRIP_= 4;
                static const DDS_Long LINE_LIST_= 5;
                static const DDS_Long CUBE_LIST_= 6;
                static const DDS_Long SPHERE_LIST_= 7;
                static const DDS_Long POINTS_= 8;
                static const DDS_Long TEXT_VIEW_FACING_= 9;
                static const DDS_Long MESH_RESOURCE_= 10;
                static const DDS_Long TRIANGLE_LIST_= 11;
                static const DDS_Long ADD_= 0;
                static const DDS_Long MODIFY_= 0;
                static const DDS_Long DELETE_= 2;
                static const DDS_Long DELETEALL_= 3;
            } /* namespace Marker_Constants  */

            extern const char *Marker_TYPENAME;

            struct Marker_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Marker_TypeSupport;
            class Marker_DataWriter;
            class Marker_DataReader;
            #endif

            class Marker_ 
            {
              public:
                typedef struct Marker_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Marker_TypeSupport TypeSupport;
                typedef Marker_DataWriter DataWriter;
                typedef Marker_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   ns_ ;
                DDS_Long   id_ ;
                DDS_Long   type_ ;
                DDS_Long   action_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                geometry_msgs::msg::dds_::Vector3_   scale_ ;
                std_msgs::msg::dds_::ColorRGBA_   color_ ;
                builtin_interfaces::msg::dds_::Duration_   lifetime_ ;
                DDS_Boolean   frame_locked_ ;
                geometry_msgs::msg::dds_::Point_Seq  points_ ;
                std_msgs::msg::dds_::ColorRGBA_Seq  colors_ ;
                DDS_Char *   text_ ;
                DDS_Char *   mesh_resource_ ;
                DDS_Boolean   mesh_use_embedded_materials_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Marker__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Marker_Seq, Marker_);

            NDDSUSERDllExport
            RTIBool Marker__initialize(
                Marker_* self);

            NDDSUSERDllExport
            RTIBool Marker__initialize_ex(
                Marker_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Marker__initialize_w_params(
                Marker_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Marker__finalize(
                Marker_* self);

            NDDSUSERDllExport
            void Marker__finalize_ex(
                Marker_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Marker__finalize_w_params(
                Marker_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Marker__finalize_optional_members(
                Marker_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Marker__copy(
                Marker_* dst,
                const Marker_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* Marker_ */

