

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RotateAbsolute_.idl using "rtiddsgen".
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

#include "RotateAbsolute_.h"

#include <new>

namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *RotateAbsolute_Goal_TYPENAME = "turtlesim::action::dds_::RotateAbsolute_Goal_";

            DDS_TypeCode* RotateAbsolute_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotateAbsolute_Goal__g_tc_members[1]=
                {

                    {
                        (char *)"theta_",/* Member name */
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

                static DDS_TypeCode RotateAbsolute_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::action::dds_::RotateAbsolute_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RotateAbsolute_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RotateAbsolute_Goal_*/

                if (is_initialized) {
                    return &RotateAbsolute_Goal__g_tc;
                }

                RotateAbsolute_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &RotateAbsolute_Goal__g_tc;
            }

            RTIBool RotateAbsolute_Goal__initialize(
                RotateAbsolute_Goal_* sample) {
                return turtlesim::action::dds_::RotateAbsolute_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RotateAbsolute_Goal__initialize_ex(
                RotateAbsolute_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::action::dds_::RotateAbsolute_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RotateAbsolute_Goal__initialize_w_params(
                RotateAbsolute_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->theta_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void RotateAbsolute_Goal__finalize(
                RotateAbsolute_Goal_* sample)
            {

                turtlesim::action::dds_::RotateAbsolute_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void RotateAbsolute_Goal__finalize_ex(
                RotateAbsolute_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::action::dds_::RotateAbsolute_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void RotateAbsolute_Goal__finalize_w_params(
                RotateAbsolute_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void RotateAbsolute_Goal__finalize_optional_members(
                RotateAbsolute_Goal_* sample, RTIBool deletePointers)
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

            RTIBool RotateAbsolute_Goal__copy(
                RotateAbsolute_Goal_* dst,
                const RotateAbsolute_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyFloat (
                        &dst->theta_, &src->theta_)) { 
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
            * Configure and implement 'RotateAbsolute_Goal_' sequence class.
            */
            #define T RotateAbsolute_Goal_
            #define TSeq RotateAbsolute_Goal_Seq

            #define T_initialize_w_params turtlesim::action::dds_::RotateAbsolute_Goal__initialize_w_params

            #define T_finalize_w_params   turtlesim::action::dds_::RotateAbsolute_Goal__finalize_w_params
            #define T_copy       turtlesim::action::dds_::RotateAbsolute_Goal__copy

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
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *RotateAbsolute_SendGoal_Request_TYPENAME = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_";

            DDS_TypeCode* RotateAbsolute_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotateAbsolute_SendGoal_Request__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"goal_",/* Member name */
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

                static DDS_TypeCode RotateAbsolute_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::action::dds_::RotateAbsolute_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        RotateAbsolute_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RotateAbsolute_SendGoal_Request_*/

                if (is_initialized) {
                    return &RotateAbsolute_SendGoal_Request__g_tc;
                }

                RotateAbsolute_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                RotateAbsolute_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)turtlesim::action::dds_::RotateAbsolute_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &RotateAbsolute_SendGoal_Request__g_tc;
            }

            RTIBool RotateAbsolute_SendGoal_Request__initialize(
                RotateAbsolute_SendGoal_Request_* sample) {
                return turtlesim::action::dds_::RotateAbsolute_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RotateAbsolute_SendGoal_Request__initialize_ex(
                RotateAbsolute_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::action::dds_::RotateAbsolute_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RotateAbsolute_SendGoal_Request__initialize_w_params(
                RotateAbsolute_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!turtlesim::action::dds_::RotateAbsolute_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void RotateAbsolute_SendGoal_Request__finalize(
                RotateAbsolute_SendGoal_Request_* sample)
            {

                turtlesim::action::dds_::RotateAbsolute_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void RotateAbsolute_SendGoal_Request__finalize_ex(
                RotateAbsolute_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::action::dds_::RotateAbsolute_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void RotateAbsolute_SendGoal_Request__finalize_w_params(
                RotateAbsolute_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                turtlesim::action::dds_::RotateAbsolute_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void RotateAbsolute_SendGoal_Request__finalize_optional_members(
                RotateAbsolute_SendGoal_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                turtlesim::action::dds_::RotateAbsolute_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool RotateAbsolute_SendGoal_Request__copy(
                RotateAbsolute_SendGoal_Request_* dst,
                const RotateAbsolute_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!turtlesim::action::dds_::RotateAbsolute_Goal__copy(
                        &dst->goal_,(const turtlesim::action::dds_::RotateAbsolute_Goal_*)&src->goal_)) {
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
            * Configure and implement 'RotateAbsolute_SendGoal_Request_' sequence class.
            */
            #define T RotateAbsolute_SendGoal_Request_
            #define TSeq RotateAbsolute_SendGoal_Request_Seq

            #define T_initialize_w_params turtlesim::action::dds_::RotateAbsolute_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   turtlesim::action::dds_::RotateAbsolute_SendGoal_Request__finalize_w_params
            #define T_copy       turtlesim::action::dds_::RotateAbsolute_SendGoal_Request__copy

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
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *RotateAbsolute_SendGoal_Response_TYPENAME = "turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_";

            DDS_TypeCode* RotateAbsolute_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotateAbsolute_SendGoal_Response__g_tc_members[2]=
                {

                    {
                        (char *)"accepted_",/* Member name */
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
                        (char *)"stamp_",/* Member name */
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

                static DDS_TypeCode RotateAbsolute_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::action::dds_::RotateAbsolute_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        RotateAbsolute_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RotateAbsolute_SendGoal_Response_*/

                if (is_initialized) {
                    return &RotateAbsolute_SendGoal_Response__g_tc;
                }

                RotateAbsolute_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                RotateAbsolute_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &RotateAbsolute_SendGoal_Response__g_tc;
            }

            RTIBool RotateAbsolute_SendGoal_Response__initialize(
                RotateAbsolute_SendGoal_Response_* sample) {
                return turtlesim::action::dds_::RotateAbsolute_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RotateAbsolute_SendGoal_Response__initialize_ex(
                RotateAbsolute_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::action::dds_::RotateAbsolute_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RotateAbsolute_SendGoal_Response__initialize_w_params(
                RotateAbsolute_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->accepted_)) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->stamp_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void RotateAbsolute_SendGoal_Response__finalize(
                RotateAbsolute_SendGoal_Response_* sample)
            {

                turtlesim::action::dds_::RotateAbsolute_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void RotateAbsolute_SendGoal_Response__finalize_ex(
                RotateAbsolute_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::action::dds_::RotateAbsolute_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void RotateAbsolute_SendGoal_Response__finalize_w_params(
                RotateAbsolute_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void RotateAbsolute_SendGoal_Response__finalize_optional_members(
                RotateAbsolute_SendGoal_Response_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->stamp_, deallocParams->delete_pointers);
            }

            RTIBool RotateAbsolute_SendGoal_Response__copy(
                RotateAbsolute_SendGoal_Response_* dst,
                const RotateAbsolute_SendGoal_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->accepted_, &src->accepted_)) { 
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->stamp_,(const builtin_interfaces::msg::dds_::Time_*)&src->stamp_)) {
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
            * Configure and implement 'RotateAbsolute_SendGoal_Response_' sequence class.
            */
            #define T RotateAbsolute_SendGoal_Response_
            #define TSeq RotateAbsolute_SendGoal_Response_Seq

            #define T_initialize_w_params turtlesim::action::dds_::RotateAbsolute_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   turtlesim::action::dds_::RotateAbsolute_SendGoal_Response__finalize_w_params
            #define T_copy       turtlesim::action::dds_::RotateAbsolute_SendGoal_Response__copy

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
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *RotateAbsolute_Result_TYPENAME = "turtlesim::action::dds_::RotateAbsolute_Result_";

            DDS_TypeCode* RotateAbsolute_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotateAbsolute_Result__g_tc_members[1]=
                {

                    {
                        (char *)"delta_",/* Member name */
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

                static DDS_TypeCode RotateAbsolute_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::action::dds_::RotateAbsolute_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RotateAbsolute_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RotateAbsolute_Result_*/

                if (is_initialized) {
                    return &RotateAbsolute_Result__g_tc;
                }

                RotateAbsolute_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &RotateAbsolute_Result__g_tc;
            }

            RTIBool RotateAbsolute_Result__initialize(
                RotateAbsolute_Result_* sample) {
                return turtlesim::action::dds_::RotateAbsolute_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RotateAbsolute_Result__initialize_ex(
                RotateAbsolute_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::action::dds_::RotateAbsolute_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RotateAbsolute_Result__initialize_w_params(
                RotateAbsolute_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->delta_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void RotateAbsolute_Result__finalize(
                RotateAbsolute_Result_* sample)
            {

                turtlesim::action::dds_::RotateAbsolute_Result__finalize_ex(sample,RTI_TRUE);
            }

            void RotateAbsolute_Result__finalize_ex(
                RotateAbsolute_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::action::dds_::RotateAbsolute_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void RotateAbsolute_Result__finalize_w_params(
                RotateAbsolute_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void RotateAbsolute_Result__finalize_optional_members(
                RotateAbsolute_Result_* sample, RTIBool deletePointers)
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

            RTIBool RotateAbsolute_Result__copy(
                RotateAbsolute_Result_* dst,
                const RotateAbsolute_Result_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyFloat (
                        &dst->delta_, &src->delta_)) { 
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
            * Configure and implement 'RotateAbsolute_Result_' sequence class.
            */
            #define T RotateAbsolute_Result_
            #define TSeq RotateAbsolute_Result_Seq

            #define T_initialize_w_params turtlesim::action::dds_::RotateAbsolute_Result__initialize_w_params

            #define T_finalize_w_params   turtlesim::action::dds_::RotateAbsolute_Result__finalize_w_params
            #define T_copy       turtlesim::action::dds_::RotateAbsolute_Result__copy

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
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *RotateAbsolute_GetResult_Request_TYPENAME = "turtlesim::action::dds_::RotateAbsolute_GetResult_Request_";

            DDS_TypeCode* RotateAbsolute_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotateAbsolute_GetResult_Request__g_tc_members[1]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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

                static DDS_TypeCode RotateAbsolute_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::action::dds_::RotateAbsolute_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RotateAbsolute_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RotateAbsolute_GetResult_Request_*/

                if (is_initialized) {
                    return &RotateAbsolute_GetResult_Request__g_tc;
                }

                RotateAbsolute_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &RotateAbsolute_GetResult_Request__g_tc;
            }

            RTIBool RotateAbsolute_GetResult_Request__initialize(
                RotateAbsolute_GetResult_Request_* sample) {
                return turtlesim::action::dds_::RotateAbsolute_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RotateAbsolute_GetResult_Request__initialize_ex(
                RotateAbsolute_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::action::dds_::RotateAbsolute_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RotateAbsolute_GetResult_Request__initialize_w_params(
                RotateAbsolute_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void RotateAbsolute_GetResult_Request__finalize(
                RotateAbsolute_GetResult_Request_* sample)
            {

                turtlesim::action::dds_::RotateAbsolute_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void RotateAbsolute_GetResult_Request__finalize_ex(
                RotateAbsolute_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::action::dds_::RotateAbsolute_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void RotateAbsolute_GetResult_Request__finalize_w_params(
                RotateAbsolute_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void RotateAbsolute_GetResult_Request__finalize_optional_members(
                RotateAbsolute_GetResult_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
            }

            RTIBool RotateAbsolute_GetResult_Request__copy(
                RotateAbsolute_GetResult_Request_* dst,
                const RotateAbsolute_GetResult_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
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
            * Configure and implement 'RotateAbsolute_GetResult_Request_' sequence class.
            */
            #define T RotateAbsolute_GetResult_Request_
            #define TSeq RotateAbsolute_GetResult_Request_Seq

            #define T_initialize_w_params turtlesim::action::dds_::RotateAbsolute_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   turtlesim::action::dds_::RotateAbsolute_GetResult_Request__finalize_w_params
            #define T_copy       turtlesim::action::dds_::RotateAbsolute_GetResult_Request__copy

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
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *RotateAbsolute_GetResult_Response_TYPENAME = "turtlesim::action::dds_::RotateAbsolute_GetResult_Response_";

            DDS_TypeCode* RotateAbsolute_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotateAbsolute_GetResult_Response__g_tc_members[2]=
                {

                    {
                        (char *)"status_",/* Member name */
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
                        (char *)"result_",/* Member name */
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

                static DDS_TypeCode RotateAbsolute_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::action::dds_::RotateAbsolute_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        RotateAbsolute_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RotateAbsolute_GetResult_Response_*/

                if (is_initialized) {
                    return &RotateAbsolute_GetResult_Response__g_tc;
                }

                RotateAbsolute_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                RotateAbsolute_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)turtlesim::action::dds_::RotateAbsolute_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &RotateAbsolute_GetResult_Response__g_tc;
            }

            RTIBool RotateAbsolute_GetResult_Response__initialize(
                RotateAbsolute_GetResult_Response_* sample) {
                return turtlesim::action::dds_::RotateAbsolute_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RotateAbsolute_GetResult_Response__initialize_ex(
                RotateAbsolute_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::action::dds_::RotateAbsolute_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RotateAbsolute_GetResult_Response__initialize_w_params(
                RotateAbsolute_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->status_)) {
                    return RTI_FALSE;
                }

                if (!turtlesim::action::dds_::RotateAbsolute_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void RotateAbsolute_GetResult_Response__finalize(
                RotateAbsolute_GetResult_Response_* sample)
            {

                turtlesim::action::dds_::RotateAbsolute_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void RotateAbsolute_GetResult_Response__finalize_ex(
                RotateAbsolute_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::action::dds_::RotateAbsolute_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void RotateAbsolute_GetResult_Response__finalize_w_params(
                RotateAbsolute_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                turtlesim::action::dds_::RotateAbsolute_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void RotateAbsolute_GetResult_Response__finalize_optional_members(
                RotateAbsolute_GetResult_Response_* sample, RTIBool deletePointers)
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

                turtlesim::action::dds_::RotateAbsolute_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool RotateAbsolute_GetResult_Response__copy(
                RotateAbsolute_GetResult_Response_* dst,
                const RotateAbsolute_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!turtlesim::action::dds_::RotateAbsolute_Result__copy(
                        &dst->result_,(const turtlesim::action::dds_::RotateAbsolute_Result_*)&src->result_)) {
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
            * Configure and implement 'RotateAbsolute_GetResult_Response_' sequence class.
            */
            #define T RotateAbsolute_GetResult_Response_
            #define TSeq RotateAbsolute_GetResult_Response_Seq

            #define T_initialize_w_params turtlesim::action::dds_::RotateAbsolute_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   turtlesim::action::dds_::RotateAbsolute_GetResult_Response__finalize_w_params
            #define T_copy       turtlesim::action::dds_::RotateAbsolute_GetResult_Response__copy

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
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *RotateAbsolute_Feedback_TYPENAME = "turtlesim::action::dds_::RotateAbsolute_Feedback_";

            DDS_TypeCode* RotateAbsolute_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotateAbsolute_Feedback__g_tc_members[1]=
                {

                    {
                        (char *)"remaining_",/* Member name */
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

                static DDS_TypeCode RotateAbsolute_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::action::dds_::RotateAbsolute_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RotateAbsolute_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RotateAbsolute_Feedback_*/

                if (is_initialized) {
                    return &RotateAbsolute_Feedback__g_tc;
                }

                RotateAbsolute_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &RotateAbsolute_Feedback__g_tc;
            }

            RTIBool RotateAbsolute_Feedback__initialize(
                RotateAbsolute_Feedback_* sample) {
                return turtlesim::action::dds_::RotateAbsolute_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RotateAbsolute_Feedback__initialize_ex(
                RotateAbsolute_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::action::dds_::RotateAbsolute_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RotateAbsolute_Feedback__initialize_w_params(
                RotateAbsolute_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->remaining_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void RotateAbsolute_Feedback__finalize(
                RotateAbsolute_Feedback_* sample)
            {

                turtlesim::action::dds_::RotateAbsolute_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void RotateAbsolute_Feedback__finalize_ex(
                RotateAbsolute_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::action::dds_::RotateAbsolute_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void RotateAbsolute_Feedback__finalize_w_params(
                RotateAbsolute_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void RotateAbsolute_Feedback__finalize_optional_members(
                RotateAbsolute_Feedback_* sample, RTIBool deletePointers)
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

            RTIBool RotateAbsolute_Feedback__copy(
                RotateAbsolute_Feedback_* dst,
                const RotateAbsolute_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyFloat (
                        &dst->remaining_, &src->remaining_)) { 
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
            * Configure and implement 'RotateAbsolute_Feedback_' sequence class.
            */
            #define T RotateAbsolute_Feedback_
            #define TSeq RotateAbsolute_Feedback_Seq

            #define T_initialize_w_params turtlesim::action::dds_::RotateAbsolute_Feedback__initialize_w_params

            #define T_finalize_w_params   turtlesim::action::dds_::RotateAbsolute_Feedback__finalize_w_params
            #define T_copy       turtlesim::action::dds_::RotateAbsolute_Feedback__copy

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
    } /* namespace action  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *RotateAbsolute_FeedbackMessage_TYPENAME = "turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_";

            DDS_TypeCode* RotateAbsolute_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RotateAbsolute_FeedbackMessage__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"feedback_",/* Member name */
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

                static DDS_TypeCode RotateAbsolute_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::action::dds_::RotateAbsolute_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        RotateAbsolute_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RotateAbsolute_FeedbackMessage_*/

                if (is_initialized) {
                    return &RotateAbsolute_FeedbackMessage__g_tc;
                }

                RotateAbsolute_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                RotateAbsolute_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)turtlesim::action::dds_::RotateAbsolute_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &RotateAbsolute_FeedbackMessage__g_tc;
            }

            RTIBool RotateAbsolute_FeedbackMessage__initialize(
                RotateAbsolute_FeedbackMessage_* sample) {
                return turtlesim::action::dds_::RotateAbsolute_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool RotateAbsolute_FeedbackMessage__initialize_ex(
                RotateAbsolute_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::action::dds_::RotateAbsolute_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool RotateAbsolute_FeedbackMessage__initialize_w_params(
                RotateAbsolute_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!turtlesim::action::dds_::RotateAbsolute_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void RotateAbsolute_FeedbackMessage__finalize(
                RotateAbsolute_FeedbackMessage_* sample)
            {

                turtlesim::action::dds_::RotateAbsolute_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void RotateAbsolute_FeedbackMessage__finalize_ex(
                RotateAbsolute_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::action::dds_::RotateAbsolute_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void RotateAbsolute_FeedbackMessage__finalize_w_params(
                RotateAbsolute_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                turtlesim::action::dds_::RotateAbsolute_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void RotateAbsolute_FeedbackMessage__finalize_optional_members(
                RotateAbsolute_FeedbackMessage_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                turtlesim::action::dds_::RotateAbsolute_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool RotateAbsolute_FeedbackMessage__copy(
                RotateAbsolute_FeedbackMessage_* dst,
                const RotateAbsolute_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!turtlesim::action::dds_::RotateAbsolute_Feedback__copy(
                        &dst->feedback_,(const turtlesim::action::dds_::RotateAbsolute_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'RotateAbsolute_FeedbackMessage_' sequence class.
            */
            #define T RotateAbsolute_FeedbackMessage_
            #define TSeq RotateAbsolute_FeedbackMessage_Seq

            #define T_initialize_w_params turtlesim::action::dds_::RotateAbsolute_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   turtlesim::action::dds_::RotateAbsolute_FeedbackMessage__finalize_w_params
            #define T_copy       turtlesim::action::dds_::RotateAbsolute_FeedbackMessage__copy

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
    } /* namespace action  */
} /* namespace turtlesim  */

