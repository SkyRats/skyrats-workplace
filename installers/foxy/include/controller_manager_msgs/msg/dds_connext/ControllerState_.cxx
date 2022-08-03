

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControllerState_.idl using "rtiddsgen".
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

#include "ControllerState_.h"

#include <new>

namespace controller_manager_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ControllerState_TYPENAME = "controller_manager_msgs::msg::dds_::ControllerState_";

            DDS_TypeCode* ControllerState__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ControllerState__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ControllerState__g_tc_state__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ControllerState__g_tc_type__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ControllerState__g_tc_claimed_interfaces__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ControllerState__g_tc_claimed_interfaces__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ControllerState__g_tc_members[4]=
                {

                    {
                        (char *)"name_",/* Member name */
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
                        (char *)"state_",/* Member name */
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
                        (char *)"type_",/* Member name */
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
                        (char *)"claimed_interfaces_",/* Member name */
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
                    }
                };

                static DDS_TypeCode ControllerState__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::msg::dds_::ControllerState_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ControllerState__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ControllerState_*/

                if (is_initialized) {
                    return &ControllerState__g_tc;
                }

                ControllerState__g_tc_claimed_interfaces__sequence._data._typeCode = (RTICdrTypeCode *)&ControllerState__g_tc_claimed_interfaces__string;

                ControllerState__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ControllerState__g_tc_name__string;

                ControllerState__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ControllerState__g_tc_state__string;

                ControllerState__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&ControllerState__g_tc_type__string;

                ControllerState__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& ControllerState__g_tc_claimed_interfaces__sequence;

                is_initialized = RTI_TRUE;

                return &ControllerState__g_tc;
            }

            RTIBool ControllerState__initialize(
                ControllerState_* sample) {
                return controller_manager_msgs::msg::dds_::ControllerState__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ControllerState__initialize_ex(
                ControllerState_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::msg::dds_::ControllerState__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ControllerState__initialize_w_params(
                ControllerState_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->state_= DDS_String_alloc ((0));
                    if (sample->state_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->state_!= NULL) { 
                        sample->state_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->type_= DDS_String_alloc ((0));
                    if (sample->type_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->type_!= NULL) { 
                        sample->type_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->claimed_interfaces_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->claimed_interfaces_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->claimed_interfaces_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->claimed_interfaces_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->claimed_interfaces_, 0);
                }
                return RTI_TRUE;
            }

            void ControllerState__finalize(
                ControllerState_* sample)
            {

                controller_manager_msgs::msg::dds_::ControllerState__finalize_ex(sample,RTI_TRUE);
            }

            void ControllerState__finalize_ex(
                ControllerState_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::msg::dds_::ControllerState__finalize_w_params(
                    sample,&deallocParams);
            }

            void ControllerState__finalize_w_params(
                ControllerState_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
                if (sample->state_ != NULL) {
                    DDS_String_free(sample->state_);
                    sample->state_=NULL;

                }
                if (sample->type_ != NULL) {
                    DDS_String_free(sample->type_);
                    sample->type_=NULL;

                }
                DDS_StringSeq_finalize(&sample->claimed_interfaces_);

            }

            void ControllerState__finalize_optional_members(
                ControllerState_* sample, RTIBool deletePointers)
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

            RTIBool ControllerState__copy(
                ControllerState_* dst,
                const ControllerState_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->name_, src->name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->state_, src->state_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->type_, src->type_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->claimed_interfaces_ ,
                    &src->claimed_interfaces_ )) {
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
            * Configure and implement 'ControllerState_' sequence class.
            */
            #define T ControllerState_
            #define TSeq ControllerState_Seq

            #define T_initialize_w_params controller_manager_msgs::msg::dds_::ControllerState__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::msg::dds_::ControllerState__finalize_w_params
            #define T_copy       controller_manager_msgs::msg::dds_::ControllerState__copy

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
} /* namespace controller_manager_msgs  */

