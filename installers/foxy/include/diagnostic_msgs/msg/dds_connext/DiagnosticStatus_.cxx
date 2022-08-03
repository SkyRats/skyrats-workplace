

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DiagnosticStatus_.idl using "rtiddsgen".
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

#include "DiagnosticStatus_.h"

#include <new>

namespace diagnostic_msgs {
    namespace msg {
        namespace dds_ {
            namespace DiagnosticStatus_Constants {
            } /* namespace DiagnosticStatus_Constants  */

            /* ========================================================================= */
            const char *DiagnosticStatus_TYPENAME = "diagnostic_msgs::msg::dds_::DiagnosticStatus_";

            DDS_TypeCode* DiagnosticStatus__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DiagnosticStatus__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DiagnosticStatus__g_tc_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DiagnosticStatus__g_tc_hardware_id__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DiagnosticStatus__g_tc_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member DiagnosticStatus__g_tc_members[5]=
                {

                    {
                        (char *)"level_",/* Member name */
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
                        (char *)"name_",/* Member name */
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
                        (char *)"message_",/* Member name */
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
                        (char *)"hardware_id_",/* Member name */
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
                        (char *)"values_",/* Member name */
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
                    }
                };

                static DDS_TypeCode DiagnosticStatus__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"diagnostic_msgs::msg::dds_::DiagnosticStatus_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        DiagnosticStatus__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DiagnosticStatus_*/

                if (is_initialized) {
                    return &DiagnosticStatus__g_tc;
                }

                DiagnosticStatus__g_tc_values__sequence._data._typeCode = (RTICdrTypeCode *)diagnostic_msgs::msg::dds_::KeyValue__get_typecode();

                DiagnosticStatus__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                DiagnosticStatus__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DiagnosticStatus__g_tc_name__string;

                DiagnosticStatus__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DiagnosticStatus__g_tc_message__string;

                DiagnosticStatus__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DiagnosticStatus__g_tc_hardware_id__string;

                DiagnosticStatus__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& DiagnosticStatus__g_tc_values__sequence;

                is_initialized = RTI_TRUE;

                return &DiagnosticStatus__g_tc;
            }

            RTIBool DiagnosticStatus__initialize(
                DiagnosticStatus_* sample) {
                return diagnostic_msgs::msg::dds_::DiagnosticStatus__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DiagnosticStatus__initialize_ex(
                DiagnosticStatus_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return diagnostic_msgs::msg::dds_::DiagnosticStatus__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DiagnosticStatus__initialize_w_params(
                DiagnosticStatus_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->level_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->name_= DDS_String_alloc ((0));
                    if (sample->name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name_!= NULL) { 
                        sample->name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->message_= DDS_String_alloc ((0));
                    if (sample->message_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->message_!= NULL) { 
                        sample->message_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->hardware_id_= DDS_String_alloc ((0));
                    if (sample->hardware_id_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->hardware_id_!= NULL) { 
                        sample->hardware_id_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    diagnostic_msgs::msg::dds_::KeyValue_Seq_initialize(&sample->values_ );
                    diagnostic_msgs::msg::dds_::KeyValue_Seq_set_element_allocation_params(&sample->values_ ,allocParams);
                    diagnostic_msgs::msg::dds_::KeyValue_Seq_set_absolute_maximum(&sample->values_ , RTI_INT32_MAX);
                    if (!diagnostic_msgs::msg::dds_::KeyValue_Seq_set_maximum(&sample->values_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    diagnostic_msgs::msg::dds_::KeyValue_Seq_set_length(&sample->values_, 0);
                }
                return RTI_TRUE;
            }

            void DiagnosticStatus__finalize(
                DiagnosticStatus_* sample)
            {

                diagnostic_msgs::msg::dds_::DiagnosticStatus__finalize_ex(sample,RTI_TRUE);
            }

            void DiagnosticStatus__finalize_ex(
                DiagnosticStatus_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                diagnostic_msgs::msg::dds_::DiagnosticStatus__finalize_w_params(
                    sample,&deallocParams);
            }

            void DiagnosticStatus__finalize_w_params(
                DiagnosticStatus_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->name_ != NULL) {
                    DDS_String_free(sample->name_);
                    sample->name_=NULL;

                }
                if (sample->message_ != NULL) {
                    DDS_String_free(sample->message_);
                    sample->message_=NULL;

                }
                if (sample->hardware_id_ != NULL) {
                    DDS_String_free(sample->hardware_id_);
                    sample->hardware_id_=NULL;

                }
                diagnostic_msgs::msg::dds_::KeyValue_Seq_set_element_deallocation_params(
                    &sample->values_,deallocParams);
                diagnostic_msgs::msg::dds_::KeyValue_Seq_finalize(&sample->values_);

            }

            void DiagnosticStatus__finalize_optional_members(
                DiagnosticStatus_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = diagnostic_msgs::msg::dds_::KeyValue_Seq_get_length(
                        &sample->values_);

                    for (i = 0; i < length; i++) {
                        diagnostic_msgs::msg::dds_::KeyValue__finalize_optional_members(
                            diagnostic_msgs::msg::dds_::KeyValue_Seq_get_reference(
                                &sample->values_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool DiagnosticStatus__copy(
                DiagnosticStatus_* dst,
                const DiagnosticStatus_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->level_, &src->level_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->name_, src->name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->message_, src->message_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->hardware_id_, src->hardware_id_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!diagnostic_msgs::msg::dds_::KeyValue_Seq_copy(&dst->values_ ,
                    &src->values_ )) {
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
            * Configure and implement 'DiagnosticStatus_' sequence class.
            */
            #define T DiagnosticStatus_
            #define TSeq DiagnosticStatus_Seq

            #define T_initialize_w_params diagnostic_msgs::msg::dds_::DiagnosticStatus__initialize_w_params

            #define T_finalize_w_params   diagnostic_msgs::msg::dds_::DiagnosticStatus__finalize_w_params
            #define T_copy       diagnostic_msgs::msg::dds_::DiagnosticStatus__copy

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

