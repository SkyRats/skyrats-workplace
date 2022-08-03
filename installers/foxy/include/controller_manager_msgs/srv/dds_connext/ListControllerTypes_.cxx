

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListControllerTypes_.idl using "rtiddsgen".
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

#include "ListControllerTypes_.h"

#include <new>

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ListControllerTypes_Request_TYPENAME = "controller_manager_msgs::srv::dds_::ListControllerTypes_Request_";

            DDS_TypeCode* ListControllerTypes_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ListControllerTypes_Request__g_tc_members[1]=
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

                static DDS_TypeCode ListControllerTypes_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::ListControllerTypes_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ListControllerTypes_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListControllerTypes_Request_*/

                if (is_initialized) {
                    return &ListControllerTypes_Request__g_tc;
                }

                ListControllerTypes_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &ListControllerTypes_Request__g_tc;
            }

            RTIBool ListControllerTypes_Request__initialize(
                ListControllerTypes_Request_* sample) {
                return controller_manager_msgs::srv::dds_::ListControllerTypes_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListControllerTypes_Request__initialize_ex(
                ListControllerTypes_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::ListControllerTypes_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListControllerTypes_Request__initialize_w_params(
                ListControllerTypes_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void ListControllerTypes_Request__finalize(
                ListControllerTypes_Request_* sample)
            {

                controller_manager_msgs::srv::dds_::ListControllerTypes_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ListControllerTypes_Request__finalize_ex(
                ListControllerTypes_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::ListControllerTypes_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListControllerTypes_Request__finalize_w_params(
                ListControllerTypes_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ListControllerTypes_Request__finalize_optional_members(
                ListControllerTypes_Request_* sample, RTIBool deletePointers)
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

            RTIBool ListControllerTypes_Request__copy(
                ListControllerTypes_Request_* dst,
                const ListControllerTypes_Request_* src)
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
            * Configure and implement 'ListControllerTypes_Request_' sequence class.
            */
            #define T ListControllerTypes_Request_
            #define TSeq ListControllerTypes_Request_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::ListControllerTypes_Request__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::ListControllerTypes_Request__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::ListControllerTypes_Request__copy

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
} /* namespace controller_manager_msgs  */
namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ListControllerTypes_Response_TYPENAME = "controller_manager_msgs::srv::dds_::ListControllerTypes_Response_";

            DDS_TypeCode* ListControllerTypes_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ListControllerTypes_Response__g_tc_types__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ListControllerTypes_Response__g_tc_types__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ListControllerTypes_Response__g_tc_base_classes__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ListControllerTypes_Response__g_tc_base_classes__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ListControllerTypes_Response__g_tc_members[2]=
                {

                    {
                        (char *)"types_",/* Member name */
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
                        (char *)"base_classes_",/* Member name */
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

                static DDS_TypeCode ListControllerTypes_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::ListControllerTypes_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ListControllerTypes_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListControllerTypes_Response_*/

                if (is_initialized) {
                    return &ListControllerTypes_Response__g_tc;
                }

                ListControllerTypes_Response__g_tc_types__sequence._data._typeCode = (RTICdrTypeCode *)&ListControllerTypes_Response__g_tc_types__string;

                ListControllerTypes_Response__g_tc_base_classes__sequence._data._typeCode = (RTICdrTypeCode *)&ListControllerTypes_Response__g_tc_base_classes__string;

                ListControllerTypes_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ListControllerTypes_Response__g_tc_types__sequence;
                ListControllerTypes_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ListControllerTypes_Response__g_tc_base_classes__sequence;

                is_initialized = RTI_TRUE;

                return &ListControllerTypes_Response__g_tc;
            }

            RTIBool ListControllerTypes_Response__initialize(
                ListControllerTypes_Response_* sample) {
                return controller_manager_msgs::srv::dds_::ListControllerTypes_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListControllerTypes_Response__initialize_ex(
                ListControllerTypes_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::ListControllerTypes_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListControllerTypes_Response__initialize_w_params(
                ListControllerTypes_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    DDS_StringSeq_initialize(&sample->types_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->types_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->types_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->types_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->types_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->base_classes_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->base_classes_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->base_classes_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->base_classes_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->base_classes_, 0);
                }
                return RTI_TRUE;
            }

            void ListControllerTypes_Response__finalize(
                ListControllerTypes_Response_* sample)
            {

                controller_manager_msgs::srv::dds_::ListControllerTypes_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ListControllerTypes_Response__finalize_ex(
                ListControllerTypes_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::ListControllerTypes_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListControllerTypes_Response__finalize_w_params(
                ListControllerTypes_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_StringSeq_finalize(&sample->types_);

                DDS_StringSeq_finalize(&sample->base_classes_);

            }

            void ListControllerTypes_Response__finalize_optional_members(
                ListControllerTypes_Response_* sample, RTIBool deletePointers)
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

            RTIBool ListControllerTypes_Response__copy(
                ListControllerTypes_Response_* dst,
                const ListControllerTypes_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_StringSeq_copy(&dst->types_ ,
                    &src->types_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->base_classes_ ,
                    &src->base_classes_ )) {
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
            * Configure and implement 'ListControllerTypes_Response_' sequence class.
            */
            #define T ListControllerTypes_Response_
            #define TSeq ListControllerTypes_Response_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::ListControllerTypes_Response__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::ListControllerTypes_Response__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::ListControllerTypes_Response__copy

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
} /* namespace controller_manager_msgs  */

