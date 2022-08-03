

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Transition_.idl using "rtiddsgen".
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

#include "Transition_.h"

#include <new>

namespace lifecycle_msgs {
    namespace msg {
        namespace dds_ {
            namespace Transition_Constants {
            } /* namespace Transition_Constants  */

            /* ========================================================================= */
            const char *Transition_TYPENAME = "lifecycle_msgs::msg::dds_::Transition_";

            DDS_TypeCode* Transition__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Transition__g_tc_label__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member Transition__g_tc_members[2]=
                {

                    {
                        (char *)"id_",/* Member name */
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
                        (char *)"label_",/* Member name */
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

                static DDS_TypeCode Transition__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"lifecycle_msgs::msg::dds_::Transition_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Transition__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Transition_*/

                if (is_initialized) {
                    return &Transition__g_tc;
                }

                Transition__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Transition__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Transition__g_tc_label__string;

                is_initialized = RTI_TRUE;

                return &Transition__g_tc;
            }

            RTIBool Transition__initialize(
                Transition_* sample) {
                return lifecycle_msgs::msg::dds_::Transition__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Transition__initialize_ex(
                Transition_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return lifecycle_msgs::msg::dds_::Transition__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Transition__initialize_w_params(
                Transition_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->id_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->label_= DDS_String_alloc ((0));
                    if (sample->label_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->label_!= NULL) { 
                        sample->label_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void Transition__finalize(
                Transition_* sample)
            {

                lifecycle_msgs::msg::dds_::Transition__finalize_ex(sample,RTI_TRUE);
            }

            void Transition__finalize_ex(
                Transition_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                lifecycle_msgs::msg::dds_::Transition__finalize_w_params(
                    sample,&deallocParams);
            }

            void Transition__finalize_w_params(
                Transition_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->label_ != NULL) {
                    DDS_String_free(sample->label_);
                    sample->label_=NULL;

                }
            }

            void Transition__finalize_optional_members(
                Transition_* sample, RTIBool deletePointers)
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

            RTIBool Transition__copy(
                Transition_* dst,
                const Transition_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->id_, &src->id_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->label_, src->label_, 
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
            * Configure and implement 'Transition_' sequence class.
            */
            #define T Transition_
            #define TSeq Transition_Seq

            #define T_initialize_w_params lifecycle_msgs::msg::dds_::Transition__initialize_w_params

            #define T_finalize_w_params   lifecycle_msgs::msg::dds_::Transition__finalize_w_params
            #define T_copy       lifecycle_msgs::msg::dds_::Transition__copy

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
} /* namespace lifecycle_msgs  */

