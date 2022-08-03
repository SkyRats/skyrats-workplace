

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarker_.idl using "rtiddsgen".
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

#include "InteractiveMarker_.h"

#include <new>

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *InteractiveMarker_TYPENAME = "visualization_msgs::msg::dds_::InteractiveMarker_";

            DDS_TypeCode* InteractiveMarker__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode InteractiveMarker__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode InteractiveMarker__g_tc_description__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode InteractiveMarker__g_tc_menu_entries__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode InteractiveMarker__g_tc_controls__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member InteractiveMarker__g_tc_members[7]=
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
                        (char *)"name_",/* Member name */
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
                        (char *)"description_",/* Member name */
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
                        (char *)"scale_",/* Member name */
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
                        (char *)"menu_entries_",/* Member name */
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
                        (char *)"controls_",/* Member name */
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
                    }
                };

                static DDS_TypeCode InteractiveMarker__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::msg::dds_::InteractiveMarker_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        InteractiveMarker__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for InteractiveMarker_*/

                if (is_initialized) {
                    return &InteractiveMarker__g_tc;
                }

                InteractiveMarker__g_tc_menu_entries__sequence._data._typeCode = (RTICdrTypeCode *)visualization_msgs::msg::dds_::MenuEntry__get_typecode();

                InteractiveMarker__g_tc_controls__sequence._data._typeCode = (RTICdrTypeCode *)visualization_msgs::msg::dds_::InteractiveMarkerControl__get_typecode();

                InteractiveMarker__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                InteractiveMarker__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                InteractiveMarker__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarker__g_tc_name__string;

                InteractiveMarker__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarker__g_tc_description__string;

                InteractiveMarker__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                InteractiveMarker__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& InteractiveMarker__g_tc_menu_entries__sequence;
                InteractiveMarker__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& InteractiveMarker__g_tc_controls__sequence;

                is_initialized = RTI_TRUE;

                return &InteractiveMarker__g_tc;
            }

            RTIBool InteractiveMarker__initialize(
                InteractiveMarker_* sample) {
                return visualization_msgs::msg::dds_::InteractiveMarker__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool InteractiveMarker__initialize_ex(
                InteractiveMarker_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::msg::dds_::InteractiveMarker__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool InteractiveMarker__initialize_w_params(
                InteractiveMarker_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->pose_,
                allocParams)) {
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
                    sample->description_= DDS_String_alloc ((0));
                    if (sample->description_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->description_!= NULL) { 
                        sample->description_[0] = '\0';
                    }
                }

                if (!RTICdrType_initFloat(&sample->scale_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    visualization_msgs::msg::dds_::MenuEntry_Seq_initialize(&sample->menu_entries_ );
                    visualization_msgs::msg::dds_::MenuEntry_Seq_set_element_allocation_params(&sample->menu_entries_ ,allocParams);
                    visualization_msgs::msg::dds_::MenuEntry_Seq_set_absolute_maximum(&sample->menu_entries_ , RTI_INT32_MAX);
                    if (!visualization_msgs::msg::dds_::MenuEntry_Seq_set_maximum(&sample->menu_entries_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    visualization_msgs::msg::dds_::MenuEntry_Seq_set_length(&sample->menu_entries_, 0);
                }
                if (allocParams->allocate_memory) {
                    visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_initialize(&sample->controls_ );
                    visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_set_element_allocation_params(&sample->controls_ ,allocParams);
                    visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_set_absolute_maximum(&sample->controls_ , RTI_INT32_MAX);
                    if (!visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_set_maximum(&sample->controls_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_set_length(&sample->controls_, 0);
                }
                return RTI_TRUE;
            }

            void InteractiveMarker__finalize(
                InteractiveMarker_* sample)
            {

                visualization_msgs::msg::dds_::InteractiveMarker__finalize_ex(sample,RTI_TRUE);
            }

            void InteractiveMarker__finalize_ex(
                InteractiveMarker_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::msg::dds_::InteractiveMarker__finalize_w_params(
                    sample,&deallocParams);
            }

            void InteractiveMarker__finalize_w_params(
                InteractiveMarker_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->pose_,deallocParams);

                if (sample->name_ != NULL) {
                    DDS_String_free(sample->name_);
                    sample->name_=NULL;

                }
                if (sample->description_ != NULL) {
                    DDS_String_free(sample->description_);
                    sample->description_=NULL;

                }

                visualization_msgs::msg::dds_::MenuEntry_Seq_set_element_deallocation_params(
                    &sample->menu_entries_,deallocParams);
                visualization_msgs::msg::dds_::MenuEntry_Seq_finalize(&sample->menu_entries_);

                visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_set_element_deallocation_params(
                    &sample->controls_,deallocParams);
                visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_finalize(&sample->controls_);

            }

            void InteractiveMarker__finalize_optional_members(
                InteractiveMarker_* sample, RTIBool deletePointers)
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
                geometry_msgs::msg::dds_::Pose__finalize_optional_members(&sample->pose_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = visualization_msgs::msg::dds_::MenuEntry_Seq_get_length(
                        &sample->menu_entries_);

                    for (i = 0; i < length; i++) {
                        visualization_msgs::msg::dds_::MenuEntry__finalize_optional_members(
                            visualization_msgs::msg::dds_::MenuEntry_Seq_get_reference(
                                &sample->menu_entries_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_get_length(
                        &sample->controls_);

                    for (i = 0; i < length; i++) {
                        visualization_msgs::msg::dds_::InteractiveMarkerControl__finalize_optional_members(
                            visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_get_reference(
                                &sample->controls_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool InteractiveMarker__copy(
                InteractiveMarker_* dst,
                const InteractiveMarker_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->pose_,(const geometry_msgs::msg::dds_::Pose_*)&src->pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->name_, src->name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->description_, src->description_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->scale_, &src->scale_)) { 
                        return RTI_FALSE;
                    }
                    if (!visualization_msgs::msg::dds_::MenuEntry_Seq_copy(&dst->menu_entries_ ,
                    &src->menu_entries_ )) {
                        return RTI_FALSE;
                    }
                    if (!visualization_msgs::msg::dds_::InteractiveMarkerControl_Seq_copy(&dst->controls_ ,
                    &src->controls_ )) {
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
            * Configure and implement 'InteractiveMarker_' sequence class.
            */
            #define T InteractiveMarker_
            #define TSeq InteractiveMarker_Seq

            #define T_initialize_w_params visualization_msgs::msg::dds_::InteractiveMarker__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::msg::dds_::InteractiveMarker__finalize_w_params
            #define T_copy       visualization_msgs::msg::dds_::InteractiveMarker__copy

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
} /* namespace visualization_msgs  */

