

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerFeedback_.idl using "rtiddsgen".
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

#include "InteractiveMarkerFeedback_.h"

#include <new>

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace InteractiveMarkerFeedback_Constants {
            } /* namespace InteractiveMarkerFeedback_Constants  */

            /* ========================================================================= */
            const char *InteractiveMarkerFeedback_TYPENAME = "visualization_msgs::msg::dds_::InteractiveMarkerFeedback_";

            DDS_TypeCode* InteractiveMarkerFeedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode InteractiveMarkerFeedback__g_tc_client_id__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode InteractiveMarkerFeedback__g_tc_marker_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode InteractiveMarkerFeedback__g_tc_control_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member InteractiveMarkerFeedback__g_tc_members[9]=
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
                        (char *)"client_id_",/* Member name */
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
                        (char *)"marker_name_",/* Member name */
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
                        (char *)"control_name_",/* Member name */
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
                        (char *)"event_type_",/* Member name */
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
                        (char *)"pose_",/* Member name */
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
                        (char *)"menu_entry_id_",/* Member name */
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
                        (char *)"mouse_point_",/* Member name */
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
                    }, 
                    {
                        (char *)"mouse_point_valid_",/* Member name */
                        {
                            8,/* Representation ID */          
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

                static DDS_TypeCode InteractiveMarkerFeedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::msg::dds_::InteractiveMarkerFeedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        InteractiveMarkerFeedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for InteractiveMarkerFeedback_*/

                if (is_initialized) {
                    return &InteractiveMarkerFeedback__g_tc;
                }

                InteractiveMarkerFeedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                InteractiveMarkerFeedback__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarkerFeedback__g_tc_client_id__string;

                InteractiveMarkerFeedback__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarkerFeedback__g_tc_marker_name__string;

                InteractiveMarkerFeedback__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarkerFeedback__g_tc_control_name__string;

                InteractiveMarkerFeedback__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                InteractiveMarkerFeedback__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                InteractiveMarkerFeedback__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                InteractiveMarkerFeedback__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point__get_typecode();

                InteractiveMarkerFeedback__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &InteractiveMarkerFeedback__g_tc;
            }

            RTIBool InteractiveMarkerFeedback__initialize(
                InteractiveMarkerFeedback_* sample) {
                return visualization_msgs::msg::dds_::InteractiveMarkerFeedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool InteractiveMarkerFeedback__initialize_ex(
                InteractiveMarkerFeedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::msg::dds_::InteractiveMarkerFeedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool InteractiveMarkerFeedback__initialize_w_params(
                InteractiveMarkerFeedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

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
                if (allocParams->allocate_memory){
                    sample->client_id_= DDS_String_alloc ((0));
                    if (sample->client_id_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->client_id_!= NULL) { 
                        sample->client_id_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->marker_name_= DDS_String_alloc ((0));
                    if (sample->marker_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->marker_name_!= NULL) { 
                        sample->marker_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->control_name_= DDS_String_alloc ((0));
                    if (sample->control_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->control_name_!= NULL) { 
                        sample->control_name_[0] = '\0';
                    }
                }

                if (!RTICdrType_initOctet(&sample->event_type_)) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->pose_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->menu_entry_id_)) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Point__initialize_w_params(&sample->mouse_point_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->mouse_point_valid_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void InteractiveMarkerFeedback__finalize(
                InteractiveMarkerFeedback_* sample)
            {

                visualization_msgs::msg::dds_::InteractiveMarkerFeedback__finalize_ex(sample,RTI_TRUE);
            }

            void InteractiveMarkerFeedback__finalize_ex(
                InteractiveMarkerFeedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::msg::dds_::InteractiveMarkerFeedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void InteractiveMarkerFeedback__finalize_w_params(
                InteractiveMarkerFeedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                if (sample->client_id_ != NULL) {
                    DDS_String_free(sample->client_id_);
                    sample->client_id_=NULL;

                }
                if (sample->marker_name_ != NULL) {
                    DDS_String_free(sample->marker_name_);
                    sample->marker_name_=NULL;

                }
                if (sample->control_name_ != NULL) {
                    DDS_String_free(sample->control_name_);
                    sample->control_name_=NULL;

                }

                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->pose_,deallocParams);

                geometry_msgs::msg::dds_::Point__finalize_w_params(&sample->mouse_point_,deallocParams);

            }

            void InteractiveMarkerFeedback__finalize_optional_members(
                InteractiveMarkerFeedback_* sample, RTIBool deletePointers)
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
                geometry_msgs::msg::dds_::Point__finalize_optional_members(&sample->mouse_point_, deallocParams->delete_pointers);
            }

            RTIBool InteractiveMarkerFeedback__copy(
                InteractiveMarkerFeedback_* dst,
                const InteractiveMarkerFeedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->client_id_, src->client_id_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->marker_name_, src->marker_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->control_name_, src->control_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->event_type_, &src->event_type_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->pose_,(const geometry_msgs::msg::dds_::Pose_*)&src->pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->menu_entry_id_, &src->menu_entry_id_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Point__copy(
                        &dst->mouse_point_,(const geometry_msgs::msg::dds_::Point_*)&src->mouse_point_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyBoolean (
                        &dst->mouse_point_valid_, &src->mouse_point_valid_)) { 
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
            * Configure and implement 'InteractiveMarkerFeedback_' sequence class.
            */
            #define T InteractiveMarkerFeedback_
            #define TSeq InteractiveMarkerFeedback_Seq

            #define T_initialize_w_params visualization_msgs::msg::dds_::InteractiveMarkerFeedback__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::msg::dds_::InteractiveMarkerFeedback__finalize_w_params
            #define T_copy       visualization_msgs::msg::dds_::InteractiveMarkerFeedback__copy

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

