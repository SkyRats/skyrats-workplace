

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ModelState_.idl using "rtiddsgen".
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

#include "ModelState_.h"

#include <new>

namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ModelState_TYPENAME = "gazebo_msgs::msg::dds_::ModelState_";

            DDS_TypeCode* ModelState__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ModelState__g_tc_model_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ModelState__g_tc_reference_frame__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member ModelState__g_tc_members[4]=
                {

                    {
                        (char *)"model_name_",/* Member name */
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
                        (char *)"pose_",/* Member name */
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
                        (char *)"twist_",/* Member name */
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
                        (char *)"reference_frame_",/* Member name */
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

                static DDS_TypeCode ModelState__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::msg::dds_::ModelState_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ModelState__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ModelState_*/

                if (is_initialized) {
                    return &ModelState__g_tc;
                }

                ModelState__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ModelState__g_tc_model_name__string;

                ModelState__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                ModelState__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Twist__get_typecode();

                ModelState__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&ModelState__g_tc_reference_frame__string;

                is_initialized = RTI_TRUE;

                return &ModelState__g_tc;
            }

            RTIBool ModelState__initialize(
                ModelState_* sample) {
                return gazebo_msgs::msg::dds_::ModelState__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ModelState__initialize_ex(
                ModelState_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::msg::dds_::ModelState__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ModelState__initialize_w_params(
                ModelState_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->model_name_= DDS_String_alloc ((0));
                    if (sample->model_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->model_name_!= NULL) { 
                        sample->model_name_[0] = '\0';
                    }
                }

                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Twist__initialize_w_params(&sample->twist_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory){
                    sample->reference_frame_= DDS_String_alloc ((0));
                    if (sample->reference_frame_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->reference_frame_!= NULL) { 
                        sample->reference_frame_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void ModelState__finalize(
                ModelState_* sample)
            {

                gazebo_msgs::msg::dds_::ModelState__finalize_ex(sample,RTI_TRUE);
            }

            void ModelState__finalize_ex(
                ModelState_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::msg::dds_::ModelState__finalize_w_params(
                    sample,&deallocParams);
            }

            void ModelState__finalize_w_params(
                ModelState_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->model_name_ != NULL) {
                    DDS_String_free(sample->model_name_);
                    sample->model_name_=NULL;

                }
                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->pose_,deallocParams);

                geometry_msgs::msg::dds_::Twist__finalize_w_params(&sample->twist_,deallocParams);

                if (sample->reference_frame_ != NULL) {
                    DDS_String_free(sample->reference_frame_);
                    sample->reference_frame_=NULL;

                }
            }

            void ModelState__finalize_optional_members(
                ModelState_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Pose__finalize_optional_members(&sample->pose_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Twist__finalize_optional_members(&sample->twist_, deallocParams->delete_pointers);
            }

            RTIBool ModelState__copy(
                ModelState_* dst,
                const ModelState_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->model_name_, src->model_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->pose_,(const geometry_msgs::msg::dds_::Pose_*)&src->pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Twist__copy(
                        &dst->twist_,(const geometry_msgs::msg::dds_::Twist_*)&src->twist_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->reference_frame_, src->reference_frame_, 
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
            * Configure and implement 'ModelState_' sequence class.
            */
            #define T ModelState_
            #define TSeq ModelState_Seq

            #define T_initialize_w_params gazebo_msgs::msg::dds_::ModelState__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::msg::dds_::ModelState__finalize_w_params
            #define T_copy       gazebo_msgs::msg::dds_::ModelState__copy

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
} /* namespace gazebo_msgs  */

