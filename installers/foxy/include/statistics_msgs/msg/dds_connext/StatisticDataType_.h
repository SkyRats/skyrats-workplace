

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StatisticDataType_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StatisticDataType__1896568145_h
#define StatisticDataType__1896568145_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace statistics_msgs {
    namespace msg {
        namespace dds_ {
            namespace StatisticDataType_Constants {
                static const DDS_Octet STATISTICS_DATA_TYPE_UNINITIALIZED_= 0;
                static const DDS_Octet STATISTICS_DATA_TYPE_AVERAGE_= 1;
                static const DDS_Octet STATISTICS_DATA_TYPE_MINIMUM_= 2;
                static const DDS_Octet STATISTICS_DATA_TYPE_MAXIMUM_= 3;
                static const DDS_Octet STATISTICS_DATA_TYPE_STDDEV_= 4;
                static const DDS_Octet STATISTICS_DATA_TYPE_SAMPLE_COUNT_= 5;
            } /* namespace StatisticDataType_Constants  */

            extern const char *StatisticDataType_TYPENAME;

            struct StatisticDataType_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class StatisticDataType_TypeSupport;
            class StatisticDataType_DataWriter;
            class StatisticDataType_DataReader;
            #endif

            class StatisticDataType_ 
            {
              public:
                typedef struct StatisticDataType_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef StatisticDataType_TypeSupport TypeSupport;
                typedef StatisticDataType_DataWriter DataWriter;
                typedef StatisticDataType_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* StatisticDataType__get_typecode(void); /* Type code */

            DDS_SEQUENCE(StatisticDataType_Seq, StatisticDataType_);

            NDDSUSERDllExport
            RTIBool StatisticDataType__initialize(
                StatisticDataType_* self);

            NDDSUSERDllExport
            RTIBool StatisticDataType__initialize_ex(
                StatisticDataType_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool StatisticDataType__initialize_w_params(
                StatisticDataType_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void StatisticDataType__finalize(
                StatisticDataType_* self);

            NDDSUSERDllExport
            void StatisticDataType__finalize_ex(
                StatisticDataType_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void StatisticDataType__finalize_w_params(
                StatisticDataType_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void StatisticDataType__finalize_optional_members(
                StatisticDataType_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool StatisticDataType__copy(
                StatisticDataType_* dst,
                const StatisticDataType_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace statistics_msgs  */

#endif /* StatisticDataType_ */

