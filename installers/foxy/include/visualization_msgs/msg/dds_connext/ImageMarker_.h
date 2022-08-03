

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImageMarker_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ImageMarker__1698717906_h
#define ImageMarker__1698717906_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "std_msgs/msg/dds_connext/ColorRGBA_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace ImageMarker_Constants {
                static const DDS_Long CIRCLE_= 0;
                static const DDS_Long LINE_STRIP_= 1;
                static const DDS_Long LINE_LIST_= 2;
                static const DDS_Long POLYGON_= 3;
                static const DDS_Long POINTS_= 4;
                static const DDS_Long ADD_= 0;
                static const DDS_Long REMOVE_= 1;
            } /* namespace ImageMarker_Constants  */

            extern const char *ImageMarker_TYPENAME;

            struct ImageMarker_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ImageMarker_TypeSupport;
            class ImageMarker_DataWriter;
            class ImageMarker_DataReader;
            #endif

            class ImageMarker_ 
            {
              public:
                typedef struct ImageMarker_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ImageMarker_TypeSupport TypeSupport;
                typedef ImageMarker_DataWriter DataWriter;
                typedef ImageMarker_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   ns_ ;
                DDS_Long   id_ ;
                DDS_Long   type_ ;
                DDS_Long   action_ ;
                geometry_msgs::msg::dds_::Point_   position_ ;
                DDS_Float   scale_ ;
                std_msgs::msg::dds_::ColorRGBA_   outline_color_ ;
                DDS_Octet   filled_ ;
                std_msgs::msg::dds_::ColorRGBA_   fill_color_ ;
                builtin_interfaces::msg::dds_::Duration_   lifetime_ ;
                geometry_msgs::msg::dds_::Point_Seq  points_ ;
                std_msgs::msg::dds_::ColorRGBA_Seq  outline_colors_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ImageMarker__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ImageMarker_Seq, ImageMarker_);

            NDDSUSERDllExport
            RTIBool ImageMarker__initialize(
                ImageMarker_* self);

            NDDSUSERDllExport
            RTIBool ImageMarker__initialize_ex(
                ImageMarker_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ImageMarker__initialize_w_params(
                ImageMarker_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ImageMarker__finalize(
                ImageMarker_* self);

            NDDSUSERDllExport
            void ImageMarker__finalize_ex(
                ImageMarker_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ImageMarker__finalize_w_params(
                ImageMarker_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ImageMarker__finalize_optional_members(
                ImageMarker_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ImageMarker__copy(
                ImageMarker_* dst,
                const ImageMarker_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* ImageMarker_ */

