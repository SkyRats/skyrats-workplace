

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DiagnosticArray_.idl using "rtiddsgen".
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

#include "DiagnosticArray_.h"

#include <new>

namespace diagnostic_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *DiagnosticArray_TYPENAME = "diagnostic_msgs::msg::dds_::DiagnosticArray_";

            DDS_TypeCode* DiagnosticArray__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DiagnosticArray__g_tc_status__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member DiagnosticArray__g_tc_members[2]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"status_",/* Member name */
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
                    }
                };

                static DDS_TypeCode DiagnosticArray__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"diagnostic_msgs::msg::dds_::DiagnosticArray_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DiagnosticArray__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DiagnosticArray_*/

                if (is_initialized) {
                    return &DiagnosticArray__g_tc;
                }

                DiagnosticArray__g_tc_status__sequence._data._typeCode = (RTICdrTypeCode *)diagnostic_msgs::msg::dds_::DiagnosticStatus__get_typecode();

                DiagnosticArray__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                DiagnosticArray__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& DiagnosticArray__g_tc_status__sequence;

                is_initialized = RTI_TRUE;

                return &DiagnosticArray__g_tc;
            }

            RTIBool DiagnosticArray__initialize(
                DiagnosticArray_* sample) {
                return diagnostic_msgs::msg::dds_::DiagnosticArray__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DiagnosticArray__initialize_ex(
                DiagnosticArray_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return diagnostic_msgs::msg::dds_::DiagnosticArray__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DiagnosticArray__initialize_w_params(
                DiagnosticArray_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_initialize(&sample->status_ );
                    diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_element_allocation_params(&sample->status_ ,allocParams);
                    diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_absolute_maximum(&sample->status_ , RTI_INT32_MAX);
                    if (!diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_maximum(&sample->status_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_length(&sample->status_, 0);
                }
                return RTI_TRUE;
            }

            void DiagnosticArray__finalize(
                DiagnosticArray_* sample)
            {

                diagnostic_msgs::msg::dds_::DiagnosticArray__finalize_ex(sample,RTI_TRUE);
            }

            void DiagnosticArray__finalize_ex(
                DiagnosticArray_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                diagnostic_msgs::msg::dds_::DiagnosticArray__finalize_w_params(
                    sample,&deallocParams);
            }

            void DiagnosticArray__finalize_w_params(
                DiagnosticArray_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_set_element_deallocation_params(
                    &sample->status_,deallocParams);
                diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_finalize(&sample->status_);

            }

            void DiagnosticArray__finalize_optional_members(
                DiagnosticArray_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_get_length(
                        &sample->status_);

                    for (i = 0; i < length; i++) {
                        diagnostic_msgs::msg::dds_::DiagnosticStatus__finalize_optional_members(
                            diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_get_reference(
                                &sample->status_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool DiagnosticArray__copy(
                DiagnosticArray_* dst,
                const DiagnosticArray_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq_copy(&dst->status_ ,
                    &src->status_ )) {
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
            * Configure and implement 'DiagnosticArray_' sequence class.
            */
            #define T DiagnosticArray_
            #define TSeq DiagnosticArray_Seq

            #define T_initialize_w_params diagnostic_msgs::msg::dds_::DiagnosticArray__initialize_w_params

            #define T_finalize_w_params   diagnostic_msgs::msg::dds_::DiagnosticArray__finalize_w_params
            #define T_copy       diagnostic_msgs::msg::dds_::DiagnosticArray__copy

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
} /* namespace diagnostic_msgs  */

