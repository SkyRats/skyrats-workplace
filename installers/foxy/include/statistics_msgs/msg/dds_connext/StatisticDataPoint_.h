

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StatisticDataPoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StatisticDataPoint__1072312283_h
#define StatisticDataPoint__1072312283_h

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

            extern const char *StatisticDataPoint_TYPENAME;

            struct StatisticDataPoint_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class StatisticDataPoint_TypeSupport;
            class StatisticDataPoint_DataWriter;
            class StatisticDataPoint_DataReader;
            #endif

            class StatisticDataPoint_ 
            {
              public:
                typedef struct StatisticDataPoint_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef StatisticDataPoint_TypeSupport TypeSupport;
                typedef StatisticDataPoint_DataWriter DataWriter;
                typedef StatisticDataPoint_DataReader DataReader;
                #endif

                DDS_Octet   data_type_ ;
                DDS_Double   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* StatisticDataPoint__get_typecode(void); /* Type code */

            DDS_SEQUENCE(StatisticDataPoint_Seq, StatisticDataPoint_);

            NDDSUSERDllExport
            RTIBool StatisticDataPoint__initialize(
                StatisticDataPoint_* self);

            NDDSUSERDllExport
            RTIBool StatisticDataPoint__initialize_ex(
                StatisticDataPoint_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool StatisticDataPoint__initialize_w_params(
                StatisticDataPoint_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void StatisticDataPoint__finalize(
                StatisticDataPoint_* self);

            NDDSUSERDllExport
            void StatisticDataPoint__finalize_ex(
                StatisticDataPoint_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void StatisticDataPoint__finalize_w_params(
                StatisticDataPoint_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void StatisticDataPoint__finalize_optional_members(
                StatisticDataPoint_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool StatisticDataPoint__copy(
                StatisticDataPoint_* dst,
                const StatisticDataPoint_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace statistics_msgs  */

#endif /* StatisticDataPoint_ */

