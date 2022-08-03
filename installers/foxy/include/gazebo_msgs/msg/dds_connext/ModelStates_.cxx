

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ModelStates_.idl using "rtiddsgen".
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

#include "ModelStates_.h"

#include <new>

namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ModelStates_TYPENAME = "gazebo_msgs::msg::dds_::ModelStates_";

            DDS_TypeCode* ModelStates__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ModelStates__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ModelStates__g_tc_name__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ModelStates__g_tc_pose__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ModelStates__g_tc_twist__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ModelStates__g_tc_members[3]=
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
                    }
                };

                static DDS_TypeCode ModelStates__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::msg::dds_::ModelStates_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ModelStates__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ModelStates_*/

                if (is_initialized) {
                    return &ModelStates__g_tc;
                }

                ModelStates__g_tc_name__sequence._data._typeCode = (RTICdrTypeCode *)&ModelStates__g_tc_name__string;

                ModelStates__g_tc_pose__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                ModelStates__g_tc_twist__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Twist__get_typecode();

                ModelStates__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ModelStates__g_tc_name__sequence;
                ModelStates__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ModelStates__g_tc_pose__sequence;
                ModelStates__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& ModelStates__g_tc_twist__sequence;

                is_initialized = RTI_TRUE;

                return &ModelStates__g_tc;
            }

            RTIBool ModelStates__initialize(
                ModelStates_* sample) {
                return gazebo_msgs::msg::dds_::ModelStates__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ModelStates__initialize_ex(
                ModelStates_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::msg::dds_::ModelStates__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ModelStates__initialize_w_params(
                ModelStates_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->name_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->name_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->name_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->name_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->name_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Pose_Seq_initialize(&sample->pose_ );
                    geometry_msgs::msg::dds_::Pose_Seq_set_element_allocation_params(&sample->pose_ ,allocParams);
                    geometry_msgs::msg::dds_::Pose_Seq_set_absolute_maximum(&sample->pose_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Pose_Seq_set_maximum(&sample->pose_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Pose_Seq_set_length(&sample->pose_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Twist_Seq_initialize(&sample->twist_ );
                    geometry_msgs::msg::dds_::Twist_Seq_set_element_allocation_params(&sample->twist_ ,allocParams);
                    geometry_msgs::msg::dds_::Twist_Seq_set_absolute_maximum(&sample->twist_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Twist_Seq_set_maximum(&sample->twist_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Twist_Seq_set_length(&sample->twist_, 0);
                }
                return RTI_TRUE;
            }

            void ModelStates__finalize(
                ModelStates_* sample)
            {

                gazebo_msgs::msg::dds_::ModelStates__finalize_ex(sample,RTI_TRUE);
            }

            void ModelStates__finalize_ex(
                ModelStates_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::msg::dds_::ModelStates__finalize_w_params(
                    sample,&deallocParams);
            }

            void ModelStates__finalize_w_params(
                ModelStates_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_StringSeq_finalize(&sample->name_);

                geometry_msgs::msg::dds_::Pose_Seq_set_element_deallocation_params(
                    &sample->pose_,deallocParams);
                geometry_msgs::msg::dds_::Pose_Seq_finalize(&sample->pose_);

                geometry_msgs::msg::dds_::Twist_Seq_set_element_deallocation_params(
                    &sample->twist_,deallocParams);
                geometry_msgs::msg::dds_::Twist_Seq_finalize(&sample->twist_);

            }

            void ModelStates__finalize_optional_members(
                ModelStates_* sample, RTIBool deletePointers)
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
                    length = geometry_msgs::msg::dds_::Pose_Seq_get_length(
                        &sample->pose_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Pose__finalize_optional_members(
                            geometry_msgs::msg::dds_::Pose_Seq_get_reference(
                                &sample->pose_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Twist_Seq_get_length(
                        &sample->twist_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Twist__finalize_optional_members(
                            geometry_msgs::msg::dds_::Twist_Seq_get_reference(
                                &sample->twist_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ModelStates__copy(
                ModelStates_* dst,
                const ModelStates_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_StringSeq_copy(&dst->name_ ,
                    &src->name_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Pose_Seq_copy(&dst->pose_ ,
                    &src->pose_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Twist_Seq_copy(&dst->twist_ ,
                    &src->twist_ )) {
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
            * Configure and implement 'ModelStates_' sequence class.
            */
            #define T ModelStates_
            #define TSeq ModelStates_Seq

            #define T_initialize_w_params gazebo_msgs::msg::dds_::ModelStates__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::msg::dds_::ModelStates__finalize_w_params
            #define T_copy       gazebo_msgs::msg::dds_::ModelStates__copy

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

