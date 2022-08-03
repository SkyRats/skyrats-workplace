

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListNodes_.idl using "rtiddsgen".
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

#include "ListNodes_.h"

#include <new>

namespace composition_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ListNodes_Request_TYPENAME = "composition_interfaces::srv::dds_::ListNodes_Request_";

            DDS_TypeCode* ListNodes_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ListNodes_Request__g_tc_members[1]=
                {

                    {
                        (char *)"structure_needs_at_least_one_member_",/* Member name */
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
                    }
                };

                static DDS_TypeCode ListNodes_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"composition_interfaces::srv::dds_::ListNodes_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ListNodes_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListNodes_Request_*/

                if (is_initialized) {
                    return &ListNodes_Request__g_tc;
                }

                ListNodes_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &ListNodes_Request__g_tc;
            }

            RTIBool ListNodes_Request__initialize(
                ListNodes_Request_* sample) {
                return composition_interfaces::srv::dds_::ListNodes_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListNodes_Request__initialize_ex(
                ListNodes_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return composition_interfaces::srv::dds_::ListNodes_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListNodes_Request__initialize_w_params(
                ListNodes_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->structure_needs_at_least_one_member_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void ListNodes_Request__finalize(
                ListNodes_Request_* sample)
            {

                composition_interfaces::srv::dds_::ListNodes_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ListNodes_Request__finalize_ex(
                ListNodes_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                composition_interfaces::srv::dds_::ListNodes_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListNodes_Request__finalize_w_params(
                ListNodes_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ListNodes_Request__finalize_optional_members(
                ListNodes_Request_* sample, RTIBool deletePointers)
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

            RTIBool ListNodes_Request__copy(
                ListNodes_Request_* dst,
                const ListNodes_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->structure_needs_at_least_one_member_, &src->structure_needs_at_least_one_member_)) { 
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
            * Configure and implement 'ListNodes_Request_' sequence class.
            */
            #define T ListNodes_Request_
            #define TSeq ListNodes_Request_Seq

            #define T_initialize_w_params composition_interfaces::srv::dds_::ListNodes_Request__initialize_w_params

            #define T_finalize_w_params   composition_interfaces::srv::dds_::ListNodes_Request__finalize_w_params
            #define T_copy       composition_interfaces::srv::dds_::ListNodes_Request__copy

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
            const char *ListNodes_Response_TYPENAME = "composition_interfaces::srv::dds_::ListNodes_Response_";

            DDS_TypeCode* ListNodes_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ListNodes_Response__g_tc_full_node_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ListNodes_Response__g_tc_full_node_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ListNodes_Response__g_tc_unique_ids__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ListNodes_Response__g_tc_members[2]=
                {

                    {
                        (char *)"full_node_names_",/* Member name */
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
                        (char *)"unique_ids_",/* Member name */
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
                    }
                };

                static DDS_TypeCode ListNodes_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"composition_interfaces::srv::dds_::ListNodes_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ListNodes_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListNodes_Response_*/

                if (is_initialized) {
                    return &ListNodes_Response__g_tc;
                }

                ListNodes_Response__g_tc_full_node_names__sequence._data._typeCode = (RTICdrTypeCode *)&ListNodes_Response__g_tc_full_node_names__string;

                ListNodes_Response__g_tc_unique_ids__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                ListNodes_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ListNodes_Response__g_tc_full_node_names__sequence;
                ListNodes_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ListNodes_Response__g_tc_unique_ids__sequence;

                is_initialized = RTI_TRUE;

                return &ListNodes_Response__g_tc;
            }

            RTIBool ListNodes_Response__initialize(
                ListNodes_Response_* sample) {
                return composition_interfaces::srv::dds_::ListNodes_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListNodes_Response__initialize_ex(
                ListNodes_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return composition_interfaces::srv::dds_::ListNodes_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListNodes_Response__initialize_w_params(
                ListNodes_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    DDS_StringSeq_initialize(&sample->full_node_names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->full_node_names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->full_node_names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->full_node_names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->full_node_names_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_UnsignedLongLongSeq_initialize(&sample->unique_ids_  );
                    DDS_UnsignedLongLongSeq_set_absolute_maximum(&sample->unique_ids_ , RTI_INT32_MAX);
                    if (!DDS_UnsignedLongLongSeq_set_maximum(&sample->unique_ids_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_UnsignedLongLongSeq_set_length(&sample->unique_ids_, 0);
                }
                return RTI_TRUE;
            }

            void ListNodes_Response__finalize(
                ListNodes_Response_* sample)
            {

                composition_interfaces::srv::dds_::ListNodes_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ListNodes_Response__finalize_ex(
                ListNodes_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                composition_interfaces::srv::dds_::ListNodes_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListNodes_Response__finalize_w_params(
                ListNodes_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_StringSeq_finalize(&sample->full_node_names_);

                DDS_UnsignedLongLongSeq_finalize(&sample->unique_ids_);

            }

            void ListNodes_Response__finalize_optional_members(
                ListNodes_Response_* sample, RTIBool deletePointers)
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

            RTIBool ListNodes_Response__copy(
                ListNodes_Response_* dst,
                const ListNodes_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_StringSeq_copy(&dst->full_node_names_ ,
                    &src->full_node_names_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_UnsignedLongLongSeq_copy(&dst->unique_ids_ ,
                    &src->unique_ids_ )) {
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
            * Configure and implement 'ListNodes_Response_' sequence class.
            */
            #define T ListNodes_Response_
            #define TSeq ListNodes_Response_Seq

            #define T_initialize_w_params composition_interfaces::srv::dds_::ListNodes_Response__initialize_w_params

            #define T_finalize_w_params   composition_interfaces::srv::dds_::ListNodes_Response__finalize_w_params
            #define T_copy       composition_interfaces::srv::dds_::ListNodes_Response__copy

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

