

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NodeEntitiesInfo_.idl using "rtiddsgen".
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

#include "NodeEntitiesInfo_.h"

#include <new>

namespace rmw_dds_common {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *NodeEntitiesInfo_TYPENAME = "rmw_dds_common::msg::dds_::NodeEntitiesInfo_";

            DDS_TypeCode* NodeEntitiesInfo__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode NodeEntitiesInfo__g_tc_node_namespace__string = DDS_INITIALIZE_STRING_TYPECODE((256));
                static DDS_TypeCode NodeEntitiesInfo__g_tc_node_name__string = DDS_INITIALIZE_STRING_TYPECODE((256));
                static DDS_TypeCode NodeEntitiesInfo__g_tc_reader_gid_seq__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode NodeEntitiesInfo__g_tc_writer_gid_seq__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member NodeEntitiesInfo__g_tc_members[4]=
                {

                    {
                        (char *)"node_namespace_",/* Member name */
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
                        (char *)"node_name_",/* Member name */
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
                        (char *)"reader_gid_seq_",/* Member name */
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
                        (char *)"writer_gid_seq_",/* Member name */
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

                static DDS_TypeCode NodeEntitiesInfo__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rmw_dds_common::msg::dds_::NodeEntitiesInfo_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        NodeEntitiesInfo__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NodeEntitiesInfo_*/

                if (is_initialized) {
                    return &NodeEntitiesInfo__g_tc;
                }

                NodeEntitiesInfo__g_tc_reader_gid_seq__sequence._data._typeCode = (RTICdrTypeCode *)rmw_dds_common::msg::dds_::Gid__get_typecode();

                NodeEntitiesInfo__g_tc_writer_gid_seq__sequence._data._typeCode = (RTICdrTypeCode *)rmw_dds_common::msg::dds_::Gid__get_typecode();

                NodeEntitiesInfo__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&NodeEntitiesInfo__g_tc_node_namespace__string;

                NodeEntitiesInfo__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&NodeEntitiesInfo__g_tc_node_name__string;

                NodeEntitiesInfo__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& NodeEntitiesInfo__g_tc_reader_gid_seq__sequence;
                NodeEntitiesInfo__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& NodeEntitiesInfo__g_tc_writer_gid_seq__sequence;

                is_initialized = RTI_TRUE;

                return &NodeEntitiesInfo__g_tc;
            }

            RTIBool NodeEntitiesInfo__initialize(
                NodeEntitiesInfo_* sample) {
                return rmw_dds_common::msg::dds_::NodeEntitiesInfo__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NodeEntitiesInfo__initialize_ex(
                NodeEntitiesInfo_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rmw_dds_common::msg::dds_::NodeEntitiesInfo__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NodeEntitiesInfo__initialize_w_params(
                NodeEntitiesInfo_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->node_namespace_= DDS_String_alloc ((256));
                    if (sample->node_namespace_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->node_namespace_!= NULL) { 
                        sample->node_namespace_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->node_name_= DDS_String_alloc ((256));
                    if (sample->node_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->node_name_!= NULL) { 
                        sample->node_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    rmw_dds_common::msg::dds_::Gid_Seq_initialize(&sample->reader_gid_seq_ );
                    rmw_dds_common::msg::dds_::Gid_Seq_set_element_allocation_params(&sample->reader_gid_seq_ ,allocParams);
                    rmw_dds_common::msg::dds_::Gid_Seq_set_absolute_maximum(&sample->reader_gid_seq_ , RTI_INT32_MAX);
                    if (!rmw_dds_common::msg::dds_::Gid_Seq_set_maximum(&sample->reader_gid_seq_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rmw_dds_common::msg::dds_::Gid_Seq_set_length(&sample->reader_gid_seq_, 0);
                }
                if (allocParams->allocate_memory) {
                    rmw_dds_common::msg::dds_::Gid_Seq_initialize(&sample->writer_gid_seq_ );
                    rmw_dds_common::msg::dds_::Gid_Seq_set_element_allocation_params(&sample->writer_gid_seq_ ,allocParams);
                    rmw_dds_common::msg::dds_::Gid_Seq_set_absolute_maximum(&sample->writer_gid_seq_ , RTI_INT32_MAX);
                    if (!rmw_dds_common::msg::dds_::Gid_Seq_set_maximum(&sample->writer_gid_seq_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rmw_dds_common::msg::dds_::Gid_Seq_set_length(&sample->writer_gid_seq_, 0);
                }
                return RTI_TRUE;
            }

            void NodeEntitiesInfo__finalize(
                NodeEntitiesInfo_* sample)
            {

                rmw_dds_common::msg::dds_::NodeEntitiesInfo__finalize_ex(sample,RTI_TRUE);
            }

            void NodeEntitiesInfo__finalize_ex(
                NodeEntitiesInfo_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rmw_dds_common::msg::dds_::NodeEntitiesInfo__finalize_w_params(
                    sample,&deallocParams);
            }

            void NodeEntitiesInfo__finalize_w_params(
                NodeEntitiesInfo_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->node_namespace_ != NULL) {
                    DDS_String_free(sample->node_namespace_);
                    sample->node_namespace_=NULL;

                }
                if (sample->node_name_ != NULL) {
                    DDS_String_free(sample->node_name_);
                    sample->node_name_=NULL;

                }
                rmw_dds_common::msg::dds_::Gid_Seq_set_element_deallocation_params(
                    &sample->reader_gid_seq_,deallocParams);
                rmw_dds_common::msg::dds_::Gid_Seq_finalize(&sample->reader_gid_seq_);

                rmw_dds_common::msg::dds_::Gid_Seq_set_element_deallocation_params(
                    &sample->writer_gid_seq_,deallocParams);
                rmw_dds_common::msg::dds_::Gid_Seq_finalize(&sample->writer_gid_seq_);

            }

            void NodeEntitiesInfo__finalize_optional_members(
                NodeEntitiesInfo_* sample, RTIBool deletePointers)
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
                    length = rmw_dds_common::msg::dds_::Gid_Seq_get_length(
                        &sample->reader_gid_seq_);

                    for (i = 0; i < length; i++) {
                        rmw_dds_common::msg::dds_::Gid__finalize_optional_members(
                            rmw_dds_common::msg::dds_::Gid_Seq_get_reference(
                                &sample->reader_gid_seq_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = rmw_dds_common::msg::dds_::Gid_Seq_get_length(
                        &sample->writer_gid_seq_);

                    for (i = 0; i < length; i++) {
                        rmw_dds_common::msg::dds_::Gid__finalize_optional_members(
                            rmw_dds_common::msg::dds_::Gid_Seq_get_reference(
                                &sample->writer_gid_seq_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool NodeEntitiesInfo__copy(
                NodeEntitiesInfo_* dst,
                const NodeEntitiesInfo_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->node_namespace_, src->node_namespace_, 
                        (256) + 1, RTI_FALSE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->node_name_, src->node_name_, 
                        (256) + 1, RTI_FALSE)){
                        return RTI_FALSE;
                    }
                    if (!rmw_dds_common::msg::dds_::Gid_Seq_copy(&dst->reader_gid_seq_ ,
                    &src->reader_gid_seq_ )) {
                        return RTI_FALSE;
                    }
                    if (!rmw_dds_common::msg::dds_::Gid_Seq_copy(&dst->writer_gid_seq_ ,
                    &src->writer_gid_seq_ )) {
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
            * Configure and implement 'NodeEntitiesInfo_' sequence class.
            */
            #define T NodeEntitiesInfo_
            #define TSeq NodeEntitiesInfo_Seq

            #define T_initialize_w_params rmw_dds_common::msg::dds_::NodeEntitiesInfo__initialize_w_params

            #define T_finalize_w_params   rmw_dds_common::msg::dds_::NodeEntitiesInfo__finalize_w_params
            #define T_copy       rmw_dds_common::msg::dds_::NodeEntitiesInfo__copy

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
} /* namespace rmw_dds_common  */

