

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GoalStatus_.idl using "rtiddsgen".
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

#include "GoalStatus_.h"

#include <new>

namespace actionlib_msgs {
    namespace msg {
        namespace dds_ {
            namespace GoalStatus_Constants {
            } /* namespace GoalStatus_Constants  */

            /* ========================================================================= */
            const char *GoalStatus_TYPENAME = "actionlib_msgs::msg::dds_::GoalStatus_";

            DDS_TypeCode* GoalStatus__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GoalStatus__g_tc_text__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GoalStatus__g_tc_members[3]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                    }, 
                    {
                        (char *)"text_",/* Member name */
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
                    }
                };

                static DDS_TypeCode GoalStatus__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"actionlib_msgs::msg::dds_::GoalStatus_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GoalStatus__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GoalStatus_*/

                if (is_initialized) {
                    return &GoalStatus__g_tc;
                }

                GoalStatus__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)actionlib_msgs::msg::dds_::GoalID__get_typecode();

                GoalStatus__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                GoalStatus__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&GoalStatus__g_tc_text__string;

                is_initialized = RTI_TRUE;

                return &GoalStatus__g_tc;
            }

            RTIBool GoalStatus__initialize(
                GoalStatus_* sample) {
                return actionlib_msgs::msg::dds_::GoalStatus__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GoalStatus__initialize_ex(
                GoalStatus_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return actionlib_msgs::msg::dds_::GoalStatus__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GoalStatus__initialize_w_params(
                GoalStatus_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!actionlib_msgs::msg::dds_::GoalID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->status_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->text_= DDS_String_alloc ((0));
                    if (sample->text_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->text_!= NULL) { 
                        sample->text_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void GoalStatus__finalize(
                GoalStatus_* sample)
            {

                actionlib_msgs::msg::dds_::GoalStatus__finalize_ex(sample,RTI_TRUE);
            }

            void GoalStatus__finalize_ex(
                GoalStatus_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                actionlib_msgs::msg::dds_::GoalStatus__finalize_w_params(
                    sample,&deallocParams);
            }

            void GoalStatus__finalize_w_params(
                GoalStatus_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                actionlib_msgs::msg::dds_::GoalID__finalize_w_params(&sample->goal_id_,deallocParams);

                if (sample->text_ != NULL) {
                    DDS_String_free(sample->text_);
                    sample->text_=NULL;

                }
            }

            void GoalStatus__finalize_optional_members(
                GoalStatus_* sample, RTIBool deletePointers)
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

                actionlib_msgs::msg::dds_::GoalID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
            }

            RTIBool GoalStatus__copy(
                GoalStatus_* dst,
                const GoalStatus_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!actionlib_msgs::msg::dds_::GoalID__copy(
                        &dst->goal_id_,(const actionlib_msgs::msg::dds_::GoalID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->text_, src->text_, 
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
            * Configure and implement 'GoalStatus_' sequence class.
            */
            #define T GoalStatus_
            #define TSeq GoalStatus_Seq

            #define T_initialize_w_params actionlib_msgs::msg::dds_::GoalStatus__initialize_w_params

            #define T_finalize_w_params   actionlib_msgs::msg::dds_::GoalStatus__finalize_w_params
            #define T_copy       actionlib_msgs::msg::dds_::GoalStatus__copy

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
} /* namespace actionlib_msgs  */

