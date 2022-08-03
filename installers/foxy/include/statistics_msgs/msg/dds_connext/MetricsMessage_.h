

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MetricsMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MetricsMessage__2136864935_h
#define MetricsMessage__2136864935_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "statistics_msgs/msg/dds_connext/StatisticDataPoint_.h"
namespace statistics_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MetricsMessage_TYPENAME;

            struct MetricsMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MetricsMessage_TypeSupport;
            class MetricsMessage_DataWriter;
            class MetricsMessage_DataReader;
            #endif

            class MetricsMessage_ 
            {
              public:
                typedef struct MetricsMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MetricsMessage_TypeSupport TypeSupport;
                typedef MetricsMessage_DataWriter DataWriter;
                typedef MetricsMessage_DataReader DataReader;
                #endif

                DDS_Char *   measurement_source_name_ ;
                DDS_Char *   metrics_source_ ;
                DDS_Char *   unit_ ;
                builtin_interfaces::msg::dds_::Time_   window_start_ ;
                builtin_interfaces::msg::dds_::Time_   window_stop_ ;
                statistics_msgs::msg::dds_::StatisticDataPoint_Seq  statistics_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MetricsMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MetricsMessage_Seq, MetricsMessage_);

            NDDSUSERDllExport
            RTIBool MetricsMessage__initialize(
                MetricsMessage_* self);

            NDDSUSERDllExport
            RTIBool MetricsMessage__initialize_ex(
                MetricsMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MetricsMessage__initialize_w_params(
                MetricsMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MetricsMessage__finalize(
                MetricsMessage_* self);

            NDDSUSERDllExport
            void MetricsMessage__finalize_ex(
                MetricsMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MetricsMessage__finalize_w_params(
                MetricsMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MetricsMessage__finalize_optional_members(
                MetricsMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MetricsMessage__copy(
                MetricsMessage_* dst,
                const MetricsMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace statistics_msgs  */

#endif /* MetricsMessage_ */

