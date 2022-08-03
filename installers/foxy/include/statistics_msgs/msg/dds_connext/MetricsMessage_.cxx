

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MetricsMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "MetricsMessage_.h"

#include <new>

namespace statistics_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MetricsMessage_TYPENAME = "statistics_msgs::msg::dds_::MetricsMessage_";

            DDS_TypeCode* MetricsMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MetricsMessage__g_tc_measurement_source_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode MetricsMessage__g_tc_metrics_source__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode MetricsMessage__g_tc_unit__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode MetricsMessage__g_tc_statistics__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member MetricsMessage__g_tc_members[6]=
                {

                    {
                        (char *)"measurement_source_name_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"metrics_source_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"unit_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"window_start_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"window_stop_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"statistics_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode MetricsMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"statistics_msgs::msg::dds_::MetricsMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        MetricsMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MetricsMessage_*/

                if (is_initialized) {
                    return &MetricsMessage__g_tc;
                }

                MetricsMessage__g_tc_statistics__sequence._data._typeCode = (RTICdrTypeCode *)statistics_msgs::msg::dds_::StatisticDataPoint__get_typecode();

                MetricsMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&MetricsMessage__g_tc_measurement_source_name__string;

                MetricsMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&MetricsMessage__g_tc_metrics_source__string;

                MetricsMessage__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&MetricsMessage__g_tc_unit__string;

                MetricsMessage__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                MetricsMessage__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                MetricsMessage__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& MetricsMessage__g_tc_statistics__sequence;

                is_initialized = RTI_TRUE;

                return &MetricsMessage__g_tc;
            }

            RTIBool MetricsMessage__initialize(
                MetricsMessage_* sample) {
                return statistics_msgs::msg::dds_::MetricsMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MetricsMessage__initialize_ex(
                MetricsMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return statistics_msgs::msg::dds_::MetricsMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MetricsMessage__initialize_w_params(
                MetricsMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->measurement_source_name_= DDS_String_alloc ((0));
                    if (sample->measurement_source_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->measurement_source_name_!= NULL) { 
                        sample->measurement_source_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->metrics_source_= DDS_String_alloc ((0));
                    if (sample->metrics_source_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->metrics_source_!= NULL) { 
                        sample->metrics_source_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->unit_= DDS_String_alloc ((0));
                    if (sample->unit_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->unit_!= NULL) { 
                        sample->unit_[0] = '\0';
                    }
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->window_start_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->window_stop_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    statistics_msgs::msg::dds_::StatisticDataPoint_Seq_initialize(&sample->statistics_ );
                    statistics_msgs::msg::dds_::StatisticDataPoint_Seq_set_element_allocation_params(&sample->statistics_ ,allocParams);
                    statistics_msgs::msg::dds_::StatisticDataPoint_Seq_set_absolute_maximum(&sample->statistics_ , RTI_INT32_MAX);
                    if (!statistics_msgs::msg::dds_::StatisticDataPoint_Seq_set_maximum(&sample->statistics_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    statistics_msgs::msg::dds_::StatisticDataPoint_Seq_set_length(&sample->statistics_, 0);
                }
                return RTI_TRUE;
            }

            void MetricsMessage__finalize(
                MetricsMessage_* sample)
            {

                statistics_msgs::msg::dds_::MetricsMessage__finalize_ex(sample,RTI_TRUE);
            }

            void MetricsMessage__finalize_ex(
                MetricsMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                statistics_msgs::msg::dds_::MetricsMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void MetricsMessage__finalize_w_params(
                MetricsMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->measurement_source_name_ != NULL) {
                    DDS_String_free(sample->measurement_source_name_);
                    sample->measurement_source_name_=NULL;

                }
                if (sample->metrics_source_ != NULL) {
                    DDS_String_free(sample->metrics_source_);
                    sample->metrics_source_=NULL;

                }
                if (sample->unit_ != NULL) {
                    DDS_String_free(sample->unit_);
                    sample->unit_=NULL;

                }
                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->window_start_,deallocParams);

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->window_stop_,deallocParams);

                statistics_msgs::msg::dds_::StatisticDataPoint_Seq_set_element_deallocation_params(
                    &sample->statistics_,deallocParams);
                statistics_msgs::msg::dds_::StatisticDataPoint_Seq_finalize(&sample->statistics_);

            }

            void MetricsMessage__finalize_optional_members(
                MetricsMessage_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->window_start_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->window_stop_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = statistics_msgs::msg::dds_::StatisticDataPoint_Seq_get_length(
                        &sample->statistics_);

                    for (i = 0; i < length; i++) {
                        statistics_msgs::msg::dds_::StatisticDataPoint__finalize_optional_members(
                            statistics_msgs::msg::dds_::StatisticDataPoint_Seq_get_reference(
                                &sample->statistics_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool MetricsMessage__copy(
                MetricsMessage_* dst,
                const MetricsMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->measurement_source_name_, src->measurement_source_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->metrics_source_, src->metrics_source_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->unit_, src->unit_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->window_start_,(const builtin_interfaces::msg::dds_::Time_*)&src->window_start_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->window_stop_,(const builtin_interfaces::msg::dds_::Time_*)&src->window_stop_)) {
                        return RTI_FALSE;
                    } 
                    if (!statistics_msgs::msg::dds_::StatisticDataPoint_Seq_copy(&dst->statistics_ ,
                    &src->statistics_ )) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'MetricsMessage_' sequence class.
            */
            #define T MetricsMessage_
            #define TSeq MetricsMessage_Seq

            #define T_initialize_w_params statistics_msgs::msg::dds_::MetricsMessage__initialize_w_params

            #define T_finalize_w_params   statistics_msgs::msg::dds_::MetricsMessage__finalize_w_params
            #define T_copy       statistics_msgs::msg::dds_::MetricsMessage__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace statistics_msgs  */

