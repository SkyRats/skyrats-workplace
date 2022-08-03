

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from QueryCalibrationState_.idl using "rtiddsgen".
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

#include "QueryCalibrationState_.h"

#include <new>

namespace control_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *QueryCalibrationState_Request_TYPENAME = "control_msgs::srv::dds_::QueryCalibrationState_Request_";

            DDS_TypeCode* QueryCalibrationState_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member QueryCalibrationState_Request__g_tc_members[1]=
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

                static DDS_TypeCode QueryCalibrationState_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::srv::dds_::QueryCalibrationState_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        QueryCalibrationState_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for QueryCalibrationState_Request_*/

                if (is_initialized) {
                    return &QueryCalibrationState_Request__g_tc;
                }

                QueryCalibrationState_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &QueryCalibrationState_Request__g_tc;
            }

            RTIBool QueryCalibrationState_Request__initialize(
                QueryCalibrationState_Request_* sample) {
                return control_msgs::srv::dds_::QueryCalibrationState_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool QueryCalibrationState_Request__initialize_ex(
                QueryCalibrationState_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::srv::dds_::QueryCalibrationState_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool QueryCalibrationState_Request__initialize_w_params(
                QueryCalibrationState_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void QueryCalibrationState_Request__finalize(
                QueryCalibrationState_Request_* sample)
            {

                control_msgs::srv::dds_::QueryCalibrationState_Request__finalize_ex(sample,RTI_TRUE);
            }

            void QueryCalibrationState_Request__finalize_ex(
                QueryCalibrationState_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::srv::dds_::QueryCalibrationState_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void QueryCalibrationState_Request__finalize_w_params(
                QueryCalibrationState_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void QueryCalibrationState_Request__finalize_optional_members(
                QueryCalibrationState_Request_* sample, RTIBool deletePointers)
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

            RTIBool QueryCalibrationState_Request__copy(
                QueryCalibrationState_Request_* dst,
                const QueryCalibrationState_Request_* src)
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
            * Configure and implement 'QueryCalibrationState_Request_' sequence class.
            */
            #define T QueryCalibrationState_Request_
            #define TSeq QueryCalibrationState_Request_Seq

            #define T_initialize_w_params control_msgs::srv::dds_::QueryCalibrationState_Request__initialize_w_params

            #define T_finalize_w_params   control_msgs::srv::dds_::QueryCalibrationState_Request__finalize_w_params
            #define T_copy       control_msgs::srv::dds_::QueryCalibrationState_Request__copy

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
} /* namespace control_msgs  */
namespace control_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *QueryCalibrationState_Response_TYPENAME = "control_msgs::srv::dds_::QueryCalibrationState_Response_";

            DDS_TypeCode* QueryCalibrationState_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member QueryCalibrationState_Response__g_tc_members[1]=
                {

                    {
                        (char *)"is_calibrated_",/* Member name */
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

                static DDS_TypeCode QueryCalibrationState_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::srv::dds_::QueryCalibrationState_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        QueryCalibrationState_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for QueryCalibrationState_Response_*/

                if (is_initialized) {
                    return &QueryCalibrationState_Response__g_tc;
                }

                QueryCalibrationState_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &QueryCalibrationState_Response__g_tc;
            }

            RTIBool QueryCalibrationState_Response__initialize(
                QueryCalibrationState_Response_* sample) {
                return control_msgs::srv::dds_::QueryCalibrationState_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool QueryCalibrationState_Response__initialize_ex(
                QueryCalibrationState_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::srv::dds_::QueryCalibrationState_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool QueryCalibrationState_Response__initialize_w_params(
                QueryCalibrationState_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->is_calibrated_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void QueryCalibrationState_Response__finalize(
                QueryCalibrationState_Response_* sample)
            {

                control_msgs::srv::dds_::QueryCalibrationState_Response__finalize_ex(sample,RTI_TRUE);
            }

            void QueryCalibrationState_Response__finalize_ex(
                QueryCalibrationState_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::srv::dds_::QueryCalibrationState_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void QueryCalibrationState_Response__finalize_w_params(
                QueryCalibrationState_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void QueryCalibrationState_Response__finalize_optional_members(
                QueryCalibrationState_Response_* sample, RTIBool deletePointers)
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

            RTIBool QueryCalibrationState_Response__copy(
                QueryCalibrationState_Response_* dst,
                const QueryCalibrationState_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->is_calibrated_, &src->is_calibrated_)) { 
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
            * Configure and implement 'QueryCalibrationState_Response_' sequence class.
            */
            #define T QueryCalibrationState_Response_
            #define TSeq QueryCalibrationState_Response_Seq

            #define T_initialize_w_params control_msgs::srv::dds_::QueryCalibrationState_Response__initialize_w_params

            #define T_finalize_w_params   control_msgs::srv::dds_::QueryCalibrationState_Response__finalize_w_params
            #define T_copy       control_msgs::srv::dds_::QueryCalibrationState_Response__copy

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
} /* namespace control_msgs  */

