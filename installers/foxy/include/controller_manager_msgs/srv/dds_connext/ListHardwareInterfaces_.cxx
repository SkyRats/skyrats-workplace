

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListHardwareInterfaces_.idl using "rtiddsgen".
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

#include "ListHardwareInterfaces_.h"

#include <new>

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ListHardwareInterfaces_Request_TYPENAME = "controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request_";

            DDS_TypeCode* ListHardwareInterfaces_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ListHardwareInterfaces_Request__g_tc_members[1]=
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

                static DDS_TypeCode ListHardwareInterfaces_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ListHardwareInterfaces_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListHardwareInterfaces_Request_*/

                if (is_initialized) {
                    return &ListHardwareInterfaces_Request__g_tc;
                }

                ListHardwareInterfaces_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &ListHardwareInterfaces_Request__g_tc;
            }

            RTIBool ListHardwareInterfaces_Request__initialize(
                ListHardwareInterfaces_Request_* sample) {
                return controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListHardwareInterfaces_Request__initialize_ex(
                ListHardwareInterfaces_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListHardwareInterfaces_Request__initialize_w_params(
                ListHardwareInterfaces_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void ListHardwareInterfaces_Request__finalize(
                ListHardwareInterfaces_Request_* sample)
            {

                controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ListHardwareInterfaces_Request__finalize_ex(
                ListHardwareInterfaces_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListHardwareInterfaces_Request__finalize_w_params(
                ListHardwareInterfaces_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ListHardwareInterfaces_Request__finalize_optional_members(
                ListHardwareInterfaces_Request_* sample, RTIBool deletePointers)
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

            RTIBool ListHardwareInterfaces_Request__copy(
                ListHardwareInterfaces_Request_* dst,
                const ListHardwareInterfaces_Request_* src)
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
            * Configure and implement 'ListHardwareInterfaces_Request_' sequence class.
            */
            #define T ListHardwareInterfaces_Request_
            #define TSeq ListHardwareInterfaces_Request_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Request__copy

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
            const char *ListHardwareInterfaces_Response_TYPENAME = "controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response_";

            DDS_TypeCode* ListHardwareInterfaces_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ListHardwareInterfaces_Response__g_tc_command_interfaces__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ListHardwareInterfaces_Response__g_tc_state_interfaces__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ListHardwareInterfaces_Response__g_tc_members[2]=
                {

                    {
                        (char *)"command_interfaces_",/* Member name */
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
                        (char *)"state_interfaces_",/* Member name */
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

                static DDS_TypeCode ListHardwareInterfaces_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ListHardwareInterfaces_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListHardwareInterfaces_Response_*/

                if (is_initialized) {
                    return &ListHardwareInterfaces_Response__g_tc;
                }

                ListHardwareInterfaces_Response__g_tc_command_interfaces__sequence._data._typeCode = (RTICdrTypeCode *)controller_manager_msgs::msg::dds_::HardwareInterface__get_typecode();

                ListHardwareInterfaces_Response__g_tc_state_interfaces__sequence._data._typeCode = (RTICdrTypeCode *)controller_manager_msgs::msg::dds_::HardwareInterface__get_typecode();

                ListHardwareInterfaces_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ListHardwareInterfaces_Response__g_tc_command_interfaces__sequence;
                ListHardwareInterfaces_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ListHardwareInterfaces_Response__g_tc_state_interfaces__sequence;

                is_initialized = RTI_TRUE;

                return &ListHardwareInterfaces_Response__g_tc;
            }

            RTIBool ListHardwareInterfaces_Response__initialize(
                ListHardwareInterfaces_Response_* sample) {
                return controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListHardwareInterfaces_Response__initialize_ex(
                ListHardwareInterfaces_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListHardwareInterfaces_Response__initialize_w_params(
                ListHardwareInterfaces_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    controller_manager_msgs::msg::dds_::HardwareInterface_Seq_initialize(&sample->command_interfaces_ );
                    controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_element_allocation_params(&sample->command_interfaces_ ,allocParams);
                    controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_absolute_maximum(&sample->command_interfaces_ , RTI_INT32_MAX);
                    if (!controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_maximum(&sample->command_interfaces_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_length(&sample->command_interfaces_, 0);
                }
                if (allocParams->allocate_memory) {
                    controller_manager_msgs::msg::dds_::HardwareInterface_Seq_initialize(&sample->state_interfaces_ );
                    controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_element_allocation_params(&sample->state_interfaces_ ,allocParams);
                    controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_absolute_maximum(&sample->state_interfaces_ , RTI_INT32_MAX);
                    if (!controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_maximum(&sample->state_interfaces_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_length(&sample->state_interfaces_, 0);
                }
                return RTI_TRUE;
            }

            void ListHardwareInterfaces_Response__finalize(
                ListHardwareInterfaces_Response_* sample)
            {

                controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ListHardwareInterfaces_Response__finalize_ex(
                ListHardwareInterfaces_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListHardwareInterfaces_Response__finalize_w_params(
                ListHardwareInterfaces_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_element_deallocation_params(
                    &sample->command_interfaces_,deallocParams);
                controller_manager_msgs::msg::dds_::HardwareInterface_Seq_finalize(&sample->command_interfaces_);

                controller_manager_msgs::msg::dds_::HardwareInterface_Seq_set_element_deallocation_params(
                    &sample->state_interfaces_,deallocParams);
                controller_manager_msgs::msg::dds_::HardwareInterface_Seq_finalize(&sample->state_interfaces_);

            }

            void ListHardwareInterfaces_Response__finalize_optional_members(
                ListHardwareInterfaces_Response_* sample, RTIBool deletePointers)
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
                    length = controller_manager_msgs::msg::dds_::HardwareInterface_Seq_get_length(
                        &sample->command_interfaces_);

                    for (i = 0; i < length; i++) {
                        controller_manager_msgs::msg::dds_::HardwareInterface__finalize_optional_members(
                            controller_manager_msgs::msg::dds_::HardwareInterface_Seq_get_reference(
                                &sample->command_interfaces_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = controller_manager_msgs::msg::dds_::HardwareInterface_Seq_get_length(
                        &sample->state_interfaces_);

                    for (i = 0; i < length; i++) {
                        controller_manager_msgs::msg::dds_::HardwareInterface__finalize_optional_members(
                            controller_manager_msgs::msg::dds_::HardwareInterface_Seq_get_reference(
                                &sample->state_interfaces_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ListHardwareInterfaces_Response__copy(
                ListHardwareInterfaces_Response_* dst,
                const ListHardwareInterfaces_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!controller_manager_msgs::msg::dds_::HardwareInterface_Seq_copy(&dst->command_interfaces_ ,
                    &src->command_interfaces_ )) {
                        return RTI_FALSE;
                    }
                    if (!controller_manager_msgs::msg::dds_::HardwareInterface_Seq_copy(&dst->state_interfaces_ ,
                    &src->state_interfaces_ )) {
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
            * Configure and implement 'ListHardwareInterfaces_Response_' sequence class.
            */
            #define T ListHardwareInterfaces_Response_
            #define TSeq ListHardwareInterfaces_Response_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::ListHardwareInterfaces_Response__copy

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

