

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorPerformanceMetric_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SensorPerformanceMetric__744614722_h
#define SensorPerformanceMetric__744614722_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *SensorPerformanceMetric_TYPENAME;

            struct SensorPerformanceMetric_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SensorPerformanceMetric_TypeSupport;
            class SensorPerformanceMetric_DataWriter;
            class SensorPerformanceMetric_DataReader;
            #endif

            class SensorPerformanceMetric_ 
            {
              public:
                typedef struct SensorPerformanceMetric_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SensorPerformanceMetric_TypeSupport TypeSupport;
                typedef SensorPerformanceMetric_DataWriter DataWriter;
                typedef SensorPerformanceMetric_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Double   sim_update_rate_ ;
                DDS_Double   real_update_rate_ ;
                DDS_Double   fps_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SensorPerformanceMetric__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SensorPerformanceMetric_Seq, SensorPerformanceMetric_);

            NDDSUSERDllExport
            RTIBool SensorPerformanceMetric__initialize(
                SensorPerformanceMetric_* self);

            NDDSUSERDllExport
            RTIBool SensorPerformanceMetric__initialize_ex(
                SensorPerformanceMetric_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SensorPerformanceMetric__initialize_w_params(
                SensorPerformanceMetric_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SensorPerformanceMetric__finalize(
                SensorPerformanceMetric_* self);

            NDDSUSERDllExport
            void SensorPerformanceMetric__finalize_ex(
                SensorPerformanceMetric_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SensorPerformanceMetric__finalize_w_params(
                SensorPerformanceMetric_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SensorPerformanceMetric__finalize_optional_members(
                SensorPerformanceMetric_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SensorPerformanceMetric__copy(
                SensorPerformanceMetric_* dst,
                const SensorPerformanceMetric_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* SensorPerformanceMetric_ */

