

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPointMap_.idl using "rtiddsgen".
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

#include "GetPointMap_.h"

#include <new>

namespace map_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetPointMap_Request_TYPENAME = "map_msgs::srv::dds_::GetPointMap_Request_";

            DDS_TypeCode* GetPointMap_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetPointMap_Request__g_tc_members[1]=
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

                static DDS_TypeCode GetPointMap_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"map_msgs::srv::dds_::GetPointMap_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetPointMap_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetPointMap_Request_*/

                if (is_initialized) {
                    return &GetPointMap_Request__g_tc;
                }

                GetPointMap_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &GetPointMap_Request__g_tc;
            }

            RTIBool GetPointMap_Request__initialize(
                GetPointMap_Request_* sample) {
                return map_msgs::srv::dds_::GetPointMap_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetPointMap_Request__initialize_ex(
                GetPointMap_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return map_msgs::srv::dds_::GetPointMap_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetPointMap_Request__initialize_w_params(
                GetPointMap_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void GetPointMap_Request__finalize(
                GetPointMap_Request_* sample)
            {

                map_msgs::srv::dds_::GetPointMap_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetPointMap_Request__finalize_ex(
                GetPointMap_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                map_msgs::srv::dds_::GetPointMap_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetPointMap_Request__finalize_w_params(
                GetPointMap_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void GetPointMap_Request__finalize_optional_members(
                GetPointMap_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetPointMap_Request__copy(
                GetPointMap_Request_* dst,
                const GetPointMap_Request_* src)
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
            * Configure and implement 'GetPointMap_Request_' sequence class.
            */
            #define T GetPointMap_Request_
            #define TSeq GetPointMap_Request_Seq

            #define T_initialize_w_params map_msgs::srv::dds_::GetPointMap_Request__initialize_w_params

            #define T_finalize_w_params   map_msgs::srv::dds_::GetPointMap_Request__finalize_w_params
            #define T_copy       map_msgs::srv::dds_::GetPointMap_Request__copy

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
} /* namespace map_msgs  */
namespace map_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetPointMap_Response_TYPENAME = "map_msgs::srv::dds_::GetPointMap_Response_";

            DDS_TypeCode* GetPointMap_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetPointMap_Response__g_tc_members[1]=
                {

                    {
                        (char *)"map_",/* Member name */
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

                static DDS_TypeCode GetPointMap_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"map_msgs::srv::dds_::GetPointMap_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetPointMap_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetPointMap_Response_*/

                if (is_initialized) {
                    return &GetPointMap_Response__g_tc;
                }

                GetPointMap_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::PointCloud2__get_typecode();

                is_initialized = RTI_TRUE;

                return &GetPointMap_Response__g_tc;
            }

            RTIBool GetPointMap_Response__initialize(
                GetPointMap_Response_* sample) {
                return map_msgs::srv::dds_::GetPointMap_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetPointMap_Response__initialize_ex(
                GetPointMap_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return map_msgs::srv::dds_::GetPointMap_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetPointMap_Response__initialize_w_params(
                GetPointMap_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::PointCloud2__initialize_w_params(&sample->map_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GetPointMap_Response__finalize(
                GetPointMap_Response_* sample)
            {

                map_msgs::srv::dds_::GetPointMap_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetPointMap_Response__finalize_ex(
                GetPointMap_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                map_msgs::srv::dds_::GetPointMap_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetPointMap_Response__finalize_w_params(
                GetPointMap_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                sensor_msgs::msg::dds_::PointCloud2__finalize_w_params(&sample->map_,deallocParams);

            }

            void GetPointMap_Response__finalize_optional_members(
                GetPointMap_Response_* sample, RTIBool deletePointers)
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

                sensor_msgs::msg::dds_::PointCloud2__finalize_optional_members(&sample->map_, deallocParams->delete_pointers);
            }

            RTIBool GetPointMap_Response__copy(
                GetPointMap_Response_* dst,
                const GetPointMap_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!sensor_msgs::msg::dds_::PointCloud2__copy(
                        &dst->map_,(const sensor_msgs::msg::dds_::PointCloud2_*)&src->map_)) {
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
            * Configure and implement 'GetPointMap_Response_' sequence class.
            */
            #define T GetPointMap_Response_
            #define TSeq GetPointMap_Response_Seq

            #define T_initialize_w_params map_msgs::srv::dds_::GetPointMap_Response__initialize_w_params

            #define T_finalize_w_params   map_msgs::srv::dds_::GetPointMap_Response__finalize_w_params
            #define T_copy       map_msgs::srv::dds_::GetPointMap_Response__copy

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
} /* namespace map_msgs  */

