

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMapProjections_.idl using "rtiddsgen".
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

#include "SetMapProjections_.h"

#include <new>

namespace map_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetMapProjections_Request_TYPENAME = "map_msgs::srv::dds_::SetMapProjections_Request_";

            DDS_TypeCode* SetMapProjections_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetMapProjections_Request__g_tc_members[1]=
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

                static DDS_TypeCode SetMapProjections_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"map_msgs::srv::dds_::SetMapProjections_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetMapProjections_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetMapProjections_Request_*/

                if (is_initialized) {
                    return &SetMapProjections_Request__g_tc;
                }

                SetMapProjections_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &SetMapProjections_Request__g_tc;
            }

            RTIBool SetMapProjections_Request__initialize(
                SetMapProjections_Request_* sample) {
                return map_msgs::srv::dds_::SetMapProjections_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetMapProjections_Request__initialize_ex(
                SetMapProjections_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return map_msgs::srv::dds_::SetMapProjections_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetMapProjections_Request__initialize_w_params(
                SetMapProjections_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void SetMapProjections_Request__finalize(
                SetMapProjections_Request_* sample)
            {

                map_msgs::srv::dds_::SetMapProjections_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetMapProjections_Request__finalize_ex(
                SetMapProjections_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                map_msgs::srv::dds_::SetMapProjections_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetMapProjections_Request__finalize_w_params(
                SetMapProjections_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SetMapProjections_Request__finalize_optional_members(
                SetMapProjections_Request_* sample, RTIBool deletePointers)
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

            RTIBool SetMapProjections_Request__copy(
                SetMapProjections_Request_* dst,
                const SetMapProjections_Request_* src)
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
            * Configure and implement 'SetMapProjections_Request_' sequence class.
            */
            #define T SetMapProjections_Request_
            #define TSeq SetMapProjections_Request_Seq

            #define T_initialize_w_params map_msgs::srv::dds_::SetMapProjections_Request__initialize_w_params

            #define T_finalize_w_params   map_msgs::srv::dds_::SetMapProjections_Request__finalize_w_params
            #define T_copy       map_msgs::srv::dds_::SetMapProjections_Request__copy

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
            const char *SetMapProjections_Response_TYPENAME = "map_msgs::srv::dds_::SetMapProjections_Response_";

            DDS_TypeCode* SetMapProjections_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetMapProjections_Response__g_tc_projected_maps_info__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member SetMapProjections_Response__g_tc_members[1]=
                {

                    {
                        (char *)"projected_maps_info_",/* Member name */
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

                static DDS_TypeCode SetMapProjections_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"map_msgs::srv::dds_::SetMapProjections_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetMapProjections_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetMapProjections_Response_*/

                if (is_initialized) {
                    return &SetMapProjections_Response__g_tc;
                }

                SetMapProjections_Response__g_tc_projected_maps_info__sequence._data._typeCode = (RTICdrTypeCode *)map_msgs::msg::dds_::ProjectedMapInfo__get_typecode();

                SetMapProjections_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& SetMapProjections_Response__g_tc_projected_maps_info__sequence;

                is_initialized = RTI_TRUE;

                return &SetMapProjections_Response__g_tc;
            }

            RTIBool SetMapProjections_Response__initialize(
                SetMapProjections_Response_* sample) {
                return map_msgs::srv::dds_::SetMapProjections_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetMapProjections_Response__initialize_ex(
                SetMapProjections_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return map_msgs::srv::dds_::SetMapProjections_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetMapProjections_Response__initialize_w_params(
                SetMapProjections_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    map_msgs::msg::dds_::ProjectedMapInfo_Seq_initialize(&sample->projected_maps_info_ );
                    map_msgs::msg::dds_::ProjectedMapInfo_Seq_set_element_allocation_params(&sample->projected_maps_info_ ,allocParams);
                    map_msgs::msg::dds_::ProjectedMapInfo_Seq_set_absolute_maximum(&sample->projected_maps_info_ , RTI_INT32_MAX);
                    if (!map_msgs::msg::dds_::ProjectedMapInfo_Seq_set_maximum(&sample->projected_maps_info_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    map_msgs::msg::dds_::ProjectedMapInfo_Seq_set_length(&sample->projected_maps_info_, 0);
                }
                return RTI_TRUE;
            }

            void SetMapProjections_Response__finalize(
                SetMapProjections_Response_* sample)
            {

                map_msgs::srv::dds_::SetMapProjections_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetMapProjections_Response__finalize_ex(
                SetMapProjections_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                map_msgs::srv::dds_::SetMapProjections_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetMapProjections_Response__finalize_w_params(
                SetMapProjections_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                map_msgs::msg::dds_::ProjectedMapInfo_Seq_set_element_deallocation_params(
                    &sample->projected_maps_info_,deallocParams);
                map_msgs::msg::dds_::ProjectedMapInfo_Seq_finalize(&sample->projected_maps_info_);

            }

            void SetMapProjections_Response__finalize_optional_members(
                SetMapProjections_Response_* sample, RTIBool deletePointers)
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
                    length = map_msgs::msg::dds_::ProjectedMapInfo_Seq_get_length(
                        &sample->projected_maps_info_);

                    for (i = 0; i < length; i++) {
                        map_msgs::msg::dds_::ProjectedMapInfo__finalize_optional_members(
                            map_msgs::msg::dds_::ProjectedMapInfo_Seq_get_reference(
                                &sample->projected_maps_info_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool SetMapProjections_Response__copy(
                SetMapProjections_Response_* dst,
                const SetMapProjections_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!map_msgs::msg::dds_::ProjectedMapInfo_Seq_copy(&dst->projected_maps_info_ ,
                    &src->projected_maps_info_ )) {
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
            * Configure and implement 'SetMapProjections_Response_' sequence class.
            */
            #define T SetMapProjections_Response_
            #define TSeq SetMapProjections_Response_Seq

            #define T_initialize_w_params map_msgs::srv::dds_::SetMapProjections_Response__initialize_w_params

            #define T_finalize_w_params   map_msgs::srv::dds_::SetMapProjections_Response__finalize_w_params
            #define T_copy       map_msgs::srv::dds_::SetMapProjections_Response__copy

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

