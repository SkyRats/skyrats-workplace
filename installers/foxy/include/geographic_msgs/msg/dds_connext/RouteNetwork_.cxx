

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteNetwork_.idl using "rtiddsgen".
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

#include "RouteNetwork_.h"

#include <new>

namespace geographic_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *RouteNetwork_TYPENAME = "geographic_msgs::msg::dds_::RouteNetwork_";

            DDS_TypeCode* RouteNetwork__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode RouteNetwork__g_tc_points__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RouteNetwork__g_tc_segments__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode RouteNetwork__g_tc_props__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member RouteNetwork__g_tc_members[6]=
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
                        (char *)"id_",/* Member name */
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
                        (char *)"bounds_",/* Member name */
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
                        (char *)"points_",/* Member name */
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
                        (char *)"segments_",/* Member name */
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
                        (char *)"props_",/* Member name */
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
                    }
                };

                static DDS_TypeCode RouteNetwork__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::msg::dds_::RouteNetwork_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        RouteNetwork__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RouteNetwork_*/

                if (is_initialized) {
                    return &RouteNetwork__g_tc;
                }

                RouteNetwork__g_tc_points__sequence._data._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::WayPoint__get_typecode();

                RouteNetwork__g_tc_segments__sequence._data._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::RouteSegment__get_typecode();

                RouteNetwork__g_tc_props__sequence._data._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::KeyValue__get_typecode();

                RouteNetwork__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                RouteNetwork__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                RouteNetwork__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::BoundingBox__get_typecode();

                RouteNetwork__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& RouteNetwork__g_tc_points__sequence;
                RouteNetwork__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& RouteNetwork__g_tc_segments__sequence;
                RouteNetwork__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& RouteNetwork__g_tc_props__sequence;

                is_initialized = RTI_TRUE;

                return &RouteNetwork__g_tc;
            }

            RTIBool RouteNetwork__initialize(
                RouteNetwork_* sample) {
                return geographic_msgs::msg::dds_::RouteNetwork__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RouteNetwork__initialize_ex(
                RouteNetwork_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::msg::dds_::RouteNetwork__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RouteNetwork__initialize_w_params(
                RouteNetwork_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geographic_msgs::msg::dds_::BoundingBox__initialize_w_params(&sample->bounds_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    geographic_msgs::msg::dds_::WayPoint_Seq_initialize(&sample->points_ );
                    geographic_msgs::msg::dds_::WayPoint_Seq_set_element_allocation_params(&sample->points_ ,allocParams);
                    geographic_msgs::msg::dds_::WayPoint_Seq_set_absolute_maximum(&sample->points_ , RTI_INT32_MAX);
                    if (!geographic_msgs::msg::dds_::WayPoint_Seq_set_maximum(&sample->points_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geographic_msgs::msg::dds_::WayPoint_Seq_set_length(&sample->points_, 0);
                }
                if (allocParams->allocate_memory) {
                    geographic_msgs::msg::dds_::RouteSegment_Seq_initialize(&sample->segments_ );
                    geographic_msgs::msg::dds_::RouteSegment_Seq_set_element_allocation_params(&sample->segments_ ,allocParams);
                    geographic_msgs::msg::dds_::RouteSegment_Seq_set_absolute_maximum(&sample->segments_ , RTI_INT32_MAX);
                    if (!geographic_msgs::msg::dds_::RouteSegment_Seq_set_maximum(&sample->segments_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geographic_msgs::msg::dds_::RouteSegment_Seq_set_length(&sample->segments_, 0);
                }
                if (allocParams->allocate_memory) {
                    geographic_msgs::msg::dds_::KeyValue_Seq_initialize(&sample->props_ );
                    geographic_msgs::msg::dds_::KeyValue_Seq_set_element_allocation_params(&sample->props_ ,allocParams);
                    geographic_msgs::msg::dds_::KeyValue_Seq_set_absolute_maximum(&sample->props_ , RTI_INT32_MAX);
                    if (!geographic_msgs::msg::dds_::KeyValue_Seq_set_maximum(&sample->props_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geographic_msgs::msg::dds_::KeyValue_Seq_set_length(&sample->props_, 0);
                }
                return RTI_TRUE;
            }

            void RouteNetwork__finalize(
                RouteNetwork_* sample)
            {

                geographic_msgs::msg::dds_::RouteNetwork__finalize_ex(sample,RTI_TRUE);
            }

            void RouteNetwork__finalize_ex(
                RouteNetwork_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::msg::dds_::RouteNetwork__finalize_w_params(
                    sample,&deallocParams);
            }

            void RouteNetwork__finalize_w_params(
                RouteNetwork_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->id_,deallocParams);

                geographic_msgs::msg::dds_::BoundingBox__finalize_w_params(&sample->bounds_,deallocParams);

                geographic_msgs::msg::dds_::WayPoint_Seq_set_element_deallocation_params(
                    &sample->points_,deallocParams);
                geographic_msgs::msg::dds_::WayPoint_Seq_finalize(&sample->points_);

                geographic_msgs::msg::dds_::RouteSegment_Seq_set_element_deallocation_params(
                    &sample->segments_,deallocParams);
                geographic_msgs::msg::dds_::RouteSegment_Seq_finalize(&sample->segments_);

                geographic_msgs::msg::dds_::KeyValue_Seq_set_element_deallocation_params(
                    &sample->props_,deallocParams);
                geographic_msgs::msg::dds_::KeyValue_Seq_finalize(&sample->props_);

            }

            void RouteNetwork__finalize_optional_members(
                RouteNetwork_* sample, RTIBool deletePointers)
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
                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->id_, deallocParams->delete_pointers);
                geographic_msgs::msg::dds_::BoundingBox__finalize_optional_members(&sample->bounds_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = geographic_msgs::msg::dds_::WayPoint_Seq_get_length(
                        &sample->points_);

                    for (i = 0; i < length; i++) {
                        geographic_msgs::msg::dds_::WayPoint__finalize_optional_members(
                            geographic_msgs::msg::dds_::WayPoint_Seq_get_reference(
                                &sample->points_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geographic_msgs::msg::dds_::RouteSegment_Seq_get_length(
                        &sample->segments_);

                    for (i = 0; i < length; i++) {
                        geographic_msgs::msg::dds_::RouteSegment__finalize_optional_members(
                            geographic_msgs::msg::dds_::RouteSegment_Seq_get_reference(
                                &sample->segments_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geographic_msgs::msg::dds_::KeyValue_Seq_get_length(
                        &sample->props_);

                    for (i = 0; i < length; i++) {
                        geographic_msgs::msg::dds_::KeyValue__finalize_optional_members(
                            geographic_msgs::msg::dds_::KeyValue_Seq_get_reference(
                                &sample->props_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool RouteNetwork__copy(
                RouteNetwork_* dst,
                const RouteNetwork_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->id_)) {
                        return RTI_FALSE;
                    } 
                    if (!geographic_msgs::msg::dds_::BoundingBox__copy(
                        &dst->bounds_,(const geographic_msgs::msg::dds_::BoundingBox_*)&src->bounds_)) {
                        return RTI_FALSE;
                    } 
                    if (!geographic_msgs::msg::dds_::WayPoint_Seq_copy(&dst->points_ ,
                    &src->points_ )) {
                        return RTI_FALSE;
                    }
                    if (!geographic_msgs::msg::dds_::RouteSegment_Seq_copy(&dst->segments_ ,
                    &src->segments_ )) {
                        return RTI_FALSE;
                    }
                    if (!geographic_msgs::msg::dds_::KeyValue_Seq_copy(&dst->props_ ,
                    &src->props_ )) {
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
            * Configure and implement 'RouteNetwork_' sequence class.
            */
            #define T RouteNetwork_
            #define TSeq RouteNetwork_Seq

            #define T_initialize_w_params geographic_msgs::msg::dds_::RouteNetwork__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::msg::dds_::RouteNetwork__finalize_w_params
            #define T_copy       geographic_msgs::msg::dds_::RouteNetwork__copy

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
} /* namespace geographic_msgs  */

