

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from KeyValue_.idl using "rtiddsgen".
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

#include "KeyValue_.h"

#include <new>

namespace diagnostic_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *KeyValue_TYPENAME = "diagnostic_msgs::msg::dds_::KeyValue_";

            DDS_TypeCode* KeyValue__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode KeyValue__g_tc_key__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode KeyValue__g_tc_value__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member KeyValue__g_tc_members[2]=
                {

                    {
                        (char *)"key_",/* Member name */
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
                        (char *)"value_",/* Member name */
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

                static DDS_TypeCode KeyValue__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"diagnostic_msgs::msg::dds_::KeyValue_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        KeyValue__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for KeyValue_*/

                if (is_initialized) {
                    return &KeyValue__g_tc;
                }

                KeyValue__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&KeyValue__g_tc_key__string;

                KeyValue__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&KeyValue__g_tc_value__string;

                is_initialized = RTI_TRUE;

                return &KeyValue__g_tc;
            }

            RTIBool KeyValue__initialize(
                KeyValue_* sample) {
                return diagnostic_msgs::msg::dds_::KeyValue__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool KeyValue__initialize_ex(
                KeyValue_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return diagnostic_msgs::msg::dds_::KeyValue__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool KeyValue__initialize_w_params(
                KeyValue_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->key_= DDS_String_alloc ((0));
                    if (sample->key_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->key_!= NULL) { 
                        sample->key_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->value_= DDS_String_alloc ((0));
                    if (sample->value_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->value_!= NULL) { 
                        sample->value_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void KeyValue__finalize(
                KeyValue_* sample)
            {

                diagnostic_msgs::msg::dds_::KeyValue__finalize_ex(sample,RTI_TRUE);
            }

            void KeyValue__finalize_ex(
                KeyValue_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                diagnostic_msgs::msg::dds_::KeyValue__finalize_w_params(
                    sample,&deallocParams);
            }

            void KeyValue__finalize_w_params(
                KeyValue_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->key_ != NULL) {
                    DDS_String_free(sample->key_);
                    sample->key_=NULL;

                }
                if (sample->value_ != NULL) {
                    DDS_String_free(sample->value_);
                    sample->value_=NULL;

                }
            }

            void KeyValue__finalize_optional_members(
                KeyValue_* sample, RTIBool deletePointers)
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

            }

            RTIBool KeyValue__copy(
                KeyValue_* dst,
                const KeyValue_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->key_, src->key_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->value_, src->value_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
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
            * Configure and implement 'KeyValue_' sequence class.
            */
            #define T KeyValue_
            #define TSeq KeyValue_Seq

            #define T_initialize_w_params diagnostic_msgs::msg::dds_::KeyValue__initialize_w_params

            #define T_finalize_w_params   diagnostic_msgs::msg::dds_::KeyValue__finalize_w_params
            #define T_copy       diagnostic_msgs::msg::dds_::KeyValue__copy

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

