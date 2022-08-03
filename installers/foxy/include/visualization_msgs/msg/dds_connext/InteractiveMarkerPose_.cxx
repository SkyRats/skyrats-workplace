

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerPose_.idl using "rtiddsgen".
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

#include "InteractiveMarkerPose_.h"

#include <new>

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *InteractiveMarkerPose_TYPENAME = "visualization_msgs::msg::dds_::InteractiveMarkerPose_";

            DDS_TypeCode* InteractiveMarkerPose__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode InteractiveMarkerPose__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member InteractiveMarkerPose__g_tc_members[3]=
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
                    }
                };

                static DDS_TypeCode InteractiveMarkerPose__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"visualization_msgs::msg::dds_::InteractiveMarkerPose_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        InteractiveMarkerPose__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for InteractiveMarkerPose_*/

                if (is_initialized) {
                    return &InteractiveMarkerPose__g_tc;
                }

                InteractiveMarkerPose__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                InteractiveMarkerPose__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                InteractiveMarkerPose__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&InteractiveMarkerPose__g_tc_name__string;

                is_initialized = RTI_TRUE;

                return &InteractiveMarkerPose__g_tc;
            }

            RTIBool InteractiveMarkerPose__initialize(
                InteractiveMarkerPose_* sample) {
                return visualization_msgs::msg::dds_::InteractiveMarkerPose__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool InteractiveMarkerPose__initialize_ex(
                InteractiveMarkerPose_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return visualization_msgs::msg::dds_::InteractiveMarkerPose__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool InteractiveMarkerPose__initialize_w_params(
                InteractiveMarkerPose_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                return RTI_TRUE;
            }

            void InteractiveMarkerPose__finalize(
                InteractiveMarkerPose_* sample)
            {

                visualization_msgs::msg::dds_::InteractiveMarkerPose__finalize_ex(sample,RTI_TRUE);
            }

            void InteractiveMarkerPose__finalize_ex(
                InteractiveMarkerPose_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                visualization_msgs::msg::dds_::InteractiveMarkerPose__finalize_w_params(
                    sample,&deallocParams);
            }

            void InteractiveMarkerPose__finalize_w_params(
                InteractiveMarkerPose_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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
            }

            void InteractiveMarkerPose__finalize_optional_members(
                InteractiveMarkerPose_* sample, RTIBool deletePointers)
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
            }

            RTIBool InteractiveMarkerPose__copy(
                InteractiveMarkerPose_* dst,
                const InteractiveMarkerPose_* src)
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
            * Configure and implement 'InteractiveMarkerPose_' sequence class.
            */
            #define T InteractiveMarkerPose_
            #define TSeq InteractiveMarkerPose_Seq

            #define T_initialize_w_params visualization_msgs::msg::dds_::InteractiveMarkerPose__initialize_w_params

            #define T_finalize_w_params   visualization_msgs::msg::dds_::InteractiveMarkerPose__finalize_w_params
            #define T_copy       visualization_msgs::msg::dds_::InteractiveMarkerPose__copy

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

