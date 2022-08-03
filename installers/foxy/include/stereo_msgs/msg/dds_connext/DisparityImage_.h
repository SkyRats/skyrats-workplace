

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DisparityImage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DisparityImage__1624855155_h
#define DisparityImage__1624855155_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/Image_.h"
#include "sensor_msgs/msg/dds_connext/RegionOfInterest_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace stereo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *DisparityImage_TYPENAME;

            struct DisparityImage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DisparityImage_TypeSupport;
            class DisparityImage_DataWriter;
            class DisparityImage_DataReader;
            #endif

            class DisparityImage_ 
            {
              public:
                typedef struct DisparityImage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DisparityImage_TypeSupport TypeSupport;
                typedef DisparityImage_DataWriter DataWriter;
                typedef DisparityImage_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                sensor_msgs::msg::dds_::Image_   image_ ;
                DDS_Float   f_ ;
                DDS_Float   t_ ;
                sensor_msgs::msg::dds_::RegionOfInterest_   valid_window_ ;
                DDS_Float   min_disparity_ ;
                DDS_Float   max_disparity_ ;
                DDS_Float   delta_d_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DisparityImage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DisparityImage_Seq, DisparityImage_);

            NDDSUSERDllExport
            RTIBool DisparityImage__initialize(
                DisparityImage_* self);

            NDDSUSERDllExport
            RTIBool DisparityImage__initialize_ex(
                DisparityImage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DisparityImage__initialize_w_params(
                DisparityImage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DisparityImage__finalize(
                DisparityImage_* self);

            NDDSUSERDllExport
            void DisparityImage__finalize_ex(
                DisparityImage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DisparityImage__finalize_w_params(
                DisparityImage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DisparityImage__finalize_optional_members(
                DisparityImage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DisparityImage__copy(
                DisparityImage_* dst,
                const DisparityImage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace stereo_msgs  */

#endif /* DisparityImage_ */

