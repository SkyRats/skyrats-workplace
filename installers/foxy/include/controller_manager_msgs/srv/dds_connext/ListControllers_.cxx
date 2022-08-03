

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListControllers_.idl using "rtiddsgen".
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

#include "ListControllers_.h"

#include <new>

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ListControllers_Request_TYPENAME = "controller_manager_msgs::srv::dds_::ListControllers_Request_";

            DDS_TypeCode* ListControllers_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ListControllers_Request__g_tc_members[1]=
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

                static DDS_TypeCode ListControllers_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::ListControllers_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ListControllers_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListControllers_Request_*/

                if (is_initialized) {
                    return &ListControllers_Request__g_tc;
                }

                ListControllers_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &ListControllers_Request__g_tc;
            }

            RTIBool ListControllers_Request__initialize(
                ListControllers_Request_* sample) {
                return controller_manager_msgs::srv::dds_::ListControllers_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListControllers_Request__initialize_ex(
                ListControllers_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::ListControllers_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListControllers_Request__initialize_w_params(
                ListControllers_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void ListControllers_Request__finalize(
                ListControllers_Request_* sample)
            {

                controller_manager_msgs::srv::dds_::ListControllers_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ListControllers_Request__finalize_ex(
                ListControllers_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::ListControllers_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListControllers_Request__finalize_w_params(
                ListControllers_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ListControllers_Request__finalize_optional_members(
                ListControllers_Request_* sample, RTIBool deletePointers)
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

            RTIBool ListControllers_Request__copy(
                ListControllers_Request_* dst,
                const ListControllers_Request_* src)
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
            * Configure and implement 'ListControllers_Request_' sequence class.
            */
            #define T ListControllers_Request_
            #define TSeq ListControllers_Request_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::ListControllers_Request__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::ListControllers_Request__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::ListControllers_Request__copy

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
            const char *ListControllers_Response_TYPENAME = "controller_manager_msgs::srv::dds_::ListControllers_Response_";

            DDS_TypeCode* ListControllers_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ListControllers_Response__g_tc_controller__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ListControllers_Response__g_tc_members[1]=
                {

                    {
                        (char *)"controller_",/* Member name */
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

                static DDS_TypeCode ListControllers_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::ListControllers_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ListControllers_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListControllers_Response_*/

                if (is_initialized) {
                    return &ListControllers_Response__g_tc;
                }

                ListControllers_Response__g_tc_controller__sequence._data._typeCode = (RTICdrTypeCode *)controller_manager_msgs::msg::dds_::ControllerState__get_typecode();

                ListControllers_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ListControllers_Response__g_tc_controller__sequence;

                is_initialized = RTI_TRUE;

                return &ListControllers_Response__g_tc;
            }

            RTIBool ListControllers_Response__initialize(
                ListControllers_Response_* sample) {
                return controller_manager_msgs::srv::dds_::ListControllers_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListControllers_Response__initialize_ex(
                ListControllers_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::ListControllers_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListControllers_Response__initialize_w_params(
                ListControllers_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    controller_manager_msgs::msg::dds_::ControllerState_Seq_initialize(&sample->controller_ );
                    controller_manager_msgs::msg::dds_::ControllerState_Seq_set_element_allocation_params(&sample->controller_ ,allocParams);
                    controller_manager_msgs::msg::dds_::ControllerState_Seq_set_absolute_maximum(&sample->controller_ , RTI_INT32_MAX);
                    if (!controller_manager_msgs::msg::dds_::ControllerState_Seq_set_maximum(&sample->controller_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    controller_manager_msgs::msg::dds_::ControllerState_Seq_set_length(&sample->controller_, 0);
                }
                return RTI_TRUE;
            }

            void ListControllers_Response__finalize(
                ListControllers_Response_* sample)
            {

                controller_manager_msgs::srv::dds_::ListControllers_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ListControllers_Response__finalize_ex(
                ListControllers_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::ListControllers_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListControllers_Response__finalize_w_params(
                ListControllers_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                controller_manager_msgs::msg::dds_::ControllerState_Seq_set_element_deallocation_params(
                    &sample->controller_,deallocParams);
                controller_manager_msgs::msg::dds_::ControllerState_Seq_finalize(&sample->controller_);

            }

            void ListControllers_Response__finalize_optional_members(
                ListControllers_Response_* sample, RTIBool deletePointers)
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
                    length = controller_manager_msgs::msg::dds_::ControllerState_Seq_get_length(
                        &sample->controller_);

                    for (i = 0; i < length; i++) {
                        controller_manager_msgs::msg::dds_::ControllerState__finalize_optional_members(
                            controller_manager_msgs::msg::dds_::ControllerState_Seq_get_reference(
                                &sample->controller_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ListControllers_Response__copy(
                ListControllers_Response_* dst,
                const ListControllers_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!controller_manager_msgs::msg::dds_::ControllerState_Seq_copy(&dst->controller_ ,
                    &src->controller_ )) {
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
            * Configure and implement 'ListControllers_Response_' sequence class.
            */
            #define T ListControllers_Response_
            #define TSeq ListControllers_Response_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::ListControllers_Response__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::ListControllers_Response__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::ListControllers_Response__copy

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

