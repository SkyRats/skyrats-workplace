

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IMUInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef IMUInfo__678418078_h
#define IMUInfo__678418078_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace realsense2_camera_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *IMUInfo_TYPENAME;

            struct IMUInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class IMUInfo_TypeSupport;
            class IMUInfo_DataWriter;
            class IMUInfo_DataReader;
            #endif

            class IMUInfo_ 
            {
              public:
                typedef struct IMUInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef IMUInfo_TypeSupport TypeSupport;
                typedef IMUInfo_DataWriter DataWriter;
                typedef IMUInfo_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   data_ [12];
                DDS_Double   noise_variances_ [3];
                DDS_Double   bias_variances_ [3];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* IMUInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(IMUInfo_Seq, IMUInfo_);

            NDDSUSERDllExport
            RTIBool IMUInfo__initialize(
                IMUInfo_* self);

            NDDSUSERDllExport
            RTIBool IMUInfo__initialize_ex(
                IMUInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool IMUInfo__initialize_w_params(
                IMUInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void IMUInfo__finalize(
                IMUInfo_* self);

            NDDSUSERDllExport
            void IMUInfo__finalize_ex(
                IMUInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void IMUInfo__finalize_w_params(
                IMUInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void IMUInfo__finalize_optional_members(
                IMUInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool IMUInfo__copy(
                IMUInfo_* dst,
                const IMUInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace realsense2_camera_msgs  */

#endif /* IMUInfo_ */

