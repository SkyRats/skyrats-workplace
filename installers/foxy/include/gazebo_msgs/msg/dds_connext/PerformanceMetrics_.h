

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PerformanceMetrics_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PerformanceMetrics__1583739101_h
#define PerformanceMetrics__1583739101_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "gazebo_msgs/msg/dds_connext/SensorPerformanceMetric_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PerformanceMetrics_TYPENAME;

            struct PerformanceMetrics_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PerformanceMetrics_TypeSupport;
            class PerformanceMetrics_DataWriter;
            class PerformanceMetrics_DataReader;
            #endif

            class PerformanceMetrics_ 
            {
              public:
                typedef struct PerformanceMetrics_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PerformanceMetrics_TypeSupport TypeSupport;
                typedef PerformanceMetrics_DataWriter DataWriter;
                typedef PerformanceMetrics_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   real_time_factor_ ;
                gazebo_msgs::msg::dds_::SensorPerformanceMetric_Seq  sensors_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PerformanceMetrics__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PerformanceMetrics_Seq, PerformanceMetrics_);

            NDDSUSERDllExport
            RTIBool PerformanceMetrics__initialize(
                PerformanceMetrics_* self);

            NDDSUSERDllExport
            RTIBool PerformanceMetrics__initialize_ex(
                PerformanceMetrics_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PerformanceMetrics__initialize_w_params(
                PerformanceMetrics_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PerformanceMetrics__finalize(
                PerformanceMetrics_* self);

            NDDSUSERDllExport
            void PerformanceMetrics__finalize_ex(
                PerformanceMetrics_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PerformanceMetrics__finalize_w_params(
                PerformanceMetrics_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PerformanceMetrics__finalize_optional_members(
                PerformanceMetrics_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PerformanceMetrics__copy(
                PerformanceMetrics_* dst,
                const PerformanceMetrics_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* PerformanceMetrics_ */

