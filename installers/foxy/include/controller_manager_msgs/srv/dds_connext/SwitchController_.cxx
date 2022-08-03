

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SwitchController_.idl using "rtiddsgen".
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

#include "SwitchController_.h"

#include <new>

namespace controller_manager_msgs {
    namespace srv {
        namespace dds_ {
            namespace SwitchController_Request_Constants {
            } /* namespace SwitchController_Request_Constants  */

            /* ========================================================================= */
            const char *SwitchController_Request_TYPENAME = "controller_manager_msgs::srv::dds_::SwitchController_Request_";

            DDS_TypeCode* SwitchController_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SwitchController_Request__g_tc_start_controllers__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SwitchController_Request__g_tc_start_controllers__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode SwitchController_Request__g_tc_stop_controllers__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SwitchController_Request__g_tc_stop_controllers__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member SwitchController_Request__g_tc_members[5]=
                {

                    {
                        (char *)"start_controllers_",/* Member name */
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
                        (char *)"stop_controllers_",/* Member name */
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
                        (char *)"strictness_",/* Member name */
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
                        (char *)"start_asap_",/* Member name */
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
                        (char *)"timeout_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SwitchController_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::SwitchController_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SwitchController_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SwitchController_Request_*/

                if (is_initialized) {
                    return &SwitchController_Request__g_tc;
                }

                SwitchController_Request__g_tc_start_controllers__sequence._data._typeCode = (RTICdrTypeCode *)&SwitchController_Request__g_tc_start_controllers__string;

                SwitchController_Request__g_tc_stop_controllers__sequence._data._typeCode = (RTICdrTypeCode *)&SwitchController_Request__g_tc_stop_controllers__string;

                SwitchController_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& SwitchController_Request__g_tc_start_controllers__sequence;
                SwitchController_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& SwitchController_Request__g_tc_stop_controllers__sequence;
                SwitchController_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                SwitchController_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SwitchController_Request__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                is_initialized = RTI_TRUE;

                return &SwitchController_Request__g_tc;
            }

            RTIBool SwitchController_Request__initialize(
                SwitchController_Request_* sample) {
                return controller_manager_msgs::srv::dds_::SwitchController_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SwitchController_Request__initialize_ex(
                SwitchController_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::SwitchController_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SwitchController_Request__initialize_w_params(
                SwitchController_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    DDS_StringSeq_initialize(&sample->start_controllers_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->start_controllers_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->start_controllers_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->start_controllers_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->start_controllers_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->stop_controllers_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->stop_controllers_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->stop_controllers_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->stop_controllers_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->stop_controllers_, 0);
                }

                if (!RTICdrType_initLong(&sample->strictness_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->start_asap_)) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->timeout_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SwitchController_Request__finalize(
                SwitchController_Request_* sample)
            {

                controller_manager_msgs::srv::dds_::SwitchController_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SwitchController_Request__finalize_ex(
                SwitchController_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::SwitchController_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SwitchController_Request__finalize_w_params(
                SwitchController_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_StringSeq_finalize(&sample->start_controllers_);

                DDS_StringSeq_finalize(&sample->stop_controllers_);

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->timeout_,deallocParams);

            }

            void SwitchController_Request__finalize_optional_members(
                SwitchController_Request_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->timeout_, deallocParams->delete_pointers);
            }

            RTIBool SwitchController_Request__copy(
                SwitchController_Request_* dst,
                const SwitchController_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_StringSeq_copy(&dst->start_controllers_ ,
                    &src->start_controllers_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->stop_controllers_ ,
                    &src->stop_controllers_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->strictness_, &src->strictness_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->start_asap_, &src->start_asap_)) { 
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->timeout_,(const builtin_interfaces::msg::dds_::Duration_*)&src->timeout_)) {
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
            * Configure and implement 'SwitchController_Request_' sequence class.
            */
            #define T SwitchController_Request_
            #define TSeq SwitchController_Request_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::SwitchController_Request__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::SwitchController_Request__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::SwitchController_Request__copy

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
            const char *SwitchController_Response_TYPENAME = "controller_manager_msgs::srv::dds_::SwitchController_Response_";

            DDS_TypeCode* SwitchController_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SwitchController_Response__g_tc_members[1]=
                {

                    {
                        (char *)"ok_",/* Member name */
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

                static DDS_TypeCode SwitchController_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"controller_manager_msgs::srv::dds_::SwitchController_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SwitchController_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SwitchController_Response_*/

                if (is_initialized) {
                    return &SwitchController_Response__g_tc;
                }

                SwitchController_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &SwitchController_Response__g_tc;
            }

            RTIBool SwitchController_Response__initialize(
                SwitchController_Response_* sample) {
                return controller_manager_msgs::srv::dds_::SwitchController_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SwitchController_Response__initialize_ex(
                SwitchController_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return controller_manager_msgs::srv::dds_::SwitchController_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SwitchController_Response__initialize_w_params(
                SwitchController_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->ok_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SwitchController_Response__finalize(
                SwitchController_Response_* sample)
            {

                controller_manager_msgs::srv::dds_::SwitchController_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SwitchController_Response__finalize_ex(
                SwitchController_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                controller_manager_msgs::srv::dds_::SwitchController_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SwitchController_Response__finalize_w_params(
                SwitchController_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SwitchController_Response__finalize_optional_members(
                SwitchController_Response_* sample, RTIBool deletePointers)
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

            RTIBool SwitchController_Response__copy(
                SwitchController_Response_* dst,
                const SwitchController_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->ok_, &src->ok_)) { 
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
            * Configure and implement 'SwitchController_Response_' sequence class.
            */
            #define T SwitchController_Response_
            #define TSeq SwitchController_Response_Seq

            #define T_initialize_w_params controller_manager_msgs::srv::dds_::SwitchController_Response__initialize_w_params

            #define T_finalize_w_params   controller_manager_msgs::srv::dds_::SwitchController_Response__finalize_w_params
            #define T_copy       controller_manager_msgs::srv::dds_::SwitchController_Response__copy

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

