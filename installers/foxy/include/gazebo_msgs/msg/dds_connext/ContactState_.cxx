

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactState_.idl using "rtiddsgen".
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

#include "ContactState_.h"

#include <new>

namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ContactState_TYPENAME = "gazebo_msgs::msg::dds_::ContactState_";

            DDS_TypeCode* ContactState__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ContactState__g_tc_info__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ContactState__g_tc_collision1_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ContactState__g_tc_collision2_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ContactState__g_tc_wrenches__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ContactState__g_tc_contact_positions__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ContactState__g_tc_contact_normals__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ContactState__g_tc_depths__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ContactState__g_tc_members[8]=
                {

                    {
                        (char *)"info_",/* Member name */
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
                        (char *)"collision1_name_",/* Member name */
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
                        (char *)"collision2_name_",/* Member name */
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
                        (char *)"wrenches_",/* Member name */
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
                        (char *)"total_wrench_",/* Member name */
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
                        (char *)"contact_positions_",/* Member name */
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
                    }, 
                    {
                        (char *)"contact_normals_",/* Member name */
                        {
                            6,/* Representation ID */          
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
                        (char *)"depths_",/* Member name */
                        {
                            7,/* Representation ID */          
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

                static DDS_TypeCode ContactState__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"gazebo_msgs::msg::dds_::ContactState_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        ContactState__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ContactState_*/

                if (is_initialized) {
                    return &ContactState__g_tc;
                }

                ContactState__g_tc_wrenches__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Wrench__get_typecode();

                ContactState__g_tc_contact_positions__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                ContactState__g_tc_contact_normals__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                ContactState__g_tc_depths__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ContactState__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ContactState__g_tc_info__string;

                ContactState__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ContactState__g_tc_collision1_name__string;

                ContactState__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&ContactState__g_tc_collision2_name__string;

                ContactState__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& ContactState__g_tc_wrenches__sequence;
                ContactState__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Wrench__get_typecode();

                ContactState__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& ContactState__g_tc_contact_positions__sequence;
                ContactState__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& ContactState__g_tc_contact_normals__sequence;
                ContactState__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& ContactState__g_tc_depths__sequence;

                is_initialized = RTI_TRUE;

                return &ContactState__g_tc;
            }

            RTIBool ContactState__initialize(
                ContactState_* sample) {
                return gazebo_msgs::msg::dds_::ContactState__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ContactState__initialize_ex(
                ContactState_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return gazebo_msgs::msg::dds_::ContactState__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ContactState__initialize_w_params(
                ContactState_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->info_= DDS_String_alloc ((0));
                    if (sample->info_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->info_!= NULL) { 
                        sample->info_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->collision1_name_= DDS_String_alloc ((0));
                    if (sample->collision1_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->collision1_name_!= NULL) { 
                        sample->collision1_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->collision2_name_= DDS_String_alloc ((0));
                    if (sample->collision2_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->collision2_name_!= NULL) { 
                        sample->collision2_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Wrench_Seq_initialize(&sample->wrenches_ );
                    geometry_msgs::msg::dds_::Wrench_Seq_set_element_allocation_params(&sample->wrenches_ ,allocParams);
                    geometry_msgs::msg::dds_::Wrench_Seq_set_absolute_maximum(&sample->wrenches_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Wrench_Seq_set_maximum(&sample->wrenches_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Wrench_Seq_set_length(&sample->wrenches_, 0);
                }
                if (!geometry_msgs::msg::dds_::Wrench__initialize_w_params(&sample->total_wrench_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Vector3_Seq_initialize(&sample->contact_positions_ );
                    geometry_msgs::msg::dds_::Vector3_Seq_set_element_allocation_params(&sample->contact_positions_ ,allocParams);
                    geometry_msgs::msg::dds_::Vector3_Seq_set_absolute_maximum(&sample->contact_positions_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Vector3_Seq_set_maximum(&sample->contact_positions_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Vector3_Seq_set_length(&sample->contact_positions_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Vector3_Seq_initialize(&sample->contact_normals_ );
                    geometry_msgs::msg::dds_::Vector3_Seq_set_element_allocation_params(&sample->contact_normals_ ,allocParams);
                    geometry_msgs::msg::dds_::Vector3_Seq_set_absolute_maximum(&sample->contact_normals_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Vector3_Seq_set_maximum(&sample->contact_normals_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Vector3_Seq_set_length(&sample->contact_normals_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->depths_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->depths_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->depths_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->depths_, 0);
                }
                return RTI_TRUE;
            }

            void ContactState__finalize(
                ContactState_* sample)
            {

                gazebo_msgs::msg::dds_::ContactState__finalize_ex(sample,RTI_TRUE);
            }

            void ContactState__finalize_ex(
                ContactState_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                gazebo_msgs::msg::dds_::ContactState__finalize_w_params(
                    sample,&deallocParams);
            }

            void ContactState__finalize_w_params(
                ContactState_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->info_ != NULL) {
                    DDS_String_free(sample->info_);
                    sample->info_=NULL;

                }
                if (sample->collision1_name_ != NULL) {
                    DDS_String_free(sample->collision1_name_);
                    sample->collision1_name_=NULL;

                }
                if (sample->collision2_name_ != NULL) {
                    DDS_String_free(sample->collision2_name_);
                    sample->collision2_name_=NULL;

                }
                geometry_msgs::msg::dds_::Wrench_Seq_set_element_deallocation_params(
                    &sample->wrenches_,deallocParams);
                geometry_msgs::msg::dds_::Wrench_Seq_finalize(&sample->wrenches_);

                geometry_msgs::msg::dds_::Wrench__finalize_w_params(&sample->total_wrench_,deallocParams);

                geometry_msgs::msg::dds_::Vector3_Seq_set_element_deallocation_params(
                    &sample->contact_positions_,deallocParams);
                geometry_msgs::msg::dds_::Vector3_Seq_finalize(&sample->contact_positions_);

                geometry_msgs::msg::dds_::Vector3_Seq_set_element_deallocation_params(
                    &sample->contact_normals_,deallocParams);
                geometry_msgs::msg::dds_::Vector3_Seq_finalize(&sample->contact_normals_);

                DDS_DoubleSeq_finalize(&sample->depths_);

            }

            void ContactState__finalize_optional_members(
                ContactState_* sample, RTIBool deletePointers)
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
                    length = geometry_msgs::msg::dds_::Wrench_Seq_get_length(
                        &sample->wrenches_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Wrench__finalize_optional_members(
                            geometry_msgs::msg::dds_::Wrench_Seq_get_reference(
                                &sample->wrenches_, i), deallocParams->delete_pointers);
                    }
                }  

                geometry_msgs::msg::dds_::Wrench__finalize_optional_members(&sample->total_wrench_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Vector3_Seq_get_length(
                        &sample->contact_positions_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Vector3__finalize_optional_members(
                            geometry_msgs::msg::dds_::Vector3_Seq_get_reference(
                                &sample->contact_positions_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Vector3_Seq_get_length(
                        &sample->contact_normals_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Vector3__finalize_optional_members(
                            geometry_msgs::msg::dds_::Vector3_Seq_get_reference(
                                &sample->contact_normals_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ContactState__copy(
                ContactState_* dst,
                const ContactState_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->info_, src->info_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->collision1_name_, src->collision1_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->collision2_name_, src->collision2_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Wrench_Seq_copy(&dst->wrenches_ ,
                    &src->wrenches_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Wrench__copy(
                        &dst->total_wrench_,(const geometry_msgs::msg::dds_::Wrench_*)&src->total_wrench_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Vector3_Seq_copy(&dst->contact_positions_ ,
                    &src->contact_positions_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Vector3_Seq_copy(&dst->contact_normals_ ,
                    &src->contact_normals_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->depths_ ,
                    &src->depths_ )) {
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
            * Configure and implement 'ContactState_' sequence class.
            */
            #define T ContactState_
            #define TSeq ContactState_Seq

            #define T_initialize_w_params gazebo_msgs::msg::dds_::ContactState__initialize_w_params

            #define T_finalize_w_params   gazebo_msgs::msg::dds_::ContactState__finalize_w_params
            #define T_copy       gazebo_msgs::msg::dds_::ContactState__copy

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

