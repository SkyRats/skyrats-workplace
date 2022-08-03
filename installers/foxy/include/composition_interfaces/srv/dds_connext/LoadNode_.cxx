

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadNode_.idl using "rtiddsgen".
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

#include "LoadNode_.h"

#include <new>

namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *LoadNode_Request_TYPENAME = "composition_interfaces::srv::dds_::LoadNode_Request_";

            DDS_TypeCode* LoadNode_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LoadNode_Request__g_tc_package_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LoadNode_Request__g_tc_plugin_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LoadNode_Request__g_tc_node_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LoadNode_Request__g_tc_node_namespace__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LoadNode_Request__g_tc_remap_rules__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LoadNode_Request__g_tc_remap_rules__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode LoadNode_Request__g_tc_parameters__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode LoadNode_Request__g_tc_extra_arguments__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member LoadNode_Request__g_tc_members[8]=
                {

                    {
                        (char *)"package_name_",/* Member name */
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
                        (char *)"plugin_name_",/* Member name */
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
                        (char *)"node_name_",/* Member name */
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
                        (char *)"node_namespace_",/* Member name */
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
                        (char *)"log_level_",/* Member name */
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
                        (char *)"remap_rules_",/* Member name */
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
                        (char *)"parameters_",/* Member name */
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
                        (char *)"extra_arguments_",/* Member name */
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

                static DDS_TypeCode LoadNode_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"composition_interfaces::srv::dds_::LoadNode_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        LoadNode_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LoadNode_Request_*/

                if (is_initialized) {
                    return &LoadNode_Request__g_tc;
                }

                LoadNode_Request__g_tc_remap_rules__sequence._data._typeCode = (RTICdrTypeCode *)&LoadNode_Request__g_tc_remap_rules__string;

                LoadNode_Request__g_tc_parameters__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::Parameter__get_typecode();

                LoadNode_Request__g_tc_extra_arguments__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::Parameter__get_typecode();

                LoadNode_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&LoadNode_Request__g_tc_package_name__string;

                LoadNode_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&LoadNode_Request__g_tc_plugin_name__string;

                LoadNode_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&LoadNode_Request__g_tc_node_name__string;

                LoadNode_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&LoadNode_Request__g_tc_node_namespace__string;

                LoadNode_Request__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                LoadNode_Request__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& LoadNode_Request__g_tc_remap_rules__sequence;
                LoadNode_Request__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& LoadNode_Request__g_tc_parameters__sequence;
                LoadNode_Request__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& LoadNode_Request__g_tc_extra_arguments__sequence;

                is_initialized = RTI_TRUE;

                return &LoadNode_Request__g_tc;
            }

            RTIBool LoadNode_Request__initialize(
                LoadNode_Request_* sample) {
                return composition_interfaces::srv::dds_::LoadNode_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LoadNode_Request__initialize_ex(
                LoadNode_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return composition_interfaces::srv::dds_::LoadNode_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LoadNode_Request__initialize_w_params(
                LoadNode_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->package_name_= DDS_String_alloc ((0));
                    if (sample->package_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->package_name_!= NULL) { 
                        sample->package_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->plugin_name_= DDS_String_alloc ((0));
                    if (sample->plugin_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->plugin_name_!= NULL) { 
                        sample->plugin_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->node_name_= DDS_String_alloc ((0));
                    if (sample->node_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->node_name_!= NULL) { 
                        sample->node_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->node_namespace_= DDS_String_alloc ((0));
                    if (sample->node_namespace_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->node_namespace_!= NULL) { 
                        sample->node_namespace_[0] = '\0';
                    }
                }

                if (!RTICdrType_initOctet(&sample->log_level_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->remap_rules_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->remap_rules_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->remap_rules_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->remap_rules_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->remap_rules_, 0);
                }
                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::Parameter_Seq_initialize(&sample->parameters_ );
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_element_allocation_params(&sample->parameters_ ,allocParams);
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_absolute_maximum(&sample->parameters_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_set_maximum(&sample->parameters_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_length(&sample->parameters_, 0);
                }
                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::Parameter_Seq_initialize(&sample->extra_arguments_ );
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_element_allocation_params(&sample->extra_arguments_ ,allocParams);
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_absolute_maximum(&sample->extra_arguments_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_set_maximum(&sample->extra_arguments_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_length(&sample->extra_arguments_, 0);
                }
                return RTI_TRUE;
            }

            void LoadNode_Request__finalize(
                LoadNode_Request_* sample)
            {

                composition_interfaces::srv::dds_::LoadNode_Request__finalize_ex(sample,RTI_TRUE);
            }

            void LoadNode_Request__finalize_ex(
                LoadNode_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                composition_interfaces::srv::dds_::LoadNode_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void LoadNode_Request__finalize_w_params(
                LoadNode_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->package_name_ != NULL) {
                    DDS_String_free(sample->package_name_);
                    sample->package_name_=NULL;

                }
                if (sample->plugin_name_ != NULL) {
                    DDS_String_free(sample->plugin_name_);
                    sample->plugin_name_=NULL;

                }
                if (sample->node_name_ != NULL) {
                    DDS_String_free(sample->node_name_);
                    sample->node_name_=NULL;

                }
                if (sample->node_namespace_ != NULL) {
                    DDS_String_free(sample->node_namespace_);
                    sample->node_namespace_=NULL;

                }

                DDS_StringSeq_finalize(&sample->remap_rules_);

                rcl_interfaces::msg::dds_::Parameter_Seq_set_element_deallocation_params(
                    &sample->parameters_,deallocParams);
                rcl_interfaces::msg::dds_::Parameter_Seq_finalize(&sample->parameters_);

                rcl_interfaces::msg::dds_::Parameter_Seq_set_element_deallocation_params(
                    &sample->extra_arguments_,deallocParams);
                rcl_interfaces::msg::dds_::Parameter_Seq_finalize(&sample->extra_arguments_);

            }

            void LoadNode_Request__finalize_optional_members(
                LoadNode_Request_* sample, RTIBool deletePointers)
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
                    length = rcl_interfaces::msg::dds_::Parameter_Seq_get_length(
                        &sample->parameters_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::Parameter__finalize_optional_members(
                            rcl_interfaces::msg::dds_::Parameter_Seq_get_reference(
                                &sample->parameters_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = rcl_interfaces::msg::dds_::Parameter_Seq_get_length(
                        &sample->extra_arguments_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::Parameter__finalize_optional_members(
                            rcl_interfaces::msg::dds_::Parameter_Seq_get_reference(
                                &sample->extra_arguments_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool LoadNode_Request__copy(
                LoadNode_Request_* dst,
                const LoadNode_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->package_name_, src->package_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->plugin_name_, src->plugin_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->node_name_, src->node_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->node_namespace_, src->node_namespace_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->log_level_, &src->log_level_)) { 
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->remap_rules_ ,
                    &src->remap_rules_ )) {
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_copy(&dst->parameters_ ,
                    &src->parameters_ )) {
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_copy(&dst->extra_arguments_ ,
                    &src->extra_arguments_ )) {
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
            * Configure and implement 'LoadNode_Request_' sequence class.
            */
            #define T LoadNode_Request_
            #define TSeq LoadNode_Request_Seq

            #define T_initialize_w_params composition_interfaces::srv::dds_::LoadNode_Request__initialize_w_params

            #define T_finalize_w_params   composition_interfaces::srv::dds_::LoadNode_Request__finalize_w_params
            #define T_copy       composition_interfaces::srv::dds_::LoadNode_Request__copy

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
    } /* namespace srv  */
} /* namespace composition_interfaces  */
namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *LoadNode_Response_TYPENAME = "composition_interfaces::srv::dds_::LoadNode_Response_";

            DDS_TypeCode* LoadNode_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LoadNode_Response__g_tc_error_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LoadNode_Response__g_tc_full_node_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member LoadNode_Response__g_tc_members[4]=
                {

                    {
                        (char *)"success_",/* Member name */
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
                        (char *)"error_message_",/* Member name */
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
                        (char *)"full_node_name_",/* Member name */
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
                        (char *)"unique_id_",/* Member name */
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

                static DDS_TypeCode LoadNode_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"composition_interfaces::srv::dds_::LoadNode_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        LoadNode_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LoadNode_Response_*/

                if (is_initialized) {
                    return &LoadNode_Response__g_tc;
                }

                LoadNode_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                LoadNode_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&LoadNode_Response__g_tc_error_message__string;

                LoadNode_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&LoadNode_Response__g_tc_full_node_name__string;

                LoadNode_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                is_initialized = RTI_TRUE;

                return &LoadNode_Response__g_tc;
            }

            RTIBool LoadNode_Response__initialize(
                LoadNode_Response_* sample) {
                return composition_interfaces::srv::dds_::LoadNode_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LoadNode_Response__initialize_ex(
                LoadNode_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return composition_interfaces::srv::dds_::LoadNode_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LoadNode_Response__initialize_w_params(
                LoadNode_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->success_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->error_message_= DDS_String_alloc ((0));
                    if (sample->error_message_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->error_message_!= NULL) { 
                        sample->error_message_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->full_node_name_= DDS_String_alloc ((0));
                    if (sample->full_node_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->full_node_name_!= NULL) { 
                        sample->full_node_name_[0] = '\0';
                    }
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->unique_id_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void LoadNode_Response__finalize(
                LoadNode_Response_* sample)
            {

                composition_interfaces::srv::dds_::LoadNode_Response__finalize_ex(sample,RTI_TRUE);
            }

            void LoadNode_Response__finalize_ex(
                LoadNode_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                composition_interfaces::srv::dds_::LoadNode_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void LoadNode_Response__finalize_w_params(
                LoadNode_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->error_message_ != NULL) {
                    DDS_String_free(sample->error_message_);
                    sample->error_message_=NULL;

                }
                if (sample->full_node_name_ != NULL) {
                    DDS_String_free(sample->full_node_name_);
                    sample->full_node_name_=NULL;

                }

            }

            void LoadNode_Response__finalize_optional_members(
                LoadNode_Response_* sample, RTIBool deletePointers)
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

            RTIBool LoadNode_Response__copy(
                LoadNode_Response_* dst,
                const LoadNode_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->error_message_, src->error_message_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->full_node_name_, src->full_node_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->unique_id_, &src->unique_id_)) { 
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
            * Configure and implement 'LoadNode_Response_' sequence class.
            */
            #define T LoadNode_Response_
            #define TSeq LoadNode_Response_Seq

            #define T_initialize_w_params composition_interfaces::srv::dds_::LoadNode_Response__initialize_w_params

            #define T_finalize_w_params   composition_interfaces::srv::dds_::LoadNode_Response__finalize_w_params
            #define T_copy       composition_interfaces::srv::dds_::LoadNode_Response__copy

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
    } /* namespace srv  */
} /* namespace composition_interfaces  */

