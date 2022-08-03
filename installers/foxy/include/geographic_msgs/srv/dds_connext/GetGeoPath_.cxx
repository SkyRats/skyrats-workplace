

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetGeoPath_.idl using "rtiddsgen".
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

#include "GetGeoPath_.h"

#include <new>

namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetGeoPath_Request_TYPENAME = "geographic_msgs::srv::dds_::GetGeoPath_Request_";

            DDS_TypeCode* GetGeoPath_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetGeoPath_Request__g_tc_members[2]=
                {

                    {
                        (char *)"start_",/* Member name */
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

                static DDS_TypeCode GetGeoPath_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::srv::dds_::GetGeoPath_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        GetGeoPath_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetGeoPath_Request_*/

                if (is_initialized) {
                    return &GetGeoPath_Request__g_tc;
                }

                GetGeoPath_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::GeoPoint__get_typecode();

                GetGeoPath_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::GeoPoint__get_typecode();

                is_initialized = RTI_TRUE;

                return &GetGeoPath_Request__g_tc;
            }

            RTIBool GetGeoPath_Request__initialize(
                GetGeoPath_Request_* sample) {
                return geographic_msgs::srv::dds_::GetGeoPath_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetGeoPath_Request__initialize_ex(
                GetGeoPath_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::srv::dds_::GetGeoPath_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetGeoPath_Request__initialize_w_params(
                GetGeoPath_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geographic_msgs::msg::dds_::GeoPoint__initialize_w_params(&sample->start_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geographic_msgs::msg::dds_::GeoPoint__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GetGeoPath_Request__finalize(
                GetGeoPath_Request_* sample)
            {

                geographic_msgs::srv::dds_::GetGeoPath_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetGeoPath_Request__finalize_ex(
                GetGeoPath_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::srv::dds_::GetGeoPath_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetGeoPath_Request__finalize_w_params(
                GetGeoPath_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geographic_msgs::msg::dds_::GeoPoint__finalize_w_params(&sample->start_,deallocParams);

                geographic_msgs::msg::dds_::GeoPoint__finalize_w_params(&sample->goal_,deallocParams);

            }

            void GetGeoPath_Request__finalize_optional_members(
                GetGeoPath_Request_* sample, RTIBool deletePointers)
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

                geographic_msgs::msg::dds_::GeoPoint__finalize_optional_members(&sample->start_, deallocParams->delete_pointers);
                geographic_msgs::msg::dds_::GeoPoint__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool GetGeoPath_Request__copy(
                GetGeoPath_Request_* dst,
                const GetGeoPath_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geographic_msgs::msg::dds_::GeoPoint__copy(
                        &dst->start_,(const geographic_msgs::msg::dds_::GeoPoint_*)&src->start_)) {
                        return RTI_FALSE;
                    } 
                    if (!geographic_msgs::msg::dds_::GeoPoint__copy(
                        &dst->goal_,(const geographic_msgs::msg::dds_::GeoPoint_*)&src->goal_)) {
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
            * Configure and implement 'GetGeoPath_Request_' sequence class.
            */
            #define T GetGeoPath_Request_
            #define TSeq GetGeoPath_Request_Seq

            #define T_initialize_w_params geographic_msgs::srv::dds_::GetGeoPath_Request__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::srv::dds_::GetGeoPath_Request__finalize_w_params
            #define T_copy       geographic_msgs::srv::dds_::GetGeoPath_Request__copy

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
} /* namespace geographic_msgs  */
namespace geographic_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetGeoPath_Response_TYPENAME = "geographic_msgs::srv::dds_::GetGeoPath_Response_";

            DDS_TypeCode* GetGeoPath_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetGeoPath_Response__g_tc_status__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetGeoPath_Response__g_tc_members[7]=
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
                        (char *)"status_",/* Member name */
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
                        (char *)"plan_",/* Member name */
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
                        (char *)"network_",/* Member name */
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
                        (char *)"start_seg_",/* Member name */
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
                        (char *)"goal_seg_",/* Member name */
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
                        (char *)"distance_",/* Member name */
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
                    }
                };

                static DDS_TypeCode GetGeoPath_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geographic_msgs::srv::dds_::GetGeoPath_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        GetGeoPath_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetGeoPath_Response_*/

                if (is_initialized) {
                    return &GetGeoPath_Response__g_tc;
                }

                GetGeoPath_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetGeoPath_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&GetGeoPath_Response__g_tc_status__string;

                GetGeoPath_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geographic_msgs::msg::dds_::GeoPath__get_typecode();

                GetGeoPath_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                GetGeoPath_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                GetGeoPath_Response__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                GetGeoPath_Response__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &GetGeoPath_Response__g_tc;
            }

            RTIBool GetGeoPath_Response__initialize(
                GetGeoPath_Response_* sample) {
                return geographic_msgs::srv::dds_::GetGeoPath_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetGeoPath_Response__initialize_ex(
                GetGeoPath_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geographic_msgs::srv::dds_::GetGeoPath_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetGeoPath_Response__initialize_w_params(
                GetGeoPath_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->status_= DDS_String_alloc ((0));
                    if (sample->status_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->status_!= NULL) { 
                        sample->status_[0] = '\0';
                    }
                }

                if (!geographic_msgs::msg::dds_::GeoPath__initialize_w_params(&sample->plan_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->network_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->start_seg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_seg_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->distance_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void GetGeoPath_Response__finalize(
                GetGeoPath_Response_* sample)
            {

                geographic_msgs::srv::dds_::GetGeoPath_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetGeoPath_Response__finalize_ex(
                GetGeoPath_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geographic_msgs::srv::dds_::GetGeoPath_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetGeoPath_Response__finalize_w_params(
                GetGeoPath_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->status_ != NULL) {
                    DDS_String_free(sample->status_);
                    sample->status_=NULL;

                }
                geographic_msgs::msg::dds_::GeoPath__finalize_w_params(&sample->plan_,deallocParams);

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->network_,deallocParams);

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->start_seg_,deallocParams);

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_seg_,deallocParams);

            }

            void GetGeoPath_Response__finalize_optional_members(
                GetGeoPath_Response_* sample, RTIBool deletePointers)
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

                geographic_msgs::msg::dds_::GeoPath__finalize_optional_members(&sample->plan_, deallocParams->delete_pointers);
                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->network_, deallocParams->delete_pointers);
                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->start_seg_, deallocParams->delete_pointers);
                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_seg_, deallocParams->delete_pointers);
            }

            RTIBool GetGeoPath_Response__copy(
                GetGeoPath_Response_* dst,
                const GetGeoPath_Response_* src)
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
                        &dst->status_, src->status_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!geographic_msgs::msg::dds_::GeoPath__copy(
                        &dst->plan_,(const geographic_msgs::msg::dds_::GeoPath_*)&src->plan_)) {
                        return RTI_FALSE;
                    } 
                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->network_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->network_)) {
                        return RTI_FALSE;
                    } 
                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->start_seg_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->start_seg_)) {
                        return RTI_FALSE;
                    } 
                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_seg_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_seg_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyDouble (
                        &dst->distance_, &src->distance_)) { 
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
            * Configure and implement 'GetGeoPath_Response_' sequence class.
            */
            #define T GetGeoPath_Response_
            #define TSeq GetGeoPath_Response_Seq

            #define T_initialize_w_params geographic_msgs::srv::dds_::GetGeoPath_Response__initialize_w_params

            #define T_finalize_w_params   geographic_msgs::srv::dds_::GetGeoPath_Response__finalize_w_params
            #define T_copy       geographic_msgs::srv::dds_::GetGeoPath_Response__copy

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
} /* namespace geographic_msgs  */

